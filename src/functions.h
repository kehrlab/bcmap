#ifndef FUNCTIONS_H
#define FUNCTIONS_H

# include <seqan/seq_io.h>
# include <seqan/sequence.h>
# include <iostream>
using namespace seqan;

// String<Dna5String> ReturnBarcodeReads(std::string Index_name, std::string readFile1, std::string readFile2 ,DnaString Barcode);
void report_window(std::vector<std::tuple<double,unsigned,unsigned,unsigned>> & best_windows, std::tuple<double,unsigned,unsigned,unsigned> & candidate);
long long int ReturnSmaller(const long long int hash1,const long long int hash2,const long long int random_seed);
long long int InitMini(const DnaString & string, const unsigned k, std::pair <long long int, long long int> & hash, const long long int & maxhash,const long long int random_seed, long long int & minimizer_position);
// int RollMini(long long int & minimizer, std::pair <long long int, long long int> & hash, const Dna5 & newnuc, const unsigned k, const long long int & maxhash,const long long int random_seed,const unsigned long long bucket_number);
void AppendPos(std::vector<std::tuple <unsigned,unsigned,unsigned,unsigned>> & kmer_list, const long long int & hash, const String<int long long> & C,const String<unsigned long long> & dir,const String<std::pair <unsigned,unsigned>> & pos, const unsigned long long bucket_number, unsigned & minimizer_active_bases);
DnaString hash2kmer(const long long int & hash,const unsigned k);
std::pair <long long int,long long int> hashkMer(const DnaString & kmer, const unsigned k);
void rollinghashkMer(long long int & oldHash, long long int & oldHash2, const Dna5 & newnuc, const unsigned k, const long long int & maxhash);
unsigned long long GetBkt(const long long int & hash, const String<int long long> & C, const unsigned long long bucket_number);
unsigned  long long ReqBkt(const long long int & hash, String<int long long> & C, const unsigned long long bucket_number);
std::vector<std::pair <unsigned,unsigned>> RetPos(const long long int & hash, const String<int long long> & C,const String<unsigned long long> & dir,const String<std::pair <unsigned,unsigned>> & pos, const unsigned long long bucket_number);

#endif
