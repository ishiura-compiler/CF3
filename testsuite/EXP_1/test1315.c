#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = UINT64_MAX;
int64_t x9 = 1LL;
int32_t x13 = -1;
volatile uint64_t t3 = 14875901LLU;
static uint64_t x27 = UINT64_MAX;
uint16_t x30 = UINT16_MAX;
int8_t x37 = -3;
uint8_t x48 = 21U;
uint64_t x53 = 54812911004LLU;
static volatile uint64_t x58 = 160895851256LLU;
uint8_t x59 = 1U;
volatile uint32_t x60 = 7725073U;
uint8_t x62 = 1U;
volatile uint64_t t14 = 251481434029823LLU;
uint16_t x69 = 830U;
uint64_t x74 = UINT64_MAX;
static volatile int32_t x76 = INT32_MIN;
volatile int8_t x77 = INT8_MIN;
int32_t x81 = INT32_MIN;
volatile int32_t t18 = -52847;
volatile int32_t x85 = INT32_MIN;
int16_t x87 = INT16_MIN;
static int64_t x88 = -91992976302LL;
static uint16_t x91 = 28U;
volatile int64_t t20 = 1156854750LL;
int16_t x94 = INT16_MIN;
static volatile int32_t t21 = 64945;
int32_t x102 = INT32_MIN;
int32_t t23 = 1041;
static int16_t x105 = INT16_MAX;
static int32_t t24 = -58109;
int64_t x110 = -474594977984LL;
uint8_t x112 = UINT8_MAX;
volatile int16_t x113 = 0;
int32_t x115 = 7;
int64_t x122 = 332944150934359116LL;
uint16_t x123 = 60U;
int32_t x147 = INT32_MIN;
volatile int32_t x153 = -1;
volatile int32_t t34 = -89138760;
uint32_t x167 = 697U;
volatile uint64_t t37 = 47283LLU;
uint32_t x173 = 1772645U;
volatile int8_t x194 = INT8_MIN;
static int32_t t43 = 969354;
static int64_t x199 = INT64_MAX;
int32_t x211 = INT32_MIN;
int32_t t46 = -112459;
int64_t x213 = INT64_MIN;
int32_t x214 = 9731;
volatile uint64_t x218 = 7LLU;
int64_t t48 = -25962262LL;
int64_t x228 = -1LL;
int32_t t50 = 24327480;
static uint16_t x238 = 10245U;
uint64_t x241 = UINT64_MAX;
volatile int32_t t53 = -2810;
uint64_t t55 = 12658977072297560LLU;
int8_t x258 = -30;
volatile int32_t t57 = 989;
int32_t t59 = -23;
static uint8_t x278 = UINT8_MAX;
uint16_t x281 = 478U;
uint64_t x282 = 16LLU;
int8_t x289 = -1;
static int16_t x292 = INT16_MIN;
volatile int32_t t63 = 582769506;
uint32_t x295 = UINT32_MAX;
int8_t x302 = INT8_MIN;
int16_t x304 = 2;
uint32_t x308 = 126026U;
int64_t t68 = 44763602LL;
volatile int32_t t71 = 17871;
volatile int32_t x335 = -1;
uint32_t x340 = 1521243U;
int32_t t75 = 727;
volatile int32_t x347 = -1;
uint64_t x353 = UINT64_MAX;
uint16_t x358 = UINT16_MAX;
int16_t x365 = -1316;
int64_t t81 = -392LL;
int64_t x372 = -2147656354405328479LL;
volatile uint64_t t82 = 271714303250553LLU;
uint16_t x376 = 27168U;
volatile int64_t t85 = -3099601780LL;
int64_t x392 = INT64_MAX;
static volatile int16_t x394 = INT16_MAX;
volatile int16_t x395 = 0;
static int32_t x408 = -1;
static int16_t x411 = 2;
volatile int8_t x415 = -1;
volatile int32_t t91 = -655734;
static uint8_t x420 = 18U;
int32_t x422 = -55320;
int64_t x427 = -1LL;
volatile int32_t t98 = 10;


