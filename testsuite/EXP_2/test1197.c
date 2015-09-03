#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
int32_t x12 = INT32_MIN;
uint8_t x17 = UINT8_MAX;
static int16_t x18 = -1;
uint32_t x20 = UINT32_MAX;
volatile uint64_t x36 = UINT64_MAX;
volatile int16_t x39 = INT16_MIN;
static int16_t x44 = -1;
uint64_t x45 = 103754461738614330LLU;
volatile int16_t x54 = INT16_MAX;
volatile uint32_t t11 = 18U;
volatile int64_t x57 = -292643979LL;
int16_t x58 = INT16_MIN;
volatile uint32_t t13 = 8975192U;
int8_t x67 = -1;
int32_t t14 = -17237696;
int32_t x71 = INT32_MIN;
int32_t x79 = -1;
uint32_t x81 = 14442707U;
volatile uint32_t t17 = 27445087U;
static volatile int32_t t18 = -57552;
volatile uint64_t x89 = UINT64_MAX;
uint64_t t19 = 748522113787133LLU;
static uint64_t x93 = UINT64_MAX;
int32_t t21 = -696;
volatile uint32_t x102 = 9U;
int32_t x108 = -1;
int32_t x110 = -13;
int64_t t25 = 7544154015LL;
int16_t x119 = INT16_MIN;
int64_t x123 = INT64_MIN;
uint64_t x126 = UINT64_MAX;
int32_t x127 = INT32_MIN;
static volatile uint64_t t28 = 6793103090873LLU;
uint16_t x130 = 1U;
int64_t x133 = INT64_MIN;
int32_t x147 = INT32_MIN;
uint32_t x155 = 13744U;
static int32_t x161 = INT32_MIN;
uint32_t x164 = 335U;
static volatile int64_t t39 = -3362542201830219LL;
volatile uint64_t t41 = UINT64_MAX;
static volatile int16_t x190 = INT16_MIN;
volatile int32_t t42 = -60832;
uint32_t x200 = 19544U;
volatile uint64_t x204 = 2712052187135357292LLU;
volatile int16_t x207 = INT16_MIN;
static volatile uint16_t x216 = 1U;
volatile int64_t t48 = -231883775LL;
int8_t x223 = INT8_MIN;
uint64_t t50 = 59635LLU;
int64_t t51 = -518267LL;
int8_t x239 = -3;
volatile int32_t t57 = -21929;
static int16_t x253 = INT16_MIN;
static int8_t x256 = -1;
int32_t t58 = 717625;
int32_t t61 = 58333;
volatile int64_t t62 = 70412LL;
int8_t x281 = -1;
static volatile int64_t t64 = 58074061823660LL;
volatile int64_t t65 = 3466969065056LL;
int64_t x291 = INT64_MAX;
static volatile uint32_t x297 = 1603120U;
int8_t x298 = INT8_MIN;
static int64_t x299 = -1LL;
int8_t x303 = 1;
static int32_t t69 = 4842;
int64_t x311 = -6140463766LL;
uint8_t x320 = 3U;
int64_t x321 = INT64_MIN;
volatile uint32_t x324 = 34U;
volatile uint64_t x326 = 3963LLU;
int32_t x327 = 67235;
int32_t t75 = -17407;
volatile uint64_t t76 = 453791484245190LLU;
int8_t x336 = INT8_MIN;
static volatile uint32_t t77 = 658U;
int8_t x352 = 1;
int16_t x353 = -1;
static uint64_t t80 = 10281855LLU;
int64_t x364 = 1595325839LL;
volatile int8_t x368 = INT8_MAX;
int32_t x369 = INT32_MIN;
uint32_t x372 = 30401757U;
uint32_t x373 = 28U;
volatile uint32_t x375 = 70921605U;
static volatile uint32_t x377 = UINT32_MAX;
static int64_t x378 = INT64_MIN;
int32_t x381 = INT32_MIN;
uint32_t x384 = 149461746U;
int64_t x387 = INT64_MIN;
int16_t x393 = INT16_MIN;
int64_t x395 = -1LL;
int64_t x399 = INT64_MIN;
uint16_t x400 = UINT16_MAX;
static uint64_t x402 = 5445019893950LLU;
volatile int64_t t90 = -817466LL;
int16_t x406 = -1;
int64_t x412 = -7364886842LL;
static int16_t x418 = INT16_MIN;
uint16_t x424 = UINT16_MAX;
int64_t x425 = 1LL;
int16_t x426 = 15;
volatile int64_t x429 = -17641693LL;
int32_t x431 = INT32_MIN;
volatile int64_t t97 = -293415954505442734LL;


