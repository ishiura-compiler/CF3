#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x144 = 7415U;
int32_t t0 = -426132;
int64_t x395 = -1LL;
int32_t x399 = -1;
int32_t x400 = INT32_MIN;
static uint32_t x724 = 16U;
int64_t t4 = INT64_MIN;
static int64_t t5 = INT64_MIN;
int32_t x945 = INT32_MAX;
int16_t x950 = INT16_MAX;
static volatile int16_t x1150 = -1;
static int64_t x1151 = INT64_MIN;
uint8_t x1152 = 7U;
int8_t x1480 = -1;
volatile int32_t t10 = 27921883;
static int8_t x1673 = INT8_MIN;
volatile int32_t t12 = -32573517;
int16_t x2111 = -1;
static uint16_t x2176 = 2U;
uint64_t x2198 = UINT64_MAX;
static int16_t x2199 = -1;
static int32_t t16 = 390;
volatile int32_t t17 = INT32_MIN;
volatile int8_t x2386 = -1;
int32_t x2553 = -50;
uint8_t x2555 = 1U;
int32_t t20 = 465596;
int8_t x2963 = -1;
volatile int8_t x3165 = -1;
int8_t x3168 = -5;
static volatile int32_t t26 = -30733274;
static int64_t x3415 = -1LL;
static int16_t x3606 = INT16_MAX;
static uint8_t x3717 = 0U;
int32_t t31 = 6700752;
static volatile int64_t x3799 = -1LL;
uint8_t x3929 = 53U;
int16_t x3931 = -1;
static int8_t x3932 = INT8_MIN;
int64_t x4268 = INT64_MIN;
uint64_t x4621 = 607544618760LLU;
uint64_t x4661 = UINT64_MAX;
int32_t x4664 = INT32_MIN;
volatile int64_t x4828 = -1488684295581LL;
int64_t x5121 = INT64_MIN;
int32_t x5124 = INT32_MIN;
int8_t x5329 = INT8_MAX;
int64_t x5359 = -1LL;
static int8_t x5551 = -1;
static int16_t x5826 = -1;
volatile int32_t x5980 = 15921;
uint32_t t51 = 6U;
int8_t x6382 = -1;
static int16_t x6384 = INT16_MAX;


