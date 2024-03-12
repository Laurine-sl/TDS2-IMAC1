#include <vector>
#include <algorithm>

bool is_sorted(std::vector<float> const &vec)
{
    return std::is_sorted(vec.begin(), vec.end());
}

// size_t quick_sort_partition(std::vector<float> &vec, size_t left, size_t right, size_t const pivot)
// {

//     // On choisit le pivot comme étant le dernier élément de la partition
//     float const pivot_value{right};

//     // On garde l'index du premier élément plus grand que le pivot
//     size_t first_bigger_element_index{left};

//     // On parcourt les éléments de la partition pour les répartir
//     for (size_t i{left}; i < right; i++)
//     {
//         // Si l'élément actuel est plus petit que le pivot, on l'échange avec le dernier élément plus petit que le pivot
//         if (vec[i] < pivot)
//         {
//             std::swap(vec[i], vec[pivot_value - 1]);
//             // on incrémente l'index du premier élément plus grand que le pivot (car on vient de le déplacer et placer un élément plus petit que le pivot à sa place)
//             first_bigger_element_index += 1;
//         }
//     }

//     // on échange le pivot (qui est positionné à la fin) pour qu'il soit positionné ente les deux sous partitions (des éléments plus petits et plus grand que le pivot)
//     std::swap(vec[pivot_value], vec[pivot]);

//     // on retourne l'index du pivot
//     return pivot_value;
// }

// void quick_sort(std::vector<float> &vec, size_t const left, size_t const right)
// {
//     int pivot;
//     if (left >= right)
//     {
//         quick_sort_partition(vec, left, right, pivot);
//         return;
//     }

//     // 1. On partitionne le vecteur et on récupère l'index du pivot grâce à la fonction quick_sort_partition

//     // 2. appels récursifs sur les deux sous parties gauche et droite du pivot
//     // Attention à la condition d'arrêt de la récursivité
// }

// void quick_sort(std::vector<float> &vec)
// {
//     quick_sort(vec, 0, vec.size() - 1);
// }

void merge_sort_merge(std::vector<float> &vec, size_t const left, size_t const middle, size_t const right)
{
    // On crée deux vecteurs temporaires pour stocker les copies des deux sous-parties à fusionner
    size_t const left_size{middle - left + 1};
    size_t const right_size{right - middle};
    std::vector<float> left_vec(vec.begin() + left, vec.begin() + middle + 1);
    std::vector<float> right_vec(vec.begin() + middle + 1, vec.begin() + right + 1);

    // Deux index pour parcourir les deux sous-parties et remplir le vecteur original
    size_t left_index{0};
    size_t right_index{0};

    size_t index{left};

    // Tant que nous avons pas parcouru tout les éléments d'au moins une des deux sous-parties
    while (left_index < left_size && right_index < right_size)
    {
        // On compare les éléments des deux sous-parties et on place le plus petit dans le vecteur original
        // on met à jour les index pour parcourir les sous-parties en conséquence
        if (left_vec[left_index] < right_vec[right_index])
        {
            vec[index] = left_vec[left_index];
            ++left_index;
        }
        else
        {
            vec[index] = right_vec[right_index];
            ++right_index;
        }
        ++index;
    }

    // S'il reste des éléments dans une des deux sous-parties, on les place dans le vecteur original
    while (left_index < left_size)
    {
        vec[index] = left_vec[left_index];
        ++index;
        ++left_index;
    }
    while (right_index < right_size)
    {
        vec[index] = right_vec[right_index];
        ++index;
        ++right_index;
    }
}
void merge_sort(std::vector<float> &vec, size_t const left, size_t const right)
{
    if (left >= right)
    {
        return;
    }

    // 1. Choix de l'index au milieu de la partition
    int middle = left + (right - left) / 2;

    // 2. Appels récursifs sur les deux sous-parties
    merge_sort(vec, left, middle);
    merge_sort(vec, middle + 1, right);

    // 3. Fusion des deux sous-parties
    merge_sort_merge(vec, left, middle, right);
}

void merge_sort(std::vector<float> &vec)
{
    merge_sort(vec, 0, vec.size() - 1);
}