#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x45 = UINT32_MAX;
int16_t x94 = -1;
volatile int64_t t1 = 154016028LL;
uint64_t x135 = UINT64_MAX;
volatile int64_t x137 = -2963360990LL;
int64_t x286 = 1LL;
int8_t x655 = -1;
static int32_t x657 = INT32_MIN;
volatile int16_t x660 = INT16_MAX;
static uint16_t x718 = 70U;
int64_t x822 = -1LL;
int16_t x925 = INT16_MIN;
volatile int32_t x946 = INT32_MIN;
static volatile int32_t t13 = 486634;
static volatile int64_t t15 = INT64_MIN;
uint64_t x1229 = 6962078734072860LLU;
int16_t x1231 = INT16_MIN;
volatile int16_t x1232 = INT16_MIN;
uint64_t x1290 = 70962378104LLU;
int32_t x1434 = -1;
int32_t x1435 = -1;
volatile int32_t t22 = INT32_MIN;
volatile int64_t x1958 = INT64_MIN;
static int32_t x2052 = INT32_MIN;
uint64_t x2137 = 293195766LLU;
volatile int16_t x2142 = -51;
volatile uint64_t t27 = 84263LLU;
volatile int8_t x2150 = -1;
int8_t x2152 = -1;
int64_t x2199 = -1LL;
int32_t x2252 = INT32_MIN;
uint16_t x2277 = 374U;
uint8_t x2953 = 7U;
int16_t x2979 = -1;
volatile uint8_t x3301 = 5U;
uint16_t x3302 = UINT16_MAX;
static uint64_t x3304 = UINT64_MAX;
int32_t t36 = 2803;
uint32_t x3706 = 344899U;
uint16_t x3770 = 76U;
volatile int32_t x3867 = INT32_MIN;
int16_t x4106 = -1;
int32_t x4158 = INT32_MIN;
static int16_t x4185 = -1;
volatile int32_t t45 = INT32_MIN;
static volatile int8_t x4326 = -8;
static uint32_t x4603 = UINT32_MAX;
uint32_t x4604 = UINT32_MAX;
int16_t x4759 = -1;
int32_t x4760 = -1;
volatile int32_t x4793 = -1728252;
uint64_t x4794 = 63482083LLU;
int64_t x5170 = -294LL;
int8_t x5171 = -1;
int8_t x5512 = INT8_MIN;
volatile int64_t x5521 = INT64_MAX;
volatile int32_t x5523 = INT32_MAX;
int32_t x5524 = INT32_MAX;
int32_t x5732 = INT32_MIN;
int8_t x6005 = INT8_MAX;
int16_t x6006 = 13895;
int16_t x6118 = -1;
static int32_t x6191 = -1;
int8_t x6211 = -1;
uint64_t x6603 = UINT64_MAX;
volatile uint64_t t61 = 11064606331LLU;
int8_t x6659 = -1;
int32_t x6660 = -1;
volatile int32_t t64 = -3143;
volatile int16_t x6951 = -1;
uint32_t x6952 = UINT32_MAX;
int32_t x7025 = INT32_MIN;
static volatile int32_t t66 = INT32_MIN;
uint8_t x7194 = 124U;
uint64_t x7487 = UINT64_MAX;
volatile int32_t t71 = 29384;
int32_t x7705 = INT32_MIN;
uint16_t x7725 = 14437U;
uint8_t x7750 = 105U;
int32_t x7823 = INT32_MIN;
volatile int32_t t81 = 1101;
int16_t x7949 = INT16_MIN;
uint8_t x7950 = 7U;
int16_t x7952 = -1;
uint16_t x8045 = UINT16_MAX;
static int16_t x8048 = INT16_MAX;
volatile int32_t t85 = -134092;
int8_t x8352 = INT8_MIN;
volatile int32_t t86 = 17786402;
int64_t x8488 = -1LL;
int64_t x8506 = INT64_MAX;
int16_t x8507 = INT16_MIN;
volatile int64_t t91 = 5847714005LL;
int32_t x8915 = INT32_MIN;


