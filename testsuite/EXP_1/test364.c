#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x20 = INT16_MIN;
volatile int16_t x22 = INT16_MAX;
int16_t x23 = 12;
uint64_t x25 = UINT64_MAX;
volatile uint32_t x26 = 3599U;
volatile uint32_t x44 = 60192U;
volatile uint16_t x46 = 89U;
int32_t t8 = -15096;
static int8_t x66 = INT8_MAX;
volatile int32_t x67 = -1;
uint8_t x77 = UINT8_MAX;
volatile int32_t t13 = 269279631;
uint64_t t14 = 108104179LLU;
int32_t x98 = -1;
int64_t t15 = 133320898302LL;
volatile int64_t x105 = -465113LL;
int64_t t17 = 7762809593LL;
volatile uint64_t x113 = 15LLU;
volatile int8_t x120 = -1;
int64_t t19 = -205960327397506LL;
int16_t x121 = -1;
static volatile uint8_t x132 = 2U;
volatile int32_t t22 = 34655605;
static uint8_t x140 = UINT8_MAX;
static int64_t x146 = -1LL;
static volatile int16_t x150 = INT16_MIN;
int8_t x179 = -1;
uint64_t x180 = 231298014176095905LLU;
int64_t x181 = INT64_MIN;
int64_t x184 = -79968890269LL;
volatile uint64_t x186 = 895295402928337669LLU;
static int8_t x188 = INT8_MAX;
int8_t x193 = INT8_MIN;
int8_t x194 = INT8_MIN;
int16_t x210 = -1;
volatile uint16_t x226 = UINT16_MAX;
int8_t x232 = 20;
volatile uint16_t x237 = UINT16_MAX;
int8_t x253 = INT8_MIN;
uint64_t x265 = UINT64_MAX;
static volatile uint64_t t45 = 3699895LLU;
volatile uint16_t x284 = 6387U;
int8_t x294 = INT8_MIN;
volatile uint16_t x296 = 2U;
volatile int32_t t50 = 5;
uint8_t x297 = 2U;
uint8_t x298 = 120U;
int8_t x300 = -1;
static uint64_t x303 = 5LLU;
static uint64_t x304 = 297141261057344397LLU;
int32_t x308 = -97348025;
uint16_t x310 = UINT16_MAX;
static int64_t x312 = -1LL;
static uint64_t x315 = 152654388332638986LLU;
static volatile uint64_t t55 = 2608413LLU;
uint16_t x319 = 36U;
static volatile int16_t x329 = INT16_MIN;
volatile int8_t x343 = INT8_MAX;
int16_t x346 = INT16_MIN;
int64_t t61 = 42LL;
volatile int64_t t62 = 43356763LL;
int32_t x356 = 57527;
uint64_t x359 = 339LLU;
uint64_t t64 = 511LLU;
volatile int32_t x364 = INT32_MIN;
int32_t x367 = -9489343;
static uint32_t t66 = 265544729U;
static volatile int32_t t67 = -99677;
volatile int8_t x374 = INT8_MIN;
int16_t x377 = -1;
uint16_t x378 = 222U;
volatile int64_t t70 = -11LL;
int32_t x393 = -1;
static int32_t x396 = INT32_MAX;
volatile int16_t x401 = 12;
uint64_t x402 = 4297592614829846358LLU;
static uint16_t x405 = UINT16_MAX;
int16_t x418 = INT16_MIN;
int8_t x442 = 6;
int64_t x448 = 1963279087631282LL;
int16_t x451 = 108;
volatile uint32_t x452 = UINT32_MAX;
volatile uint32_t t79 = 1988214U;
volatile uint64_t x453 = 4065577LLU;
uint16_t x460 = 107U;
static int16_t x473 = -1;
volatile uint32_t t83 = 1649920U;
volatile uint32_t t84 = 466378U;
int64_t x484 = INT64_MIN;
volatile int64_t t85 = -2LL;
int8_t x489 = -1;
static int16_t x490 = 12021;
uint16_t x508 = UINT16_MAX;
int16_t x509 = -1;
uint16_t x513 = 2652U;
static volatile uint32_t t92 = 6039U;
volatile int8_t x517 = INT8_MAX;
volatile int64_t t95 = -1LL;
uint16_t x529 = UINT16_MAX;
static int64_t t96 = -360397820701LL;
uint8_t x534 = 101U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint64_t x2 = UINT64_MAX;
	static uint8_t x3 = 36U;
	int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 17LLU;

	t0 = (((x1*x2)-x3)^x4);

	if (t0 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	int64_t x10 = 5LL;
	int64_t x11 = -1LL;
	static int32_t x12 = -1;
	volatile int64_t t1 = 1LL;

	t1 = (((x9*x10)-x11)^x12);

	if (t1 != -21474836477LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = 0;
	uint32_t x18 = UINT32_MAX;
	uint64_t x19 = UINT64_MAX;
	volatile uint64_t t2 = 157726382946LLU;

	t2 = (((x17*x18)-x19)^x20);

	if (t2 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 25U;
	static volatile int32_t x24 = 275318;
	volatile int32_t t3 = 334658;

	t3 = (((x21*x22)-x23)^x24);

	if (t3 != 543917) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x27 = 17012;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t4 = 7492783338LLU;

	t4 = (((x25*x26)-x27)^x28);

	if (t4 != 9223372036854755197LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = 1;
	int16_t x39 = INT16_MIN;
	static int8_t x40 = -1;
	volatile uint32_t t5 = 1570563U;

	t5 = (((x37*x38)-x39)^x40);

	if (t5 != 4294934528U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = 2599LL;
	uint32_t x43 = UINT32_MAX;
	volatile int64_t t6 = -46651841923LL;

	t6 = (((x41*x42)-x43)^x44);

	if (t6 != -5585604908255LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x45 = 1LLU;
	int32_t x47 = -1;
	int64_t x48 = 42049856LL;
	volatile uint64_t t7 = 34987944588909LLU;

	t7 = (((x45*x46)-x47)^x48);

	if (t7 != 42049818LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = 14U;
	int32_t x50 = -1;
	uint16_t x51 = 768U;
	volatile int16_t x52 = INT16_MIN;

	t8 = (((x49*x50)-x51)^x52);

	if (t8 != 31986) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x61 = UINT32_MAX;
	uint64_t x62 = 81101348LLU;
	uint64_t x63 = 5965LLU;
	int32_t x64 = -36830151;
	volatile uint64_t t9 = 4638514001509LLU;

	t9 = (((x61*x62)-x63)^x64);

	if (t9 != 18098416436503667382LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = -3;
	int8_t x68 = -3;
	volatile int32_t t10 = 734;

	t10 = (((x65*x66)-x67)^x68);

	if (t10 != 377) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x73 = INT8_MIN;
	volatile int8_t x74 = INT8_MIN;
	uint64_t x75 = 29012LLU;
	uint8_t x76 = UINT8_MAX;
	uint64_t t11 = 13795LLU;

	t11 = (((x73*x74)-x75)^x76);

	if (t11 != 18446744073709538899LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x78 = UINT16_MAX;
	static uint16_t x79 = 25U;
	static volatile int64_t x80 = INT64_MIN;
	static volatile int64_t t12 = 15909713493LL;

	t12 = (((x77*x78)-x79)^x80);

	if (t12 != -9223372036838064408LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x89 = -1;
	static int8_t x90 = INT8_MAX;
	static volatile int8_t x91 = INT8_MIN;
	int16_t x92 = -1;

	t13 = (((x89*x90)-x91)^x92);

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x93 = INT8_MAX;
	uint64_t x94 = 91803LLU;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MIN;

	t14 = (((x93*x94)-x95)^x96);

	if (t14 != 11658981LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x97 = 22;
	static int64_t x99 = INT64_MIN;
	volatile int32_t x100 = -1;

	t15 = (((x97*x98)-x99)^x100);

	if (t15 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x106 = INT16_MIN;
	static uint16_t x107 = 447U;
	uint32_t x108 = 211164945U;
	int64_t t16 = 29504109143742LL;

	t16 = (((x105*x106)-x107)^x108);

	if (t16 != 15048794448LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x109 = -2143476520LL;
	volatile uint8_t x110 = 27U;
	int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MIN;

	t17 = (((x109*x110)-x111)^x112);

	if (t17 != -9223371980912008504LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x114 = 2U;
	static volatile uint16_t x115 = UINT16_MAX;
	int8_t x116 = -1;
	uint64_t t18 = 1328039LLU;

	t18 = (((x113*x114)-x115)^x116);

	if (t18 != 65504LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = 3293570LL;
	uint32_t x118 = 123860U;
	static volatile uint8_t x119 = 2U;

	t19 = (((x117*x118)-x119)^x120);

	if (t19 != -407941580199LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x122 = INT32_MAX;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t20 = -12;

	t20 = (((x121*x122)-x123)^x124);

	if (t20 != 2147450753) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = 9;
	int64_t x130 = 1062570145872634LL;
	int64_t x131 = -985LL;
	int64_t t21 = -2009121LL;

	t21 = (((x129*x130)-x131)^x132);

	if (t21 != 9563131312854689LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = 3993;
	int16_t x134 = INT16_MAX;
	volatile int16_t x135 = -5169;
	int8_t x136 = -1;

	t22 = (((x133*x134)-x135)^x136);

	if (t22 != -130843801) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x137 = INT32_MAX;
	volatile uint64_t x138 = 24LLU;
	int8_t x139 = INT8_MIN;
	uint64_t t23 = 2640569LLU;

	t23 = (((x137*x138)-x139)^x140);

	if (t23 != 51539607703LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x145 = -5;
	int8_t x147 = INT8_MIN;
	int32_t x148 = 20004229;
	volatile int64_t t24 = -21702683LL;

	t24 = (((x145*x146)-x147)^x148);

	if (t24 != 20004096LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x149 = UINT32_MAX;
	int32_t x151 = -4;
	uint16_t x152 = UINT16_MAX;
	volatile uint32_t t25 = 58122U;

	t25 = (((x149*x150)-x151)^x152);

	if (t25 != 32763U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x153 = UINT16_MAX;
	int16_t x154 = INT16_MAX;
	uint8_t x155 = UINT8_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t26 = -281944;

	t26 = (((x153*x154)-x155)^x156);

	if (t26 != -98558) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x165 = 194U;
	int8_t x166 = 4;
	uint8_t x167 = 9U;
	volatile int32_t x168 = INT32_MIN;
	static int32_t t27 = -2486203;

	t27 = (((x165*x166)-x167)^x168);

	if (t27 != -2147482881) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x173 = INT16_MIN;
	static volatile int8_t x174 = -1;
	static uint64_t x175 = 1092001470557LLU;
	uint16_t x176 = UINT16_MAX;
	volatile uint64_t t28 = 16861LLU;

	t28 = (((x173*x174)-x175)^x176);

	if (t28 != 18446742981708126300LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x177 = 11335974053913LLU;
	uint32_t x178 = 9U;
	static volatile uint64_t t29 = 112650LLU;

	t29 = (((x177*x178)-x179)^x180);

	if (t29 != 231337915532445251LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x182 = 214LLU;
	static int64_t x183 = -1LL;
	volatile uint64_t t30 = 27191331579655LLU;

	t30 = (((x181*x182)-x183)^x184);

	if (t30 != 18446743993740661346LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x185 = 103517;
	static int64_t x187 = -1LL;
	volatile uint64_t t31 = 985LLU;

	t31 = (((x185*x186)-x187)^x188);

	if (t31 != 1851998615943163053LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x189 = UINT8_MAX;
	static int16_t x190 = INT16_MIN;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = -1LL;
	int64_t t32 = -121751LL;

	t32 = (((x189*x190)-x191)^x192);

	if (t32 != 8421374LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x195 = 0;
	volatile uint32_t x196 = UINT32_MAX;
	uint32_t t33 = 137492U;

	t33 = (((x193*x194)-x195)^x196);

	if (t33 != 4294950911U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x197 = INT64_MIN;
	uint64_t x198 = 103LLU;
	uint64_t x199 = 9LLU;
	int64_t x200 = -9942407LL;
	uint64_t t34 = 309LLU;

	t34 = (((x197*x198)-x199)^x200);

	if (t34 != 9223372036864718222LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x205 = INT16_MAX;
	volatile int8_t x206 = INT8_MIN;
	static uint64_t x207 = 129616LLU;
	int8_t x208 = INT8_MIN;
	uint64_t t35 = 57680425198463LLU;

	t35 = (((x205*x206)-x207)^x208);

	if (t35 != 4323760LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x209 = -14;
	volatile int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	static int64_t t36 = 1180446780513472739LL;

	t36 = (((x209*x210)-x211)^x212);

	if (t36 != -9223372036854743026LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x213 = INT8_MIN;
	static int16_t x214 = INT16_MIN;
	static volatile int16_t x215 = INT16_MAX;
	volatile int32_t x216 = INT32_MAX;
	int32_t t37 = -88622258;

	t37 = (((x213*x214)-x215)^x216);

	if (t37 != 2143322110) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = 274;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = -5;
	uint16_t x224 = 1714U;
	int32_t t38 = -105;

	t38 = (((x221*x222)-x223)^x224);

	if (t38 != -8976713) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x225 = 4LLU;
	int8_t x227 = -1;
	volatile int8_t x228 = INT8_MAX;
	volatile uint64_t t39 = 0LLU;

	t39 = (((x225*x226)-x227)^x228);

	if (t39 != 262018LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = INT32_MIN;
	static volatile uint64_t x230 = 614409236LLU;
	int8_t x231 = 4;
	static volatile uint64_t t40 = 396LLU;

	t40 = (((x229*x230)-x231)^x232);

	if (t40 != 17127310286219378664LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x233 = -1;
	int8_t x234 = INT8_MIN;
	int16_t x235 = -49;
	int16_t x236 = INT16_MIN;
	volatile int32_t t41 = -207650632;

	t41 = (((x233*x234)-x235)^x236);

	if (t41 != -32591) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x238 = -46;
	static int16_t x239 = INT16_MIN;
	uint64_t x240 = 60LLU;
	uint64_t t42 = 142304771015LLU;

	t42 = (((x237*x238)-x239)^x240);

	if (t42 != 18446744073706569746LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x254 = 1408U;
	int8_t x255 = INT8_MAX;
	volatile int16_t x256 = -1;
	volatile uint32_t t43 = 44727U;

	t43 = (((x253*x254)-x255)^x256);

	if (t43 != 180350U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x257 = INT16_MIN;
	static uint8_t x258 = UINT8_MAX;
	uint64_t x259 = 1732437418236648LLU;
	volatile int16_t x260 = 59;
	volatile uint64_t t44 = 561760106034808798LLU;

	t44 = (((x257*x258)-x259)^x260);

	if (t44 != 18445011636282959139LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x266 = -1;
	int8_t x267 = INT8_MIN;
	int32_t x268 = -1;

	t45 = (((x265*x266)-x267)^x268);

	if (t45 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MIN;
	uint64_t x271 = 456144564LLU;
	int32_t x272 = -1;
	uint64_t t46 = 241140193239873LLU;

	t46 = (((x269*x270)-x271)^x272);

	if (t46 != 2603595443LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x274 = 3U;
	int8_t x275 = -13;
	uint16_t x276 = 19715U;
	uint32_t t47 = 271548U;

	t47 = (((x273*x274)-x275)^x276);

	if (t47 != 4294888718U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x281 = 1;
	uint16_t x282 = 60U;
	volatile uint16_t x283 = 261U;
	volatile int32_t t48 = 666013;

	t48 = (((x281*x282)-x283)^x284);

	if (t48 != -6204) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x285 = 1U;
	volatile int64_t x286 = INT64_MAX;
	volatile int16_t x287 = 5;
	int32_t x288 = INT32_MAX;
	volatile int64_t t49 = -1LL;

	t49 = (((x285*x286)-x287)^x288);

	if (t49 != 9223372034707292165LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x293 = 2704U;
	int32_t x295 = INT32_MIN;

	t50 = (((x293*x294)-x295)^x296);

	if (t50 != 2147137538) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x299 = -1;
	volatile int32_t t51 = -105208;

	t51 = (((x297*x298)-x299)^x300);

	if (t51 != -242) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x301 = INT32_MAX;
	volatile int32_t x302 = -1;
	uint64_t t52 = 957286415LLU;

	t52 = (((x301*x302)-x303)^x304);

	if (t52 != 18149602810504723569LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x305 = -1;
	int64_t x306 = -4915LL;
	uint16_t x307 = UINT16_MAX;
	volatile int64_t t53 = -3285672593LL;

	t53 = (((x305*x306)-x307)^x308);

	if (t53 != 97355123LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x309 = -1;
	uint32_t x311 = UINT32_MAX;
	int64_t t54 = 46LL;

	t54 = (((x309*x310)-x311)^x312);

	if (t54 != -4294901763LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x313 = 3U;
	volatile int8_t x314 = INT8_MIN;
	static int16_t x316 = -1569;

	t55 = (((x313*x314)-x315)^x316);

	if (t55 != 152654388332638889LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = -1;
	static int16_t x320 = 53;
	static int32_t t56 = -16131;

	t56 = (((x317*x318)-x319)^x320);

	if (t56 != -152) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x325 = 14;
	uint64_t x326 = 2114756007025LLU;
	int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MIN;
	uint64_t t57 = 36431067794634LLU;

	t57 = (((x325*x326)-x327)^x328);

	if (t57 != 9223401643438841391LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x330 = 210632663U;
	volatile uint32_t x331 = 23160850U;
	uint64_t x332 = 2692LLU;
	static uint64_t t58 = 84101LLU;

	t58 = (((x329*x330)-x331)^x332);

	if (t58 != 4273151338LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x333 = 9348395587LLU;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = -1;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t59 = 375971606411629119LLU;

	t59 = (((x333*x334)-x335)^x336);

	if (t59 != 18446131424626855358LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x341 = 20136LLU;
	int32_t x342 = INT32_MIN;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t60 = 168789735682343LLU;

	t60 = (((x341*x342)-x343)^x344);

	if (t60 != 43243878219649LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x345 = 1396263779LL;
	volatile int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MIN;

	t61 = (((x345*x346)-x347)^x348);

	if (t61 != -45752771510272LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x349 = -1LL;
	volatile uint32_t x350 = 25099U;
	int64_t x351 = INT64_MIN;
	static int16_t x352 = 26;

	t62 = (((x349*x350)-x351)^x352);

	if (t62 != 9223372036854750703LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x353 = -1;
	uint32_t x354 = UINT32_MAX;
	static int16_t x355 = -1;
	uint32_t t63 = 16381U;

	t63 = (((x353*x354)-x355)^x356);

	if (t63 != 57525U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x358 = 49025LLU;
	uint8_t x360 = 12U;

	t64 = (((x357*x358)-x359)^x360);

	if (t64 != 18446744072103100065LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x361 = -1;
	uint16_t x362 = 686U;
	int16_t x363 = 589;
	volatile int32_t t65 = 12;

	t65 = (((x361*x362)-x363)^x364);

	if (t65 != 2147482373) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x365 = INT32_MIN;
	uint32_t x366 = 15435U;
	uint8_t x368 = 3U;

	t66 = (((x365*x366)-x367)^x368);

	if (t66 != 2156972988U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x369 = 849U;
	int32_t x370 = 3721;
	volatile uint8_t x371 = UINT8_MAX;
	uint16_t x372 = 14U;

	t67 = (((x369*x370)-x371)^x372);

	if (t67 != 3158868) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x373 = 0;
	int64_t x375 = -1LL;
	int32_t x376 = -1;
	int64_t t68 = -2371182896LL;

	t68 = (((x373*x374)-x375)^x376);

	if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x379 = -1;
	uint8_t x380 = UINT8_MAX;
	int32_t t69 = -51;

	t69 = (((x377*x378)-x379)^x380);

	if (t69 != -36) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x389 = INT8_MAX;
	uint16_t x390 = 2048U;
	static int8_t x391 = INT8_MAX;
	int64_t x392 = -330341472LL;

	t70 = (((x389*x390)-x391)^x392);

	if (t70 != -330525663LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x394 = INT16_MIN;
	uint64_t x395 = 28130469273LLU;
	volatile uint64_t t71 = 108273332841LLU;

	t71 = (((x393*x394)-x395)^x396);

	if (t71 != 18446744043857929624LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x403 = INT64_MIN;
	int16_t x404 = 11;
	volatile uint64_t t72 = 90018604696LLU;

	t72 = (((x401*x402)-x403)^x404);

	if (t72 != 5454251193684277251LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x406 = -7;
	int32_t x407 = 20674495;
	static int32_t x408 = INT32_MIN;
	volatile int32_t t73 = -601414;

	t73 = (((x405*x406)-x407)^x408);

	if (t73 != 2126350408) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x417 = 182995533U;
	int16_t x419 = -1;
	static int16_t x420 = INT16_MIN;
	volatile uint32_t t74 = 540229644U;

	t74 = (((x417*x418)-x419)^x420);

	if (t74 != 623247361U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x421 = INT8_MIN;
	static uint64_t x422 = UINT64_MAX;
	uint8_t x423 = 6U;
	uint8_t x424 = UINT8_MAX;
	uint64_t t75 = 483553255249522LLU;

	t75 = (((x421*x422)-x423)^x424);

	if (t75 != 133LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = INT16_MIN;
	uint64_t x431 = 64909LLU;
	uint32_t x432 = 72232U;
	uint64_t t76 = 126577427LLU;

	t76 = (((x429*x430)-x431)^x432);

	if (t76 != 1073616987LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x441 = UINT64_MAX;
	uint8_t x443 = UINT8_MAX;
	volatile uint8_t x444 = 7U;
	uint64_t t77 = 62646137136470LLU;

	t77 = (((x441*x442)-x443)^x444);

	if (t77 != 18446744073709551356LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x445 = 1293516826206834488LLU;
	static uint64_t x446 = 410480LLU;
	uint16_t x447 = 1U;
	volatile uint64_t t78 = 6541312861184035844LLU;

	t78 = (((x445*x446)-x447)^x448);

	if (t78 != 10152614621414337485LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x449 = 27142;
	int8_t x450 = -1;

	t79 = (((x449*x450)-x451)^x452);

	if (t79 != 27249U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x454 = 38275907222862LL;
	uint32_t x455 = 53U;
	int8_t x456 = INT8_MIN;
	volatile uint64_t t80 = 10212838LLU;

	t80 = (((x453*x454)-x455)^x456);

	if (t80 != 10407048603984343241LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x457 = 2U;
	int16_t x458 = -1;
	int64_t x459 = -1LL;
	int64_t t81 = 8186LL;

	t81 = (((x457*x458)-x459)^x460);

	if (t81 != -108LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x461 = UINT32_MAX;
	int32_t x462 = -1724559;
	int32_t x463 = INT32_MIN;
	uint8_t x464 = UINT8_MAX;
	uint32_t t82 = 145325598U;

	t82 = (((x461*x462)-x463)^x464);

	if (t82 != 2149208176U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x474 = INT16_MIN;
	int32_t x475 = 0;
	uint32_t x476 = 49509820U;

	t83 = (((x473*x474)-x475)^x476);

	if (t83 != 49542588U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x477 = 0;
	volatile int32_t x478 = -63133;
	volatile uint32_t x479 = UINT32_MAX;
	int8_t x480 = -1;

	t84 = (((x477*x478)-x479)^x480);

	if (t84 != 4294967294U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x481 = INT16_MAX;
	static int64_t x482 = 159659086LL;
	static int64_t x483 = 265939024LL;

	t85 = (((x481*x482)-x483)^x484);

	if (t85 != -9223366805571443870LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x485 = 25U;
	static int16_t x486 = 0;
	volatile uint32_t x487 = UINT32_MAX;
	int32_t x488 = INT32_MIN;
	static volatile uint32_t t86 = 3418U;

	t86 = (((x485*x486)-x487)^x488);

	if (t86 != 2147483649U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x491 = -2;
	int8_t x492 = 39;
	static int32_t t87 = 1973;

	t87 = (((x489*x490)-x491)^x492);

	if (t87 != -11990) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x493 = 0;
	volatile uint8_t x494 = UINT8_MAX;
	volatile uint16_t x495 = 92U;
	uint32_t x496 = 463811178U;
	volatile uint32_t t88 = 5515U;

	t88 = (((x493*x494)-x495)^x496);

	if (t88 != 3831156174U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x501 = 962419LLU;
	uint64_t x502 = UINT64_MAX;
	int32_t x503 = INT32_MAX;
	static volatile uint8_t x504 = UINT8_MAX;
	static uint64_t t89 = 16LLU;

	t89 = (((x501*x502)-x503)^x504);

	if (t89 != 18446744071561105521LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x505 = -1LL;
	volatile int16_t x506 = INT16_MIN;
	uint16_t x507 = 12853U;
	volatile int64_t t90 = 28LL;

	t90 = (((x505*x506)-x507)^x508);

	if (t90 != 45620LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x510 = 444277LL;
	static int64_t x511 = -242LL;
	uint64_t x512 = 3293911400423760189LLU;
	uint64_t t91 = 74088992554011LLU;

	t91 = (((x509*x510)-x511)^x512);

	if (t91 != 15152832673286133824LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x514 = UINT8_MAX;
	static uint32_t x515 = UINT32_MAX;
	uint16_t x516 = 4727U;

	t92 = (((x513*x514)-x515)^x516);

	if (t92 != 672722U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x518 = 6U;
	static uint8_t x519 = 26U;
	static uint32_t x520 = 846251U;
	uint32_t t93 = 214197423U;

	t93 = (((x517*x518)-x519)^x520);

	if (t93 != 846667U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x521 = INT8_MIN;
	uint8_t x522 = 6U;
	int8_t x523 = INT8_MIN;
	int32_t x524 = INT32_MIN;
	volatile int32_t t94 = 132094906;

	t94 = (((x521*x522)-x523)^x524);

	if (t94 != 2147483008) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x525 = UINT32_MAX;
	uint8_t x526 = 4U;
	uint8_t x527 = 1U;
	volatile int64_t x528 = INT64_MAX;

	t95 = (((x525*x526)-x527)^x528);

	if (t95 != 9223372032559808516LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x530 = INT8_MAX;
	int64_t x531 = 653950468740LL;
	static volatile int64_t x532 = INT64_MAX;

	t96 = (((x529*x530)-x531)^x532);

	if (t96 != -9223371382912630014LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x533 = INT16_MAX;
	volatile int32_t x535 = INT32_MAX;
	int8_t x536 = INT8_MIN;
	static int32_t t97 = -363;

	t97 = (((x533*x534)-x535)^x536);

	if (t97 != 2144174108) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x537 = 51278211698731LLU;
	int64_t x538 = 58444876422LL;
	static int8_t x539 = INT8_MIN;
	int16_t x540 = -1;
	static volatile uint64_t t98 = 80063551724LLU;

	t98 = (((x537*x538)-x539)^x540);

	if (t98 != 1530061734314072829LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x541 = INT8_MAX;
	uint64_t x542 = UINT64_MAX;
	int32_t x543 = -33171;
	int8_t x544 = INT8_MIN;
	uint64_t t99 = 147399LLU;

	t99 = (((x541*x542)-x543)^x544);

	if (t99 != 18446744073709518484LLU) { NG(); } else { ; }
	
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

