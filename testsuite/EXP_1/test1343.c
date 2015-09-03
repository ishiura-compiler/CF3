#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
int32_t t0 = -637671469;
int16_t x6 = INT16_MAX;
int8_t x11 = -2;
static int8_t x13 = -1;
int16_t x15 = INT16_MIN;
volatile int64_t t4 = 2000293879905598LL;
volatile int32_t t7 = 516221033;
static uint32_t x36 = 13917U;
int16_t x43 = INT16_MAX;
int16_t x46 = -13;
int32_t x52 = 20916;
uint16_t x59 = 2123U;
static int64_t x60 = 450728981LL;
volatile int64_t t14 = 2652LL;
static int64_t x62 = -1LL;
static int64_t x75 = 754096424084LL;
int64_t t18 = 126LL;
static uint64_t x83 = 5996238888LLU;
uint32_t x84 = 1405540771U;
uint32_t x87 = 0U;
static int8_t x94 = 1;
uint8_t x95 = 67U;
volatile uint32_t x96 = 503U;
int32_t x97 = INT32_MAX;
uint16_t x103 = 797U;
static uint64_t t25 = 6LLU;
int32_t t27 = -68573087;
uint32_t x124 = UINT32_MAX;
static int8_t x126 = INT8_MIN;
static uint8_t x140 = 90U;
int64_t x141 = INT64_MAX;
int16_t x144 = INT16_MIN;
static int32_t t36 = 18391744;
int16_t x149 = -1;
volatile uint32_t t37 = 2755U;
volatile int16_t x159 = -464;
int8_t x163 = 1;
volatile uint64_t x168 = 2100595202404LLU;
int32_t x169 = INT32_MAX;
static int32_t x172 = -4362750;
static volatile int64_t t42 = -55207617551788661LL;
int16_t x176 = INT16_MAX;
volatile int64_t t43 = -314180LL;
volatile int64_t x180 = INT64_MAX;
int64_t x181 = -66734618LL;
int16_t x184 = -101;
static uint64_t t45 = 251439LLU;
int32_t x188 = -19886;
volatile int32_t t46 = 1542923;
volatile int32_t t47 = -4256;
volatile int32_t x199 = INT32_MIN;
int8_t x205 = INT8_MIN;
int64_t x207 = -1LL;
static volatile uint64_t x214 = 1922221827340825735LLU;
static int8_t x216 = -7;
int64_t x226 = -1LL;
static volatile int64_t t56 = -2224985580970685LL;
uint64_t x235 = 2060687694LLU;
static volatile int8_t x236 = INT8_MAX;
uint32_t x238 = 1335U;
static volatile uint64_t t58 = 424462LLU;
uint32_t x241 = 26013U;
int8_t x251 = INT8_MIN;
int16_t x252 = INT16_MAX;
uint64_t x254 = UINT64_MAX;
int8_t x260 = -1;
int8_t x265 = 10;
int64_t x266 = INT64_MIN;
static volatile uint32_t x272 = 10584805U;
static uint32_t t66 = 73877642U;
uint16_t x275 = UINT16_MAX;
volatile uint64_t x278 = 108171542072LLU;
volatile uint64_t x282 = 48LLU;
uint8_t x287 = 85U;
volatile uint8_t x289 = UINT8_MAX;
uint32_t x290 = UINT32_MAX;
int32_t x294 = -1;
int8_t x295 = -7;
volatile uint8_t x296 = 31U;
static volatile uint8_t x304 = 3U;
int8_t x316 = 29;
static uint64_t t77 = 14LLU;
int64_t x325 = -1LL;
uint64_t x328 = 8636049502619261612LLU;
volatile int8_t x350 = -1;
int16_t x352 = INT16_MIN;
int64_t x353 = -23458LL;
int32_t x358 = INT32_MIN;
int64_t x362 = INT64_MIN;
int64_t t89 = 1409445021882550849LL;
uint32_t x381 = 6U;
int64_t x390 = -1LL;
int16_t x392 = -3487;
int16_t x395 = INT16_MAX;
int32_t t93 = -738;
static uint16_t x397 = 0U;
uint32_t x398 = 6681503U;
int32_t x399 = INT32_MAX;
int32_t x406 = INT32_MAX;
volatile int8_t x417 = -38;


