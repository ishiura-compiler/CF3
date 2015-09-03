#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x136 = 1;
static int16_t x326 = INT16_MAX;
int32_t x327 = -6;
uint8_t x536 = 0U;
uint64_t x745 = 2LLU;
uint64_t x853 = 125748228665359LLU;
uint64_t t8 = 26705LLU;
static uint64_t x931 = 32868263LLU;
static uint64_t t12 = 7429371062441216370LLU;
static volatile int64_t x1038 = INT64_MAX;
static uint8_t x1039 = 40U;
volatile int64_t x1062 = -3010604829747777LL;
volatile int16_t x1070 = INT16_MIN;
uint64_t x1071 = 75319085571047LLU;
uint64_t t16 = 5615LLU;
uint64_t x1083 = UINT64_MAX;
static volatile uint64_t t19 = 43201LLU;
volatile int32_t t20 = -107833;
int32_t x1561 = -1;
int8_t x1562 = -5;
static uint16_t x1579 = 12366U;
int16_t x1953 = -1;
uint8_t x1956 = 0U;
volatile int8_t x2163 = INT8_MIN;
static uint8_t x2180 = 0U;
static uint8_t x2269 = 10U;
int8_t x2333 = 0;
volatile uint64_t t30 = 51932LLU;
int64_t x2366 = 1365375972551290637LL;
uint16_t x2368 = 4U;
uint8_t x2436 = 25U;
int64_t x2705 = INT64_MIN;
uint8_t x2708 = 2U;
uint8_t x2900 = 2U;