void f0(void) {
	static int8_t x141 = 4;
	int32_t x142 = -1;
	volatile int32_t x143 = -1;

	t0 = (x141/(x142==(x143%x144)));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x393 = 1221954522670LL;
	uint64_t x394 = UINT64_MAX;
	uint8_t x396 = 13U;
	static int64_t t1 = 64920698LL;

	t1 = (x393/(x394==(x395%x396)));

	if (t1 != 1221954522670LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x397 = INT16_MIN;
	static int64_t x398 = -1LL;
	volatile int32_t t2 = 51183829;

	t2 = (x397/(x398==(x399%x400)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x713 = INT8_MIN;
	int8_t x714 = 1;
	volatile uint8_t x715 = UINT8_MAX;
	int8_t x716 = INT8_MAX;
	int32_t t3 = 1;

	t3 = (x713/(x714==(x715%x716)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x721 = INT64_MIN;
	volatile int16_t x722 = -1;
	int64_t x723 = -1LL;

	t4 = (x721/(x722==(x723%x724)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x837 = INT64_MIN;
	uint32_t x838 = UINT32_MAX;
	int32_t x839 = -1;
	int16_t x840 = 41;

	t5 = (x837/(x838==(x839%x840)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x946 = -1;
	int64_t x947 = -1LL;
	static uint32_t x948 = 379U;
	int32_t t6 = INT32_MAX;

	t6 = (x945/(x946==(x947%x948)));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x949 = 0;
	int16_t x951 = INT16_MAX;
	static int32_t x952 = INT32_MIN;
	volatile int32_t t7 = 4303;

	t7 = (x949/(x950==(x951%x952)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x1149 = INT8_MAX;
	int32_t t8 = -32028198;

	t8 = (x1149/(x1150==(x1151%x1152)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x1405 = 3817924640543LLU;
	int8_t x1406 = -1;
	int16_t x1407 = -1;
	static int8_t x1408 = INT8_MIN;
	volatile uint64_t t9 = 344035792544124675LLU;

	t9 = (x1405/(x1406==(x1407%x1408)));

	if (t9 != 3817924640543LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1477 = 28692U;
	static int16_t x1478 = 0;
	static uint8_t x1479 = 10U;

	t10 = (x1477/(x1478==(x1479%x1480)));

	if (t10 != 28692) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x1674 = 0U;
	int16_t x1675 = 1;
	int8_t x1676 = 1;
	int32_t t11 = -26854132;

	t11 = (x1673/(x1674==(x1675%x1676)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x1985 = 3715U;
	static int32_t x1986 = 0;
	static int16_t x1987 = INT16_MIN;
	int8_t x1988 = -1;

	t12 = (x1985/(x1986==(x1987%x1988)));

	if (t12 != 3715) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x2109 = INT64_MAX;
	int64_t x2110 = -1LL;
	int8_t x2112 = INT8_MAX;
	static volatile int64_t t13 = INT64_MAX;

	t13 = (x2109/(x2110==(x2111%x2112)));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x2173 = INT64_MIN;
	volatile int16_t x2174 = -1;
	int16_t x2175 = -1919;
	int64_t t14 = INT64_MIN;

	t14 = (x2173/(x2174==(x2175%x2176)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x2197 = -1;
	int64_t x2200 = INT64_MIN;
	int32_t t15 = -346488306;

	t15 = (x2197/(x2198==(x2199%x2200)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x2273 = -1882;
	int8_t x2274 = -1;
	int64_t x2275 = INT64_MIN;
	static int64_t x2276 = INT64_MAX;

	t16 = (x2273/(x2274==(x2275%x2276)));

	if (t16 != -1882) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x2341 = INT32_MIN;
	uint8_t x2342 = 0U;
	int64_t x2343 = 3621LL;
	int8_t x2344 = -1;

	t17 = (x2341/(x2342==(x2343%x2344)));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x2365 = 7LL;
	uint16_t x2366 = 0U;
	int64_t x2367 = -2LL;
	volatile int8_t x2368 = -1;
	volatile int64_t t18 = 23981790871LL;

	t18 = (x2365/(x2366==(x2367%x2368)));

	if (t18 != 7LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x2385 = 33U;
	int32_t x2387 = -1;
	int16_t x2388 = -11009;
	volatile uint32_t t19 = 109089U;

	t19 = (x2385/(x2386==(x2387%x2388)));

	if (t19 != 33U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x2554 = 1;
	uint64_t x2556 = UINT64_MAX;

	t20 = (x2553/(x2554==(x2555%x2556)));

	if (t20 != -50) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x2601 = INT32_MAX;
	uint64_t x2602 = 8LLU;
	int8_t x2603 = INT8_MIN;
	static uint32_t x2604 = 12U;
	int32_t t21 = INT32_MAX;

	t21 = (x2601/(x2602==(x2603%x2604)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x2621 = INT16_MAX;
	uint32_t x2622 = UINT32_MAX;
	static int8_t x2623 = -1;
	int16_t x2624 = 407;
	int32_t t22 = -3749745;

	t22 = (x2621/(x2622==(x2623%x2624)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x2881 = -1;
	int8_t x2882 = 0;
	int32_t x2883 = INT32_MAX;
	volatile int32_t x2884 = -1;
	volatile int32_t t23 = -44381872;

	t23 = (x2881/(x2882==(x2883%x2884)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x2941 = INT64_MAX;
	uint16_t x2942 = 0U;
	int32_t x2943 = 249210463;
	int64_t x2944 = 1LL;
	int64_t t24 = INT64_MAX;

	t24 = (x2941/(x2942==(x2943%x2944)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x2961 = 321631123LLU;
	int32_t x2962 = -1;
	static uint16_t x2964 = 49U;
	volatile uint64_t t25 = 4388LLU;

	t25 = (x2961/(x2962==(x2963%x2964)));

	if (t25 != 321631123LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x3166 = -1;
	int16_t x3167 = -1;

	t26 = (x3165/(x3166==(x3167%x3168)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x3413 = INT64_MAX;
	int32_t x3414 = -1;
	int32_t x3416 = -278;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x3413/(x3414==(x3415%x3416)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x3601 = INT16_MIN;
	int8_t x3602 = 0;
	volatile int16_t x3603 = 0;
	int16_t x3604 = -57;
	int32_t t28 = -190;

	t28 = (x3601/(x3602==(x3603%x3604)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x3605 = 217521162212LL;
	uint32_t x3607 = UINT32_MAX;
	int16_t x3608 = INT16_MIN;
	volatile int64_t t29 = -89905581044930332LL;

	t29 = (x3605/(x3606==(x3607%x3608)));

	if (t29 != 217521162212LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x3718 = -1LL;
	int32_t x3719 = -1;
	uint8_t x3720 = UINT8_MAX;
	static volatile int32_t t30 = -1;

	t30 = (x3717/(x3718==(x3719%x3720)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x3753 = 0U;
	int32_t x3754 = -1;
	int16_t x3755 = -1;
	volatile int32_t x3756 = INT32_MAX;

	t31 = (x3753/(x3754==(x3755%x3756)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x3797 = -1;
	int64_t x3798 = -1LL;
	int32_t x3800 = INT32_MIN;
	volatile int32_t t32 = -7659;

	t32 = (x3797/(x3798==(x3799%x3800)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x3845 = -12;
	static int8_t x3846 = -1;
	int64_t x3847 = -1LL;
	int16_t x3848 = INT16_MAX;
	int32_t t33 = 1614682;

	t33 = (x3845/(x3846==(x3847%x3848)));

	if (t33 != -12) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x3930 = -1;
	static int32_t t34 = 87170664;

	t34 = (x3929/(x3930==(x3931%x3932)));

	if (t34 != 53) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x4105 = -49059LL;
	static uint64_t x4106 = UINT64_MAX;
	int8_t x4107 = -1;
	int8_t x4108 = INT8_MAX;
	volatile int64_t t35 = -185234164610LL;

	t35 = (x4105/(x4106==(x4107%x4108)));

	if (t35 != -49059LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x4133 = -1;
	uint64_t x4134 = UINT64_MAX;
	int32_t x4135 = -1;
	static int8_t x4136 = INT8_MAX;
	static int32_t t36 = -474179318;

	t36 = (x4133/(x4134==(x4135%x4136)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x4265 = 820U;
	int64_t x4266 = -1LL;
	volatile int64_t x4267 = -1LL;
	uint32_t t37 = 486U;

	t37 = (x4265/(x4266==(x4267%x4268)));

	if (t37 != 820U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x4622 = UINT32_MAX;
	uint32_t x4623 = UINT32_MAX;
	int64_t x4624 = INT64_MIN;
	volatile uint64_t t38 = 4074LLU;

	t38 = (x4621/(x4622==(x4623%x4624)));

	if (t38 != 607544618760LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x4662 = -1;
	int64_t x4663 = -1LL;
	uint64_t t39 = UINT64_MAX;

	t39 = (x4661/(x4662==(x4663%x4664)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x4825 = INT16_MAX;
	int8_t x4826 = -1;
	int64_t x4827 = -1LL;
	int32_t t40 = -83;

	t40 = (x4825/(x4826==(x4827%x4828)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x4873 = 46;
	int8_t x4874 = INT8_MAX;
	int8_t x4875 = INT8_MAX;
	uint64_t x4876 = 821556335273498433LLU;
	int32_t t41 = 122;

	t41 = (x4873/(x4874==(x4875%x4876)));

	if (t41 != 46) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x5117 = UINT16_MAX;
	uint16_t x5118 = 3U;
	uint64_t x5119 = UINT64_MAX;
	int32_t x5120 = INT32_MAX;
	volatile int32_t t42 = 817;

	t42 = (x5117/(x5118==(x5119%x5120)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x5122 = -1;
	volatile int32_t x5123 = -1;
	int64_t t43 = INT64_MIN;

	t43 = (x5121/(x5122==(x5123%x5124)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x5229 = 4LLU;
	int8_t x5230 = 0;
	uint8_t x5231 = 0U;
	static int16_t x5232 = INT16_MIN;
	volatile uint64_t t44 = 837LLU;

	t44 = (x5229/(x5230==(x5231%x5232)));

	if (t44 != 4LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x5330 = -1;
	volatile int32_t x5331 = -1;
	int8_t x5332 = 14;
	volatile int32_t t45 = -2260355;

	t45 = (x5329/(x5330==(x5331%x5332)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x5357 = -1LL;
	static volatile int64_t x5358 = -1LL;
	static int16_t x5360 = 12468;
	volatile int64_t t46 = -66341694350LL;

	t46 = (x5357/(x5358==(x5359%x5360)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x5485 = -1LL;
	int16_t x5486 = 0;
	int32_t x5487 = INT32_MIN;
	volatile int32_t x5488 = INT32_MIN;
	int64_t t47 = -17856536LL;

	t47 = (x5485/(x5486==(x5487%x5488)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x5549 = -1;
	static int8_t x5550 = -1;
	static int32_t x5552 = INT32_MAX;
	volatile int32_t t48 = 6;

	t48 = (x5549/(x5550==(x5551%x5552)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x5825 = 74212706599930LL;
	volatile int32_t x5827 = INT32_MIN;
	static volatile int32_t x5828 = INT32_MAX;
	volatile int64_t t49 = 12030483876LL;

	t49 = (x5825/(x5826==(x5827%x5828)));

	if (t49 != 74212706599930LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x5977 = UINT8_MAX;
	uint32_t x5978 = UINT32_MAX;
	int8_t x5979 = -1;
	static volatile int32_t t50 = -561067657;

	t50 = (x5977/(x5978==(x5979%x5980)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x6181 = 103U;
	int16_t x6182 = INT16_MIN;
	int16_t x6183 = INT16_MIN;
	int64_t x6184 = INT64_MIN;

	t51 = (x6181/(x6182==(x6183%x6184)));

	if (t51 != 103U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x6381 = UINT8_MAX;
	int8_t x6383 = -1;
	volatile int32_t t52 = 12;

	t52 = (x6381/(x6382==(x6383%x6384)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x6525 = 228U;
	int8_t x6526 = -1;
	int16_t x6527 = -1;
	int16_t x6528 = INT16_MAX;
	int32_t t53 = 101;

	t53 = (x6525/(x6526==(x6527%x6528)));

	if (t53 != 228) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x6777 = 0LL;
	int16_t x6778 = INT16_MIN;
	int16_t x6779 = INT16_MIN;
	int32_t x6780 = INT32_MIN;
	volatile int64_t t54 = -1317653441230LL;

	t54 = (x6777/(x6778==(x6779%x6780)));

	if (t54 != 0LL) { NG(); } else { ; }
	
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
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();


    return 0;
}

