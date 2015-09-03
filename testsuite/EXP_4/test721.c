#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x113 = UINT16_MAX;
int32_t t3 = INT32_MAX;
int32_t x123 = 5719764;
static int16_t x124 = -6202;
volatile int32_t t5 = -123977457;
int16_t x168 = 69;
int32_t t8 = INT32_MAX;
volatile int8_t x209 = INT8_MAX;
static int64_t x211 = INT64_MIN;
int64_t x219 = -57LL;
int64_t x241 = 319747198178LL;
int32_t x243 = -1;
uint32_t x265 = UINT32_MAX;
static uint32_t x341 = 613781927U;
static int64_t x355 = INT64_MAX;
uint8_t x366 = 73U;
uint32_t x367 = UINT32_MAX;
static volatile int32_t t21 = 4466;
uint8_t x429 = UINT8_MAX;
uint16_t x475 = UINT16_MAX;
volatile uint64_t x491 = UINT64_MAX;
int8_t x492 = INT8_MAX;
static int32_t t25 = -2619975;
int8_t x498 = -1;
volatile int8_t x502 = -1;
uint64_t x544 = UINT64_MAX;
int32_t t30 = 11;
int32_t x623 = -95236;
int64_t x624 = INT64_MAX;
volatile int32_t x634 = INT32_MAX;
int8_t x643 = -1;
int16_t x695 = INT16_MAX;
int16_t x710 = -59;
volatile int16_t x711 = -94;
volatile uint8_t x749 = 31U;
int64_t x822 = -1LL;
static int16_t x835 = -1;
int32_t x836 = INT32_MAX;
uint32_t x862 = 10U;
volatile int64_t x863 = INT64_MAX;
int64_t x938 = -62625LL;
volatile int32_t t44 = 42288;
uint32_t t45 = 1U;
uint32_t x1163 = 561585911U;
volatile uint16_t x1208 = 29U;
int16_t x1231 = INT16_MIN;
int32_t t52 = 3;
static int16_t x1289 = INT16_MAX;
int32_t x1313 = INT32_MAX;
uint8_t x1329 = 14U;
int16_t x1331 = 10982;
uint16_t x1345 = 4U;
uint64_t x1380 = UINT64_MAX;
volatile int16_t x1474 = INT16_MAX;
uint8_t x1505 = 12U;
int32_t x1565 = 10710164;
int8_t x1603 = -1;
volatile int64_t x1655 = -4152941340803583704LL;
static int32_t x1861 = INT32_MAX;
uint32_t x1863 = UINT32_MAX;
int64_t x1864 = INT64_MIN;
int32_t t75 = -4105;
uint16_t x1872 = 3555U;
volatile int64_t x1940 = INT64_MAX;
static uint64_t x1943 = 25320744612404351LLU;
int32_t x1953 = 27480;
volatile int32_t x1960 = 180105590;
int16_t x1970 = -2;
uint64_t x1975 = 1820045234400521LLU;
volatile int16_t x2008 = -26;
volatile int32_t t89 = -150;
volatile int16_t x2076 = INT16_MAX;
static int32_t x2107 = -127238;
uint64_t x2198 = 489190LLU;
volatile int16_t x2205 = INT16_MAX;
int16_t x2206 = -14499;
int64_t x2227 = INT64_MAX;
int8_t x2283 = -1;
uint64_t x2285 = UINT64_MAX;
uint64_t x2286 = 10324639LLU;
static uint8_t x2293 = 20U;


