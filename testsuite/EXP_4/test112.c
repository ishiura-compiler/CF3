#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = 18LLU;
volatile int32_t t0 = 0;
static int16_t x9 = INT16_MIN;
volatile int64_t x18 = INT64_MIN;
static int16_t x23 = INT16_MAX;
volatile int64_t x29 = -1LL;
static uint32_t x45 = 13U;
static volatile int64_t x47 = INT64_MIN;
volatile int32_t x50 = INT32_MAX;
volatile uint64_t x60 = 2003323LLU;
volatile int32_t t14 = -487562;
int16_t x66 = -1;
volatile int32_t t15 = -756759;
int8_t x75 = 51;
int16_t x80 = INT16_MIN;
static volatile uint8_t x82 = UINT8_MAX;
static int32_t t18 = -241752;
int8_t x97 = -15;
uint32_t x102 = UINT32_MAX;
uint8_t x121 = UINT8_MAX;
int32_t t26 = -41347;
int64_t x129 = 61040710LL;
int16_t x132 = 27;
static int8_t x134 = -1;
static int64_t x140 = INT64_MIN;
volatile int32_t t31 = -13;
int32_t t34 = 52465333;
int8_t x165 = INT8_MAX;
int32_t x168 = -1;
int32_t x170 = -78172816;
int8_t x172 = INT8_MAX;
uint64_t x174 = UINT64_MAX;
uint16_t x175 = 3098U;
volatile int16_t x176 = -15;
int32_t x177 = INT32_MIN;
int32_t t39 = 383;
uint64_t x181 = 2858362761767118704LLU;
uint16_t x185 = 6U;
uint64_t x188 = UINT64_MAX;
uint8_t x193 = 1U;
static uint64_t x200 = 176LLU;
uint16_t x202 = UINT16_MAX;
int64_t x203 = INT64_MIN;
int8_t x205 = INT8_MIN;
uint8_t x215 = UINT8_MAX;
int16_t x216 = INT16_MIN;
int32_t t49 = 2023;
uint32_t x225 = 305U;
uint16_t x228 = 4773U;
static int32_t t50 = -15;
volatile int64_t x234 = INT64_MAX;
static volatile int64_t x237 = INT64_MAX;
int32_t t54 = 111930278;
uint16_t x246 = UINT16_MAX;
static uint64_t x248 = 1923899854133922LLU;
int64_t x249 = INT64_MIN;
static uint64_t x251 = UINT64_MAX;
volatile int16_t x265 = -1;
uint16_t x266 = 317U;
static int16_t x280 = INT16_MIN;
static int32_t x282 = -1;
static int32_t t61 = 7;
uint16_t x288 = 1056U;
int64_t x289 = 25208860980789LL;
volatile int32_t t64 = 1132;
int16_t x300 = INT16_MIN;
static int16_t x301 = 592;
int32_t t67 = -35;
static int16_t x316 = -15657;
int8_t x319 = 0;
uint64_t x326 = 269267597937LLU;
int8_t x328 = -1;
int8_t x333 = -1;
volatile int64_t x334 = INT64_MAX;
volatile int32_t t74 = -974706636;
volatile uint8_t x347 = UINT8_MAX;
uint64_t x348 = 964244088LLU;
volatile int8_t x351 = -7;
uint16_t x362 = UINT16_MAX;
static int64_t x363 = -1LL;
static int64_t x374 = INT64_MAX;
uint32_t x376 = UINT32_MAX;
volatile int16_t x391 = INT16_MIN;
static uint8_t x402 = 20U;
int32_t t90 = -13899021;
volatile int32_t t91 = 2;
uint32_t x426 = UINT32_MAX;
static uint8_t x434 = 1U;
int8_t x436 = INT8_MIN;
int8_t x443 = 0;
int16_t x451 = 0;


