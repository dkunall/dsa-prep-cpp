int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int n = arr.size(); 
    int cnt = 0; 

    for (int i = 0 ; i < n; i++) {
        for (int j = i; j < n; j++) { 

            int sum = 0;
            for (int K = i; K <= j; K++)
                sum += arr[K];
            if (sum == k)
                cnt++;
        }
    }
    return cnt;


    int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int n = arr.size();
    int cnt = 0;

    for (int i = 0 ; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}
