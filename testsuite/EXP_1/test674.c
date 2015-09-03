#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
int16_t x8 = 13639;
int8_t x13 = INT8_MIN;
volatile int8_t x14 = -1;
uint16_t x15 = UINT16_MAX;
static uint16_t x22 = 12U;
volatile uint16_t x28 = 371U;
int8_t x35 = -1;
volatile int32_t t8 = 52;
int16_t x38 = 3153;
int64_t x40 = INT64_MAX;
volatile int64_t t9 = 1LL;
int64_t x48 = -102789446LL;
int16_t x52 = -1;
volatile int32_t x64 = 165;
volatile int32_t x66 = INT32_MIN;
int8_t x82 = INT8_MIN;
int8_t x83 = -1;
volatile int64_t x94 = 169258327369LL;
int32_t x95 = 39;
uint64_t t23 = 143480782623LLU;
uint32_t x103 = UINT32_MAX;
volatile int64_t x124 = INT64_MIN;
int16_t x127 = INT16_MIN;
int8_t x140 = -1;
volatile uint64_t t33 = 164403722742715LLU;
volatile int64_t x153 = INT64_MIN;
int32_t x157 = INT32_MIN;
volatile int32_t x166 = 92;
int64_t x168 = 524372788632442980LL;
static uint64_t x169 = 546500440440110491LLU;
uint16_t x188 = UINT16_MAX;
int64_t x194 = INT64_MIN;
volatile uint8_t x198 = 126U;
static volatile uint64_t x202 = 42096387LLU;
volatile int16_t x204 = 0;
uint32_t x208 = 125308U;
volatile uint64_t t49 = 10043582LLU;
volatile int16_t x213 = INT16_MIN;
volatile int32_t t50 = -5;
int32_t x223 = INT32_MAX;
int64_t t52 = -24141981090482LL;
int32_t x228 = INT32_MIN;
static volatile int16_t x230 = INT16_MAX;
static volatile int16_t x232 = 9887;
static int16_t x235 = INT16_MIN;
int16_t x238 = -52;
static volatile uint64_t t56 = 1069086207365399151LLU;
volatile int64_t t57 = 49104612LL;
uint64_t x252 = 12340939794LLU;
uint64_t t61 = 279249LLU;
volatile int64_t t62 = 269LL;
static int16_t x268 = -1;
int64_t t63 = 5LL;
int16_t x278 = INT16_MIN;
int16_t x284 = -5;
volatile uint64_t t68 = 19252875317605468LLU;
volatile uint32_t x293 = 993U;
uint16_t x295 = 3639U;
volatile uint8_t x296 = 2U;
static volatile uint32_t t70 = 37U;
static int64_t x301 = INT64_MIN;
int8_t x313 = -3;
int64_t x315 = INT64_MAX;
int32_t x316 = INT32_MIN;
int8_t x317 = INT8_MAX;
volatile uint8_t x319 = UINT8_MAX;
int16_t x320 = 6;
int32_t t76 = 457013;
uint32_t x332 = 1217946U;
int8_t x333 = -1;
volatile int32_t t79 = 27638478;
int32_t x338 = -1;
uint32_t x343 = 322474159U;
int16_t x351 = -740;
int64_t x358 = -1LL;
uint32_t x365 = 0U;
int8_t x374 = -23;
volatile int32_t x379 = INT32_MAX;
int32_t x383 = -292602115;
static uint32_t x396 = 42U;
volatile int32_t x403 = INT32_MAX;
uint64_t x409 = 7044LLU;
uint32_t x413 = 363067370U;
volatile int8_t x414 = -11;
int8_t x416 = -1;
int64_t x418 = INT64_MAX;
int64_t x419 = 84560990929892LL;