void f0(void) {
	uint32_t x46 = UINT32_MAX;
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MIN;
	static uint32_t t0 = UINT32_MAX;

	t0 = ((x45&x46)/(x47==x48));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x93 = 122486025948475957LL;
	int16_t x95 = INT16_MIN;
	volatile int16_t x96 = INT16_MIN;

	t1 = ((x93&x94)/(x95==x96));

	if (t1 != 122486025948475957LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x133 = INT8_MIN;
	static volatile uint8_t x134 = 3U;
	volatile int16_t x136 = -1;
	int32_t t2 = -1894;

	t2 = ((x133&x134)/(x135==x136));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x138 = -37;
	volatile int16_t x139 = -1;
	int32_t x140 = -1;
	volatile int64_t t3 = -1616340076444LL;

	t3 = ((x137&x138)/(x139==x140));

	if (t3 != -2963361022LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x285 = 1;
	int16_t x287 = INT16_MAX;
	int16_t x288 = INT16_MAX;
	volatile int64_t t4 = 1598197428140762LL;

	t4 = ((x285&x286)/(x287==x288));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x393 = INT32_MIN;
	static int64_t x394 = INT64_MIN;
	volatile int8_t x395 = -1;
	int32_t x396 = -1;
	int64_t t5 = INT64_MIN;

	t5 = ((x393&x394)/(x395==x396));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x545 = -1;
	static int64_t x546 = -378943160006633LL;
	int64_t x547 = -1LL;
	volatile int8_t x548 = -1;
	static volatile int64_t t6 = 959159170LL;

	t6 = ((x545&x546)/(x547==x548));

	if (t6 != -378943160006633LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x605 = INT8_MIN;
	static int32_t x606 = INT32_MIN;
	int64_t x607 = -1LL;
	volatile int16_t x608 = -1;
	volatile int32_t t7 = INT32_MIN;

	t7 = ((x605&x606)/(x607==x608));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x653 = -8491370646334921LL;
	static uint16_t x654 = UINT16_MAX;
	uint32_t x656 = UINT32_MAX;
	static volatile int64_t t8 = -38337620270161628LL;

	t8 = ((x653&x654)/(x655==x656));

	if (t8 != 4663LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x658 = 21U;
	static int16_t x659 = INT16_MAX;
	int32_t t9 = 531786;

	t9 = ((x657&x658)/(x659==x660));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x717 = INT64_MAX;
	static int32_t x719 = -1;
	int16_t x720 = -1;
	int64_t t10 = 894792261LL;

	t10 = ((x717&x718)/(x719==x720));

	if (t10 != 70LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x821 = 66U;
	int16_t x823 = -1;
	static int64_t x824 = -1LL;
	volatile int64_t t11 = 92374919842321LL;

	t11 = ((x821&x822)/(x823==x824));

	if (t11 != 66LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x926 = INT8_MAX;
	int8_t x927 = -1;
	volatile int8_t x928 = -1;
	volatile int32_t t12 = -91247527;

	t12 = ((x925&x926)/(x927==x928));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x945 = 0;
	int16_t x947 = INT16_MIN;
	int16_t x948 = INT16_MIN;

	t13 = ((x945&x946)/(x947==x948));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1045 = INT64_MAX;
	uint16_t x1046 = 4501U;
	int8_t x1047 = -1;
	static uint64_t x1048 = UINT64_MAX;
	static int64_t t14 = 31133LL;

	t14 = ((x1045&x1046)/(x1047==x1048));

	if (t14 != 4501LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x1141 = -6150;
	static int64_t x1142 = INT64_MIN;
	volatile int8_t x1143 = -1;
	static uint64_t x1144 = UINT64_MAX;

	t15 = ((x1141&x1142)/(x1143==x1144));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x1230 = 904108002;
	uint64_t t16 = 1450049656937111385LLU;

	t16 = ((x1229&x1230)/(x1231==x1232));

	if (t16 != 96703488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x1289 = INT64_MAX;
	int32_t x1291 = -1;
	static uint32_t x1292 = UINT32_MAX;
	static volatile uint64_t t17 = 390497574053542LLU;

	t17 = ((x1289&x1290)/(x1291==x1292));

	if (t17 != 70962378104LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1301 = -1;
	static uint32_t x1302 = UINT32_MAX;
	static uint8_t x1303 = 2U;
	int32_t x1304 = 2;
	static volatile uint32_t t18 = UINT32_MAX;

	t18 = ((x1301&x1302)/(x1303==x1304));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1317 = 13452335U;
	int64_t x1318 = INT64_MIN;
	int8_t x1319 = -1;
	int64_t x1320 = -1LL;
	int64_t t19 = -47783316LL;

	t19 = ((x1317&x1318)/(x1319==x1320));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1369 = 229677021894475445LLU;
	static int8_t x1370 = INT8_MIN;
	int16_t x1371 = INT16_MIN;
	int16_t x1372 = INT16_MIN;
	uint64_t t20 = 186248254158509LLU;

	t20 = ((x1369&x1370)/(x1371==x1372));

	if (t20 != 229677021894475392LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1433 = UINT16_MAX;
	int32_t x1436 = -1;
	int32_t t21 = 17;

	t21 = ((x1433&x1434)/(x1435==x1436));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1753 = INT32_MIN;
	int32_t x1754 = INT32_MIN;
	uint32_t x1755 = UINT32_MAX;
	int8_t x1756 = -1;

	t22 = ((x1753&x1754)/(x1755==x1756));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1921 = INT8_MAX;
	int64_t x1922 = INT64_MAX;
	int8_t x1923 = -1;
	volatile uint64_t x1924 = UINT64_MAX;
	volatile int64_t t23 = -1516174589LL;

	t23 = ((x1921&x1922)/(x1923==x1924));

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1957 = INT8_MIN;
	static volatile int8_t x1959 = -1;
	volatile int16_t x1960 = -1;
	volatile int64_t t24 = INT64_MIN;

	t24 = ((x1957&x1958)/(x1959==x1960));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x2049 = 0U;
	int8_t x2050 = INT8_MIN;
	int32_t x2051 = INT32_MIN;
	int32_t t25 = -22365737;

	t25 = ((x2049&x2050)/(x2051==x2052));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2138 = -1;
	volatile uint8_t x2139 = UINT8_MAX;
	uint8_t x2140 = UINT8_MAX;
	uint64_t t26 = 1LLU;

	t26 = ((x2137&x2138)/(x2139==x2140));

	if (t26 != 293195766LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x2141 = 69060605LLU;
	int64_t x2143 = INT64_MIN;
	static int64_t x2144 = INT64_MIN;

	t27 = ((x2141&x2142)/(x2143==x2144));

	if (t27 != 69060557LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x2149 = 594624756LLU;
	uint32_t x2151 = UINT32_MAX;
	uint64_t t28 = 514144LLU;

	t28 = ((x2149&x2150)/(x2151==x2152));

	if (t28 != 594624756LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2197 = -1;
	uint32_t x2198 = 5467U;
	int8_t x2200 = -1;
	volatile uint32_t t29 = 7119U;

	t29 = ((x2197&x2198)/(x2199==x2200));

	if (t29 != 5467U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2249 = 52U;
	int16_t x2250 = -1;
	int32_t x2251 = INT32_MIN;
	static int32_t t30 = -1;

	t30 = ((x2249&x2250)/(x2251==x2252));

	if (t30 != 52) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x2278 = 1988U;
	volatile int64_t x2279 = -1LL;
	int32_t x2280 = -1;
	static int32_t t31 = -8255743;

	t31 = ((x2277&x2278)/(x2279==x2280));

	if (t31 != 324) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x2673 = -1;
	int64_t x2674 = INT64_MIN;
	int32_t x2675 = -1;
	static int8_t x2676 = -1;
	int64_t t32 = INT64_MIN;

	t32 = ((x2673&x2674)/(x2675==x2676));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x2954 = UINT8_MAX;
	int8_t x2955 = -1;
	static int8_t x2956 = -1;
	int32_t t33 = -1;

	t33 = ((x2953&x2954)/(x2955==x2956));

	if (t33 != 7) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x2977 = INT16_MIN;
	volatile uint64_t x2978 = 947060946LLU;
	uint32_t x2980 = UINT32_MAX;
	uint64_t t34 = 222299654LLU;

	t34 = ((x2977&x2978)/(x2979==x2980));

	if (t34 != 947060736LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x3005 = 50477;
	int8_t x3006 = INT8_MIN;
	int32_t x3007 = -1;
	static uint64_t x3008 = UINT64_MAX;
	int32_t t35 = 30536;

	t35 = ((x3005&x3006)/(x3007==x3008));

	if (t35 != 50432) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x3303 = UINT64_MAX;

	t36 = ((x3301&x3302)/(x3303==x3304));

	if (t36 != 5) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x3705 = INT16_MAX;
	int8_t x3707 = INT8_MIN;
	volatile int8_t x3708 = INT8_MIN;
	volatile uint32_t t37 = 548U;

	t37 = ((x3705&x3706)/(x3707==x3708));

	if (t37 != 17219U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x3769 = -2;
	int32_t x3771 = -1;
	int8_t x3772 = -1;
	volatile int32_t t38 = 6;

	t38 = ((x3769&x3770)/(x3771==x3772));

	if (t38 != 76) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x3865 = -3;
	int32_t x3866 = -3485;
	int32_t x3868 = INT32_MIN;
	int32_t t39 = 1;

	t39 = ((x3865&x3866)/(x3867==x3868));

	if (t39 != -3487) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x4045 = -1;
	volatile int8_t x4046 = -6;
	int64_t x4047 = INT64_MIN;
	int64_t x4048 = INT64_MIN;
	static int32_t t40 = -269;

	t40 = ((x4045&x4046)/(x4047==x4048));

	if (t40 != -6) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x4093 = 1723104442471150LLU;
	int8_t x4094 = INT8_MAX;
	static int8_t x4095 = -1;
	int32_t x4096 = -1;
	static volatile uint64_t t41 = 4LLU;

	t41 = ((x4093&x4094)/(x4095==x4096));

	if (t41 != 110LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x4105 = 40;
	volatile int32_t x4107 = INT32_MAX;
	int32_t x4108 = INT32_MAX;
	int32_t t42 = 160570557;

	t42 = ((x4105&x4106)/(x4107==x4108));

	if (t42 != 40) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x4157 = INT16_MIN;
	volatile int32_t x4159 = -1;
	volatile int64_t x4160 = -1LL;
	int32_t t43 = INT32_MIN;

	t43 = ((x4157&x4158)/(x4159==x4160));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x4186 = -1;
	int16_t x4187 = INT16_MAX;
	int16_t x4188 = INT16_MAX;
	int32_t t44 = -82681;

	t44 = ((x4185&x4186)/(x4187==x4188));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x4245 = INT32_MIN;
	int32_t x4246 = -1;
	volatile int8_t x4247 = INT8_MIN;
	volatile int8_t x4248 = INT8_MIN;

	t45 = ((x4245&x4246)/(x4247==x4248));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x4325 = 1;
	static uint64_t x4327 = UINT64_MAX;
	static int8_t x4328 = -1;
	static int32_t t46 = -10;

	t46 = ((x4325&x4326)/(x4327==x4328));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x4449 = INT8_MIN;
	uint16_t x4450 = 7613U;
	static int64_t x4451 = INT64_MIN;
	int64_t x4452 = INT64_MIN;
	int32_t t47 = -88981443;

	t47 = ((x4449&x4450)/(x4451==x4452));

	if (t47 != 7552) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x4601 = INT32_MAX;
	uint32_t x4602 = UINT32_MAX;
	uint32_t t48 = 52147399U;

	t48 = ((x4601&x4602)/(x4603==x4604));

	if (t48 != 2147483647U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x4633 = 86U;
	int64_t x4634 = INT64_MAX;
	uint8_t x4635 = UINT8_MAX;
	int16_t x4636 = 255;
	int64_t t49 = -265628499462366LL;

	t49 = ((x4633&x4634)/(x4635==x4636));

	if (t49 != 86LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x4757 = -1;
	uint32_t x4758 = 1U;
	volatile uint32_t t50 = 34U;

	t50 = ((x4757&x4758)/(x4759==x4760));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x4795 = INT64_MIN;
	int64_t x4796 = INT64_MIN;
	uint64_t t51 = 9234235609039LLU;

	t51 = ((x4793&x4794)/(x4795==x4796));

	if (t51 != 62955520LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x5169 = INT16_MIN;
	int8_t x5172 = -1;
	int64_t t52 = -114LL;

	t52 = ((x5169&x5170)/(x5171==x5172));

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x5465 = INT64_MAX;
	uint16_t x5466 = 3809U;
	volatile int8_t x5467 = INT8_MAX;
	volatile int8_t x5468 = INT8_MAX;
	int64_t t53 = -4253253LL;

	t53 = ((x5465&x5466)/(x5467==x5468));

	if (t53 != 3809LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x5509 = -875;
	int32_t x5510 = 24146253;
	volatile int8_t x5511 = INT8_MIN;
	volatile int32_t t54 = 39247;

	t54 = ((x5509&x5510)/(x5511==x5512));

	if (t54 != 24145925) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x5522 = -1251496LL;
	static volatile int64_t t55 = 2LL;

	t55 = ((x5521&x5522)/(x5523==x5524));

	if (t55 != 9223372036853524312LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x5729 = 1U;
	int16_t x5730 = INT16_MAX;
	int32_t x5731 = INT32_MIN;
	int32_t t56 = 28399059;

	t56 = ((x5729&x5730)/(x5731==x5732));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x6007 = UINT64_MAX;
	int8_t x6008 = -1;
	int32_t t57 = 25669330;

	t57 = ((x6005&x6006)/(x6007==x6008));

	if (t57 != 71) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x6117 = 884;
	int32_t x6119 = -1;
	int16_t x6120 = -1;
	int32_t t58 = -36615164;

	t58 = ((x6117&x6118)/(x6119==x6120));

	if (t58 != 884) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x6189 = INT16_MIN;
	int64_t x6190 = -1LL;
	volatile int32_t x6192 = -1;
	volatile int64_t t59 = 74LL;

	t59 = ((x6189&x6190)/(x6191==x6192));

	if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x6209 = -22;
	int64_t x6210 = INT64_MAX;
	uint32_t x6212 = UINT32_MAX;
	int64_t t60 = -376LL;

	t60 = ((x6209&x6210)/(x6211==x6212));

	if (t60 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x6601 = UINT64_MAX;
	volatile int32_t x6602 = -5583;
	volatile int32_t x6604 = -1;

	t61 = ((x6601&x6602)/(x6603==x6604));

	if (t61 != 18446744073709546033LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x6657 = INT64_MIN;
	static int16_t x6658 = INT16_MAX;
	static int64_t t62 = 229784634262118LL;

	t62 = ((x6657&x6658)/(x6659==x6660));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x6737 = 101U;
	int8_t x6738 = -4;
	int8_t x6739 = -1;
	int64_t x6740 = -1LL;
	uint32_t t63 = 162484190U;

	t63 = ((x6737&x6738)/(x6739==x6740));

	if (t63 != 100U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x6797 = 910;
	static uint16_t x6798 = 23U;
	int64_t x6799 = -1LL;
	int32_t x6800 = -1;

	t64 = ((x6797&x6798)/(x6799==x6800));

	if (t64 != 6) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x6949 = INT16_MIN;
	uint32_t x6950 = 6175U;
	uint32_t t65 = 8U;

	t65 = ((x6949&x6950)/(x6951==x6952));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x7026 = -52825548;
	int32_t x7027 = INT32_MIN;
	static int32_t x7028 = INT32_MIN;

	t66 = ((x7025&x7026)/(x7027==x7028));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x7113 = -1;
	uint8_t x7114 = UINT8_MAX;
	int64_t x7115 = -1LL;
	int64_t x7116 = -1LL;
	static int32_t t67 = -6;

	t67 = ((x7113&x7114)/(x7115==x7116));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x7193 = INT16_MIN;
	int64_t x7195 = INT64_MIN;
	int64_t x7196 = INT64_MIN;
	volatile int32_t t68 = -3;

	t68 = ((x7193&x7194)/(x7195==x7196));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x7309 = INT64_MAX;
	int32_t x7310 = INT32_MAX;
	uint64_t x7311 = UINT64_MAX;
	static volatile int64_t x7312 = -1LL;
	int64_t t69 = 2749011341455617405LL;

	t69 = ((x7309&x7310)/(x7311==x7312));

	if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x7485 = 109;
	volatile int16_t x7486 = 6307;
	int16_t x7488 = -1;
	int32_t t70 = 24389182;

	t70 = ((x7485&x7486)/(x7487==x7488));

	if (t70 != 33) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x7553 = INT8_MIN;
	int16_t x7554 = INT16_MAX;
	int8_t x7555 = -1;
	uint32_t x7556 = UINT32_MAX;

	t71 = ((x7553&x7554)/(x7555==x7556));

	if (t71 != 32640) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x7609 = UINT16_MAX;
	int32_t x7610 = INT32_MAX;
	uint32_t x7611 = UINT32_MAX;
	int32_t x7612 = -1;
	static volatile int32_t t72 = -2;

	t72 = ((x7609&x7610)/(x7611==x7612));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x7625 = UINT64_MAX;
	static uint32_t x7626 = 3312U;
	int32_t x7627 = INT32_MIN;
	int32_t x7628 = INT32_MIN;
	volatile uint64_t t73 = 43346574593LLU;

	t73 = ((x7625&x7626)/(x7627==x7628));

	if (t73 != 3312LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x7706 = INT32_MAX;
	static int64_t x7707 = -1LL;
	int16_t x7708 = -1;
	int32_t t74 = -1505629;

	t74 = ((x7705&x7706)/(x7707==x7708));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x7726 = 10860U;
	int32_t x7727 = INT32_MAX;
	static int32_t x7728 = INT32_MAX;
	volatile int32_t t75 = 939532580;

	t75 = ((x7725&x7726)/(x7727==x7728));

	if (t75 != 10340) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x7733 = 2493;
	static volatile int64_t x7734 = INT64_MIN;
	int8_t x7735 = -1;
	int64_t x7736 = -1LL;
	int64_t t76 = 13550387LL;

	t76 = ((x7733&x7734)/(x7735==x7736));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x7749 = 29395803324514LLU;
	int32_t x7751 = -1;
	static int32_t x7752 = -1;
	uint64_t t77 = 38190LLU;

	t77 = ((x7749&x7750)/(x7751==x7752));

	if (t77 != 96LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x7769 = UINT32_MAX;
	uint32_t x7770 = UINT32_MAX;
	int64_t x7771 = -1LL;
	int32_t x7772 = -1;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x7769&x7770)/(x7771==x7772));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x7821 = INT64_MIN;
	volatile uint64_t x7822 = UINT64_MAX;
	volatile int32_t x7824 = INT32_MIN;
	static uint64_t t79 = 1700851003369119816LLU;

	t79 = ((x7821&x7822)/(x7823==x7824));

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x7841 = -1;
	int64_t x7842 = INT64_MIN;
	int8_t x7843 = INT8_MIN;
	int8_t x7844 = INT8_MIN;
	int64_t t80 = INT64_MIN;

	t80 = ((x7841&x7842)/(x7843==x7844));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x7881 = INT32_MIN;
	int8_t x7882 = INT8_MAX;
	static uint64_t x7883 = UINT64_MAX;
	int16_t x7884 = -1;

	t81 = ((x7881&x7882)/(x7883==x7884));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x7951 = UINT64_MAX;
	int32_t t82 = 33;

	t82 = ((x7949&x7950)/(x7951==x7952));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x8046 = INT32_MIN;
	int16_t x8047 = INT16_MAX;
	int32_t t83 = -107;

	t83 = ((x8045&x8046)/(x8047==x8048));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x8097 = 396U;
	int32_t x8098 = INT32_MIN;
	uint32_t x8099 = UINT32_MAX;
	uint32_t x8100 = UINT32_MAX;
	volatile int32_t t84 = -146583953;

	t84 = ((x8097&x8098)/(x8099==x8100));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x8113 = -11700;
	volatile uint16_t x8114 = 1878U;
	int64_t x8115 = INT64_MIN;
	volatile int64_t x8116 = INT64_MIN;

	t85 = ((x8113&x8114)/(x8115==x8116));

	if (t85 != 580) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x8349 = 3;
	int16_t x8350 = INT16_MAX;
	int8_t x8351 = INT8_MIN;

	t86 = ((x8349&x8350)/(x8351==x8352));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x8425 = -1LL;
	uint32_t x8426 = UINT32_MAX;
	int16_t x8427 = INT16_MIN;
	int16_t x8428 = INT16_MIN;
	int64_t t87 = -24534990375LL;

	t87 = ((x8425&x8426)/(x8427==x8428));

	if (t87 != 4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x8485 = 3849U;
	int16_t x8486 = INT16_MIN;
	int8_t x8487 = -1;
	volatile uint32_t t88 = 1U;

	t88 = ((x8485&x8486)/(x8487==x8488));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x8505 = UINT16_MAX;
	volatile int16_t x8508 = INT16_MIN;
	volatile int64_t t89 = -4060883267831606LL;

	t89 = ((x8505&x8506)/(x8507==x8508));

	if (t89 != 65535LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x8533 = -674;
	uint16_t x8534 = UINT16_MAX;
	int8_t x8535 = INT8_MIN;
	int8_t x8536 = INT8_MIN;
	volatile int32_t t90 = 12116781;

	t90 = ((x8533&x8534)/(x8535==x8536));

	if (t90 != 64862) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x8797 = INT16_MIN;
	int64_t x8798 = 0LL;
	int32_t x8799 = -1;
	int8_t x8800 = -1;

	t91 = ((x8797&x8798)/(x8799==x8800));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x8901 = INT16_MIN;
	int8_t x8902 = INT8_MIN;
	static int16_t x8903 = -1;
	static uint64_t x8904 = UINT64_MAX;
	volatile int32_t t92 = -2602430;

	t92 = ((x8901&x8902)/(x8903==x8904));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x8913 = INT16_MAX;
	int16_t x8914 = 1024;
	int32_t x8916 = INT32_MIN;
	volatile int32_t t93 = 113373419;

	t93 = ((x8913&x8914)/(x8915==x8916));

	if (t93 != 1024) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x8925 = 0;
	uint32_t x8926 = 9U;
	int32_t x8927 = -1;
	static uint32_t x8928 = UINT32_MAX;
	uint32_t t94 = 184U;

	t94 = ((x8925&x8926)/(x8927==x8928));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x9009 = 1U;
	uint8_t x9010 = 8U;
	uint32_t x9011 = UINT32_MAX;
	int32_t x9012 = -1;
	static int32_t t95 = -1680080;

	t95 = ((x9009&x9010)/(x9011==x9012));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x9089 = UINT32_MAX;
	int64_t x9090 = INT64_MIN;
	int64_t x9091 = -1LL;
	int32_t x9092 = -1;
	volatile int64_t t96 = -68175194785438578LL;

	t96 = ((x9089&x9090)/(x9091==x9092));

	if (t96 != 0LL) { NG(); } else { ; }
	
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
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();


    return 0;
}