void f0(void) {
	uint64_t x1 = 53679LLU;
	int16_t x2 = -1;
	int32_t x4 = -1190440;

	t0 = (x1==(x2<(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2U;
	int32_t x6 = -1;
	int16_t x7 = INT16_MIN;
	volatile uint32_t x8 = 69009U;
	volatile int32_t t1 = -413524;

	t1 = (x5==(x6<(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = 2201455311959543300LL;
	uint32_t x11 = UINT32_MAX;
	int64_t x12 = -1LL;
	int32_t t2 = -402;

	t2 = (x9==(x10<(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static uint64_t x14 = UINT64_MAX;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = 444U;
	volatile int32_t t3 = -118470886;

	t3 = (x13==(x14<(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 1;
	uint64_t x19 = 257367487688LLU;
	int16_t x20 = -20;
	volatile int32_t t4 = -110;

	t4 = (x17==(x18<(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 7679U;
	static int32_t x22 = INT32_MAX;
	int8_t x24 = INT8_MAX;
	int32_t t5 = -77988677;

	t5 = (x21==(x22<(x23+x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	uint64_t x26 = 1LLU;
	static int16_t x27 = INT16_MAX;
	int8_t x28 = 1;
	int32_t t6 = -1378798;

	t6 = (x25==(x26<(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MIN;
	uint64_t x31 = 10754629LLU;
	int32_t x32 = 324;
	volatile int32_t t7 = -934;

	t7 = (x29==(x30<(x31+x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = 1;
	volatile int64_t x34 = INT64_MAX;
	int16_t x35 = -247;
	int64_t x36 = -1LL;
	int32_t t8 = 9;

	t8 = (x33==(x34<(x35+x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = -1;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 21835482773532LLU;
	volatile int16_t x40 = 1667;
	int32_t t9 = 4991;

	t9 = (x37==(x38<(x39+x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = INT16_MAX;
	int32_t x42 = -1;
	uint16_t x43 = 3U;
	uint32_t x44 = 745753763U;
	int32_t t10 = 128586956;

	t10 = (x41==(x42<(x43+x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x46 = INT32_MIN;
	uint32_t x48 = 264U;
	volatile int32_t t11 = 118907442;

	t11 = (x45==(x46<(x47+x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = 327708016;
	volatile int32_t x51 = 6590946;
	static int64_t x52 = -1LL;
	int32_t t12 = -18801;

	t12 = (x49==(x50<(x51+x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 528U;
	volatile int8_t x58 = 2;
	int16_t x59 = -118;
	volatile int32_t t13 = 766616545;

	t13 = (x57==(x58<(x59+x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = -1LL;
	int16_t x62 = INT16_MIN;
	int32_t x63 = -1;
	volatile uint64_t x64 = 7021605LLU;

	t14 = (x61==(x62<(x63+x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 1596935744722116869LL;
	uint8_t x67 = 1U;
	volatile int8_t x68 = INT8_MAX;

	t15 = (x65==(x66<(x67+x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = -1;
	volatile int16_t x74 = INT16_MIN;
	int16_t x76 = 155;
	static int32_t t16 = 32082920;

	t16 = (x73==(x74<(x75+x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = 4;
	int16_t x78 = INT16_MIN;
	static int16_t x79 = -1;
	int32_t t17 = 78072770;

	t17 = (x77==(x78<(x79+x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 593U;
	volatile uint8_t x83 = UINT8_MAX;
	static uint16_t x84 = 26U;

	t18 = (x81==(x82<(x83+x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int16_t x90 = 1;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;
	static volatile int32_t t19 = -12933538;

	t19 = (x89==(x90<(x91+x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = 43964616;
	static int16_t x94 = -1;
	static int8_t x95 = 1;
	uint8_t x96 = 2U;
	volatile int32_t t20 = -8925643;

	t20 = (x93==(x94<(x95+x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 14U;
	volatile uint32_t x100 = 691784U;
	volatile int32_t t21 = 688;

	t21 = (x97==(x98<(x99+x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 19U;
	uint32_t x103 = UINT32_MAX;
	static int8_t x104 = 16;
	volatile int32_t t22 = 0;

	t22 = (x101==(x102<(x103+x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 25U;
	volatile int64_t x110 = INT64_MIN;
	int16_t x111 = -1;
	uint8_t x112 = 25U;
	int32_t t23 = 1280293;

	t23 = (x109==(x110<(x111+x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x113 = -1;
	static volatile uint16_t x114 = UINT16_MAX;
	volatile int16_t x115 = INT16_MAX;
	static uint32_t x116 = UINT32_MAX;
	static volatile int32_t t24 = -898;

	t24 = (x113==(x114<(x115+x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -1;
	int8_t x118 = 24;
	volatile int16_t x119 = INT16_MIN;
	volatile uint16_t x120 = 1U;
	int32_t t25 = 1;

	t25 = (x117==(x118<(x119+x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x122 = 46U;
	uint16_t x123 = UINT16_MAX;
	volatile int16_t x124 = -34;

	t26 = (x121==(x122<(x123+x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 256468338508220LLU;
	int16_t x126 = -1;
	int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MAX;
	volatile int32_t t27 = -261039;

	t27 = (x125==(x126<(x127+x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x130 = -31;
	int32_t x131 = INT32_MIN;
	int32_t t28 = -101980;

	t28 = (x129==(x130<(x131+x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = INT64_MAX;
	static int32_t x135 = INT32_MAX;
	volatile int32_t x136 = -1;
	int32_t t29 = -87745193;

	t29 = (x133==(x134<(x135+x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x137 = -1LL;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = 1484181977311846634LLU;
	volatile int32_t t30 = 1;

	t30 = (x137==(x138<(x139+x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x141 = 8082464U;
	uint64_t x142 = UINT64_MAX;
	static uint8_t x143 = 84U;
	uint32_t x144 = 65101U;

	t31 = (x141==(x142<(x143+x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	static int8_t x146 = 3;
	uint64_t x147 = 144898448123264337LLU;
	int64_t x148 = INT64_MAX;
	int32_t t32 = -219;

	t32 = (x145==(x146<(x147+x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = 2;
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MAX;
	int64_t x156 = -1LL;
	int32_t t33 = 104307000;

	t33 = (x153==(x154<(x155+x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = -449542;
	int16_t x158 = -150;
	int8_t x159 = INT8_MIN;
	volatile int8_t x160 = INT8_MAX;

	t34 = (x157==(x158<(x159+x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x162 = 100817LLU;
	int16_t x163 = 11;
	int16_t x164 = -24;
	int32_t t35 = 69914;

	t35 = (x161==(x162<(x163+x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = INT32_MIN;
	int32_t x167 = -1;
	int32_t t36 = -44405;

	t36 = (x165==(x166<(x167+x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x169 = 2879076350015666637LLU;
	volatile uint8_t x171 = 7U;
	volatile int32_t t37 = -1;

	t37 = (x169==(x170<(x171+x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x173 = 154909367661LLU;
	volatile int32_t t38 = 116776;

	t38 = (x173==(x174<(x175+x176)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x178 = 5U;
	static int32_t x179 = -1601329;
	int8_t x180 = INT8_MAX;

	t39 = (x177==(x178<(x179+x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x182 = 1282303LLU;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = INT64_MIN;
	int32_t t40 = 0;

	t40 = (x181==(x182<(x183+x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x186 = 21238254137LLU;
	static uint64_t x187 = 29LLU;
	volatile int32_t t41 = 25010578;

	t41 = (x185==(x186<(x187+x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x189 = 39861U;
	static volatile int16_t x190 = -1;
	uint32_t x191 = 13939041U;
	int8_t x192 = -31;
	volatile int32_t t42 = -2959;

	t42 = (x189==(x190<(x191+x192)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 125U;
	uint64_t x196 = 136669524756594119LLU;
	int32_t t43 = -4477227;

	t43 = (x193==(x194<(x195+x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MIN;
	volatile int8_t x199 = INT8_MIN;
	volatile int32_t t44 = -34;

	t44 = (x197==(x198<(x199+x200)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x201 = -1;
	int64_t x204 = INT64_MAX;
	static int32_t t45 = 1;

	t45 = (x201==(x202<(x203+x204)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x206 = INT32_MIN;
	volatile int16_t x207 = INT16_MIN;
	uint16_t x208 = 1U;
	int32_t t46 = -30;

	t46 = (x205==(x206<(x207+x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = 17339;
	volatile uint64_t x214 = UINT64_MAX;
	volatile int32_t t47 = -1660584;

	t47 = (x213==(x214<(x215+x216)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	volatile int64_t x219 = -1LL;
	int8_t x220 = -1;
	int32_t t48 = -1;

	t48 = (x217==(x218<(x219+x220)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MIN;
	int64_t x222 = 1073584097964LL;
	int8_t x223 = 4;
	int64_t x224 = 1769097525333119LL;

	t49 = (x221==(x222<(x223+x224)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x226 = 13156174372778LLU;
	static int32_t x227 = INT32_MIN;

	t50 = (x225==(x226<(x227+x228)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = UINT8_MAX;
	static volatile uint64_t x230 = 64489095452055513LLU;
	uint8_t x231 = UINT8_MAX;
	uint8_t x232 = 6U;
	int32_t t51 = -199110;

	t51 = (x229==(x230<(x231+x232)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x233 = 8587567499LLU;
	uint8_t x235 = UINT8_MAX;
	static uint32_t x236 = 99U;
	int32_t t52 = -44811188;

	t52 = (x233==(x234<(x235+x236)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x238 = 3;
	uint8_t x239 = 4U;
	volatile int16_t x240 = -1;
	volatile int32_t t53 = -220;

	t53 = (x237==(x238<(x239+x240)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x241 = -107634LL;
	uint64_t x242 = UINT64_MAX;
	volatile uint64_t x243 = 71005685405864LLU;
	uint8_t x244 = 16U;

	t54 = (x241==(x242<(x243+x244)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x245 = -1;
	static volatile int32_t x247 = -1;
	int32_t t55 = -682;

	t55 = (x245==(x246<(x247+x248)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x250 = 455773420721929LL;
	int64_t x252 = -1LL;
	int32_t t56 = -8;

	t56 = (x249==(x250<(x251+x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x253 = -399;
	int32_t x254 = INT32_MIN;
	int16_t x255 = 13;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t57 = -1068279302;

	t57 = (x253==(x254<(x255+x256)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = 3601;
	static int16_t x258 = -1;
	volatile int16_t x259 = INT16_MAX;
	uint16_t x260 = 3U;
	volatile int32_t t58 = -813;

	t58 = (x257==(x258<(x259+x260)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x267 = -1;
	int32_t x268 = -1;
	int32_t t59 = 13072;

	t59 = (x265==(x266<(x267+x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = 179526866662995257LLU;
	uint32_t x278 = 4U;
	uint8_t x279 = 120U;
	volatile int32_t t60 = 12;

	t60 = (x277==(x278<(x279+x280)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x281 = -9761LL;
	uint32_t x283 = 13185U;
	int8_t x284 = -1;

	t61 = (x281==(x282<(x283+x284)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x285 = INT16_MIN;
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	volatile int32_t t62 = -60;

	t62 = (x285==(x286<(x287+x288)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x290 = -1LL;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t63 = -178626175;

	t63 = (x289==(x290<(x291+x292)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MAX;
	volatile uint16_t x294 = 10956U;
	int32_t x295 = INT32_MIN;
	uint16_t x296 = 6436U;

	t64 = (x293==(x294<(x295+x296)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = UINT64_MAX;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = 934004667LLU;
	static int32_t t65 = 77253;

	t65 = (x297==(x298<(x299+x300)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = -1;
	int8_t x304 = -1;
	static volatile int32_t t66 = -897920;

	t66 = (x301==(x302<(x303+x304)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x305 = -1;
	static int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MAX;
	volatile int8_t x308 = INT8_MAX;

	t67 = (x305==(x306<(x307+x308)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = 107LL;
	int16_t x310 = -4013;
	uint32_t x311 = 12U;
	int16_t x312 = -48;
	volatile int32_t t68 = -221164;

	t68 = (x309==(x310<(x311+x312)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = -1;
	static int8_t x314 = INT8_MIN;
	int64_t x315 = 6LL;
	int32_t t69 = -3371921;

	t69 = (x313==(x314<(x315+x316)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x317 = INT32_MIN;
	volatile int64_t x318 = -1LL;
	uint8_t x320 = 92U;
	int32_t t70 = -1;

	t70 = (x317==(x318<(x319+x320)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x321 = -1;
	uint16_t x322 = 145U;
	int16_t x323 = -1;
	uint32_t x324 = 20371658U;
	int32_t t71 = -354017999;

	t71 = (x321==(x322<(x323+x324)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = INT32_MAX;
	static int8_t x327 = INT8_MAX;
	int32_t t72 = -48990518;

	t72 = (x325==(x326<(x327+x328)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MAX;
	volatile int16_t x331 = -1;
	static int64_t x332 = INT64_MAX;
	volatile int32_t t73 = -2;

	t73 = (x329==(x330<(x331+x332)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x335 = INT32_MIN;
	uint8_t x336 = 0U;

	t74 = (x333==(x334<(x335+x336)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x337 = -1;
	int16_t x338 = 1075;
	uint16_t x339 = 2U;
	int16_t x340 = -1;
	int32_t t75 = -24255008;

	t75 = (x337==(x338<(x339+x340)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x341 = 313580497412805421LL;
	int32_t x342 = 89493178;
	int16_t x343 = -1;
	int8_t x344 = 1;
	int32_t t76 = 525499;

	t76 = (x341==(x342<(x343+x344)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = 21936787830330050LL;
	int8_t x346 = 0;
	int32_t t77 = -777730;

	t77 = (x345==(x346<(x347+x348)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = INT32_MIN;
	volatile int64_t x350 = -847615641676LL;
	static int32_t x352 = -1;
	volatile int32_t t78 = 73;

	t78 = (x349==(x350<(x351+x352)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MIN;
	int32_t x355 = -1422;
	static int8_t x356 = 1;
	volatile int32_t t79 = -6284;

	t79 = (x353==(x354<(x355+x356)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x361 = -1LL;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t80 = 1927;

	t80 = (x361==(x362<(x363+x364)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = -3341;
	uint32_t x366 = 386U;
	volatile int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MAX;
	volatile int32_t t81 = -240;

	t81 = (x365==(x366<(x367+x368)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x373 = UINT8_MAX;
	volatile uint64_t x375 = UINT64_MAX;
	static volatile int32_t t82 = -1;

	t82 = (x373==(x374<(x375+x376)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = 2033;
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = -1;
	uint8_t x380 = UINT8_MAX;
	int32_t t83 = 7;

	t83 = (x377==(x378<(x379+x380)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = INT64_MIN;
	uint16_t x382 = UINT16_MAX;
	uint32_t x383 = 7U;
	static int8_t x384 = 1;
	static volatile int32_t t84 = -290908;

	t84 = (x381==(x382<(x383+x384)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = -1LL;
	uint32_t x386 = UINT32_MAX;
	uint16_t x387 = UINT16_MAX;
	static int64_t x388 = 1449376870232LL;
	static volatile int32_t t85 = 970;

	t85 = (x385==(x386<(x387+x388)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;
	uint32_t x392 = UINT32_MAX;
	int32_t t86 = 764067984;

	t86 = (x389==(x390<(x391+x392)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = -581;
	int32_t x394 = INT32_MIN;
	int8_t x395 = -1;
	uint32_t x396 = 23U;
	volatile int32_t t87 = 0;

	t87 = (x393==(x394<(x395+x396)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x401 = 39U;
	static int8_t x403 = INT8_MAX;
	volatile int8_t x404 = 0;
	int32_t t88 = -4116791;

	t88 = (x401==(x402<(x403+x404)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x405 = UINT16_MAX;
	int16_t x406 = INT16_MIN;
	static int32_t x407 = 421241;
	int32_t x408 = -1;
	volatile int32_t t89 = -47081;

	t89 = (x405==(x406<(x407+x408)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = INT16_MIN;
	int64_t x414 = -320606876586LL;
	static volatile int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MIN;

	t90 = (x413==(x414<(x415+x416)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = INT32_MAX;
	uint16_t x418 = 7U;
	int16_t x419 = INT16_MAX;
	volatile int64_t x420 = 102615871LL;

	t91 = (x417==(x418<(x419+x420)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = -741482;
	int16_t x422 = INT16_MIN;
	int32_t x423 = INT32_MIN;
	volatile uint8_t x424 = 3U;
	int32_t t92 = -107777917;

	t92 = (x421==(x422<(x423+x424)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = INT8_MAX;
	volatile int64_t x427 = -194105634LL;
	int8_t x428 = -63;
	volatile int32_t t93 = 14951;

	t93 = (x425==(x426<(x427+x428)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x429 = 137020;
	int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	int16_t x432 = INT16_MIN;
	static int32_t t94 = 359;

	t94 = (x429==(x430<(x431+x432)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x433 = INT8_MAX;
	uint8_t x435 = UINT8_MAX;
	volatile int32_t t95 = -1;

	t95 = (x433==(x434<(x435+x436)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = -30708;
	volatile int32_t x438 = -1;
	int8_t x439 = INT8_MAX;
	uint16_t x440 = 1U;
	static volatile int32_t t96 = 1573;

	t96 = (x437==(x438<(x439+x440)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MIN;
	int8_t x444 = -7;
	int32_t t97 = -15362990;

	t97 = (x441==(x442<(x443+x444)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = INT8_MAX;
	volatile int16_t x446 = 124;
	int64_t x447 = 451684734951006674LL;
	int8_t x448 = INT8_MAX;
	volatile int32_t t98 = 169344402;

	t98 = (x445==(x446<(x447+x448)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x449 = 4793U;
	volatile uint8_t x450 = 1U;
	static int32_t x452 = -1;
	volatile int32_t t99 = -8322173;

	t99 = (x449==(x450<(x451+x452)));

	if (t99 != 0) { NG(); } else { ; }
	
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