void f0(void) {
	uint32_t x2 = 1339881U;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 0;

	t0 = (((x1==x2)&x3)-x4);

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = 8252;
	volatile uint64_t x11 = 0LLU;
	int64_t x12 = -1LL;
	volatile uint64_t t1 = 289745368LLU;

	t1 = (((x9==x10)&x11)-x12);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = INT8_MIN;
	static int16_t x15 = -7057;
	int32_t x16 = INT32_MAX;
	volatile int32_t t2 = 18499;

	t2 = (((x13==x14)&x15)-x16);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	int16_t x18 = -1;
	uint64_t x19 = 362339214032LLU;
	int32_t x20 = -209985;

	t3 = (((x17==x18)&x19)-x20);

	if (t3 != 209985LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 240651102LL;
	int16_t x22 = -7;
	uint32_t x23 = 621915U;
	uint8_t x24 = 0U;
	volatile uint32_t t4 = 10178252U;

	t4 = (((x21==x22)&x23)-x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = 31;
	int64_t x26 = INT64_MAX;
	int64_t x28 = 2003921459LL;
	volatile uint64_t t5 = 5609236862LLU;

	t5 = (((x25==x26)&x27)-x28);

	if (t5 != 18446744071705630157LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 7U;
	static int64_t x31 = INT64_MIN;
	volatile uint8_t x32 = 15U;
	int64_t t6 = -533179568835LL;

	t6 = (((x29==x30)&x31)-x32);

	if (t6 != -15LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = -1;
	static int8_t x34 = INT8_MIN;
	uint64_t x35 = 265656992356LLU;
	uint64_t x36 = 17879937348LLU;
	volatile uint64_t t7 = 22496302LLU;

	t7 = (((x33==x34)&x35)-x36);

	if (t7 != 18446744055829614268LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x38 = INT64_MIN;
	int64_t x39 = -4794612LL;
	volatile uint64_t x40 = 130478889LLU;
	volatile uint64_t t8 = 2LLU;

	t8 = (((x37==x38)&x39)-x40);

	if (t8 != 18446744073579072727LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	static volatile int32_t x43 = -1;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t9 = -3;

	t9 = (((x41==x42)&x43)-x44);

	if (t9 != 32769) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 1;
	static int64_t x46 = INT64_MAX;
	static uint64_t x47 = 41LLU;
	uint64_t t10 = 126941480608559149LLU;

	t10 = (((x45==x46)&x47)-x48);

	if (t10 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = -21111010534322460LL;
	volatile uint16_t x55 = 1588U;
	int16_t x56 = 41;
	int32_t t11 = -139816;

	t11 = (((x53==x54)&x55)-x56);

	if (t11 != -41) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 19U;
	volatile uint32_t t12 = 136614138U;

	t12 = (((x57==x58)&x59)-x60);

	if (t12 != 4287242223U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -147336;
	volatile int64_t x63 = 566635860563655142LL;
	int8_t x64 = INT8_MIN;
	int64_t t13 = -8484057455017519LL;

	t13 = (((x61==x62)&x63)-x64);

	if (t13 != 128LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = 943;
	int8_t x66 = -29;
	static uint64_t x67 = 4402370LLU;
	int8_t x68 = INT8_MAX;

	t14 = (((x65==x66)&x67)-x68);

	if (t14 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x70 = 45414287U;
	int64_t x71 = INT64_MIN;
	uint8_t x72 = 25U;
	volatile int64_t t15 = -19857003080LL;

	t15 = (((x69==x70)&x71)-x72);

	if (t15 != -25LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 0;
	int64_t x75 = 1082497247381486LL;
	int64_t t16 = -133LL;

	t16 = (((x73==x74)&x75)-x76);

	if (t16 != 2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x78 = UINT8_MAX;
	static volatile int64_t x79 = -2466738004LL;
	uint16_t x80 = UINT16_MAX;
	volatile int64_t t17 = -1018850743806320743LL;

	t17 = (((x77==x78)&x79)-x80);

	if (t17 != -65535LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x82 = 125U;
	int8_t x83 = INT8_MIN;
	uint16_t x84 = 1U;

	t18 = (((x81==x82)&x83)-x84);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x86 = -1;
	volatile int64_t t19 = -4624933264224048LL;

	t19 = (((x85==x86)&x87)-x88);

	if (t19 != 91992976302LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	int16_t x90 = -1;
	int64_t x92 = 3848542052630471812LL;

	t20 = (((x89==x90)&x91)-x92);

	if (t20 != -3848542052630471812LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	int16_t x95 = 24;
	int16_t x96 = INT16_MAX;

	t21 = (((x93==x94)&x95)-x96);

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MAX;
	static uint32_t x98 = UINT32_MAX;
	static volatile int64_t x99 = -1LL;
	uint8_t x100 = 61U;
	static int64_t t22 = 1275LL;

	t22 = (((x97==x98)&x99)-x100);

	if (t22 != -61LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x101 = INT32_MIN;
	static uint8_t x103 = 2U;
	int32_t x104 = INT32_MAX;

	t23 = (((x101==x102)&x103)-x104);

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = -1LL;
	int32_t x107 = INT32_MAX;
	int16_t x108 = INT16_MAX;

	t24 = (((x105==x106)&x107)-x108);

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -12340824580356LL;
	static volatile int32_t x111 = 31967624;
	int32_t t25 = -7;

	t25 = (((x109==x110)&x111)-x112);

	if (t25 != -255) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x114 = -1;
	uint8_t x116 = 1U;
	int32_t t26 = -3;

	t26 = (((x113==x114)&x115)-x116);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	int8_t x124 = -1;
	int32_t t27 = -1;

	t27 = (((x121==x122)&x123)-x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = UINT8_MAX;
	int64_t x126 = 1637782LL;
	static int16_t x127 = INT16_MIN;
	uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t28 = 134188730U;

	t28 = (((x125==x126)&x127)-x128);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MAX;
	volatile int16_t x131 = -1;
	volatile int64_t x132 = -1LL;
	volatile int64_t t29 = -3LL;

	t29 = (((x129==x130)&x131)-x132);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = -1LL;
	static int32_t x135 = -77;
	int16_t x136 = INT16_MIN;
	volatile int32_t t30 = -15;

	t30 = (((x133==x134)&x135)-x136);

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -189LL;
	static int16_t x138 = 129;
	int8_t x139 = INT8_MIN;
	int64_t x140 = -1344358937311922395LL;
	int64_t t31 = 4404LL;

	t31 = (((x137==x138)&x139)-x140);

	if (t31 != 1344358937311922395LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = 212185988713520LL;
	int8_t x142 = INT8_MAX;
	uint64_t x143 = 2117928305344481LLU;
	uint16_t x144 = UINT16_MAX;
	static volatile uint64_t t32 = 790LLU;

	t32 = (((x141==x142)&x143)-x144);

	if (t32 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MIN;
	int64_t x146 = -61000697340155115LL;
	volatile int16_t x148 = -3727;
	int32_t t33 = -1;

	t33 = (((x145==x146)&x147)-x148);

	if (t33 != 3727) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x154 = 52U;
	int16_t x155 = INT16_MIN;
	volatile int32_t x156 = -1;

	t34 = (((x153==x154)&x155)-x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MIN;
	uint16_t x159 = 230U;
	int16_t x160 = -19;
	volatile int32_t t35 = -41098;

	t35 = (((x157==x158)&x159)-x160);

	if (t35 != 19) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -1222387;
	volatile uint8_t x162 = 0U;
	int8_t x163 = INT8_MIN;
	int16_t x164 = 0;
	static int32_t t36 = -6252220;

	t36 = (((x161==x162)&x163)-x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x165 = INT32_MAX;
	static int16_t x166 = -54;
	volatile uint64_t x168 = 1823613852LLU;

	t37 = (((x165==x166)&x167)-x168);

	if (t37 != 18446744071885937764LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	uint8_t x171 = 36U;
	uint32_t x172 = 6061U;
	volatile uint32_t t38 = 1775638U;

	t38 = (((x169==x170)&x171)-x172);

	if (t38 != 4294961235U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x174 = 31971LL;
	int32_t x175 = INT32_MAX;
	int8_t x176 = INT8_MAX;
	volatile int32_t t39 = -1;

	t39 = (((x173==x174)&x175)-x176);

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = 1;
	int32_t x178 = INT32_MAX;
	static uint8_t x179 = 10U;
	volatile uint32_t x180 = 354435361U;
	uint32_t t40 = 1004587U;

	t40 = (((x177==x178)&x179)-x180);

	if (t40 != 3940531935U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = 116U;
	static uint16_t x183 = UINT16_MAX;
	int16_t x184 = 0;
	int32_t t41 = -15235;

	t41 = (((x181==x182)&x183)-x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	uint32_t x190 = 1989U;
	volatile uint8_t x191 = UINT8_MAX;
	static int8_t x192 = -4;
	static int32_t t42 = 100;

	t42 = (((x189==x190)&x191)-x192);

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = INT8_MIN;
	int8_t x195 = INT8_MAX;
	static uint16_t x196 = 9215U;

	t43 = (((x193==x194)&x195)-x196);

	if (t43 != -9214) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 30U;
	uint32_t x198 = 3201910U;
	int8_t x200 = -1;
	volatile int64_t t44 = -37705LL;

	t44 = (((x197==x198)&x199)-x200);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MAX;
	int64_t x207 = -1LL;
	volatile int32_t x208 = INT32_MIN;
	volatile int64_t t45 = -79LL;

	t45 = (((x205==x206)&x207)-x208);

	if (t45 != 2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x209 = 25397U;
	static uint64_t x210 = UINT64_MAX;
	int32_t x212 = INT32_MAX;

	t46 = (((x209==x210)&x211)-x212);

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x215 = UINT32_MAX;
	int8_t x216 = -1;
	static volatile uint32_t t47 = 19490U;

	t47 = (((x213==x214)&x215)-x216);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x217 = INT8_MAX;
	static int64_t x219 = INT64_MIN;
	int32_t x220 = -604892046;

	t48 = (((x217==x218)&x219)-x220);

	if (t48 != 604892046LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x225 = 10865U;
	int32_t x226 = -1;
	int16_t x227 = 2527;
	static volatile int64_t t49 = 31043198LL;

	t49 = (((x225==x226)&x227)-x228);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 11242U;
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = INT32_MAX;
	static volatile uint16_t x232 = 1561U;

	t50 = (((x229==x230)&x231)-x232);

	if (t50 != -1561) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = -887;
	int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	int16_t x236 = 30;
	volatile int32_t t51 = -197;

	t51 = (((x233==x234)&x235)-x236);

	if (t51 != -30) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = -8;
	uint64_t x239 = 28438030916518LLU;
	uint64_t x240 = 5LLU;
	uint64_t t52 = 130LLU;

	t52 = (((x237==x238)&x239)-x240);

	if (t52 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x242 = UINT16_MAX;
	static int16_t x243 = -1;
	uint8_t x244 = UINT8_MAX;

	t53 = (((x241==x242)&x243)-x244);

	if (t53 != -255) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = -1LL;
	int8_t x246 = 0;
	int64_t x247 = INT64_MIN;
	uint64_t x248 = 3513394807369886614LLU;
	volatile uint64_t t54 = 20957LLU;

	t54 = (((x245==x246)&x247)-x248);

	if (t54 != 14933349266339665002LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int8_t x250 = INT8_MAX;
	static uint64_t x251 = 55LLU;
	static int8_t x252 = INT8_MIN;

	t55 = (((x249==x250)&x251)-x252);

	if (t55 != 128LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x257 = 95372LLU;
	uint16_t x259 = UINT16_MAX;
	int16_t x260 = -62;
	int32_t t56 = 654288;

	t56 = (((x257==x258)&x259)-x260);

	if (t56 != 62) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x265 = 43LLU;
	int8_t x266 = -1;
	uint16_t x267 = UINT16_MAX;
	static int32_t x268 = INT32_MAX;

	t57 = (((x265==x266)&x267)-x268);

	if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x270 = INT8_MIN;
	uint16_t x271 = 24947U;
	volatile int32_t x272 = 266619806;
	static int32_t t58 = 21580;

	t58 = (((x269==x270)&x271)-x272);

	if (t58 != -266619806) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x273 = 25LLU;
	int16_t x274 = INT16_MIN;
	int32_t x275 = 282394;
	static uint16_t x276 = 2U;

	t59 = (((x273==x274)&x275)-x276);

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = INT64_MAX;
	volatile uint8_t x279 = 7U;
	int16_t x280 = -1;
	static volatile int32_t t60 = -26;

	t60 = (((x277==x278)&x279)-x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x283 = -1;
	static volatile int32_t x284 = -1;
	int32_t t61 = 322;

	t61 = (((x281==x282)&x283)-x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x285 = -1;
	int32_t x286 = -25783518;
	uint64_t x287 = UINT64_MAX;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t62 = 24416443267858388LLU;

	t62 = (((x285==x286)&x287)-x288);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x290 = -1139437778258LL;
	volatile int16_t x291 = 4209;

	t63 = (((x289==x290)&x291)-x292);

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 146009112857050LLU;
	volatile int16_t x294 = INT16_MAX;
	static int32_t x296 = -15839;
	volatile uint32_t t64 = 202U;

	t64 = (((x293==x294)&x295)-x296);

	if (t64 != 15839U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x301 = 752U;
	static int8_t x303 = 6;
	int32_t t65 = 15;

	t65 = (((x301==x302)&x303)-x304);

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x305 = 68U;
	int64_t x306 = INT64_MIN;
	static volatile uint64_t x307 = 125509385061048LLU;
	uint64_t t66 = 19803721996LLU;

	t66 = (((x305==x306)&x307)-x308);

	if (t66 != 18446744073709425590LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x309 = 10U;
	uint16_t x310 = 226U;
	uint64_t x311 = 20132810478070LLU;
	uint8_t x312 = UINT8_MAX;
	volatile uint64_t t67 = 11605075LLU;

	t67 = (((x309==x310)&x311)-x312);

	if (t67 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MAX;
	int64_t x316 = 248750831LL;

	t68 = (((x313==x314)&x315)-x316);

	if (t68 != -248750831LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = INT8_MIN;
	static volatile int16_t x318 = -1;
	uint64_t x319 = 358446829503262332LLU;
	volatile uint16_t x320 = 25U;
	uint64_t t69 = 5203000LLU;

	t69 = (((x317==x318)&x319)-x320);

	if (t69 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = -1;
	uint32_t x322 = 169U;
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t70 = -916152;

	t70 = (((x321==x322)&x323)-x324);

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x325 = 205871063U;
	volatile int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	int8_t x328 = 1;

	t71 = (((x325==x326)&x327)-x328);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = 0U;
	int16_t x330 = INT16_MIN;
	volatile int32_t x331 = -1;
	int8_t x332 = -15;
	static volatile int32_t t72 = -189;

	t72 = (((x329==x330)&x331)-x332);

	if (t72 != 15) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x333 = INT64_MIN;
	int64_t x334 = -1LL;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t73 = 165136754LLU;

	t73 = (((x333==x334)&x335)-x336);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x337 = UINT8_MAX;
	int64_t x338 = -4603LL;
	volatile uint64_t x339 = 4212086520LLU;
	static volatile uint64_t t74 = 5383225359711760LLU;

	t74 = (((x337==x338)&x339)-x340);

	if (t74 != 18446744073708030373LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x341 = 5U;
	int64_t x342 = -9262798577653LL;
	int8_t x343 = INT8_MAX;
	uint8_t x344 = 3U;

	t75 = (((x341==x342)&x343)-x344);

	if (t75 != -3) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x345 = INT64_MIN;
	static int16_t x346 = -780;
	uint8_t x348 = 21U;
	int32_t t76 = 38010479;

	t76 = (((x345==x346)&x347)-x348);

	if (t76 != -21) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x349 = INT32_MAX;
	int32_t x350 = INT32_MIN;
	volatile int16_t x351 = -1;
	uint8_t x352 = UINT8_MAX;
	static volatile int32_t t77 = 57383496;

	t77 = (((x349==x350)&x351)-x352);

	if (t77 != -255) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x354 = -1;
	int16_t x355 = 10;
	static volatile int16_t x356 = -1;
	volatile int32_t t78 = 7544556;

	t78 = (((x353==x354)&x355)-x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = 4657;
	uint64_t x359 = 31882326054965LLU;
	int32_t x360 = -26763;
	volatile uint64_t t79 = 75260914LLU;

	t79 = (((x357==x358)&x359)-x360);

	if (t79 != 26763LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x361 = UINT32_MAX;
	int16_t x362 = INT16_MIN;
	volatile uint32_t x363 = 0U;
	static int8_t x364 = INT8_MAX;
	uint32_t t80 = 612U;

	t80 = (((x361==x362)&x363)-x364);

	if (t80 != 4294967169U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x366 = 31U;
	volatile int64_t x367 = -1LL;
	static uint32_t x368 = UINT32_MAX;

	t81 = (((x365==x366)&x367)-x368);

	if (t81 != -4294967295LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MAX;
	int64_t x370 = -1LL;
	uint64_t x371 = 41812152768067531LLU;

	t82 = (((x369==x370)&x371)-x372);

	if (t82 != 2147656354405328479LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = INT64_MIN;
	uint32_t x375 = 5661U;
	uint32_t t83 = 0U;

	t83 = (((x373==x374)&x375)-x376);

	if (t83 != 4294940128U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x377 = INT32_MAX;
	int32_t x378 = INT32_MAX;
	static uint8_t x379 = 75U;
	int8_t x380 = -15;
	volatile int32_t t84 = 97171419;

	t84 = (((x377==x378)&x379)-x380);

	if (t84 != 16) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x381 = 114U;
	int8_t x382 = INT8_MIN;
	int64_t x383 = -1LL;
	int64_t x384 = -3249LL;

	t85 = (((x381==x382)&x383)-x384);

	if (t85 != 3249LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x389 = 5U;
	int32_t x390 = INT32_MIN;
	static int8_t x391 = INT8_MIN;
	volatile int64_t t86 = 105802LL;

	t86 = (((x389==x390)&x391)-x392);

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x393 = INT8_MIN;
	int16_t x396 = -1;
	int32_t t87 = 2022337;

	t87 = (((x393==x394)&x395)-x396);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x401 = -1;
	int16_t x402 = 458;
	static int32_t x403 = 409823104;
	uint64_t x404 = 10357712613478LLU;
	uint64_t t88 = 54706810398867LLU;

	t88 = (((x401==x402)&x403)-x404);

	if (t88 != 18446733715996938138LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x405 = -1LL;
	volatile int64_t x406 = 93LL;
	static int64_t x407 = INT64_MIN;
	int64_t t89 = 14701165664128815LL;

	t89 = (((x405==x406)&x407)-x408);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = -1;
	uint64_t x410 = 256100130560489621LLU;
	int64_t x412 = -1LL;
	int64_t t90 = 11453602470470LL;

	t90 = (((x409==x410)&x411)-x412);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x413 = UINT32_MAX;
	uint64_t x414 = 310LLU;
	int16_t x416 = -1;

	t91 = (((x413==x414)&x415)-x416);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x417 = UINT64_MAX;
	static uint8_t x418 = 21U;
	static volatile int64_t x419 = INT64_MAX;
	static int64_t t92 = -3LL;

	t92 = (((x417==x418)&x419)-x420);

	if (t92 != -18LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = -1;
	int64_t x423 = INT64_MAX;
	int16_t x424 = INT16_MAX;
	int64_t t93 = -27515292477LL;

	t93 = (((x421==x422)&x423)-x424);

	if (t93 != -32767LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = 1;
	uint64_t x426 = 681606217LLU;
	int64_t x428 = INT64_MAX;
	static volatile int64_t t94 = 64359067294179341LL;

	t94 = (((x425==x426)&x427)-x428);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 6899LLU;
	int32_t x430 = INT32_MAX;
	int32_t x431 = INT32_MIN;
	int8_t x432 = -1;
	int32_t t95 = -317050;

	t95 = (((x429==x430)&x431)-x432);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x433 = 5852843567824753LLU;
	uint8_t x434 = 10U;
	volatile uint32_t x435 = 1067U;
	static int16_t x436 = -1;
	volatile uint32_t t96 = 40804U;

	t96 = (((x433==x434)&x435)-x436);

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x437 = 4U;
	int64_t x438 = INT64_MIN;
	volatile int32_t x439 = INT32_MAX;
	int32_t x440 = -239;
	int32_t t97 = 3746;

	t97 = (((x437==x438)&x439)-x440);

	if (t97 != 239) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x441 = -1;
	static volatile uint64_t x442 = UINT64_MAX;
	volatile uint8_t x443 = UINT8_MAX;
	int32_t x444 = -1;

	t98 = (((x441==x442)&x443)-x444);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x445 = INT16_MIN;
	static int64_t x446 = INT64_MIN;
	static int16_t x447 = INT16_MAX;
	volatile uint32_t x448 = 353165U;
	uint32_t t99 = 19737U;

	t99 = (((x445==x446)&x447)-x448);

	if (t99 != 4294614131U) { NG(); } else { ; }
	
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

