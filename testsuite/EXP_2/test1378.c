#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t2 = 245U;
volatile int32_t x50 = -5988;
volatile uint64_t t12 = 2LLU;
static volatile int64_t x60 = 179615593681708LL;
volatile int64_t x63 = INT64_MIN;
int64_t x71 = -1LL;
int64_t x79 = -59774659852303391LL;
volatile int32_t t18 = -1028445;
volatile int32_t t19 = 4080;
static int32_t t21 = -21326289;
int32_t x110 = INT32_MIN;
int8_t x113 = 42;
int8_t x132 = INT8_MAX;
int32_t x136 = -33;
static int8_t x144 = -1;
uint16_t x148 = 2716U;
int16_t x156 = INT16_MIN;
uint32_t t35 = 89168U;
uint16_t x165 = 3542U;
uint64_t x168 = 97654835131633121LLU;
volatile int32_t x172 = INT32_MIN;
int16_t x174 = INT16_MIN;
static volatile int32_t t39 = -559077;
int16_t x184 = -1;
static int64_t x192 = INT64_MIN;
volatile int32_t x194 = -1;
int16_t x196 = 0;
int16_t x198 = -9279;
int32_t x207 = INT32_MIN;
uint16_t x208 = 1594U;
int32_t x213 = INT32_MIN;
static int8_t x220 = INT8_MIN;
uint16_t x222 = 122U;
volatile int8_t x224 = INT8_MIN;
volatile int32_t t53 = 327358;
uint32_t x233 = 434865U;
int64_t x242 = 2019132981LL;
int64_t t56 = -1595293063355LL;
volatile int64_t x254 = -1LL;
static int64_t x258 = INT64_MIN;
volatile int64_t x262 = -26297290LL;
uint8_t x272 = 61U;
int64_t x280 = -1213475961LL;
volatile int64_t t64 = 450870979LL;
uint64_t x294 = 34946845LLU;
volatile int16_t x300 = INT16_MIN;
int16_t x302 = -2409;
int64_t x304 = 849212562439LL;
int64_t t70 = -10518LL;
int16_t x306 = INT16_MIN;
volatile int64_t x314 = INT64_MIN;
int64_t x320 = -1LL;
int64_t x321 = INT64_MAX;
static volatile int32_t x323 = INT32_MIN;
int32_t x326 = 1;
volatile uint32_t x328 = 24852U;
int8_t x329 = INT8_MAX;
int8_t x336 = INT8_MAX;
static uint64_t x346 = UINT64_MAX;
int32_t x348 = 26;
int32_t x350 = -1;
int32_t x353 = 31;
static volatile uint32_t x354 = 4U;
volatile uint16_t x356 = 1151U;
static volatile uint32_t t84 = 7286720U;
volatile uint32_t x362 = 196U;
int8_t x366 = -2;
volatile uint8_t x376 = 82U;
int32_t x382 = 1;
uint64_t x383 = UINT64_MAX;
uint64_t x390 = UINT64_MAX;
int16_t x391 = INT16_MAX;
volatile int64_t x393 = -2870311916LL;
int64_t t93 = -1448LL;
int64_t x402 = -11879257LL;
static int8_t x403 = INT8_MIN;
int8_t x405 = -1;
static int16_t x410 = -1760;
int64_t x414 = -1LL;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int16_t x2 = 1;
	int16_t x3 = -2236;
	int64_t x4 = -523358841LL;
	int64_t t0 = -51523248735771LL;

	t0 = ((x1-(x2<x3))^x4);

	if (t0 != -3771608456LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x9 = -1;
	uint16_t x10 = UINT16_MAX;
	uint32_t x11 = 1261514100U;
	int16_t x12 = 2039;
	volatile int32_t t1 = 18;

	t1 = ((x9-(x10<x11))^x12);

	if (t1 != -2039) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	int16_t x14 = -1001;
	volatile uint32_t x15 = UINT32_MAX;
	static int16_t x16 = 6;

	t2 = ((x13-(x14<x15))^x16);

	if (t2 != 4294967288U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	static int32_t x18 = -1;
	int8_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t3 = 547U;

	t3 = ((x17-(x18<x19))^x20);

	if (t3 != 32767U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 3526552822LLU;
	uint64_t x22 = UINT64_MAX;
	static int8_t x23 = INT8_MAX;
	int64_t x24 = -1LL;
	volatile uint64_t t4 = 935228LLU;

	t4 = ((x21-(x22<x23))^x24);

	if (t4 != 18446744070182998793LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int16_t x26 = 0;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MAX;
	int32_t t5 = -131695523;

	t5 = ((x25-(x26<x27))^x28);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	volatile uint64_t x30 = 113174LLU;
	uint16_t x31 = UINT16_MAX;
	int8_t x32 = INT8_MIN;
	int32_t t6 = 2469440;

	t6 = ((x29-(x30<x31))^x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	uint8_t x34 = UINT8_MAX;
	uint32_t x35 = 12337U;
	uint64_t x36 = UINT64_MAX;
	uint64_t t7 = 1987755LLU;

	t7 = ((x33-(x34<x35))^x36);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 39U;
	int32_t x38 = -1;
	int32_t x39 = -1;
	int8_t x40 = 1;
	volatile uint32_t t8 = 4U;

	t8 = ((x37-(x38<x39))^x40);

	if (t8 != 38U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MIN;
	static uint64_t x42 = 34684045224242409LLU;
	volatile uint8_t x43 = UINT8_MAX;
	volatile uint16_t x44 = 1U;
	volatile int32_t t9 = -72;

	t9 = ((x41-(x42<x43))^x44);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = -1664112702487366LL;
	static int8_t x47 = 1;
	int8_t x48 = -1;
	volatile int32_t t10 = -253;

	t10 = ((x45-(x46<x47))^x48);

	if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = UINT64_MAX;
	int8_t x51 = 18;
	static volatile int32_t x52 = -1;
	uint64_t t11 = 1LLU;

	t11 = ((x49-(x50<x51))^x52);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 1335122634948LLU;
	int16_t x54 = INT16_MIN;
	static uint16_t x55 = UINT16_MAX;
	volatile int64_t x56 = -1LL;

	t12 = ((x53-(x54<x55))^x56);

	if (t12 != 18446742738586916668LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int64_t x58 = -1LL;
	int64_t x59 = INT64_MIN;
	int64_t t13 = -1060LL;

	t13 = ((x57-(x58<x59))^x60);

	if (t13 != -179617618439380LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = 8;
	int64_t x62 = INT64_MAX;
	static uint32_t x64 = 35500704U;
	uint32_t t14 = 1939196U;

	t14 = ((x61-(x62<x63))^x64);

	if (t14 != 35500712U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = UINT8_MAX;
	volatile int16_t x70 = -7688;
	int8_t x72 = 5;
	int32_t t15 = -56;

	t15 = ((x69-(x70<x71))^x72);

	if (t15 != 251) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = 704334942;
	static int8_t x74 = 0;
	volatile int16_t x75 = -741;
	int16_t x76 = INT16_MAX;
	int32_t t16 = -5364633;

	t16 = ((x73-(x74<x75))^x76);

	if (t16 != 704328609) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x77 = UINT64_MAX;
	uint32_t x78 = 25U;
	int32_t x80 = INT32_MAX;
	static volatile uint64_t t17 = 35511880558516LLU;

	t17 = ((x77-(x78<x79))^x80);

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = 2087296;
	int32_t x83 = -1;
	volatile int8_t x84 = INT8_MIN;

	t18 = ((x81-(x82<x83))^x84);

	if (t18 != 2147483520) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x85 = INT8_MIN;
	volatile uint16_t x86 = UINT16_MAX;
	int16_t x87 = -1;
	int16_t x88 = -1;

	t19 = ((x85-(x86<x87))^x88);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 768U;
	int64_t x90 = -2099452733032862304LL;
	uint8_t x91 = 8U;
	int32_t x92 = INT32_MIN;
	volatile int32_t t20 = -1396;

	t20 = ((x89-(x90<x91))^x92);

	if (t20 != -2147482881) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MAX;
	static volatile int16_t x94 = INT16_MAX;
	uint8_t x95 = 5U;
	uint16_t x96 = 18U;

	t21 = ((x93-(x94<x95))^x96);

	if (t21 != 2147483629) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 395;
	int16_t x98 = 4305;
	static volatile int32_t x99 = INT32_MAX;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t22 = 74681780103095LLU;

	t22 = ((x97-(x98<x99))^x100);

	if (t22 != 18446744073709551221LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 72U;
	static int8_t x102 = 48;
	int8_t x103 = INT8_MAX;
	uint64_t x104 = 195626752912LLU;
	uint64_t t23 = 1801LLU;

	t23 = ((x101-(x102<x103))^x104);

	if (t23 != 195626752983LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = INT8_MAX;
	int64_t x106 = INT64_MAX;
	static int8_t x107 = -1;
	static int64_t x108 = INT64_MIN;
	int64_t t24 = 8009551089LL;

	t24 = ((x105-(x106<x107))^x108);

	if (t24 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x109 = 87LLU;
	int8_t x111 = -1;
	int32_t x112 = -59172733;
	uint64_t t25 = 37521960602LLU;

	t25 = ((x109-(x110<x111))^x112);

	if (t25 != 18446744073650378965LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x114 = 2698783U;
	int32_t x115 = INT32_MIN;
	static volatile int32_t x116 = INT32_MIN;
	static int32_t t26 = -155468456;

	t26 = ((x113-(x114<x115))^x116);

	if (t26 != -2147483607) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	volatile uint32_t x122 = UINT32_MAX;
	int16_t x123 = -1;
	static volatile int32_t x124 = -1;
	int32_t t27 = -234;

	t27 = ((x121-(x122<x123))^x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -1;
	int64_t x130 = -1LL;
	int8_t x131 = INT8_MAX;
	int32_t t28 = 77;

	t28 = ((x129-(x130<x131))^x132);

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = 72U;
	uint32_t x134 = 17U;
	int8_t x135 = -1;
	volatile int32_t t29 = -192;

	t29 = ((x133-(x134<x135))^x136);

	if (t29 != -104) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -61;
	int32_t x138 = INT32_MIN;
	volatile uint64_t x139 = 11339LLU;
	static int32_t x140 = INT32_MIN;
	int32_t t30 = 763841;

	t30 = ((x137-(x138<x139))^x140);

	if (t30 != 2147483587) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x141 = -1;
	int8_t x142 = -47;
	int8_t x143 = INT8_MAX;
	static int32_t t31 = -358528717;

	t31 = ((x141-(x142<x143))^x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x145 = -1LL;
	uint64_t x146 = 430940008967745LLU;
	int8_t x147 = INT8_MIN;
	int64_t t32 = -85097LL;

	t32 = ((x145-(x146<x147))^x148);

	if (t32 != -2718LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MAX;
	volatile int8_t x150 = 29;
	uint64_t x151 = UINT64_MAX;
	uint64_t x152 = 15219LLU;
	uint64_t t33 = 167835230940985805LLU;

	t33 = ((x149-(x150<x151))^x152);

	if (t33 != 9223372036854760589LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = 24776U;
	static uint32_t x154 = 3U;
	int64_t x155 = INT64_MIN;
	volatile int32_t t34 = 28;

	t34 = ((x153-(x154<x155))^x156);

	if (t34 != -7992) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x157 = UINT32_MAX;
	int16_t x158 = 426;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = UINT8_MAX;

	t35 = ((x157-(x158<x159))^x160);

	if (t35 != 4294967040U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x162 = -799;
	uint16_t x163 = 424U;
	int16_t x164 = 14;
	static uint32_t t36 = 1584098U;

	t36 = ((x161-(x162<x163))^x164);

	if (t36 != 4294967280U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x166 = -1LL;
	static uint32_t x167 = 3678U;
	volatile uint64_t t37 = 15351575527124LLU;

	t37 = ((x165-(x166<x167))^x168);

	if (t37 != 97654835131629620LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -1LL;
	uint8_t x170 = 18U;
	int16_t x171 = 391;
	int64_t t38 = -2LL;

	t38 = ((x169-(x170<x171))^x172);

	if (t38 != 2147483646LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -1;
	int8_t x175 = -2;
	int32_t x176 = INT32_MIN;

	t39 = ((x173-(x174<x175))^x176);

	if (t39 != 2147483646) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x177 = INT8_MIN;
	int64_t x178 = -1LL;
	uint16_t x179 = 24U;
	uint16_t x180 = 1U;
	volatile int32_t t40 = 1018601;

	t40 = ((x177-(x178<x179))^x180);

	if (t40 != -130) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	uint16_t x182 = 3863U;
	static int8_t x183 = INT8_MAX;
	int32_t t41 = INT32_MAX;

	t41 = ((x181-(x182<x183))^x184);

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -1;
	volatile uint32_t x186 = 14U;
	int16_t x187 = 0;
	volatile int8_t x188 = -1;
	int32_t t42 = -13;

	t42 = ((x185-(x186<x187))^x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MIN;
	volatile int64_t t43 = 10998644378LL;

	t43 = ((x189-(x190<x191))^x192);

	if (t43 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x193 = INT16_MIN;
	static volatile int32_t x195 = INT32_MIN;
	int32_t t44 = -23762;

	t44 = ((x193-(x194<x195))^x196);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MAX;
	volatile int16_t x199 = INT16_MIN;
	uint16_t x200 = 13560U;
	volatile int64_t t45 = -1479475088978182LL;

	t45 = ((x197-(x198<x199))^x200);

	if (t45 != 9223372036854762247LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 5908U;
	int8_t x202 = INT8_MAX;
	uint64_t x203 = 747408341038378434LLU;
	int64_t x204 = -347831707LL;
	volatile int64_t t46 = 15077LL;

	t46 = ((x201-(x202<x203))^x204);

	if (t46 != -347826826LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = -1093879LL;
	int32_t x206 = INT32_MIN;
	int64_t t47 = 86628084998283LL;

	t47 = ((x205-(x206<x207))^x208);

	if (t47 != -1095373LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 8781LLU;
	static volatile int64_t x210 = -1LL;
	volatile int16_t x211 = 0;
	static int32_t x212 = INT32_MIN;
	uint64_t t48 = 3170241350LLU;

	t48 = ((x209-(x210<x211))^x212);

	if (t48 != 18446744071562076748LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x214 = 24U;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = 1U;
	volatile int32_t t49 = 7216528;

	t49 = ((x213-(x214<x215))^x216);

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MAX;
	static int32_t x218 = 195;
	volatile int32_t x219 = 1976755;
	volatile int32_t t50 = -4;

	t50 = ((x217-(x218<x219))^x220);

	if (t50 != -32642) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x221 = -1;
	int64_t x223 = INT64_MIN;
	int32_t t51 = -556567091;

	t51 = ((x221-(x222<x223))^x224);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = 0;
	static int16_t x226 = INT16_MIN;
	int32_t x227 = -1150;
	volatile int8_t x228 = INT8_MIN;
	static volatile int32_t t52 = 29;

	t52 = ((x225-(x226<x227))^x228);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x229 = -1;
	int16_t x230 = INT16_MAX;
	uint8_t x231 = UINT8_MAX;
	int16_t x232 = -1;

	t53 = ((x229-(x230<x231))^x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x234 = 30;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = 58U;
	volatile uint32_t t54 = 43329U;

	t54 = ((x233-(x234<x235))^x236);

	if (t54 != 434827U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x237 = -7854444;
	int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MIN;
	uint32_t x240 = 232U;
	volatile uint32_t t55 = 100065290U;

	t55 = ((x237-(x238<x239))^x240);

	if (t55 != 4287112827U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = 9;
	uint32_t x243 = 11U;
	int64_t x244 = 2282722093136LL;

	t56 = ((x241-(x242<x243))^x244);

	if (t56 != 2282722093145LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = 2;
	int8_t x250 = 53;
	static int8_t x251 = INT8_MAX;
	volatile int32_t x252 = INT32_MAX;
	volatile int32_t t57 = 3163928;

	t57 = ((x249-(x250<x251))^x252);

	if (t57 != 2147483646) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = INT8_MIN;
	volatile int16_t x255 = -1;
	int32_t x256 = 13171612;
	int32_t t58 = -81763;

	t58 = ((x253-(x254<x255))^x256);

	if (t58 != -13171684) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = INT16_MIN;
	uint8_t x259 = 2U;
	static volatile int32_t x260 = 1;
	volatile int32_t t59 = -1;

	t59 = ((x257-(x258<x259))^x260);

	if (t59 != -32770) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x261 = 23326820569802847LLU;
	volatile int16_t x263 = INT16_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile uint64_t t60 = 31890099803713227LLU;

	t60 = ((x261-(x262<x263))^x264);

	if (t60 != 23326820569802913LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = 3;
	int64_t x266 = -1LL;
	volatile uint8_t x267 = 47U;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t61 = 128;

	t61 = ((x265-(x266<x267))^x268);

	if (t61 != -32766) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x269 = 1;
	volatile int64_t x270 = INT64_MAX;
	int8_t x271 = -49;
	int32_t t62 = 475930030;

	t62 = ((x269-(x270<x271))^x272);

	if (t62 != 60) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = -1;
	volatile uint8_t x274 = UINT8_MAX;
	static int32_t x275 = INT32_MAX;
	int64_t x276 = -13860056537861LL;
	volatile int64_t t63 = -48261200LL;

	t63 = ((x273-(x274<x275))^x276);

	if (t63 != 13860056537861LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x277 = INT64_MIN;
	static volatile int64_t x278 = -1LL;
	int32_t x279 = -96872;

	t64 = ((x277-(x278<x279))^x280);

	if (t64 != 9223372035641299847LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x281 = -1LL;
	uint32_t x282 = 30U;
	int16_t x283 = INT16_MAX;
	static int16_t x284 = INT16_MIN;
	static volatile int64_t t65 = -115771453877552LL;

	t65 = ((x281-(x282<x283))^x284);

	if (t65 != 32766LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = 225677840;
	static int8_t x286 = -12;
	uint32_t x287 = 499913U;
	uint32_t x288 = 43U;
	uint32_t t66 = 8496410U;

	t66 = ((x285-(x286<x287))^x288);

	if (t66 != 225677883U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 894LLU;
	volatile int16_t x290 = -2;
	static volatile int8_t x291 = 1;
	int32_t x292 = -126;
	uint64_t t67 = 63806LLU;

	t67 = ((x289-(x290<x291))^x292);

	if (t67 != 18446744073709550847LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MAX;
	int32_t x295 = -1;
	int32_t x296 = 0;
	static volatile int32_t t68 = -5492876;

	t68 = ((x293-(x294<x295))^x296);

	if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = -1;
	uint32_t x298 = 4089575U;
	uint16_t x299 = UINT16_MAX;
	int32_t t69 = 1486473;

	t69 = ((x297-(x298<x299))^x300);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = -1LL;
	int32_t x303 = INT32_MAX;

	t70 = ((x301-(x302<x303))^x304);

	if (t70 != -849212562439LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -11983484;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = 36993254703743327LL;
	int64_t t71 = -630762LL;

	t71 = ((x305-(x306<x307))^x308);

	if (t71 != -36993254692297508LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x310 = INT16_MIN;
	uint8_t x311 = 1U;
	int64_t x312 = INT64_MIN;
	volatile int64_t t72 = -7658860991345LL;

	t72 = ((x309-(x310<x311))^x312);

	if (t72 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MAX;
	uint16_t x315 = UINT16_MAX;
	int64_t x316 = -1LL;
	volatile int64_t t73 = 10149271641LL;

	t73 = ((x313-(x314<x315))^x316);

	if (t73 != -127LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = INT16_MAX;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = 49;
	volatile int64_t t74 = 1217LL;

	t74 = ((x317-(x318<x319))^x320);

	if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x322 = 1;
	int64_t x324 = INT64_MIN;
	static int64_t t75 = -45LL;

	t75 = ((x321-(x322<x323))^x324);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x327 = UINT16_MAX;
	volatile uint32_t t76 = 454U;

	t76 = ((x325-(x326<x327))^x328);

	if (t76 != 4294909675U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x330 = 553259LL;
	int16_t x331 = 1;
	static int32_t x332 = -1;
	int32_t t77 = -3479369;

	t77 = ((x329-(x330<x331))^x332);

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = 13U;
	int16_t x334 = 0;
	int32_t x335 = 112358830;
	int32_t t78 = -481046622;

	t78 = ((x333-(x334<x335))^x336);

	if (t78 != 115) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int8_t x338 = 0;
	uint16_t x339 = 5889U;
	static int8_t x340 = -1;
	int32_t t79 = -122;

	t79 = ((x337-(x338<x339))^x340);

	if (t79 != -255) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x341 = 28077954819543LL;
	int16_t x342 = -1;
	uint8_t x343 = 7U;
	static int8_t x344 = INT8_MAX;
	volatile int64_t t80 = 440064LL;

	t80 = ((x341-(x342<x343))^x344);

	if (t80 != 28077954819497LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x345 = 4LLU;
	uint32_t x347 = 1155287351U;
	static volatile uint64_t t81 = 1646915893067118923LLU;

	t81 = ((x345-(x346<x347))^x348);

	if (t81 != 30LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = 1;
	int64_t x351 = 1578503739466703LL;
	volatile int8_t x352 = -30;
	volatile int32_t t82 = -54851;

	t82 = ((x349-(x350<x351))^x352);

	if (t82 != -30) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x355 = 29U;
	volatile int32_t t83 = 33;

	t83 = ((x353-(x354<x355))^x356);

	if (t83 != 1121) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = INT32_MAX;
	int32_t x358 = 3871043;
	volatile int64_t x359 = INT64_MIN;
	uint32_t x360 = 939U;

	t84 = ((x357-(x358<x359))^x360);

	if (t84 != 2147482708U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x361 = INT16_MIN;
	uint16_t x363 = 0U;
	int8_t x364 = 34;
	static int32_t t85 = 3;

	t85 = ((x361-(x362<x363))^x364);

	if (t85 != -32734) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x365 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	int64_t x368 = -1LL;
	volatile int64_t t86 = 163058984527501769LL;

	t86 = ((x365-(x366<x367))^x368);

	if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MAX;
	uint64_t x370 = 87554537376144646LLU;
	int64_t x371 = -1LL;
	int32_t x372 = INT32_MIN;
	static volatile int64_t t87 = -556531402434108506LL;

	t87 = ((x369-(x370<x371))^x372);

	if (t87 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x374 = 738359;
	static uint64_t x375 = UINT64_MAX;
	uint64_t t88 = 50654418386967LLU;

	t88 = ((x373-(x374<x375))^x376);

	if (t88 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -112929571953LL;
	uint32_t x378 = UINT32_MAX;
	int32_t x379 = INT32_MIN;
	static int16_t x380 = INT16_MAX;
	volatile int64_t t89 = -6863792264LL;

	t89 = ((x377-(x378<x379))^x380);

	if (t89 != -112929602448LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = -1;
	int8_t x384 = 29;
	int32_t t90 = -178542117;

	t90 = ((x381-(x382<x383))^x384);

	if (t90 != -29) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MAX;
	static int16_t x386 = -658;
	int64_t x387 = -1LL;
	uint32_t x388 = 1556U;
	volatile uint32_t t91 = 41543U;

	t91 = ((x385-(x386<x387))^x388);

	if (t91 != 1642U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = INT64_MIN;
	int8_t x392 = -1;
	static int64_t t92 = INT64_MAX;

	t92 = ((x389-(x390<x391))^x392);

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x394 = 107LLU;
	volatile int64_t x395 = -1LL;
	int8_t x396 = -30;

	t93 = ((x393-(x394<x395))^x396);

	if (t93 != 2870311921LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MIN;
	int64_t t94 = 122184LL;

	t94 = ((x397-(x398<x399))^x400);

	if (t94 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = INT32_MAX;
	volatile int8_t x404 = -42;
	volatile int32_t t95 = -653;

	t95 = ((x401-(x402<x403))^x404);

	if (t95 != -2147483608) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x406 = 8;
	volatile int64_t x407 = 1085614896718481873LL;
	uint32_t x408 = 2074U;
	uint32_t t96 = 228465517U;

	t96 = ((x405-(x406<x407))^x408);

	if (t96 != 4294965220U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x409 = 0;
	static uint16_t x411 = 3950U;
	int32_t x412 = INT32_MIN;
	volatile int32_t t97 = INT32_MAX;

	t97 = ((x409-(x410<x411))^x412);

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x413 = -178738558403LL;
	uint32_t x415 = 95U;
	volatile uint16_t x416 = UINT16_MAX;
	int64_t t98 = 22750LL;

	t98 = ((x413-(x414<x415))^x416);

	if (t98 != -178738498109LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x417 = 1530730LL;
	static int16_t x418 = 3137;
	uint16_t x419 = 28882U;
	static int32_t x420 = INT32_MIN;
	volatile int64_t t99 = -18795LL;

	t99 = ((x417-(x418<x419))^x420);

	if (t99 != -2145952919LL) { NG(); } else { ; }
	
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

