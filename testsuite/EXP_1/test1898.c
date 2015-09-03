#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MIN;
static int16_t x10 = -1;
static volatile int16_t x11 = INT16_MIN;
int32_t t2 = -2576;
static int16_t x14 = INT16_MIN;
uint64_t x16 = 318645833793306074LLU;
volatile uint64_t t3 = 650444757LLU;
int8_t x19 = 2;
static int8_t x28 = -39;
static int8_t x29 = INT8_MIN;
uint32_t x30 = 22U;
int8_t x37 = -1;
int16_t x42 = INT16_MAX;
int32_t x43 = 733903786;
volatile uint32_t t10 = 1886U;
static int16_t x49 = -48;
static volatile uint64_t x53 = 58950965531478979LLU;
volatile int8_t x57 = -1;
int64_t x63 = -1LL;
int64_t x68 = 46LL;
uint64_t x70 = 965763304040LLU;
volatile int16_t x71 = -1;
uint16_t x79 = UINT16_MAX;
int32_t x85 = INT32_MIN;
int16_t x88 = -13;
int64_t t22 = -8LL;
int16_t x108 = INT16_MIN;
uint64_t x109 = 104182954455680479LLU;
uint16_t x111 = 36U;
int16_t x113 = INT16_MIN;
volatile uint64_t x115 = 2LLU;
uint64_t x119 = 69706994822109953LLU;
uint8_t x126 = 46U;
static int64_t t30 = 718LL;
uint8_t x136 = 116U;
uint64_t x143 = 2113909906LLU;
int32_t x145 = INT32_MIN;
uint8_t x147 = 5U;
int64_t x148 = 139610628416024LL;
static int16_t x151 = -1;
int32_t x152 = INT32_MIN;
uint64_t x153 = UINT64_MAX;
volatile uint32_t x169 = 6609784U;
uint16_t x170 = 9096U;
int8_t x181 = 25;
int32_t t43 = 234004;
int32_t x197 = INT32_MIN;
int32_t x199 = -18;
volatile int16_t x201 = -1;
int64_t t45 = -15663267161194LL;
int16_t x207 = -1;
uint32_t x209 = 42233856U;
static uint8_t x219 = 1U;
int16_t x220 = INT16_MAX;
int16_t x222 = -226;
volatile int32_t x225 = INT32_MIN;
static int32_t x228 = -1;
int8_t x233 = INT8_MIN;
int32_t x236 = 15700;
static uint64_t t53 = 38394273797430808LLU;
int16_t x246 = INT16_MAX;
uint8_t x248 = 1U;
uint16_t x255 = 2550U;
uint8_t x258 = UINT8_MAX;
int8_t x262 = INT8_MIN;
int8_t x276 = INT8_MIN;
uint32_t x288 = 994409676U;
uint32_t x290 = 148807U;
static uint8_t x292 = 47U;
static uint32_t x296 = UINT32_MAX;
volatile uint32_t t67 = 1221188053U;
int32_t x302 = -1;
int8_t x303 = -53;
int16_t x304 = INT16_MAX;
int8_t x307 = 2;
uint32_t x310 = 2106313175U;
uint64_t t72 = 13074LLU;
static volatile int8_t x321 = INT8_MIN;
static uint16_t x322 = UINT16_MAX;
int64_t x341 = 10358473LL;
static uint16_t x353 = UINT16_MAX;
int16_t x361 = 26;
static uint8_t x363 = UINT8_MAX;
int8_t x367 = 0;
int64_t x370 = 412144951408885182LL;
volatile int8_t x376 = INT8_MIN;
uint8_t x383 = 1U;
static volatile uint32_t t83 = 47673U;
int64_t x387 = -1LL;
uint8_t x388 = UINT8_MAX;
volatile int64_t t84 = 2028315219301LL;
int8_t x391 = INT8_MIN;
uint8_t x394 = 0U;
volatile int32_t x396 = INT32_MIN;
int32_t x408 = INT32_MAX;
int16_t x415 = -328;
static uint64_t x416 = UINT64_MAX;
uint32_t x419 = 44522U;
volatile uint64_t t90 = 37999556992782LLU;
int8_t x425 = INT8_MIN;
uint16_t x427 = 1U;
static int32_t x442 = -1;
uint64_t t96 = 19458994LLU;
static int16_t x450 = -1;
volatile uint64_t x455 = 124208LLU;
int8_t x456 = INT8_MIN;