void f0(void) {
	int32_t x1 = 528599021;
	static int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MIN;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -297;

	t0 = ((x1-(x2==x3))+x4);

	if (t0 != 528598893) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	static volatile int32_t x7 = -95;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 2631;

	t1 = ((x5-(x6==x7))+x8);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static uint16_t x10 = 15U;
	uint8_t x11 = 15U;
	volatile int32_t t2 = 13;

	t2 = ((x9-(x10==x11))+x12);

	if (t2 != -2147483522) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x19 = 444U;
	uint32_t t3 = 1841293758U;

	t3 = ((x17-(x18==x19))+x20);

	if (t3 != 254U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 106713U;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = -3535;
	static int32_t x28 = INT32_MIN;
	uint32_t t4 = 250U;

	t4 = ((x25-(x26==x27))+x28);

	if (t4 != 2147590361U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 2020U;
	volatile int32_t x30 = INT32_MIN;
	int64_t x31 = -1LL;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t5 = 5;

	t5 = ((x29-(x30==x31))+x32);

	if (t5 != 67555) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = INT64_MAX;
	int32_t x34 = INT32_MIN;
	volatile int64_t x35 = INT64_MIN;
	uint64_t t6 = 1670249499380LLU;

	t6 = ((x33-(x34==x35))+x36);

	if (t6 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	static int32_t x38 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	volatile int64_t t7 = -13312577128644176LL;

	t7 = ((x37-(x38==x39))+x40);

	if (t7 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	static int32_t x42 = -8866;
	int16_t x43 = -1;
	volatile int64_t t8 = -204339494002LL;

	t8 = ((x41-(x42==x43))+x44);

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x46 = 1U;
	uint32_t x47 = 31U;
	int8_t x48 = INT8_MAX;
	volatile uint64_t t9 = 10381LLU;

	t9 = ((x45-(x46==x47))+x48);

	if (t9 != 103754461738614457LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = -2262319932551410224LL;
	int32_t x50 = -1;
	int32_t x51 = -1;
	int16_t x52 = INT16_MIN;
	int64_t t10 = -3686091636915089105LL;

	t10 = ((x49-(x50==x51))+x52);

	if (t10 != -2262319932551442993LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int16_t x55 = -1;
	static uint32_t x56 = 4577U;

	t11 = ((x53-(x54==x55))+x56);

	if (t11 != 4294939105U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x59 = 40U;
	uint8_t x60 = 4U;
	static volatile int64_t t12 = -32878180909975605LL;

	t12 = ((x57-(x58==x59))+x60);

	if (t12 != -292643975LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x61 = 31U;
	int32_t x62 = INT32_MIN;
	volatile int16_t x63 = -1;
	uint32_t x64 = 252U;

	t13 = ((x61-(x62==x63))+x64);

	if (t13 != 283U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = 1;
	volatile int64_t x66 = INT64_MAX;
	int16_t x68 = INT16_MIN;

	t14 = ((x65-(x66==x67))+x68);

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	static uint32_t x70 = UINT32_MAX;
	static uint32_t x72 = 117101U;
	volatile uint32_t t15 = 516216U;

	t15 = ((x69-(x70==x71))+x72);

	if (t15 != 116973U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 5U;
	volatile int16_t x78 = INT16_MIN;
	int64_t x80 = 96432637415523997LL;
	int64_t t16 = -1LL;

	t16 = ((x77-(x78==x79))+x80);

	if (t16 != 96432637415524002LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x82 = 49401LL;
	static uint16_t x83 = 16343U;
	int8_t x84 = INT8_MIN;

	t17 = ((x81-(x82==x83))+x84);

	if (t17 != 14442579U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = -10;
	int64_t x86 = 35412LL;
	int64_t x87 = -1LL;
	int8_t x88 = -1;

	t18 = ((x85-(x86==x87))+x88);

	if (t18 != -11) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x90 = INT64_MAX;
	static volatile uint8_t x91 = 23U;
	int32_t x92 = 915219455;

	t19 = ((x89-(x90==x91))+x92);

	if (t19 != 915219454LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x94 = INT8_MIN;
	static volatile uint8_t x95 = UINT8_MAX;
	int16_t x96 = INT16_MAX;
	uint64_t t20 = 263935605420814LLU;

	t20 = ((x93-(x94==x95))+x96);

	if (t20 != 32766LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x97 = -12;
	uint8_t x98 = UINT8_MAX;
	uint16_t x99 = 3387U;
	int16_t x100 = INT16_MIN;

	t21 = ((x97-(x98==x99))+x100);

	if (t21 != -32780) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x101 = 6074362502837795LLU;
	int16_t x103 = INT16_MIN;
	uint64_t x104 = 7476077581LLU;
	uint64_t t22 = 4LLU;

	t22 = ((x101-(x102==x103))+x104);

	if (t22 != 6074369978915376LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x105 = 55U;
	int8_t x106 = 1;
	uint32_t x107 = 22482U;
	volatile int32_t t23 = 1;

	t23 = ((x105-(x106==x107))+x108);

	if (t23 != 54) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 915591814305305LLU;
	volatile int32_t x111 = INT32_MAX;
	uint64_t x112 = 2631LLU;
	volatile uint64_t t24 = 1842057LLU;

	t24 = ((x109-(x110==x111))+x112);

	if (t24 != 915591814307936LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x113 = 20;
	int32_t x114 = -87;
	int64_t x115 = INT64_MAX;
	int64_t x116 = -3278167LL;

	t25 = ((x113-(x114==x115))+x116);

	if (t25 != -3278147LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -1;
	volatile uint32_t x118 = 233901U;
	int8_t x120 = -1;
	static volatile int32_t t26 = 90;

	t26 = ((x117-(x118==x119))+x120);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x122 = -2;
	uint16_t x124 = 2U;
	volatile uint64_t t27 = 290LLU;

	t27 = ((x121-(x122==x123))+x124);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 11LLU;
	static int32_t x128 = INT32_MIN;

	t28 = ((x125-(x126==x127))+x128);

	if (t28 != 18446744071562067979LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	int32_t x131 = INT32_MAX;
	int64_t x132 = -59701110325813LL;
	int64_t t29 = 272648LL;

	t29 = ((x129-(x130==x131))+x132);

	if (t29 != -59701110325941LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x134 = 60386411LL;
	int32_t x135 = INT32_MIN;
	int16_t x136 = 53;
	volatile int64_t t30 = -797915901945595315LL;

	t30 = ((x133-(x134==x135))+x136);

	if (t30 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = 15;
	int64_t x138 = -1LL;
	int64_t x139 = INT64_MAX;
	int32_t x140 = -1;
	volatile int32_t t31 = -747;

	t31 = ((x137-(x138==x139))+x140);

	if (t31 != 14) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x145 = INT32_MAX;
	int16_t x146 = INT16_MIN;
	int16_t x148 = 0;
	int32_t t32 = INT32_MAX;

	t32 = ((x145-(x146==x147))+x148);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = -1LL;
	int8_t x150 = 0;
	int8_t x151 = INT8_MAX;
	int64_t x152 = 4711LL;
	volatile int64_t t33 = -46068006752256LL;

	t33 = ((x149-(x150==x151))+x152);

	if (t33 != 4710LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = -26783726790LL;
	int16_t x154 = -1;
	static uint32_t x156 = 51118808U;
	volatile int64_t t34 = 4046091451536LL;

	t34 = ((x153-(x154==x155))+x156);

	if (t34 != -26732607982LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x157 = -808LL;
	int16_t x158 = INT16_MIN;
	uint64_t x159 = 31382LLU;
	static uint64_t x160 = 16858748630LLU;
	static volatile uint64_t t35 = 5070LLU;

	t35 = ((x157-(x158==x159))+x160);

	if (t35 != 16858747822LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x162 = 4;
	int32_t x163 = -2;
	uint32_t t36 = 0U;

	t36 = ((x161-(x162==x163))+x164);

	if (t36 != 2147483983U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = -1LL;
	int16_t x170 = INT16_MAX;
	static int32_t x171 = INT32_MAX;
	uint16_t x172 = 69U;
	volatile int64_t t37 = -14663553LL;

	t37 = ((x169-(x170==x171))+x172);

	if (t37 != 68LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 5192536078LLU;
	int16_t x174 = INT16_MAX;
	uint16_t x175 = 3463U;
	int16_t x176 = INT16_MIN;
	static uint64_t t38 = 2LLU;

	t38 = ((x173-(x174==x175))+x176);

	if (t38 != 5192503310LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1145818532303631987LL;
	int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MAX;
	volatile uint16_t x180 = 2U;

	t39 = ((x177-(x178==x179))+x180);

	if (t39 != -1145818532303631985LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x181 = UINT64_MAX;
	uint8_t x182 = 60U;
	int8_t x183 = -15;
	volatile uint16_t x184 = 196U;
	uint64_t t40 = 2877LLU;

	t40 = ((x181-(x182==x183))+x184);

	if (t40 != 195LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x185 = 0LLU;
	static int64_t x186 = INT64_MIN;
	int32_t x187 = -1;
	int64_t x188 = -1LL;

	t41 = ((x185-(x186==x187))+x188);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x189 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	uint16_t x192 = 13578U;

	t42 = ((x189-(x190==x191))+x192);

	if (t42 != -19190) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 567435133527499LLU;
	static int8_t x194 = INT8_MIN;
	static int8_t x195 = INT8_MIN;
	int64_t x196 = -1LL;
	static volatile uint64_t t43 = 122086331144924048LLU;

	t43 = ((x193-(x194==x195))+x196);

	if (t43 != 567435133527497LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = UINT16_MAX;
	uint8_t x198 = UINT8_MAX;
	volatile int16_t x199 = INT16_MIN;
	volatile uint32_t t44 = 93786247U;

	t44 = ((x197-(x198==x199))+x200);

	if (t44 != 85079U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x201 = 43U;
	volatile int64_t x202 = 2644538060LL;
	uint16_t x203 = UINT16_MAX;
	static volatile uint64_t t45 = 167925764275203315LLU;

	t45 = ((x201-(x202==x203))+x204);

	if (t45 != 2712052187135357335LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x205 = 21901U;
	uint8_t x206 = 1U;
	uint8_t x208 = 7U;
	uint32_t t46 = 38699113U;

	t46 = ((x205-(x206==x207))+x208);

	if (t46 != 21908U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = 939708633826470019LL;
	static int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MAX;
	uint16_t x212 = 226U;
	int64_t t47 = -463998889LL;

	t47 = ((x209-(x210==x211))+x212);

	if (t47 != 939708633826470245LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = -1;
	static int32_t x215 = INT32_MIN;

	t48 = ((x213-(x214==x215))+x216);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = 5;
	int8_t x218 = INT8_MAX;
	int16_t x219 = -1;
	volatile uint8_t x220 = 24U;
	int32_t t49 = -64801;

	t49 = ((x217-(x218==x219))+x220);

	if (t49 != 29) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x221 = -1;
	int64_t x222 = INT64_MIN;
	uint64_t x224 = UINT64_MAX;

	t50 = ((x221-(x222==x223))+x224);

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MAX;
	volatile int16_t x226 = 449;
	uint16_t x227 = UINT16_MAX;
	volatile int64_t x228 = -94805LL;

	t51 = ((x225-(x226==x227))+x228);

	if (t51 != -94678LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = INT16_MIN;
	uint32_t x230 = UINT32_MAX;
	int32_t x231 = -1;
	int64_t x232 = -127590905495408604LL;
	int64_t t52 = -39930052402455LL;

	t52 = ((x229-(x230==x231))+x232);

	if (t52 != -127590905495441373LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = INT64_MIN;
	uint16_t x236 = 222U;
	volatile int32_t t53 = 11674;

	t53 = ((x233-(x234==x235))+x236);

	if (t53 != 221) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x237 = 1;
	int64_t x238 = INT64_MAX;
	uint8_t x240 = 48U;
	int32_t t54 = 24;

	t54 = ((x237-(x238==x239))+x240);

	if (t54 != 49) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x241 = -10899;
	int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	static int32_t x244 = 304963448;
	volatile int32_t t55 = 44;

	t55 = ((x241-(x242==x243))+x244);

	if (t55 != 304952548) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = 23928U;
	static int32_t x246 = -1;
	int16_t x247 = INT16_MAX;
	uint64_t x248 = 629400LLU;
	volatile uint64_t t56 = 18205990979271420LLU;

	t56 = ((x245-(x246==x247))+x248);

	if (t56 != 653328LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = 11770;
	volatile uint8_t x250 = UINT8_MAX;
	int64_t x251 = INT64_MAX;
	uint8_t x252 = 15U;

	t57 = ((x249-(x250==x251))+x252);

	if (t57 != 11785) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x254 = 100523LLU;
	uint16_t x255 = 1U;

	t58 = ((x253-(x254==x255))+x256);

	if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = -1;
	int16_t x262 = -111;
	uint32_t x263 = UINT32_MAX;
	uint32_t x264 = UINT32_MAX;
	static uint32_t t59 = 1259582U;

	t59 = ((x261-(x262==x263))+x264);

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = -1;
	int64_t x266 = INT64_MIN;
	int16_t x267 = -1;
	uint32_t x268 = 6605U;
	volatile uint32_t t60 = 142104U;

	t60 = ((x265-(x266==x267))+x268);

	if (t60 != 6604U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = INT32_MIN;
	int32_t x270 = 38966;
	int32_t x271 = 8652;
	int32_t x272 = INT32_MAX;

	t61 = ((x269-(x270==x271))+x272);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = 3;
	int8_t x274 = INT8_MIN;
	int8_t x275 = -8;
	int64_t x276 = 8644358405LL;

	t62 = ((x273-(x274==x275))+x276);

	if (t62 != 8644358408LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x277 = 3U;
	int16_t x278 = -248;
	uint32_t x279 = 1772468423U;
	static int32_t x280 = INT32_MIN;
	int32_t t63 = 13;

	t63 = ((x277-(x278==x279))+x280);

	if (t63 != -2147483645) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x282 = -1;
	volatile uint16_t x283 = UINT16_MAX;
	volatile int64_t x284 = INT64_MAX;

	t64 = ((x281-(x282==x283))+x284);

	if (t64 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x285 = INT64_MIN;
	static int16_t x286 = 434;
	static volatile uint16_t x287 = 1U;
	static volatile uint16_t x288 = 3U;

	t65 = ((x285-(x286==x287))+x288);

	if (t65 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x289 = 12067514382627LLU;
	int8_t x290 = 6;
	static uint16_t x292 = UINT16_MAX;
	volatile uint64_t t66 = 26LLU;

	t66 = ((x289-(x290==x291))+x292);

	if (t66 != 12067514448162LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x293 = 57355993U;
	volatile uint64_t x294 = UINT64_MAX;
	static int8_t x295 = INT8_MAX;
	volatile int16_t x296 = INT16_MIN;
	uint32_t t67 = 26047517U;

	t67 = ((x293-(x294==x295))+x296);

	if (t67 != 57323225U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x300 = -1LL;
	static volatile int64_t t68 = -215707LL;

	t68 = ((x297-(x298==x299))+x300);

	if (t68 != 1603119LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MAX;
	uint16_t x302 = 21614U;
	volatile int16_t x304 = -4109;

	t69 = ((x301-(x302==x303))+x304);

	if (t69 != -3982) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MAX;
	int16_t x307 = 8252;
	static uint64_t x308 = UINT64_MAX;
	volatile uint64_t t70 = 83439614543055LLU;

	t70 = ((x305-(x306==x307))+x308);

	if (t70 != 65534LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = -2584132537963649LL;
	int32_t x310 = -1;
	volatile int16_t x312 = -4;
	volatile int64_t t71 = -365009LL;

	t71 = ((x309-(x310==x311))+x312);

	if (t71 != -2584132537963653LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x313 = 5U;
	uint32_t x314 = UINT32_MAX;
	static int32_t x315 = -52671724;
	int16_t x316 = -1;
	static volatile uint32_t t72 = 344U;

	t72 = ((x313-(x314==x315))+x316);

	if (t72 != 4U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x317 = 458800612U;
	static int32_t x318 = INT32_MIN;
	volatile int64_t x319 = INT64_MIN;
	uint32_t t73 = 6843U;

	t73 = ((x317-(x318==x319))+x320);

	if (t73 != 458800615U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x322 = INT16_MIN;
	volatile int16_t x323 = -1;
	int64_t t74 = 8283557587863LL;

	t74 = ((x321-(x322==x323))+x324);

	if (t74 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = -1;
	uint16_t x328 = 316U;

	t75 = ((x325-(x326==x327))+x328);

	if (t75 != 315) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x329 = 24201507683LLU;
	volatile uint8_t x330 = 25U;
	int64_t x331 = INT64_MIN;
	int8_t x332 = -45;

	t76 = ((x329-(x330==x331))+x332);

	if (t76 != 24201507638LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x334 = -1LL;
	volatile int16_t x335 = INT16_MIN;

	t77 = ((x333-(x334==x335))+x336);

	if (t77 != 4294967167U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = -1;
	int8_t x350 = INT8_MIN;
	static int16_t x351 = INT16_MIN;
	volatile int32_t t78 = 63169827;

	t78 = ((x349-(x350==x351))+x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x354 = INT16_MAX;
	static uint64_t x355 = 8722066988101377LLU;
	static int8_t x356 = INT8_MAX;
	volatile int32_t t79 = -1504;

	t79 = ((x353-(x354==x355))+x356);

	if (t79 != 126) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x357 = UINT64_MAX;
	uint16_t x358 = UINT16_MAX;
	int32_t x359 = INT32_MIN;
	int64_t x360 = 25752434LL;

	t80 = ((x357-(x358==x359))+x360);

	if (t80 != 25752433LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = -1874;
	volatile uint64_t x362 = UINT64_MAX;
	int8_t x363 = INT8_MIN;
	int64_t t81 = 17601879626755926LL;

	t81 = ((x361-(x362==x363))+x364);

	if (t81 != 1595323965LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 97U;
	uint16_t x367 = UINT16_MAX;
	static volatile uint64_t t82 = 3LLU;

	t82 = ((x365-(x366==x367))+x368);

	if (t82 != 126LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x370 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	uint32_t t83 = 14U;

	t83 = ((x369-(x370==x371))+x372);

	if (t83 != 2177885405U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x374 = 102;
	static volatile int8_t x376 = INT8_MAX;
	static volatile uint32_t t84 = 656843902U;

	t84 = ((x373-(x374==x375))+x376);

	if (t84 != 155U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x379 = 0U;
	int8_t x380 = -1;
	volatile uint32_t t85 = 2U;

	t85 = ((x377-(x378==x379))+x380);

	if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = INT8_MIN;
	volatile uint32_t t86 = 57U;

	t86 = ((x381-(x382==x383))+x384);

	if (t86 != 2296945394U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x385 = 0U;
	static int32_t x386 = INT32_MIN;
	static int8_t x388 = -1;
	int32_t t87 = 103;

	t87 = ((x385-(x386==x387))+x388);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x394 = 1;
	uint64_t x396 = 58684LLU;
	uint64_t t88 = 341882036795792585LLU;

	t88 = ((x393-(x394==x395))+x396);

	if (t88 != 25916LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = -1;
	int16_t x398 = 344;
	int32_t t89 = 147176434;

	t89 = ((x397-(x398==x399))+x400);

	if (t89 != 65534) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x401 = 18184567LL;
	static uint8_t x403 = 30U;
	int32_t x404 = -1;

	t90 = ((x401-(x402==x403))+x404);

	if (t90 != 18184566LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x405 = 13U;
	static int16_t x407 = INT16_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t91 = 32420346605685LLU;

	t91 = ((x405-(x406==x407))+x408);

	if (t91 != 12LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = -1;
	int32_t x410 = 307018165;
	volatile int32_t x411 = INT32_MIN;
	volatile int64_t t92 = -3910210641962LL;

	t92 = ((x409-(x410==x411))+x412);

	if (t92 != -7364886843LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x413 = 15332U;
	int32_t x414 = INT32_MAX;
	uint8_t x415 = UINT8_MAX;
	static int64_t x416 = -10698578483LL;
	static int64_t t93 = -1957737542099LL;

	t93 = ((x413-(x414==x415))+x416);

	if (t93 != -10698563151LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x417 = UINT32_MAX;
	int16_t x419 = 0;
	static uint16_t x420 = 30244U;
	volatile uint32_t t94 = 2433044U;

	t94 = ((x417-(x418==x419))+x420);

	if (t94 != 30243U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x421 = -1;
	static uint32_t x422 = 205U;
	static int64_t x423 = INT64_MIN;
	volatile int32_t t95 = -608;

	t95 = ((x421-(x422==x423))+x424);

	if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x427 = INT8_MIN;
	int8_t x428 = -1;
	volatile int64_t t96 = 2LL;

	t96 = ((x425-(x426==x427))+x428);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x430 = INT64_MAX;
	volatile uint16_t x432 = 13129U;

	t97 = ((x429-(x430==x431))+x432);

	if (t97 != -17628564LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x433 = 0U;
	uint64_t x434 = 1LLU;
	uint16_t x435 = 5U;
	volatile uint64_t x436 = 90581230LLU;
	volatile uint64_t t98 = 2866382LLU;

	t98 = ((x433-(x434==x435))+x436);

	if (t98 != 90581230LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = 46;
	uint64_t x438 = UINT64_MAX;
	int16_t x439 = INT16_MIN;
	volatile uint8_t x440 = UINT8_MAX;
	volatile int32_t t99 = -837;

	t99 = ((x437-(x438==x439))+x440);

	if (t99 != 301) { NG(); } else { ; }
	
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