void f0(void) {
	volatile int32_t x29 = INT32_MAX;
	int16_t x30 = INT16_MIN;
	volatile int32_t x31 = INT32_MAX;
	static int64_t x32 = INT64_MIN;
	int32_t t0 = INT32_MAX;

	t0 = (x29<<(x30/(x31%x32)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x73 = UINT32_MAX;
	int64_t x74 = -213LL;
	int16_t x75 = INT16_MIN;
	uint32_t x76 = 423368U;
	uint32_t t1 = UINT32_MAX;

	t1 = (x73<<(x74/(x75%x76)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t2 = 1862393;

	t2 = (x113<<(x114/(x115%x116)));

	if (t2 != 131070) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x117 = INT32_MAX;
	uint16_t x118 = UINT16_MAX;
	int32_t x119 = INT32_MIN;
	static int32_t x120 = 873873;

	t3 = (x117<<(x118/(x119%x120)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x121 = 3721139U;
	int16_t x122 = INT16_MAX;
	uint32_t t4 = 854837993U;

	t4 = (x121<<(x122/(x123%x124)));

	if (t4 != 4133486592U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x133 = 23;
	uint32_t x134 = 0U;
	static int64_t x135 = -1LL;
	static int16_t x136 = INT16_MIN;

	t5 = (x133<<(x134/(x135%x136)));

	if (t5 != 23) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x145 = UINT32_MAX;
	int32_t x146 = 24556;
	static int16_t x147 = INT16_MIN;
	int64_t x148 = INT64_MAX;
	uint32_t t6 = UINT32_MAX;

	t6 = (x145<<(x146/(x147%x148)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x153 = 57U;
	uint16_t x154 = 53U;
	uint16_t x155 = 6U;
	int64_t x156 = INT64_MIN;
	volatile uint32_t t7 = 85649582U;

	t7 = (x153<<(x154/(x155%x156)));

	if (t7 != 14592U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x165 = INT32_MAX;
	static volatile int8_t x166 = 0;
	int32_t x167 = -1877;

	t8 = (x165<<(x166/(x167%x168)));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x169 = 2;
	uint64_t x170 = 22831321LLU;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MAX;
	static int32_t t9 = 523499;

	t9 = (x169<<(x170/(x171%x172)));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x189 = 215492U;
	int8_t x190 = -1;
	volatile int16_t x191 = INT16_MAX;
	int16_t x192 = 3179;
	volatile uint32_t t10 = 176U;

	t10 = (x189<<(x190/(x191%x192)));

	if (t10 != 215492U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x210 = UINT64_MAX;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t11 = 380284600;

	t11 = (x209<<(x210/(x211%x212)));

	if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x213 = 29148522;
	uint8_t x214 = UINT8_MAX;
	volatile int64_t x215 = 5218979892273873LL;
	int16_t x216 = INT16_MIN;
	static volatile int32_t t12 = 906994;

	t12 = (x213<<(x214/(x215%x216)));

	if (t12 != 29148522) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x217 = 5911671917322722LLU;
	static uint64_t x218 = UINT64_MAX;
	int64_t x220 = INT64_MIN;
	uint64_t t13 = 451LLU;

	t13 = (x217<<(x218/(x219%x220)));

	if (t13 != 11823343834645444LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x233 = UINT8_MAX;
	uint8_t x234 = 1U;
	int32_t x235 = INT32_MAX;
	int8_t x236 = INT8_MIN;
	int32_t t14 = -994272695;

	t14 = (x233<<(x234/(x235%x236)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x242 = 1223632U;
	static volatile uint16_t x244 = UINT16_MAX;
	int64_t t15 = -520230LL;

	t15 = (x241<<(x242/(x243%x244)));

	if (t15 != 319747198178LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x266 = UINT8_MAX;
	static uint64_t x267 = 100547LLU;
	int32_t x268 = INT32_MAX;
	uint32_t t16 = UINT32_MAX;

	t16 = (x265<<(x266/(x267%x268)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x285 = UINT64_MAX;
	uint16_t x286 = 0U;
	uint16_t x287 = UINT16_MAX;
	int32_t x288 = INT32_MAX;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x285<<(x286/(x287%x288)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x342 = 11849083483743349LLU;
	int32_t x343 = -217802408;
	uint8_t x344 = UINT8_MAX;
	volatile uint32_t t18 = 11639U;

	t18 = (x341<<(x342/(x343%x344)));

	if (t18 != 613781927U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x353 = 12003033149LLU;
	int32_t x354 = -1;
	uint64_t x356 = UINT64_MAX;
	uint64_t t19 = 2283704424LLU;

	t19 = (x353<<(x354/(x355%x356)));

	if (t19 != 48012132596LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x365 = 20;
	uint16_t x368 = 13U;
	int32_t t20 = -622310;

	t20 = (x365<<(x366/(x367%x368)));

	if (t20 != 10240) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x381 = 253042;
	int16_t x382 = -1;
	int8_t x383 = 26;
	int16_t x384 = INT16_MIN;

	t21 = (x381<<(x382/(x383%x384)));

	if (t21 != 253042) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x401 = 236253361599507LLU;
	static int16_t x402 = -1;
	static volatile int64_t x403 = -1LL;
	uint16_t x404 = UINT16_MAX;
	volatile uint64_t t22 = 4876727766609LLU;

	t22 = (x401<<(x402/(x403%x404)));

	if (t22 != 472506723199014LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MAX;
	static uint64_t x432 = UINT64_MAX;
	static volatile int32_t t23 = 32;

	t23 = (x429<<(x430/(x431%x432)));

	if (t23 != 510) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x473 = INT64_MAX;
	int8_t x474 = INT8_MAX;
	volatile int64_t x476 = INT64_MIN;
	int64_t t24 = INT64_MAX;

	t24 = (x473<<(x474/(x475%x476)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x489 = 2U;
	uint16_t x490 = 4U;

	t25 = (x489<<(x490/(x491%x492)));

	if (t25 != 32) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x497 = 2;
	static int16_t x499 = -6506;
	int64_t x500 = INT64_MIN;
	int32_t t26 = -107726;

	t26 = (x497<<(x498/(x499%x500)));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x501 = 29050U;
	int8_t x503 = 3;
	int64_t x504 = INT64_MIN;
	static volatile int32_t t27 = -10;

	t27 = (x501<<(x502/(x503%x504)));

	if (t27 != 29050) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x533 = 84U;
	int32_t x534 = -1;
	int32_t x535 = -438516538;
	static volatile uint64_t x536 = UINT64_MAX;
	volatile int32_t t28 = -93647;

	t28 = (x533<<(x534/(x535%x536)));

	if (t28 != 168) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x541 = INT32_MAX;
	volatile uint16_t x542 = 508U;
	uint64_t x543 = 1091652617846041LLU;
	volatile int32_t t29 = INT32_MAX;

	t29 = (x541<<(x542/(x543%x544)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x609 = UINT16_MAX;
	uint64_t x610 = 1760LLU;
	volatile int8_t x611 = INT8_MAX;
	volatile uint16_t x612 = 1684U;

	t30 = (x609<<(x610/(x611%x612)));

	if (t30 != 536862720) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x621 = 13208U;
	uint64_t x622 = 15249050526827LLU;
	volatile uint32_t t31 = 960504172U;

	t31 = (x621<<(x622/(x623%x624)));

	if (t31 != 13208U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x633 = INT8_MAX;
	uint64_t x635 = 89727949765779341LLU;
	volatile uint32_t x636 = UINT32_MAX;
	volatile int32_t t32 = 11035;

	t32 = (x633<<(x634/(x635%x636)));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x641 = 225023LLU;
	int16_t x642 = -1;
	int64_t x644 = 1137487874530512948LL;
	volatile uint64_t t33 = 106468580LLU;

	t33 = (x641<<(x642/(x643%x644)));

	if (t33 != 450046LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x653 = 0U;
	static int32_t x654 = 1019401;
	int64_t x655 = -985695964LL;
	int64_t x656 = INT64_MAX;
	volatile int32_t t34 = -6;

	t34 = (x653<<(x654/(x655%x656)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x657 = INT8_MAX;
	uint8_t x658 = 3U;
	int8_t x659 = INT8_MIN;
	int16_t x660 = INT16_MAX;
	volatile int32_t t35 = 48952;

	t35 = (x657<<(x658/(x659%x660)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x693 = 201746U;
	int8_t x694 = 1;
	int32_t x696 = INT32_MIN;
	volatile uint32_t t36 = 139819U;

	t36 = (x693<<(x694/(x695%x696)));

	if (t36 != 201746U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x709 = UINT32_MAX;
	int8_t x712 = INT8_MIN;
	uint32_t t37 = UINT32_MAX;

	t37 = (x709<<(x710/(x711%x712)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x750 = INT16_MAX;
	int64_t x751 = INT64_MAX;
	uint64_t x752 = 4431LLU;
	int32_t t38 = -1;

	t38 = (x749<<(x750/(x751%x752)));

	if (t38 != 15872) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x821 = UINT8_MAX;
	int64_t x823 = INT64_MIN;
	int32_t x824 = -60157;
	static int32_t t39 = -93570;

	t39 = (x821<<(x822/(x823%x824)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x833 = 207U;
	static uint32_t x834 = 125656289U;
	volatile uint32_t t40 = 768448U;

	t40 = (x833<<(x834/(x835%x836)));

	if (t40 != 207U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x861 = 7U;
	uint32_t x864 = UINT32_MAX;
	volatile uint32_t t41 = 89U;

	t41 = (x861<<(x862/(x863%x864)));

	if (t41 != 7U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x877 = UINT16_MAX;
	static int16_t x878 = INT16_MIN;
	int16_t x879 = INT16_MIN;
	static int16_t x880 = -7258;
	volatile int32_t t42 = -2;

	t42 = (x877<<(x878/(x879%x880)));

	if (t42 != 16776960) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x937 = 1;
	int64_t x939 = INT64_MIN;
	uint16_t x940 = UINT16_MAX;
	volatile int32_t t43 = 30914;

	t43 = (x937<<(x938/(x939%x940)));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x965 = UINT16_MAX;
	static int8_t x966 = -1;
	int32_t x967 = INT32_MAX;
	uint16_t x968 = 1683U;

	t44 = (x965<<(x966/(x967%x968)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x969 = 0U;
	uint64_t x970 = 0LLU;
	int8_t x971 = INT8_MAX;
	int16_t x972 = INT16_MIN;

	t45 = (x969<<(x970/(x971%x972)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x989 = UINT64_MAX;
	volatile uint16_t x990 = 0U;
	uint32_t x991 = 3674U;
	int8_t x992 = -1;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x989<<(x990/(x991%x992)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1065 = INT8_MAX;
	static int8_t x1066 = -1;
	int32_t x1067 = INT32_MIN;
	uint32_t x1068 = UINT32_MAX;
	volatile int32_t t47 = -94242;

	t47 = (x1065<<(x1066/(x1067%x1068)));

	if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1137 = 11U;
	static int8_t x1138 = -12;
	static uint8_t x1139 = UINT8_MAX;
	volatile int64_t x1140 = -50664248013342929LL;
	int32_t t48 = 0;

	t48 = (x1137<<(x1138/(x1139%x1140)));

	if (t48 != 11) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x1161 = 1933917597797745LL;
	static int16_t x1162 = -1;
	static int8_t x1164 = INT8_MIN;
	int64_t t49 = -332979LL;

	t49 = (x1161<<(x1162/(x1163%x1164)));

	if (t49 != 247541452518111360LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1181 = 129U;
	int8_t x1182 = -1;
	int16_t x1183 = -1;
	int64_t x1184 = INT64_MIN;
	volatile int32_t t50 = 24206334;

	t50 = (x1181<<(x1182/(x1183%x1184)));

	if (t50 != 258) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1205 = INT8_MAX;
	uint8_t x1206 = 0U;
	int32_t x1207 = -3328;
	static volatile int32_t t51 = 0;

	t51 = (x1205<<(x1206/(x1207%x1208)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1229 = INT16_MAX;
	static int8_t x1230 = 2;
	volatile uint16_t x1232 = UINT16_MAX;

	t52 = (x1229<<(x1230/(x1231%x1232)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1237 = INT64_MAX;
	uint64_t x1238 = 208565186LLU;
	int32_t x1239 = INT32_MIN;
	uint8_t x1240 = 6U;
	int64_t t53 = INT64_MAX;

	t53 = (x1237<<(x1238/(x1239%x1240)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x1290 = -1;
	int16_t x1291 = INT16_MAX;
	int8_t x1292 = INT8_MIN;
	int32_t t54 = -27;

	t54 = (x1289<<(x1290/(x1291%x1292)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1314 = 1496420U;
	uint64_t x1315 = 419045409012LLU;
	int16_t x1316 = INT16_MIN;
	int32_t t55 = INT32_MAX;

	t55 = (x1313<<(x1314/(x1315%x1316)));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1330 = -102LL;
	int64_t x1332 = INT64_MAX;
	static int32_t t56 = 61;

	t56 = (x1329<<(x1330/(x1331%x1332)));

	if (t56 != 14) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x1341 = UINT16_MAX;
	int32_t x1342 = INT32_MIN;
	int32_t x1343 = INT32_MIN;
	volatile int64_t x1344 = INT64_MAX;
	int32_t t57 = 106;

	t57 = (x1341<<(x1342/(x1343%x1344)));

	if (t57 != 131070) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1346 = 98;
	int64_t x1347 = 1617153LL;
	uint64_t x1348 = UINT64_MAX;
	volatile int32_t t58 = 243968060;

	t58 = (x1345<<(x1346/(x1347%x1348)));

	if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x1377 = 37LLU;
	int16_t x1378 = -1;
	static int8_t x1379 = INT8_MIN;
	uint64_t t59 = 108078040345148119LLU;

	t59 = (x1377<<(x1378/(x1379%x1380)));

	if (t59 != 74LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1385 = 3U;
	static volatile int8_t x1386 = INT8_MIN;
	int16_t x1387 = INT16_MIN;
	volatile uint8_t x1388 = 122U;
	int32_t t60 = -995551;

	t60 = (x1385<<(x1386/(x1387%x1388)));

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x1473 = UINT64_MAX;
	static int32_t x1475 = INT32_MIN;
	static uint64_t x1476 = UINT64_MAX;
	uint64_t t61 = UINT64_MAX;

	t61 = (x1473<<(x1474/(x1475%x1476)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x1485 = 511228659628LLU;
	volatile int32_t x1486 = 0;
	int16_t x1487 = 55;
	int16_t x1488 = INT16_MAX;
	uint64_t t62 = 386908LLU;

	t62 = (x1485<<(x1486/(x1487%x1488)));

	if (t62 != 511228659628LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x1497 = 26U;
	int64_t x1498 = -1LL;
	int64_t x1499 = -5505412156LL;
	static int8_t x1500 = 3;
	static volatile int32_t t63 = 12;

	t63 = (x1497<<(x1498/(x1499%x1500)));

	if (t63 != 52) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1506 = UINT32_MAX;
	int32_t x1507 = INT32_MIN;
	volatile uint8_t x1508 = 9U;
	static int32_t t64 = -7885;

	t64 = (x1505<<(x1506/(x1507%x1508)));

	if (t64 != 24) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x1566 = INT8_MAX;
	volatile int64_t x1567 = INT64_MIN;
	int16_t x1568 = -1431;
	int32_t t65 = -14717859;

	t65 = (x1565<<(x1566/(x1567%x1568)));

	if (t65 != 10710164) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1577 = 1897LLU;
	int8_t x1578 = 41;
	int32_t x1579 = INT32_MAX;
	int16_t x1580 = 14;
	volatile uint64_t t66 = 1628288LLU;

	t66 = (x1577<<(x1578/(x1579%x1580)));

	if (t66 != 4171547115782144LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x1601 = 4U;
	uint64_t x1602 = 31LLU;
	uint32_t x1604 = 12U;
	volatile int32_t t67 = 3;

	t67 = (x1601<<(x1602/(x1603%x1604)));

	if (t67 != 4096) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1605 = 3555838U;
	int64_t x1606 = -1LL;
	int16_t x1607 = INT16_MIN;
	uint32_t x1608 = 617U;
	uint32_t t68 = 2937U;

	t68 = (x1605<<(x1606/(x1607%x1608)));

	if (t68 != 3555838U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1653 = 15941903886053LL;
	int32_t x1654 = -1;
	int32_t x1656 = INT32_MIN;
	int64_t t69 = 267184739527508LL;

	t69 = (x1653<<(x1654/(x1655%x1656)));

	if (t69 != 15941903886053LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x1661 = 3447319985336215LL;
	volatile int8_t x1662 = 17;
	uint64_t x1663 = 6695422071125996LLU;
	int8_t x1664 = -26;
	int64_t t70 = 993226778767LL;

	t70 = (x1661<<(x1662/(x1663%x1664)));

	if (t70 != 3447319985336215LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x1713 = 1992575921LLU;
	uint16_t x1714 = 6665U;
	uint32_t x1715 = 2089434795U;
	static uint16_t x1716 = 24660U;
	volatile uint64_t t71 = 13420LLU;

	t71 = (x1713<<(x1714/(x1715%x1716)));

	if (t71 != 1992575921LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1733 = 258668623737LL;
	volatile int64_t x1734 = -1LL;
	int32_t x1735 = -623;
	static int8_t x1736 = INT8_MIN;
	int64_t t72 = 3736993645109908275LL;

	t72 = (x1733<<(x1734/(x1735%x1736)));

	if (t72 != 258668623737LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1765 = INT16_MAX;
	static int64_t x1766 = -1LL;
	volatile int64_t x1767 = -236047406157924393LL;
	static volatile int32_t x1768 = 7347;
	volatile int32_t t73 = -1;

	t73 = (x1765<<(x1766/(x1767%x1768)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x1862 = UINT8_MAX;
	static volatile int32_t t74 = INT32_MAX;

	t74 = (x1861<<(x1862/(x1863%x1864)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1865 = 18;
	static volatile int32_t x1866 = 7256;
	uint64_t x1867 = 220514720627456481LLU;
	int16_t x1868 = -1;

	t75 = (x1865<<(x1866/(x1867%x1868)));

	if (t75 != 18) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1869 = UINT64_MAX;
	volatile uint8_t x1870 = UINT8_MAX;
	uint16_t x1871 = UINT16_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (x1869<<(x1870/(x1871%x1872)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1885 = 29U;
	volatile int16_t x1886 = INT16_MAX;
	volatile int32_t x1887 = INT32_MAX;
	int16_t x1888 = INT16_MIN;
	int32_t t77 = -251900494;

	t77 = (x1885<<(x1886/(x1887%x1888)));

	if (t77 != 58) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x1925 = UINT64_MAX;
	static uint64_t x1926 = 1403LLU;
	volatile int16_t x1927 = -1;
	static int64_t x1928 = INT64_MIN;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x1925<<(x1926/(x1927%x1928)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1937 = 1U;
	uint64_t x1938 = 3571679814977LLU;
	int64_t x1939 = -4257LL;
	volatile int32_t t79 = 127;

	t79 = (x1937<<(x1938/(x1939%x1940)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1941 = 7429U;
	static uint8_t x1942 = 4U;
	static uint64_t x1944 = UINT64_MAX;
	static int32_t t80 = 27;

	t80 = (x1941<<(x1942/(x1943%x1944)));

	if (t80 != 7429) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x1954 = 42LLU;
	int32_t x1955 = 18965899;
	int8_t x1956 = INT8_MIN;
	int32_t t81 = -11307506;

	t81 = (x1953<<(x1954/(x1955%x1956)));

	if (t81 != 219840) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1957 = INT16_MAX;
	int16_t x1958 = 2;
	volatile uint8_t x1959 = 5U;
	volatile int32_t t82 = 54;

	t82 = (x1957<<(x1958/(x1959%x1960)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x1961 = 12159014;
	int8_t x1962 = INT8_MAX;
	int32_t x1963 = 101012150;
	int32_t x1964 = INT32_MAX;
	int32_t t83 = -799285;

	t83 = (x1961<<(x1962/(x1963%x1964)));

	if (t83 != 12159014) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1965 = INT32_MAX;
	static int16_t x1966 = -987;
	int32_t x1967 = 540593;
	uint16_t x1968 = 14086U;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x1965<<(x1966/(x1967%x1968)));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x1969 = INT64_MAX;
	volatile int64_t x1971 = INT64_MIN;
	uint8_t x1972 = UINT8_MAX;
	volatile int64_t t85 = INT64_MAX;

	t85 = (x1969<<(x1970/(x1971%x1972)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1973 = UINT32_MAX;
	int32_t x1974 = 702;
	uint64_t x1976 = 930829527510776897LLU;
	uint32_t t86 = UINT32_MAX;

	t86 = (x1973<<(x1974/(x1975%x1976)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x1993 = 486717908U;
	uint8_t x1994 = 1U;
	volatile int64_t x1995 = -125453519LL;
	static uint64_t x1996 = 8251LLU;
	static volatile uint32_t t87 = 75455U;

	t87 = (x1993<<(x1994/(x1995%x1996)));

	if (t87 != 486717908U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x2005 = 323269U;
	int16_t x2006 = -1;
	volatile int16_t x2007 = -1;
	static volatile uint32_t t88 = 49777U;

	t88 = (x2005<<(x2006/(x2007%x2008)));

	if (t88 != 646538U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2017 = UINT8_MAX;
	int16_t x2018 = -58;
	int64_t x2019 = 12796381162191LL;
	static uint8_t x2020 = UINT8_MAX;

	t89 = (x2017<<(x2018/(x2019%x2020)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2073 = INT64_MAX;
	uint8_t x2074 = 3U;
	int64_t x2075 = INT64_MIN;
	int64_t t90 = INT64_MAX;

	t90 = (x2073<<(x2074/(x2075%x2076)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x2105 = INT64_MAX;
	int16_t x2106 = -1;
	int32_t x2108 = INT32_MIN;
	int64_t t91 = INT64_MAX;

	t91 = (x2105<<(x2106/(x2107%x2108)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x2141 = 4;
	static uint16_t x2142 = 178U;
	volatile uint32_t x2143 = 719U;
	int8_t x2144 = INT8_MIN;
	volatile int32_t t92 = 777775;

	t92 = (x2141<<(x2142/(x2143%x2144)));

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2197 = UINT32_MAX;
	int8_t x2199 = -15;
	static uint8_t x2200 = UINT8_MAX;
	static uint32_t t93 = UINT32_MAX;

	t93 = (x2197<<(x2198/(x2199%x2200)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x2207 = INT64_MIN;
	int64_t x2208 = -93053973702411LL;
	volatile int32_t t94 = -16997077;

	t94 = (x2205<<(x2206/(x2207%x2208)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2225 = 1887;
	int8_t x2226 = INT8_MIN;
	int64_t x2228 = -2203884LL;
	int32_t t95 = 10;

	t95 = (x2225<<(x2226/(x2227%x2228)));

	if (t95 != 1887) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2273 = INT64_MAX;
	volatile int8_t x2274 = 1;
	int16_t x2275 = INT16_MIN;
	volatile uint32_t x2276 = 1006131U;
	static volatile int64_t t96 = INT64_MAX;

	t96 = (x2273<<(x2274/(x2275%x2276)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x2281 = 1;
	volatile uint64_t x2282 = 1539718558877LLU;
	static int32_t x2284 = INT32_MIN;
	volatile int32_t t97 = 0;

	t97 = (x2281<<(x2282/(x2283%x2284)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2287 = UINT32_MAX;
	static uint64_t x2288 = 204918403302LLU;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x2285<<(x2286/(x2287%x2288)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2294 = 7LL;
	uint64_t x2295 = 8761LLU;
	static uint64_t x2296 = UINT64_MAX;
	volatile int32_t t99 = -44039439;

	t99 = (x2293<<(x2294/(x2295%x2296)));

	if (t99 != 20) { NG(); } else { ; }
	
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
    f97();
    f98();
    f99();


    return 0;
}