void f0(void) {
	int32_t x1 = -94;
	uint16_t x2 = UINT16_MAX;
	int8_t x3 = INT8_MIN;
	volatile uint64_t x4 = 16539014503652427LLU;
	uint64_t t0 = 30535917665755867LLU;

	t0 = (((x1|x2)*x3)^x4);

	if (t0 != 16539014503652555LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 3660026181242558LL;
	uint8_t x6 = 3U;
	static int16_t x7 = -2127;
	volatile int64_t t1 = -9713933212920LL;

	t1 = (((x5|x6)*x7)^x8);

	if (t1 != 7784875687502922895LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	static uint8_t x12 = 3U;

	t2 = (((x9|x10)*x11)^x12);

	if (t2 != 32771) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint64_t x15 = UINT64_MAX;

	t3 = (((x13|x14)*x15)^x16);

	if (t3 != 318645833793306075LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	volatile int16_t x18 = INT16_MIN;
	volatile int32_t x20 = -1;
	int32_t t4 = 3997;

	t4 = (((x17|x18)*x19)^x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MIN;
	volatile int64_t x23 = -4LL;
	int32_t x24 = 76;
	int64_t t5 = -24854530040LL;

	t5 = (((x21|x22)*x23)^x24);

	if (t5 != 8589934668LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	volatile int32_t x26 = -460641;
	uint8_t x27 = UINT8_MAX;
	volatile int32_t t6 = 1381;

	t6 = (((x25|x26)*x27)^x28);

	if (t6 != 481720) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = -1;
	volatile uint8_t x32 = 115U;
	uint32_t t7 = 1726U;

	t7 = (((x29|x30)*x31)^x32);

	if (t7 != 25U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static uint64_t x34 = 1577312747948257LLU;
	volatile int32_t x35 = INT32_MIN;
	volatile int16_t x36 = -1;
	volatile uint64_t t8 = 4042918029LLU;

	t8 = (((x33|x34)*x35)^x36);

	if (t8 != 16070326095315992575LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	static uint32_t x39 = 2U;
	int32_t x40 = -6;
	volatile uint32_t t9 = 40262210U;

	t9 = (((x37|x38)*x39)^x40);

	if (t9 != 4U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	volatile uint8_t x44 = 3U;

	t10 = (((x41|x42)*x43)^x44);

	if (t10 != 3561063509U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MAX;
	uint64_t x46 = 10346853707002LLU;
	int32_t x47 = -1955;
	int32_t x48 = 145468;
	volatile uint64_t t11 = 1016382551020LLU;

	t11 = (((x45|x46)*x47)^x48);

	if (t11 != 18426515974670958495LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = -1LL;
	int64_t x51 = -8069LL;
	int32_t x52 = INT32_MIN;
	int64_t t12 = -3634513709294265322LL;

	t12 = (((x49|x50)*x51)^x52);

	if (t12 != -2147475579LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	uint64_t x55 = 1458401551415003241LLU;
	static volatile int64_t x56 = INT64_MIN;
	volatile uint64_t t13 = 12LLU;

	t13 = (((x53|x54)*x55)^x56);

	if (t13 != 12494597769087336187LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x58 = UINT8_MAX;
	static uint64_t x59 = 289453LLU;
	static int16_t x60 = INT16_MIN;
	uint64_t t14 = 4676093LLU;

	t14 = (((x57|x58)*x59)^x60);

	if (t14 != 267603LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	volatile int32_t x62 = INT32_MAX;
	int32_t x64 = -1;
	volatile int64_t t15 = 476878444LL;

	t15 = (((x61|x62)*x63)^x64);

	if (t15 != 2147483646LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 154967LLU;
	volatile int64_t x66 = -1LL;
	int32_t x67 = -114953051;
	uint64_t t16 = 99403334186LLU;

	t16 = (((x65|x66)*x67)^x68);

	if (t16 != 114953077LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -43;
	uint16_t x72 = UINT16_MAX;
	uint64_t t17 = 3066793LLU;

	t17 = (((x69|x70)*x71)^x72);

	if (t17 != 65532LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 8594U;
	volatile int8_t x74 = -1;
	static uint64_t x75 = 287642994992475LLU;
	int16_t x76 = INT16_MAX;
	uint64_t t18 = 427721763LLU;

	t18 = (((x73|x74)*x75)^x76);

	if (t18 != 18446456430714578266LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 1U;
	uint8_t x78 = 12U;
	int64_t x80 = -67998594917LL;
	static volatile int64_t t19 = -561425447405310LL;

	t19 = (((x77|x78)*x79)^x80);

	if (t19 != -67998369944LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = 1;
	int8_t x83 = INT8_MAX;
	volatile int64_t x84 = -1LL;
	volatile int64_t t20 = -41987284261LL;

	t20 = (((x81|x82)*x83)^x84);

	if (t20 != 16128LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = 686583LLU;
	int16_t x87 = INT16_MIN;
	uint64_t t21 = 7271828353517174LLU;

	t21 = (((x85|x86)*x87)^x88);

	if (t21 != 18446673727463325683LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int16_t x90 = 0;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MAX;

	t22 = (((x89|x90)*x91)^x92);

	if (t22 != 9223372036850581503LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int64_t x94 = -191493334LL;
	int32_t x95 = -1;
	static int16_t x96 = INT16_MIN;
	volatile int64_t t23 = -34320370206891LL;

	t23 = (((x93|x94)*x95)^x96);

	if (t23 != -191466495LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 1U;
	static int16_t x98 = 202;
	static volatile uint16_t x99 = 699U;
	int8_t x100 = 5;
	volatile int32_t t24 = -1;

	t24 = (((x97|x98)*x99)^x100);

	if (t24 != 141900) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	int64_t x106 = -1LL;
	uint64_t x107 = 373039162058867LLU;
	volatile uint64_t t25 = 11228LLU;

	t25 = (((x105|x106)*x107)^x108);

	if (t25 != 373039162038157LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = 16;
	static int8_t x112 = INT8_MIN;
	volatile uint64_t t26 = 966917974749835629LLU;

	t26 = (((x109|x110)*x111)^x112);

	if (t26 != 14696157713305054428LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x114 = UINT8_MAX;
	uint8_t x116 = 0U;
	uint64_t t27 = 6438LLU;

	t27 = (((x113|x114)*x115)^x116);

	if (t27 != 18446744073709486590LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 196LLU;
	int16_t x118 = 3342;
	int8_t x120 = -29;
	uint64_t t28 = 3730LLU;

	t28 = (((x117|x118)*x119)^x120);

	if (t28 != 11909897330597148717LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 199403U;
	int8_t x127 = INT8_MAX;
	int8_t x128 = -3;
	volatile uint32_t t29 = 1U;

	t29 = (((x125|x126)*x127)^x128);

	if (t29 != 4269642604U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = 2;
	int16_t x130 = INT16_MIN;
	int64_t x131 = -1LL;
	volatile int32_t x132 = -1;

	t30 = (((x129|x130)*x131)^x132);

	if (t30 != -32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x133 = 0U;
	uint8_t x134 = 57U;
	int64_t x135 = -1LL;
	static int64_t t31 = 1048685551725995LL;

	t31 = (((x133|x134)*x135)^x136);

	if (t31 != -77LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 25U;
	int8_t x138 = 5;
	int64_t x139 = -89693115LL;
	volatile uint64_t x140 = 622613286968087LLU;
	uint64_t t32 = 134099395812420LLU;

	t32 = (((x137|x138)*x139)^x140);

	if (t32 != 18446121458460197062LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = -1LL;
	uint64_t x144 = 11202592385873LLU;
	volatile uint64_t t33 = 115854658265743831LLU;

	t33 = (((x141|x142)*x143)^x144);

	if (t33 != 18446732871571497023LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x146 = INT8_MIN;
	volatile int64_t t34 = -128010927503463004LL;

	t34 = (((x145|x146)*x147)^x148);

	if (t34 != -139610628415592LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x149 = 86149354800776LLU;
	uint8_t x150 = 1U;
	static uint64_t t35 = 1951591LLU;

	t35 = (((x149|x150)*x151)^x152);

	if (t35 != 86149700729207LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x154 = -30552;
	int8_t x155 = INT8_MIN;
	volatile uint16_t x156 = 23U;
	uint64_t t36 = 1787474206476125000LLU;

	t36 = (((x153|x154)*x155)^x156);

	if (t36 != 151LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -61676;
	volatile int8_t x158 = INT8_MIN;
	static uint8_t x159 = 5U;
	volatile int16_t x160 = 1534;
	static volatile int32_t t37 = -24513468;

	t37 = (((x157|x158)*x159)^x160);

	if (t37 != -2022) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = -7943380;
	int8_t x162 = 13;
	static int8_t x163 = INT8_MIN;
	static uint64_t x164 = 8LLU;
	volatile uint64_t t38 = 296834044476592LLU;

	t38 = (((x161|x162)*x163)^x164);

	if (t38 != 1016752520LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x171 = -1;
	int64_t x172 = INT64_MIN;
	volatile int64_t t39 = 12LL;

	t39 = (((x169|x170)*x171)^x172);

	if (t39 != -9223372032566426616LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x173 = INT32_MIN;
	int32_t x174 = -1;
	int8_t x175 = 29;
	uint8_t x176 = UINT8_MAX;
	int32_t t40 = -13;

	t40 = (((x173|x174)*x175)^x176);

	if (t40 != -228) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = -6;
	static int32_t x178 = 1158;
	uint16_t x179 = 895U;
	int16_t x180 = INT16_MAX;
	volatile int32_t t41 = -1135;

	t41 = (((x177|x178)*x179)^x180);

	if (t41 != -30979) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x182 = INT8_MIN;
	static int16_t x183 = INT16_MAX;
	uint8_t x184 = 1U;
	int32_t t42 = -62031;

	t42 = (((x181|x182)*x183)^x184);

	if (t42 != -3375002) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -1;
	int8_t x190 = INT8_MAX;
	volatile uint8_t x191 = 0U;
	static int8_t x192 = -1;

	t43 = (((x189|x190)*x191)^x192);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x198 = -1LL;
	volatile uint32_t x200 = UINT32_MAX;
	volatile int64_t t44 = -166648892469787LL;

	t44 = (((x197|x198)*x199)^x200);

	if (t44 != 4294967277LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x202 = UINT32_MAX;
	uint32_t x203 = 2621U;
	int64_t x204 = 1007659281098974255LL;

	t45 = (((x201|x202)*x203)^x204);

	if (t45 != 1007659285376160236LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x205 = 49;
	uint32_t x206 = 6566039U;
	uint16_t x208 = 7124U;
	volatile uint32_t t46 = 183425U;

	t46 = (((x205|x206)*x207)^x208);

	if (t46 != 4288402589U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x210 = -1;
	int8_t x211 = INT8_MAX;
	static uint32_t x212 = 2U;
	static volatile uint32_t t47 = 79U;

	t47 = (((x209|x210)*x211)^x212);

	if (t47 != 4294967171U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = UINT64_MAX;
	static int16_t x214 = INT16_MAX;
	int64_t x215 = -134LL;
	uint8_t x216 = UINT8_MAX;
	uint64_t t48 = 448783791419LLU;

	t48 = (((x213|x214)*x215)^x216);

	if (t48 != 121LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = INT64_MIN;
	static uint64_t x218 = 242LLU;
	volatile uint64_t t49 = 26578056292302LLU;

	t49 = (((x217|x218)*x219)^x220);

	if (t49 != 9223372036854808333LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x221 = UINT8_MAX;
	static volatile int16_t x223 = -5;
	volatile int8_t x224 = 1;
	int32_t t50 = -11;

	t50 = (((x221|x222)*x223)^x224);

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x226 = INT32_MAX;
	static uint16_t x227 = 10424U;
	static int32_t t51 = -38;

	t51 = (((x225|x226)*x227)^x228);

	if (t51 != 10423) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = 1;
	int64_t x230 = -1LL;
	static int64_t x231 = 4957764617674LL;
	int16_t x232 = -1821;
	int64_t t52 = -1740LL;

	t52 = (((x229|x230)*x231)^x232);

	if (t52 != 4957764616917LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x234 = -1LL;
	uint64_t x235 = UINT64_MAX;

	t53 = (((x233|x234)*x235)^x236);

	if (t53 != 15701LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = -1;
	static uint8_t x238 = UINT8_MAX;
	uint16_t x239 = UINT16_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t54 = 232609148679LLU;

	t54 = (((x237|x238)*x239)^x240);

	if (t54 != 65534LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MAX;
	static volatile int32_t x244 = -1;
	static volatile uint64_t t55 = 1681442744575LLU;

	t55 = (((x241|x242)*x243)^x244);

	if (t55 != 126LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x245 = INT8_MIN;
	volatile int16_t x247 = INT16_MIN;
	int32_t t56 = -3;

	t56 = (((x245|x246)*x247)^x248);

	if (t56 != 32769) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x253 = -1;
	uint16_t x254 = 12U;
	int32_t x256 = INT32_MIN;
	volatile int32_t t57 = 29;

	t57 = (((x253|x254)*x255)^x256);

	if (t57 != 2147481098) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x257 = 19;
	uint64_t x259 = 6LLU;
	int64_t x260 = -10LL;
	uint64_t t58 = 3409734LLU;

	t58 = (((x257|x258)*x259)^x260);

	if (t58 != 18446744073709550092LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x261 = 1812689091LLU;
	static int32_t x263 = INT32_MAX;
	int64_t x264 = -379644312LL;
	uint64_t t59 = 21772390LLU;

	t59 = (((x261|x262)*x263)^x264);

	if (t59 != 130616858197LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x265 = 4736U;
	uint32_t x266 = UINT32_MAX;
	static volatile int32_t x267 = 308;
	volatile uint8_t x268 = 61U;
	volatile uint32_t t60 = 119523U;

	t60 = (((x265|x266)*x267)^x268);

	if (t60 != 4294967025U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -1;
	int32_t x270 = -302307;
	static int64_t x271 = -113422473134656320LL;
	volatile int8_t x272 = 1;
	volatile int64_t t61 = -2172971411349702378LL;

	t61 = (((x269|x270)*x271)^x272);

	if (t61 != 113422473134656321LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = INT16_MIN;
	static uint64_t x274 = 3809706844LLU;
	uint64_t x275 = 2718095812270210LLU;
	volatile uint64_t t62 = 2639667LLU;

	t62 = (((x273|x274)*x275)^x276);

	if (t62 != 12942024883079654200LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x277 = 104U;
	uint64_t x278 = 6640LLU;
	int8_t x279 = -1;
	int64_t x280 = INT64_MAX;
	static uint64_t t63 = 6691344109969671974LLU;

	t63 = (((x277|x278)*x279)^x280);

	if (t63 != 9223372036854782455LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = -61LL;
	int64_t x282 = 34171777142047LL;
	int16_t x283 = INT16_MIN;
	static int64_t x284 = 52743233243562617LL;
	volatile int64_t t64 = 46375488LL;

	t64 = (((x281|x282)*x283)^x284);

	if (t64 != 52743233244578425LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x285 = 3585766U;
	uint8_t x286 = 9U;
	volatile uint16_t x287 = 0U;
	uint32_t t65 = 2065786U;

	t65 = (((x285|x286)*x287)^x288);

	if (t65 != 994409676U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x289 = -1LL;
	uint32_t x291 = 476928196U;
	volatile int64_t t66 = 1974LL;

	t66 = (((x289|x290)*x291)^x292);

	if (t66 != -476928237LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = UINT8_MAX;
	volatile int8_t x294 = -1;
	int32_t x295 = -3206;

	t67 = (((x293|x294)*x295)^x296);

	if (t67 != 4294964089U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -1;
	int64_t x298 = INT64_MIN;
	static int16_t x299 = -5971;
	uint16_t x300 = UINT16_MAX;
	static volatile int64_t t68 = -5701LL;

	t68 = (((x297|x298)*x299)^x300);

	if (t68 != 59564LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = 16505565595495LL;
	volatile int64_t t69 = 1088472544754272LL;

	t69 = (((x301|x302)*x303)^x304);

	if (t69 != 32714LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = -1;
	static int64_t x306 = 437177322LL;
	static int16_t x308 = INT16_MAX;
	static int64_t t70 = -18630308LL;

	t70 = (((x305|x306)*x307)^x308);

	if (t70 != -32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = INT64_MAX;
	uint64_t x311 = 1208614LLU;
	volatile uint16_t x312 = UINT16_MAX;
	volatile uint64_t t71 = 15036387148001LLU;

	t71 = (((x309|x310)*x311)^x312);

	if (t71 != 18446744073708335397LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x317 = -1;
	uint64_t x318 = 0LLU;
	static volatile int8_t x319 = -1;
	int32_t x320 = 24474176;

	t72 = (((x317|x318)*x319)^x320);

	if (t72 != 24474177LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x323 = INT16_MAX;
	uint64_t x324 = 4100323129026LLU;
	volatile uint64_t t73 = 8251LLU;

	t73 = (((x321|x322)*x323)^x324);

	if (t73 != 18446739973386417859LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x337 = INT16_MIN;
	int8_t x338 = 1;
	volatile uint8_t x339 = 2U;
	volatile int16_t x340 = INT16_MAX;
	volatile int32_t t74 = -14109372;

	t74 = (((x337|x338)*x339)^x340);

	if (t74 != -32771) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x342 = -1;
	int64_t x343 = 3LL;
	int16_t x344 = 1;
	volatile int64_t t75 = -2874165143512LL;

	t75 = (((x341|x342)*x343)^x344);

	if (t75 != -4LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x354 = -1;
	int8_t x355 = -41;
	int8_t x356 = INT8_MIN;
	int32_t t76 = 4698;

	t76 = (((x353|x354)*x355)^x356);

	if (t76 != -87) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x357 = 2996U;
	uint8_t x358 = UINT8_MAX;
	volatile int16_t x359 = INT16_MIN;
	int32_t x360 = -1;
	volatile int32_t t77 = 6;

	t77 = (((x357|x358)*x359)^x360);

	if (t77 != 100630527) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x362 = -7151;
	int16_t x364 = INT16_MAX;
	volatile int32_t t78 = -76474;

	t78 = (((x361|x362)*x363)^x364);

	if (t78 != -1816294) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x365 = 53U;
	static int8_t x366 = INT8_MIN;
	static uint64_t x368 = UINT64_MAX;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (((x365|x366)*x367)^x368);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = -5922367;
	int32_t x371 = -1;
	uint16_t x372 = 6314U;
	int64_t t80 = -103347607480320579LL;

	t80 = (((x369|x370)*x371)^x372);

	if (t80 != 4725419LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x373 = INT8_MIN;
	volatile uint32_t x374 = UINT32_MAX;
	uint8_t x375 = 37U;
	uint32_t t81 = 0U;

	t81 = (((x373|x374)*x375)^x376);

	if (t81 != 91U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = INT8_MIN;
	volatile int32_t x378 = INT32_MAX;
	volatile uint16_t x379 = 3U;
	volatile uint32_t x380 = 680U;
	uint32_t t82 = 6U;

	t82 = (((x377|x378)*x379)^x380);

	if (t82 != 4294966613U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x381 = INT16_MIN;
	static int8_t x382 = -29;
	uint32_t x384 = UINT32_MAX;

	t83 = (((x381|x382)*x383)^x384);

	if (t83 != 28U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x385 = UINT8_MAX;
	volatile int32_t x386 = INT32_MIN;

	t84 = (((x385|x386)*x387)^x388);

	if (t84 != 2147483646LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = 322889495U;
	int16_t x390 = INT16_MIN;
	int64_t x392 = -13437064LL;
	static volatile int64_t t85 = -95268169305309LL;

	t85 = (((x389|x390)*x391)^x392);

	if (t85 != -12680200LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x393 = -1;
	static uint16_t x395 = 1U;
	int32_t t86 = INT32_MAX;

	t86 = (((x393|x394)*x395)^x396);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x401 = 31889U;
	int8_t x402 = INT8_MIN;
	int32_t x403 = 1;
	int8_t x404 = INT8_MAX;
	uint32_t t87 = 74476608U;

	t87 = (((x401|x402)*x403)^x404);

	if (t87 != 4294967278U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x405 = UINT16_MAX;
	static uint16_t x406 = 0U;
	int8_t x407 = INT8_MAX;
	int32_t t88 = 26980;

	t88 = (((x405|x406)*x407)^x408);

	if (t88 != 2139160702) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x413 = 14210;
	static int16_t x414 = 1;
	uint64_t t89 = 24444599LLU;

	t89 = (((x413|x414)*x415)^x416);

	if (t89 != 4661207LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x417 = 2LLU;
	int32_t x418 = -1;
	uint32_t x420 = UINT32_MAX;

	t90 = (((x417|x418)*x419)^x420);

	if (t90 != 18446744069414628841LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = -1;
	int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	int64_t x424 = -290774568LL;
	volatile int64_t t91 = 1901458370562LL;

	t91 = (((x421|x422)*x423)^x424);

	if (t91 != -290741800LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x426 = INT64_MIN;
	static volatile int8_t x428 = -43;
	int64_t t92 = 1231533598140064513LL;

	t92 = (((x425|x426)*x427)^x428);

	if (t92 != 85LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x429 = 28U;
	int64_t x430 = -1LL;
	int16_t x431 = -177;
	int8_t x432 = INT8_MIN;
	int64_t t93 = 2LL;

	t93 = (((x429|x430)*x431)^x432);

	if (t93 != -207LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = -1;
	int16_t x434 = INT16_MIN;
	volatile uint8_t x435 = 12U;
	uint16_t x436 = UINT16_MAX;
	static int32_t t94 = -687647;

	t94 = (((x433|x434)*x435)^x436);

	if (t94 != -65525) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x437 = INT32_MAX;
	uint64_t x438 = UINT64_MAX;
	int32_t x439 = -1;
	volatile int16_t x440 = 18;
	static uint64_t t95 = 7787LLU;

	t95 = (((x437|x438)*x439)^x440);

	if (t95 != 19LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x441 = 52945039LLU;
	uint64_t x443 = UINT64_MAX;
	uint16_t x444 = 98U;

	t96 = (((x441|x442)*x443)^x444);

	if (t96 != 99LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = 15002;
	static int64_t x446 = -1LL;
	int16_t x447 = -148;
	uint32_t x448 = 463U;
	volatile int64_t t97 = 54710814LL;

	t97 = (((x445|x446)*x447)^x448);

	if (t97 != 347LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x449 = -40953979159570LL;
	uint32_t x451 = 2902123U;
	int32_t x452 = -1;
	volatile int64_t t98 = -500196231342854710LL;

	t98 = (((x449|x450)*x451)^x452);

	if (t98 != 2902122LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x453 = INT16_MAX;
	int16_t x454 = 19;
	volatile uint64_t t99 = 22251549LLU;

	t99 = (((x453|x454)*x455)^x456);

	if (t99 != 18446744069639628112LLU) { NG(); } else { ; }
	
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