void f0(void) {
	volatile uint64_t x1 = 22041782LLU;
	uint8_t x2 = UINT8_MAX;
	volatile int32_t x3 = INT32_MAX;

	t0 = (((x1==x2)^x3)/x4);

	if (t0 != -16777215) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static uint16_t x7 = UINT16_MAX;
	static int64_t x8 = 31374456LL;
	int64_t t1 = 192440193726LL;

	t1 = (((x5==x6)^x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static uint16_t x10 = 0U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -123;

	t2 = (((x9==x10)^x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	static uint64_t x16 = 22461485LLU;
	uint64_t t3 = 55LLU;

	t3 = (((x13==x14)^x15)/x16);

	if (t3 != 821261108680LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MAX;
	volatile uint8_t x19 = 3U;
	static int64_t x20 = -1LL;

	t4 = (((x17==x18)^x19)/x20);

	if (t4 != -3LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 63U;
	int8_t x22 = 0;
	int32_t x23 = -1;
	int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = -1287;

	t5 = (((x21==x22)^x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	int8_t x26 = INT8_MIN;
	static uint16_t x27 = 16095U;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 19;

	t6 = (((x25==x26)^x27)/x28);

	if (t6 != 63) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MAX;
	volatile int8_t x32 = INT8_MIN;

	t7 = (((x29==x30)^x31)/x32);

	if (t7 != -16777215) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	uint8_t x34 = 27U;
	static int32_t x35 = -12;
	uint32_t t8 = 2042651U;

	t8 = (((x33==x34)^x35)/x36);

	if (t8 != 308613U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int32_t x38 = INT32_MAX;
	uint32_t x39 = 948520U;
	static int8_t x40 = -2;
	uint32_t t9 = 37U;

	t9 = (((x37==x38)^x39)/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 39;
	volatile int64_t x42 = -12287390094341LL;
	static volatile uint64_t x44 = UINT64_MAX;
	static volatile uint64_t t10 = 95851280LLU;

	t10 = (((x41==x42)^x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int16_t x47 = INT16_MIN;
	int16_t x48 = -437;
	volatile int32_t t11 = -136233034;

	t11 = (((x45==x46)^x47)/x48);

	if (t11 != 74) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 3295948128LL;
	int16_t x50 = -445;
	uint8_t x51 = 3U;
	int32_t t12 = -707745379;

	t12 = (((x49==x50)^x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 5042830LLU;
	static int32_t x54 = INT32_MIN;
	int32_t x55 = 1282736;
	uint64_t x56 = 17202582105LLU;
	uint64_t t13 = 1389246407LLU;

	t13 = (((x53==x54)^x55)/x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	int8_t x58 = -1;

	t14 = (((x57==x58)^x59)/x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int64_t x63 = INT64_MAX;
	int64_t x64 = INT64_MAX;
	static volatile int64_t t15 = 1430800LL;

	t15 = (((x61==x62)^x63)/x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	volatile int32_t x66 = -3482670;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = 2673654139LLU;
	static volatile uint64_t t16 = 495885908245721291LLU;

	t16 = (((x65==x66)^x67)/x68);

	if (t16 != 6899450383LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MIN;
	uint8_t x71 = 3U;
	uint64_t x72 = 2730232001155LLU;
	static volatile uint64_t t17 = 5LLU;

	t17 = (((x69==x70)^x71)/x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 1215950LL;
	static volatile uint64_t x74 = 1903726830567436115LLU;
	int64_t x76 = -1LL;

	t18 = (((x73==x74)^x75)/x76);

	if (t18 != -754096424084LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -6;
	uint16_t x78 = UINT16_MAX;
	static int32_t x79 = INT32_MAX;
	static int64_t x80 = INT64_MIN;
	volatile int64_t t19 = -117874786LL;

	t19 = (((x77==x78)^x79)/x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint16_t x82 = 1U;
	volatile uint64_t t20 = 247184389LLU;

	t20 = (((x81==x82)^x83)/x84);

	if (t20 != 4LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint8_t x86 = 3U;
	int64_t x88 = 10757448974581LL;
	int64_t t21 = -1LL;

	t21 = (((x85==x86)^x87)/x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	uint16_t x90 = 2117U;
	volatile int8_t x91 = -1;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -4;

	t22 = (((x89==x90)^x91)/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	volatile uint32_t t23 = 2U;

	t23 = (((x93==x94)^x95)/x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MAX;
	int8_t x99 = -1;
	static volatile int8_t x100 = 10;
	int32_t t24 = -2191;

	t24 = (((x97==x98)^x99)/x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 639LLU;
	uint64_t x102 = 516190669262LLU;
	uint64_t x104 = 33383980726857LLU;

	t25 = (((x101==x102)^x103)/x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -37;
	uint16_t x106 = UINT16_MAX;
	uint16_t x107 = UINT16_MAX;
	int32_t x108 = -1;
	int32_t t26 = -3;

	t26 = (((x105==x106)^x107)/x108);

	if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 22U;
	static volatile int16_t x110 = INT16_MIN;
	int32_t x111 = -1159;
	int32_t x112 = INT32_MIN;

	t27 = (((x109==x110)^x111)/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	uint8_t x114 = UINT8_MAX;
	volatile int8_t x115 = 14;
	static int32_t x116 = 13546666;
	int32_t t28 = 1589;

	t28 = (((x113==x114)^x115)/x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = -1;
	static volatile int16_t x119 = -1;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = 2773888LL;

	t29 = (((x117==x118)^x119)/x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 38160LLU;
	int32_t x122 = -510213;
	static int64_t x123 = INT64_MAX;
	int64_t t30 = -241LL;

	t30 = (((x121==x122)^x123)/x124);

	if (t30 != 2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	volatile uint8_t x127 = 49U;
	int64_t x128 = INT64_MIN;
	volatile int64_t t31 = 22584837174LL;

	t31 = (((x125==x126)^x127)/x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = 0U;
	int32_t x130 = -24;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MAX;
	int32_t t32 = -31089008;

	t32 = (((x129==x130)^x131)/x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 2U;
	volatile uint64_t x134 = 8441354193LLU;
	volatile int8_t x135 = -25;
	int16_t x136 = -1;
	static int32_t t33 = -1;

	t33 = (((x133==x134)^x135)/x136);

	if (t33 != 25) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MAX;
	int32_t t34 = 668;

	t34 = (((x137==x138)^x139)/x140);

	if (t34 != 364) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x142 = -57967695LL;
	static uint8_t x143 = UINT8_MAX;
	static volatile int32_t t35 = -928463;

	t35 = (((x141==x142)^x143)/x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 2U;
	int32_t x146 = 0;
	uint8_t x147 = 3U;
	int8_t x148 = INT8_MIN;

	t36 = (((x145==x146)^x147)/x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x150 = INT64_MIN;
	static uint8_t x151 = UINT8_MAX;
	uint32_t x152 = 7750699U;

	t37 = (((x149==x150)^x151)/x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static volatile int8_t x154 = -1;
	volatile uint16_t x155 = 736U;
	int64_t x156 = INT64_MAX;
	volatile int64_t t38 = 389428895921LL;

	t38 = (((x153==x154)^x155)/x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MAX;
	int8_t x158 = -1;
	int16_t x160 = INT16_MIN;
	int32_t t39 = -1;

	t39 = (((x157==x158)^x159)/x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	int8_t x162 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	int64_t t40 = 5020909370342LL;

	t40 = (((x161==x162)^x163)/x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 11994LL;
	int16_t x166 = 0;
	uint32_t x167 = UINT32_MAX;
	static volatile uint64_t t41 = 19728266253712LLU;

	t41 = (((x165==x166)^x167)/x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x170 = INT32_MAX;
	int64_t x171 = -1LL;

	t42 = (((x169==x170)^x171)/x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x173 = 3U;
	int16_t x174 = INT16_MAX;
	int64_t x175 = INT64_MIN;

	t43 = (((x173==x174)^x175)/x176);

	if (t43 != -281483566907400LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 3594212U;
	int32_t x178 = INT32_MIN;
	int8_t x179 = 26;
	static int64_t t44 = -188442624LL;

	t44 = (((x177==x178)^x179)/x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x182 = 13U;
	volatile uint64_t x183 = UINT64_MAX;

	t45 = (((x181==x182)^x183)/x184);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = -1;
	int8_t x187 = INT8_MIN;

	t46 = (((x185==x186)^x187)/x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MAX;
	uint64_t x190 = 5459313201211592LLU;
	uint16_t x191 = 28U;
	uint8_t x192 = 4U;

	t47 = (((x189==x190)^x191)/x192);

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = 28047U;
	uint32_t x195 = UINT32_MAX;
	static int32_t x196 = INT32_MIN;
	uint32_t t48 = 14U;

	t48 = (((x193==x194)^x195)/x196);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	volatile int16_t x198 = INT16_MAX;
	uint32_t x200 = 7454573U;
	uint32_t t49 = 3110840U;

	t49 = (((x197==x198)^x199)/x200);

	if (t49 != 288U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 42U;
	static uint16_t x202 = 85U;
	int8_t x203 = INT8_MIN;
	static volatile int32_t x204 = INT32_MIN;
	int32_t t50 = -1;

	t50 = (((x201==x202)^x203)/x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x206 = INT8_MIN;
	int16_t x208 = INT16_MAX;
	int64_t t51 = -11002607337LL;

	t51 = (((x205==x206)^x207)/x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 0U;
	static uint8_t x210 = 3U;
	uint8_t x211 = 7U;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 27;

	t52 = (((x209==x210)^x211)/x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	int64_t x215 = -1LL;
	volatile int64_t t53 = 8323493857053174LL;

	t53 = (((x213==x214)^x215)/x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -22964385LL;
	int64_t x218 = -63608592224830LL;
	uint64_t x219 = UINT64_MAX;
	static volatile uint16_t x220 = 1U;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (((x217==x218)^x219)/x220);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = 2269;
	int16_t x227 = -1;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t55 = 104853LLU;

	t55 = (((x225==x226)^x227)/x228);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -780585LL;
	int64_t x230 = INT64_MIN;
	uint8_t x231 = UINT8_MAX;
	int64_t x232 = 78355LL;

	t56 = (((x229==x230)^x231)/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = UINT8_MAX;
	static volatile uint64_t t57 = 23125LLU;

	t57 = (((x233==x234)^x235)/x236);

	if (t57 != 16225887LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x237 = -1;
	int64_t x239 = INT64_MIN;
	static uint64_t x240 = 704443LLU;

	t58 = (((x237==x238)^x239)/x240);

	if (t58 != 13093141725951LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x242 = 0U;
	int16_t x243 = INT16_MAX;
	static uint32_t x244 = 16469U;
	volatile uint32_t t59 = 46972909U;

	t59 = (((x241==x242)^x243)/x244);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x245 = 502U;
	volatile int32_t x246 = INT32_MIN;
	static int8_t x247 = 7;
	volatile int8_t x248 = -1;
	int32_t t60 = 603312;

	t60 = (((x245==x246)^x247)/x248);

	if (t60 != -7) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = UINT32_MAX;
	static int32_t x250 = INT32_MIN;
	volatile int32_t t61 = -32436;

	t61 = (((x249==x250)^x251)/x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 397U;
	uint32_t x255 = 6U;
	uint64_t x256 = UINT64_MAX;
	static volatile uint64_t t62 = 65720155440549LLU;

	t62 = (((x253==x254)^x255)/x256);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = UINT32_MAX;
	uint8_t x258 = 4U;
	int16_t x259 = INT16_MAX;
	volatile int32_t t63 = 2510;

	t63 = (((x257==x258)^x259)/x260);

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x261 = INT32_MAX;
	static volatile int8_t x262 = -1;
	int16_t x263 = 1;
	static int64_t x264 = -7LL;
	volatile int64_t t64 = 45970383600LL;

	t64 = (((x261==x262)^x263)/x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x267 = -133028613;
	volatile int32_t x268 = INT32_MIN;
	int32_t t65 = 6469;

	t65 = (((x265==x266)^x267)/x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x269 = INT8_MAX;
	volatile uint32_t x270 = UINT32_MAX;
	int16_t x271 = INT16_MIN;

	t66 = (((x269==x270)^x271)/x272);

	if (t66 != 405U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x273 = INT8_MIN;
	volatile int32_t x274 = 0;
	int16_t x276 = -1;
	volatile int32_t t67 = -32281;

	t67 = (((x273==x274)^x275)/x276);

	if (t67 != -65535) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = -53LL;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 254459LLU;
	volatile uint64_t t68 = 1782026102885278311LLU;

	t68 = (((x277==x278)^x279)/x280);

	if (t68 != 36246986889262LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x281 = INT16_MAX;
	int8_t x283 = INT8_MIN;
	static int8_t x284 = -12;
	static volatile int32_t t69 = 45740183;

	t69 = (((x281==x282)^x283)/x284);

	if (t69 != 10) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x285 = 16U;
	int16_t x286 = INT16_MIN;
	int16_t x288 = 3;
	volatile int32_t t70 = -489527;

	t70 = (((x285==x286)^x287)/x288);

	if (t70 != 28) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x291 = 0;
	int8_t x292 = -24;
	int32_t t71 = -124220;

	t71 = (((x289==x290)^x291)/x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = INT64_MAX;
	volatile int32_t t72 = -95908;

	t72 = (((x293==x294)^x295)/x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MIN;
	static int32_t x303 = INT32_MIN;
	static volatile int32_t t73 = 8697327;

	t73 = (((x301==x302)^x303)/x304);

	if (t73 != -715827882) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = 2U;
	static uint64_t x306 = UINT64_MAX;
	static volatile int64_t x307 = -76878209830LL;
	int64_t x308 = -546782315662094LL;
	int64_t t74 = 0LL;

	t74 = (((x305==x306)^x307)/x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = UINT8_MAX;
	uint64_t x310 = 2799862525464742560LLU;
	int16_t x311 = INT16_MAX;
	uint64_t x312 = UINT64_MAX;
	volatile uint64_t t75 = 974996342LLU;

	t75 = (((x309==x310)^x311)/x312);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = INT64_MAX;
	int8_t x314 = -3;
	int32_t x315 = -1;
	int32_t t76 = 2;

	t76 = (((x313==x314)^x315)/x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x317 = 45U;
	int8_t x318 = -1;
	uint64_t x319 = 136395977435LLU;
	static uint32_t x320 = UINT32_MAX;

	t77 = (((x317==x318)^x319)/x320);

	if (t77 != 31LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = 40;
	int64_t x323 = INT64_MAX;
	int16_t x324 = -6978;
	volatile int64_t t78 = -9539563996270701LL;

	t78 = (((x321==x322)^x323)/x324);

	if (t78 != -1321778738442931LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x326 = 2U;
	uint16_t x327 = 6U;
	volatile uint64_t t79 = 47902304LLU;

	t79 = (((x325==x326)^x327)/x328);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MIN;
	uint8_t x331 = 93U;
	int16_t x332 = -1;
	int32_t t80 = 15881;

	t80 = (((x329==x330)^x331)/x332);

	if (t80 != -93) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x333 = -10;
	int8_t x334 = -1;
	int8_t x335 = INT8_MAX;
	uint64_t x336 = 5596604LLU;
	uint64_t t81 = 14435LLU;

	t81 = (((x333==x334)^x335)/x336);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x341 = 0U;
	static volatile int8_t x342 = INT8_MIN;
	volatile int16_t x343 = INT16_MAX;
	static int16_t x344 = 992;
	volatile int32_t t82 = 276;

	t82 = (((x341==x342)^x343)/x344);

	if (t82 != 33) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x345 = 264627790LLU;
	int32_t x346 = INT32_MAX;
	volatile int32_t x347 = -1;
	int8_t x348 = INT8_MIN;
	int32_t t83 = 54692;

	t83 = (((x345==x346)^x347)/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x349 = 0;
	int32_t x351 = INT32_MIN;
	int32_t t84 = 495;

	t84 = (((x349==x350)^x351)/x352);

	if (t84 != 65536) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x354 = 1U;
	int8_t x355 = 8;
	uint32_t x356 = 2749U;
	volatile uint32_t t85 = 1547715585U;

	t85 = (((x353==x354)^x355)/x356);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = -1776;
	int8_t x359 = INT8_MAX;
	uint32_t x360 = 254U;
	volatile uint32_t t86 = 1289800U;

	t86 = (((x357==x358)^x359)/x360);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = UINT32_MAX;
	int8_t x363 = INT8_MIN;
	static uint64_t x364 = 31305LLU;
	static uint64_t t87 = 26750597073LLU;

	t87 = (((x361==x362)^x363)/x364);

	if (t87 != 589258715020269LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = -478;
	volatile int64_t x371 = INT64_MAX;
	volatile int64_t x372 = INT64_MIN;
	int64_t t88 = -80910239069LL;

	t88 = (((x369==x370)^x371)/x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x377 = 10U;
	static uint64_t x378 = UINT64_MAX;
	volatile int64_t x379 = 322688836712LL;
	int16_t x380 = INT16_MIN;

	t89 = (((x377==x378)^x379)/x380);

	if (t89 != -9847681LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x382 = INT32_MIN;
	volatile int32_t x383 = -46;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t90 = 237711LLU;

	t90 = (((x381==x382)^x383)/x384);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = -4930;
	int8_t x386 = INT8_MAX;
	static int32_t x387 = INT32_MIN;
	static uint8_t x388 = UINT8_MAX;
	volatile int32_t t91 = 58;

	t91 = (((x385==x386)^x387)/x388);

	if (t91 != -8421504) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MAX;
	uint64_t x391 = 14763178463052281LLU;
	static volatile uint64_t t92 = 36518116637LLU;

	t92 = (((x389==x390)^x391)/x392);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x393 = INT16_MIN;
	int32_t x394 = -2;
	int32_t x396 = INT32_MIN;

	t93 = (((x393==x394)^x395)/x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x400 = 2U;
	int32_t t94 = -7547;

	t94 = (((x397==x398)^x399)/x400);

	if (t94 != 1073741823) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 4U;
	uint32_t x402 = UINT32_MAX;
	int8_t x403 = -1;
	static int32_t x404 = -1;
	int32_t t95 = 5574;

	t95 = (((x401==x402)^x403)/x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x405 = 21453U;
	int64_t x407 = INT64_MIN;
	uint16_t x408 = 6793U;
	static int64_t t96 = 31325702LL;

	t96 = (((x405==x406)^x407)/x408);

	if (t96 != -1357775951251991LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 7U;
	volatile uint64_t x410 = 1LLU;
	static uint16_t x411 = 128U;
	int32_t x412 = INT32_MAX;
	int32_t t97 = 155599331;

	t97 = (((x409==x410)^x411)/x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = INT16_MAX;
	uint8_t x414 = UINT8_MAX;
	int32_t x415 = -1;
	uint32_t x416 = 279786U;
	uint32_t t98 = 1U;

	t98 = (((x413==x414)^x415)/x416);

	if (t98 != 15350U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x418 = -129917557565219291LL;
	static int16_t x419 = -2037;
	uint16_t x420 = 118U;
	int32_t t99 = -1;

	t99 = (((x417==x418)^x419)/x420);

	if (t99 != -17) { NG(); } else { ; }
	
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