void f0(void) {
	int8_t x2 = -35;
	int64_t x3 = -1LL;
	int32_t x4 = INT32_MAX;
	static volatile int64_t t0 = 88554348LL;

	t0 = (((x1/x2)^x3)&x4);

	if (t0 != 2147483646LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint64_t x6 = 1317557721739003LLU;
	static uint8_t x7 = 114U;
	volatile uint64_t t1 = 123228641792LLU;

	t1 = (((x5/x6)^x7)&x8);

	if (t1 != 13378LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MAX;
	uint16_t x10 = 793U;
	int16_t x11 = INT16_MIN;
	volatile int64_t x12 = INT64_MIN;
	volatile int64_t t2 = INT64_MIN;

	t2 = (((x9/x10)^x11)&x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x16 = 11231373556928105LL;
	int64_t t3 = -808336427LL;

	t3 = (((x13/x14)^x15)&x16);

	if (t3 != 20073LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 3342;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MAX;
	int32_t x20 = 125;
	int64_t t4 = 69497478948639LL;

	t4 = (((x17/x18)^x19)&x20);

	if (t4 != 125LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = 875094239;
	static int64_t x23 = 221973851988222948LL;
	uint16_t x24 = UINT16_MAX;
	int64_t t5 = 11861151293104LL;

	t5 = (((x21/x22)^x23)&x24);

	if (t5 != 24195LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	static uint64_t x26 = 51LLU;
	uint16_t x27 = UINT16_MAX;
	volatile uint64_t t6 = 0LLU;

	t6 = (((x25/x26)^x27)&x28);

	if (t6 != 369LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint32_t x30 = 1365008U;
	static uint64_t x31 = UINT64_MAX;
	static int32_t x32 = INT32_MAX;
	uint64_t t7 = 17337LLU;

	t7 = (((x29/x30)^x31)&x32);

	if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MAX;
	int8_t x34 = -1;
	static volatile int16_t x36 = -4403;

	t8 = (((x33/x34)^x35)&x36);

	if (t8 != 28364) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -18;
	uint16_t x39 = 10U;

	t9 = (((x37/x38)^x39)&x40);

	if (t9 != 10LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	volatile int64_t x43 = 43LL;
	int8_t x44 = 0;
	static volatile int64_t t10 = 16712389LL;

	t10 = (((x41/x42)^x43)&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int8_t x46 = -2;
	static int64_t x47 = -60409928026207LL;
	int64_t t11 = 5261311265LL;

	t11 = (((x45/x46)^x47)&x48);

	if (t11 != -4611746428458203488LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	volatile int16_t x50 = INT16_MIN;
	volatile uint32_t x51 = 75U;
	volatile uint32_t t12 = 125U;

	t12 = (((x49/x50)^x51)&x52);

	if (t12 != 65611U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MIN;
	static uint64_t x55 = 25479441849LLU;
	int32_t x56 = -1;
	volatile uint64_t t13 = 56575876577889LLU;

	t13 = (((x53/x54)^x55)&x56);

	if (t13 != 18446744048230110136LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int16_t x58 = -1;
	static int8_t x59 = -1;
	int8_t x60 = -1;
	static int64_t t14 = 58794227688059LL;

	t14 = (((x57/x58)^x59)&x60);

	if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	uint8_t x62 = 2U;
	volatile int8_t x63 = -1;
	static volatile int32_t t15 = -1520;

	t15 = (((x61/x62)^x63)&x64);

	if (t15 != 165) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	static uint8_t x67 = UINT8_MAX;
	uint64_t x68 = 3528216788026731145LLU;
	uint64_t t16 = 3161594901811LLU;

	t16 = (((x65/x66)^x67)&x68);

	if (t16 != 137LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MIN;
	uint16_t x75 = UINT16_MAX;
	int8_t x76 = -1;
	volatile int32_t t17 = -663238041;

	t17 = (((x73/x74)^x75)&x76);

	if (t17 != 65534) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = 133148;
	uint8_t x78 = UINT8_MAX;
	volatile uint16_t x79 = UINT16_MAX;
	static volatile int64_t x80 = INT64_MAX;
	int64_t t18 = 2046197610LL;

	t18 = (((x77/x78)^x79)&x80);

	if (t18 != 65013LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 0LLU;
	volatile uint16_t x84 = 11324U;
	volatile uint64_t t19 = 3480752741111301566LLU;

	t19 = (((x81/x82)^x83)&x84);

	if (t19 != 11324LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	volatile int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MAX;
	int32_t x88 = -18331;
	volatile int64_t t20 = 34255858876229957LL;

	t20 = (((x85/x86)^x87)&x88);

	if (t20 != 2147465317LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 0U;
	volatile int16_t x90 = -3;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t21 = 14883135U;

	t21 = (((x89/x90)^x91)&x92);

	if (t21 != 4294934528U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int64_t x96 = INT64_MIN;
	volatile int64_t t22 = -2LL;

	t22 = (((x93/x94)^x95)&x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	static volatile int16_t x98 = INT16_MIN;
	static uint64_t x99 = 2645531269082838LLU;
	uint32_t x100 = 28106U;

	t23 = (((x97/x98)^x99)&x100);

	if (t23 != 11458LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MIN;
	static uint32_t x102 = 23820U;
	int16_t x104 = INT16_MAX;
	uint32_t t24 = 3833U;

	t24 = (((x101/x102)^x103)&x104);

	if (t24 != 8149U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 2771059176784418LLU;
	volatile int64_t x106 = 12116003636026061LL;
	static uint64_t x107 = UINT64_MAX;
	volatile int32_t x108 = INT32_MAX;
	uint64_t t25 = 2957LLU;

	t25 = (((x105/x106)^x107)&x108);

	if (t25 != 2147483647LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x113 = INT16_MAX;
	static int32_t x114 = -1;
	volatile int8_t x115 = INT8_MIN;
	static uint8_t x116 = 0U;
	volatile int32_t t26 = -5414;

	t26 = (((x113/x114)^x115)&x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = -33;
	static volatile int32_t x119 = INT32_MAX;
	uint8_t x120 = 27U;
	uint32_t t27 = 2U;

	t27 = (((x117/x118)^x119)&x120);

	if (t27 != 26U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -2005;
	uint64_t x122 = 3582819LLU;
	volatile int16_t x123 = INT16_MIN;
	uint64_t t28 = 145932LLU;

	t28 = (((x121/x122)^x123)&x124);

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	uint64_t x126 = UINT64_MAX;
	uint32_t x128 = 2U;
	volatile uint64_t t29 = 1LLU;

	t29 = (((x125/x126)^x127)&x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x129 = 1857180079038278LLU;
	static int64_t x130 = INT64_MAX;
	volatile int8_t x131 = -1;
	static uint16_t x132 = UINT16_MAX;
	uint64_t t30 = 4550736728941458336LLU;

	t30 = (((x129/x130)^x131)&x132);

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = INT8_MAX;
	int64_t x136 = INT64_MIN;
	int64_t t31 = INT64_MIN;

	t31 = (((x133/x134)^x135)&x136);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -14;
	volatile int16_t x138 = -14;
	volatile int32_t x139 = INT32_MIN;
	static volatile int32_t t32 = -2;

	t32 = (((x137/x138)^x139)&x140);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = UINT64_MAX;
	volatile uint16_t x142 = UINT16_MAX;
	volatile uint16_t x143 = 117U;
	uint32_t x144 = 1219U;

	t33 = (((x141/x142)^x143)&x144);

	if (t33 != 64LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = -5378401;
	static int8_t x147 = INT8_MAX;
	uint64_t x148 = 229067184566LLU;
	volatile uint64_t t34 = 125LLU;

	t34 = (((x145/x146)^x147)&x148);

	if (t34 != 54LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	static int16_t x150 = INT16_MIN;
	int64_t x151 = -1LL;
	int8_t x152 = -1;
	int64_t t35 = -4262LL;

	t35 = (((x149/x150)^x151)&x152);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x154 = UINT16_MAX;
	volatile int64_t x155 = -1LL;
	int32_t x156 = INT32_MIN;
	int64_t t36 = -1504076LL;

	t36 = (((x153/x154)^x155)&x156);

	if (t36 != 140739635838976LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x158 = INT64_MIN;
	int8_t x159 = -1;
	int32_t x160 = INT32_MIN;
	int64_t t37 = 16104708871LL;

	t37 = (((x157/x158)^x159)&x160);

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 0U;
	uint64_t x162 = 1090756830LLU;
	int16_t x163 = -1;
	uint8_t x164 = UINT8_MAX;
	uint64_t t38 = 268LLU;

	t38 = (((x161/x162)^x163)&x164);

	if (t38 != 255LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -121441LL;
	uint8_t x167 = 2U;
	int64_t t39 = -39890800LL;

	t39 = (((x165/x166)^x167)&x168);

	if (t39 != 524372788632442944LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x170 = 23U;
	int32_t x171 = -1;
	static volatile int64_t x172 = 184662892LL;
	uint64_t t40 = 500153081695LLU;

	t40 = (((x169/x170)^x171)&x172);

	if (t40 != 134316328LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MAX;
	uint32_t x174 = 176110U;
	uint16_t x175 = 11U;
	volatile int64_t x176 = 1728089LL;
	int64_t t41 = 3061097LL;

	t41 = (((x173/x174)^x175)&x176);

	if (t41 != 678425LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -1LL;
	static int64_t x178 = INT64_MIN;
	int16_t x179 = -27;
	uint64_t x180 = UINT64_MAX;
	uint64_t t42 = 5412384LLU;

	t42 = (((x177/x178)^x179)&x180);

	if (t42 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 13U;
	static int64_t x186 = INT64_MAX;
	volatile int16_t x187 = INT16_MIN;
	static volatile int64_t t43 = -220529685852LL;

	t43 = (((x185/x186)^x187)&x188);

	if (t43 != 32768LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x189 = 1U;
	uint16_t x190 = 11227U;
	static volatile int8_t x191 = INT8_MIN;
	static int8_t x192 = INT8_MIN;
	int32_t t44 = -1;

	t44 = (((x189/x190)^x191)&x192);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -31156;
	uint16_t x195 = 7373U;
	static volatile uint64_t x196 = UINT64_MAX;
	static uint64_t t45 = 31LLU;

	t45 = (((x193/x194)^x195)&x196);

	if (t45 != 7373LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x197 = UINT32_MAX;
	int16_t x199 = -1;
	volatile int32_t x200 = INT32_MAX;
	volatile uint32_t t46 = 49480354U;

	t46 = (((x197/x198)^x199)&x200);

	if (t46 != 2113396605U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = -1LL;
	uint64_t x203 = 111678493804215LLU;
	volatile uint64_t t47 = 14558192362LLU;

	t47 = (((x201/x202)^x203)&x204);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = 149108951145LLU;
	uint16_t x206 = UINT16_MAX;
	int8_t x207 = -1;
	uint64_t t48 = 32143LLU;

	t48 = (((x205/x206)^x207)&x208);

	if (t48 != 84036LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = -1;
	volatile uint64_t x210 = 658368220LLU;
	uint16_t x211 = UINT16_MAX;
	volatile int32_t x212 = -116;

	t49 = (((x209/x210)^x211)&x212);

	if (t49 != 28018915976LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = -1;
	int8_t x215 = -1;
	uint16_t x216 = 0U;

	t50 = (((x213/x214)^x215)&x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = 30;
	volatile uint32_t x218 = 1925670U;
	int16_t x219 = 1;
	static int32_t x220 = INT32_MIN;
	uint32_t t51 = 3317626U;

	t51 = (((x217/x218)^x219)&x220);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MAX;
	static uint16_t x222 = 573U;
	static int8_t x224 = 3;

	t52 = (((x221/x222)^x223)&x224);

	if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = -1;
	volatile uint64_t x226 = UINT64_MAX;
	uint64_t x227 = UINT64_MAX;
	volatile uint64_t t53 = 112279222LLU;

	t53 = (((x225/x226)^x227)&x228);

	if (t53 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MIN;
	int16_t x231 = INT16_MIN;
	int32_t t54 = -54;

	t54 = (((x229/x230)^x231)&x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x233 = UINT32_MAX;
	uint64_t x234 = 71972835124754369LLU;
	int64_t x236 = -17406481LL;
	static volatile uint64_t t55 = 4579344LLU;

	t55 = (((x233/x234)^x235)&x236);

	if (t55 != 18446744073692119040LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	uint64_t x240 = 121LLU;

	t56 = (((x237/x238)^x239)&x240);

	if (t56 != 121LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x241 = -246200081679804LL;
	volatile int16_t x242 = INT16_MIN;
	uint8_t x243 = 125U;
	uint16_t x244 = 1U;

	t57 = (((x241/x242)^x243)&x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x245 = 8U;
	int8_t x246 = 1;
	int8_t x247 = 0;
	int16_t x248 = -1;
	static int32_t t58 = -3440;

	t58 = (((x245/x246)^x247)&x248);

	if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x249 = 30U;
	int64_t x250 = -1LL;
	uint64_t x251 = 5100LLU;
	static volatile uint64_t t59 = 4157LLU;

	t59 = (((x249/x250)^x251)&x252);

	if (t59 != 12340939778LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = UINT64_MAX;
	int16_t x254 = INT16_MAX;
	int64_t x255 = INT64_MIN;
	int64_t x256 = -1LL;
	volatile uint64_t t60 = 2LLU;

	t60 = (((x253/x254)^x255)&x256);

	if (t60 != 9223935003988590608LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x258 = 3175006566212LLU;
	static volatile int16_t x259 = INT16_MAX;
	uint16_t x260 = UINT16_MAX;

	t61 = (((x257/x258)^x259)&x260);

	if (t61 != 55485LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x261 = INT64_MAX;
	volatile int8_t x262 = 1;
	int32_t x263 = INT32_MIN;
	volatile uint16_t x264 = 526U;

	t62 = (((x261/x262)^x263)&x264);

	if (t62 != 526LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = 2361085972315LL;
	uint16_t x267 = UINT16_MAX;

	t63 = (((x265/x266)^x267)&x268);

	if (t63 != 65535LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = INT16_MAX;
	static int32_t x270 = 3;
	int8_t x271 = 7;
	int64_t x272 = INT64_MAX;
	static int64_t t64 = -600062091347467LL;

	t64 = (((x269/x270)^x271)&x272);

	if (t64 != 10925LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 5565105570626937331LLU;
	int32_t x274 = 1;
	int32_t x275 = INT32_MIN;
	uint8_t x276 = 51U;
	uint64_t t65 = 15975813550651LLU;

	t65 = (((x273/x274)^x275)&x276);

	if (t65 != 51LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = 25U;
	int32_t x279 = -1;
	int64_t x280 = INT64_MIN;
	volatile int64_t t66 = INT64_MIN;

	t66 = (((x277/x278)^x279)&x280);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = 116U;
	volatile int32_t x283 = INT32_MIN;
	volatile int32_t t67 = 20999;

	t67 = (((x281/x282)^x283)&x284);

	if (t67 != 2128970858) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = 130608305U;
	static int64_t x286 = INT64_MIN;
	uint16_t x287 = 16U;
	uint64_t x288 = UINT64_MAX;

	t68 = (((x285/x286)^x287)&x288);

	if (t68 != 16LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MAX;
	uint8_t x290 = 17U;
	int64_t x291 = INT64_MIN;
	static int32_t x292 = 5056524;
	int64_t t69 = -529921525225LL;

	t69 = (((x289/x290)^x291)&x292);

	if (t69 != 4LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x294 = UINT8_MAX;

	t70 = (((x293/x294)^x295)&x296);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	uint8_t x298 = 2U;
	int32_t x299 = -2;
	uint64_t x300 = UINT64_MAX;
	uint64_t t71 = 9427803LLU;

	t71 = (((x297/x298)^x299)&x300);

	if (t71 != 16382LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MAX;
	uint32_t x304 = UINT32_MAX;
	volatile int64_t t72 = 8952274936LL;

	t72 = (((x301/x302)^x303)&x304);

	if (t72 != 2139029631LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = -1;
	int8_t x306 = -1;
	int64_t x307 = INT64_MAX;
	volatile int16_t x308 = INT16_MIN;
	static volatile int64_t t73 = -1LL;

	t73 = (((x305/x306)^x307)&x308);

	if (t73 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x309 = INT32_MIN;
	volatile int32_t x310 = INT32_MIN;
	static int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MAX;
	static int64_t t74 = -3079534LL;

	t74 = (((x309/x310)^x311)&x312);

	if (t74 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x314 = -1;
	int64_t t75 = -1046642564948226LL;

	t75 = (((x313/x314)^x315)&x316);

	if (t75 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x318 = -1;

	t76 = (((x317/x318)^x319)&x320);

	if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x321 = -1;
	volatile int32_t x322 = INT32_MAX;
	uint64_t x323 = 64082125664998453LLU;
	int16_t x324 = INT16_MAX;
	static volatile uint64_t t77 = 101202745196LLU;

	t77 = (((x321/x322)^x323)&x324);

	if (t77 != 21557LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 43U;
	uint64_t x330 = 62712966LLU;
	int8_t x331 = INT8_MIN;
	volatile uint64_t t78 = 3621479682585LLU;

	t78 = (((x329/x330)^x331)&x332);

	if (t78 != 1217920LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x334 = 3U;
	int8_t x335 = 1;
	int32_t x336 = -1;

	t79 = (((x333/x334)^x335)&x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	int64_t x340 = -29376542034328167LL;
	int64_t t80 = -1LL;

	t80 = (((x337/x338)^x339)&x340);

	if (t80 != -29376543364972544LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MIN;
	volatile int8_t x342 = INT8_MIN;
	int32_t x344 = 31046794;
	volatile uint32_t t81 = 355197959U;

	t81 = (((x341/x342)^x343)&x344);

	if (t81 != 1609866U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x349 = 4900LLU;
	uint32_t x350 = 72658U;
	int32_t x352 = 265;
	uint64_t t82 = 62188699LLU;

	t82 = (((x349/x350)^x351)&x352);

	if (t82 != 264LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MIN;
	volatile int64_t x355 = -1LL;
	int64_t x356 = INT64_MIN;
	volatile int64_t t83 = INT64_MIN;

	t83 = (((x353/x354)^x355)&x356);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x357 = UINT32_MAX;
	volatile int16_t x359 = INT16_MIN;
	int64_t x360 = INT64_MIN;
	int64_t t84 = 113886LL;

	t84 = (((x357/x358)^x359)&x360);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x361 = -1;
	int32_t x362 = 932785898;
	int8_t x363 = -29;
	int64_t x364 = INT64_MIN;
	static volatile int64_t t85 = INT64_MIN;

	t85 = (((x361/x362)^x363)&x364);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x366 = UINT16_MAX;
	static int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MIN;
	volatile uint32_t t86 = 5U;

	t86 = (((x365/x366)^x367)&x368);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = 953465U;
	volatile uint32_t x370 = UINT32_MAX;
	int32_t x371 = -1;
	int8_t x372 = -1;
	uint32_t t87 = UINT32_MAX;

	t87 = (((x369/x370)^x371)&x372);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x373 = -4;
	volatile int32_t x375 = INT32_MIN;
	uint64_t x376 = 3212LLU;
	uint64_t t88 = 622992LLU;

	t88 = (((x373/x374)^x375)&x376);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x377 = 7163027115460535LLU;
	static volatile uint32_t x378 = 2086982U;
	volatile int32_t x380 = -183662060;
	volatile uint64_t t89 = 1072480166637LLU;

	t89 = (((x377/x378)^x379)&x380);

	if (t89 != 2970353680LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = INT32_MAX;
	static int8_t x382 = -1;
	static volatile int64_t x384 = -1LL;
	int64_t t90 = -8992412437960062LL;

	t90 = (((x381/x382)^x383)&x384);

	if (t90 != 1854881532LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = 560504657036889300LL;
	uint32_t x386 = 2U;
	int8_t x387 = -1;
	int8_t x388 = -25;
	volatile int64_t t91 = -192LL;

	t91 = (((x385/x386)^x387)&x388);

	if (t91 != -280252328518444667LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x389 = UINT8_MAX;
	uint32_t x390 = UINT32_MAX;
	uint8_t x391 = 46U;
	static uint8_t x392 = 56U;
	volatile uint32_t t92 = 2U;

	t92 = (((x389/x390)^x391)&x392);

	if (t92 != 40U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = -1LL;
	volatile int16_t x394 = INT16_MAX;
	uint64_t x395 = 283LLU;
	static uint64_t t93 = 7221747943LLU;

	t93 = (((x393/x394)^x395)&x396);

	if (t93 != 10LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = 64586934LL;
	static int8_t x398 = INT8_MIN;
	static int32_t x399 = -1;
	volatile int32_t x400 = -2828520;
	static int64_t t94 = 2160LL;

	t94 = (((x397/x398)^x399)&x400);

	if (t94 != 299784LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 2U;
	int32_t x402 = INT32_MAX;
	volatile uint32_t x404 = 87U;
	static uint32_t t95 = 103U;

	t95 = (((x401/x402)^x403)&x404);

	if (t95 != 87U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = 15;
	static int8_t x406 = 21;
	volatile int64_t x407 = -1LL;
	int32_t x408 = INT32_MIN;
	volatile int64_t t96 = 0LL;

	t96 = (((x405/x406)^x407)&x408);

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x410 = INT64_MAX;
	static volatile int16_t x411 = INT16_MIN;
	static int32_t x412 = -1;
	uint64_t t97 = 4527040LLU;

	t97 = (((x409/x410)^x411)&x412);

	if (t97 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x415 = INT16_MIN;
	volatile uint32_t t98 = 227954U;

	t98 = (((x413/x414)^x415)&x416);

	if (t98 != 4294934528U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x417 = UINT8_MAX;
	static uint8_t x420 = UINT8_MAX;
	int64_t t99 = -44LL;

	t99 = (((x417/x418)^x419)&x420);

	if (t99 != 228LL) { NG(); } else { ; }
	
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