void f0(void) {
	volatile uint16_t x17 = UINT16_MAX;
	volatile uint64_t x18 = 1744609385264195402LLU;
	uint64_t x19 = 5780826821625LLU;
	volatile uint64_t x20 = 15LLU;
	uint64_t t0 = 0LLU;

	t0 = (x17/((x18&x19)>>x20));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x133 = -27743582687221218LL;
	static uint32_t x134 = 126107U;
	volatile int32_t x135 = -23197508;
	int64_t t1 = 62LL;

	t1 = (x133/((x134&x135)>>x136));

	if (t1 != -25221438806564LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x301 = INT8_MIN;
	int32_t x302 = 7446536;
	int8_t x303 = INT8_MAX;
	volatile int16_t x304 = 0;
	volatile int32_t t2 = 39506;

	t2 = (x301/((x302&x303)>>x304));

	if (t2 != -16) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x325 = -53;
	int32_t x328 = 0;
	int32_t t3 = -29901638;

	t3 = (x325/((x326&x327)>>x328));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x533 = 4U;
	volatile uint32_t x534 = 762389201U;
	int8_t x535 = INT8_MIN;
	uint32_t t4 = 50U;

	t4 = (x533/((x534&x535)>>x536));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x617 = -1;
	int8_t x618 = INT8_MAX;
	int16_t x619 = 15735;
	int8_t x620 = 0;
	int32_t t5 = -92173;

	t5 = (x617/((x618&x619)>>x620));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x669 = INT64_MIN;
	static volatile uint64_t x670 = UINT64_MAX;
	int16_t x671 = INT16_MIN;
	uint16_t x672 = 60U;
	static volatile uint64_t t6 = 16349LLU;

	t6 = (x669/((x670&x671)>>x672));

	if (t6 != 614891469123651720LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x746 = 2U;
	uint16_t x747 = 2U;
	uint8_t x748 = 1U;
	uint64_t t7 = 74085583LLU;

	t7 = (x745/((x746&x747)>>x748));

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x854 = 411499597870LL;
	int8_t x855 = INT8_MIN;
	uint8_t x856 = 1U;

	t8 = (x853/((x854&x855)>>x856));

	if (t8 != 611LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x873 = UINT32_MAX;
	volatile int16_t x874 = INT16_MAX;
	uint16_t x875 = 13U;
	uint16_t x876 = 1U;
	static volatile uint32_t t9 = 5166U;

	t9 = (x873/((x874&x875)>>x876));

	if (t9 != 715827882U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x913 = INT8_MAX;
	int8_t x914 = 3;
	static int16_t x915 = 1411;
	int8_t x916 = 1;
	int32_t t10 = -2611448;

	t10 = (x913/((x914&x915)>>x916));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x929 = -1;
	int32_t x930 = -31;
	int8_t x932 = 2;
	uint64_t t11 = 818783062152LLU;

	t11 = (x929/((x930&x931)>>x932));

	if (t11 != 2244931288561LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x953 = INT8_MIN;
	int64_t x954 = -1LL;
	static uint64_t x955 = 1862332LLU;
	int64_t x956 = 1LL;

	t12 = (x953/((x954&x955)>>x956));

	if (t12 != 19810371162294LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1013 = INT64_MIN;
	uint16_t x1014 = 19114U;
	volatile int64_t x1015 = INT64_MAX;
	uint8_t x1016 = 5U;
	int64_t t13 = -1025302017158212LL;

	t13 = (x1013/((x1014&x1015)>>x1016));

	if (t13 != -15449534400091751LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1037 = INT8_MAX;
	uint8_t x1040 = 0U;
	static volatile int64_t t14 = 0LL;

	t14 = (x1037/((x1038&x1039)>>x1040));

	if (t14 != 3LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1061 = -1LL;
	uint16_t x1063 = UINT16_MAX;
	uint8_t x1064 = 0U;
	volatile int64_t t15 = -36031907390945LL;

	t15 = (x1061/((x1062&x1063)>>x1064));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1069 = UINT8_MAX;
	volatile uint64_t x1072 = 2LLU;

	t16 = (x1069/((x1070&x1071)>>x1072));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1081 = 0;
	volatile int32_t x1082 = -1;
	uint16_t x1084 = 5U;
	uint64_t t17 = 6449635338LLU;

	t17 = (x1081/((x1082&x1083)>>x1084));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1153 = INT64_MIN;
	static int16_t x1154 = INT16_MAX;
	static int64_t x1155 = INT64_MAX;
	uint8_t x1156 = 7U;
	static volatile int64_t t18 = 249641710947LL;

	t18 = (x1153/((x1154&x1155)>>x1156));

	if (t18 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1193 = 10LLU;
	volatile int8_t x1194 = INT8_MAX;
	volatile int64_t x1195 = -1LL;
	volatile uint8_t x1196 = 0U;

	t19 = (x1193/((x1194&x1195)>>x1196));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1441 = 11U;
	uint8_t x1442 = UINT8_MAX;
	volatile int8_t x1443 = 4;
	uint8_t x1444 = 0U;

	t20 = (x1441/((x1442&x1443)>>x1444));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x1563 = 20U;
	uint16_t x1564 = 1U;
	int32_t t21 = -193489;

	t21 = (x1561/((x1562&x1563)>>x1564));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1577 = -73232LL;
	int16_t x1578 = -1;
	volatile uint8_t x1580 = 5U;
	int64_t t22 = 7391LL;

	t22 = (x1577/((x1578&x1579)>>x1580));

	if (t22 != -189LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1649 = INT16_MIN;
	static uint8_t x1650 = 98U;
	int16_t x1651 = -4;
	uint16_t x1652 = 1U;
	int32_t t23 = 1;

	t23 = (x1649/((x1650&x1651)>>x1652));

	if (t23 != -682) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1954 = INT64_MAX;
	uint64_t x1955 = 509667LLU;
	volatile uint64_t t24 = 2516130695078278462LLU;

	t24 = (x1953/((x1954&x1955)>>x1956));

	if (t24 != 36193718788364LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x2161 = 1566231631LLU;
	int32_t x2162 = INT32_MAX;
	uint16_t x2164 = 3U;
	static volatile uint64_t t25 = 128954560LLU;

	t25 = (x2161/((x2162&x2163)>>x2164));

	if (t25 != 5LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x2177 = -1LL;
	static uint8_t x2178 = 26U;
	uint8_t x2179 = UINT8_MAX;
	int64_t t26 = 24LL;

	t26 = (x2177/((x2178&x2179)>>x2180));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2241 = -50LL;
	int16_t x2242 = 478;
	int8_t x2243 = INT8_MIN;
	int32_t x2244 = 1;
	volatile int64_t t27 = -11624029893LL;

	t27 = (x2241/((x2242&x2243)>>x2244));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x2270 = INT32_MAX;
	int8_t x2271 = INT8_MAX;
	volatile int16_t x2272 = 0;
	int32_t t28 = -13;

	t28 = (x2269/((x2270&x2271)>>x2272));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x2334 = 16596658U;
	uint32_t x2335 = 465121U;
	static uint16_t x2336 = 1U;
	uint32_t t29 = 147926U;

	t29 = (x2333/((x2334&x2335)>>x2336));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x2357 = -1;
	uint32_t x2358 = UINT32_MAX;
	uint64_t x2359 = UINT64_MAX;
	uint16_t x2360 = 0U;

	t30 = (x2357/((x2358&x2359)>>x2360));

	if (t30 != 4294967297LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2365 = INT32_MIN;
	volatile uint16_t x2367 = 24605U;
	int64_t t31 = -15328596372709LL;

	t31 = (x2365/((x2366&x2367)>>x2368));

	if (t31 != -1398101LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x2433 = INT16_MIN;
	int64_t x2434 = 725486369676938073LL;
	int16_t x2435 = -1;
	int64_t t32 = -230901804LL;

	t32 = (x2433/((x2434&x2435)>>x2436));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2537 = 13280483635LLU;
	volatile int8_t x2538 = INT8_MAX;
	uint32_t x2539 = 184856931U;
	volatile uint16_t x2540 = 3U;
	static uint64_t t33 = 8008154501709389LLU;

	t33 = (x2537/((x2538&x2539)>>x2540));

	if (t33 != 1106706969LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2706 = 461949LLU;
	int32_t x2707 = 250870;
	volatile uint64_t t34 = 35723165253102800LLU;

	t34 = (x2705/((x2706&x2707)>>x2708));

	if (t34 != 187539335045134LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x2741 = 1LL;
	uint16_t x2742 = 4U;
	uint8_t x2743 = UINT8_MAX;
	int16_t x2744 = 2;
	int64_t t35 = -1094621151571122491LL;

	t35 = (x2741/((x2742&x2743)>>x2744));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2889 = INT32_MAX;
	volatile int32_t x2890 = INT32_MIN;
	int64_t x2891 = INT64_MAX;
	static uint16_t x2892 = 0U;
	int64_t t36 = 13703LL;

	t36 = (x2889/((x2890&x2891)>>x2892));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2897 = INT16_MAX;
	uint32_t x2898 = 1447574893U;
	uint8_t x2899 = UINT8_MAX;
	volatile uint32_t t37 = 352998698U;

	t37 = (x2897/((x2898&x2899)>>x2900));

	if (t37 != 1213U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();


    return 0;
}

