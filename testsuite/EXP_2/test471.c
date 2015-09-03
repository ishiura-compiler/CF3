#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 290579025300397350LL;
volatile uint64_t x15 = UINT64_MAX;
int16_t x22 = INT16_MAX;
int8_t x27 = 1;
int64_t x29 = -45442564LL;
volatile int64_t x35 = INT64_MIN;
int16_t x37 = INT16_MIN;
static int32_t x40 = 120;
uint16_t x56 = 1U;
int32_t x73 = 20;
uint64_t x75 = UINT64_MAX;
uint32_t x91 = 13U;
uint64_t x98 = UINT64_MAX;
int8_t x100 = 2;
volatile uint64_t t16 = 8LLU;
volatile int64_t t19 = -16LL;
volatile int16_t x132 = INT16_MIN;
static int32_t x141 = 838668;
volatile uint64_t t25 = 132103846LLU;
static volatile uint32_t x158 = UINT32_MAX;
uint32_t x165 = 72U;
int16_t x167 = -1;
int32_t x170 = -1;
volatile int32_t t28 = 95748904;
static uint16_t x182 = UINT16_MAX;
uint64_t x187 = UINT64_MAX;
static uint64_t t32 = 1567478747835964LLU;
int16_t x198 = -1;
static volatile int8_t x209 = 14;
volatile int8_t x220 = INT8_MIN;
static uint16_t x229 = 0U;
int64_t x231 = -1LL;
uint64_t x233 = 6LLU;
static int32_t x235 = INT32_MAX;
uint64_t t38 = 43073297LLU;
int16_t x237 = -1;
static volatile int16_t x239 = INT16_MAX;
static int16_t x251 = 0;
static int8_t x255 = -1;
int16_t x257 = 10965;
int64_t x260 = 13498046153LL;
volatile int64_t t44 = 7928LL;
int8_t x277 = INT8_MIN;
int32_t x278 = -1;
int8_t x286 = INT8_MAX;
int32_t t48 = -130638013;
int32_t x291 = INT32_MIN;
int32_t t50 = -877;
static int64_t x308 = -35056444746312841LL;
int8_t x310 = -16;
int16_t x311 = 6;
int8_t x312 = INT8_MAX;
int16_t x355 = 60;
volatile int64_t x356 = -1LL;
int64_t t58 = -150687680646LL;
int64_t x369 = INT64_MAX;
static int64_t x391 = INT64_MIN;
int32_t x405 = -1;
uint64_t x406 = 54342673844024LLU;
static volatile uint64_t t65 = 5097716LLU;
uint32_t x414 = UINT32_MAX;
static int8_t x416 = -1;
uint16_t x418 = UINT16_MAX;
static int16_t x420 = INT16_MIN;
int8_t x441 = -31;
int32_t x449 = -251148651;
uint64_t x451 = 22062438968LLU;
uint64_t t73 = 0LLU;
volatile int32_t x481 = INT32_MIN;
uint64_t x482 = 3723LLU;
static int64_t x487 = 21251521122673887LL;
int64_t t75 = 405749479167LL;
int8_t x495 = -1;
int8_t x506 = -1;
uint16_t x507 = 417U;
int8_t x509 = -1;
volatile int16_t x533 = 3;
int64_t x536 = -1LL;
int8_t x542 = INT8_MIN;
uint16_t x544 = 424U;
uint32_t x551 = 15098U;
uint64_t x553 = 638LLU;
int8_t x564 = INT8_MAX;
int8_t x566 = INT8_MIN;
uint64_t x568 = 272965759LLU;
static uint64_t t89 = 5845760471646003LLU;
int64_t t91 = 31796LL;
uint32_t x578 = 3449713U;
uint8_t x596 = UINT8_MAX;
volatile int32_t x610 = -7132;
uint32_t t96 = 0U;
uint16_t x617 = 1U;
uint64_t x620 = UINT64_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = -1LL;
	volatile int16_t x3 = -1;
	int8_t x4 = 2;

	t0 = ((x1&(x2*x3))*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = -325324234;
	int16_t x14 = INT16_MAX;
	int16_t x16 = INT16_MAX;
	uint64_t t1 = 932903LLU;

	t1 = ((x13&(x14*x15))*x16);

	if (t1 != 18446733412852334592LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x21 = INT16_MIN;
	volatile uint64_t x23 = 478956176LLU;
	uint8_t x24 = 2U;
	uint64_t t2 = 1827723188LLU;

	t2 = ((x21&(x22*x23))*x24);

	if (t2 != 31387914010624LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MAX;
	uint32_t x28 = 4745769U;
	uint32_t t3 = 333818U;

	t3 = ((x25&(x26*x27))*x28);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x30 = INT16_MIN;
	int8_t x31 = 3;
	volatile int32_t x32 = 3;
	volatile int64_t t4 = -2121397502LL;

	t4 = ((x29&(x30*x31))*x32);

	if (t4 != -136347648LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = 137U;
	int8_t x34 = 1;
	int16_t x36 = INT16_MAX;
	static volatile int64_t t5 = 237837672LL;

	t5 = ((x33&(x34*x35))*x36);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x38 = UINT16_MAX;
	int32_t x39 = -1;
	volatile int32_t t6 = 218;

	t6 = ((x37&(x38*x39))*x40);

	if (t6 != -7864320) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = INT16_MIN;
	static int16_t x42 = 6;
	uint64_t x43 = UINT64_MAX;
	int64_t x44 = INT64_MIN;
	uint64_t t7 = 2522LLU;

	t7 = ((x41&(x42*x43))*x44);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x49 = INT8_MAX;
	int8_t x50 = -61;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 120U;
	int32_t t8 = 934765;

	t8 = ((x49&(x50*x51))*x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x54 = UINT32_MAX;
	int8_t x55 = INT8_MAX;
	int64_t t9 = -666159LL;

	t9 = ((x53&(x54*x55))*x56);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = INT32_MAX;
	int32_t x58 = -1;
	volatile int32_t x59 = INT32_MAX;
	int32_t x60 = INT32_MIN;
	volatile int32_t t10 = INT32_MIN;

	t10 = ((x57&(x58*x59))*x60);

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = UINT32_MAX;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 206050326LLU;
	uint8_t x72 = UINT8_MAX;
	volatile uint64_t t11 = 1935LLU;

	t11 = ((x69&(x70*x71))*x72);

	if (t11 != 1052250931200LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x74 = -617;
	static volatile int8_t x76 = 1;
	uint64_t t12 = 30812235LLU;

	t12 = ((x73&(x74*x75))*x76);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = INT8_MIN;
	uint16_t x82 = UINT16_MAX;
	int64_t x83 = -1LL;
	volatile int16_t x84 = INT16_MAX;
	int64_t t13 = -6628890888146LL;

	t13 = ((x81&(x82*x83))*x84);

	if (t13 != -2147418112LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int16_t x86 = INT16_MIN;
	int64_t x87 = 7316956312498LL;
	static int64_t x88 = INT64_MIN;
	int64_t t14 = -34656371LL;

	t14 = ((x85&(x86*x87))*x88);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = 31U;
	int8_t x90 = INT8_MIN;
	uint64_t x92 = 408LLU;
	volatile uint64_t t15 = 14587140599155294LLU;

	t15 = ((x89&(x90*x91))*x92);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x97 = 0;
	uint32_t x99 = 3271068U;

	t16 = ((x97&(x98*x99))*x100);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x101 = UINT8_MAX;
	static volatile int64_t x102 = INT64_MIN;
	uint64_t x103 = 9228LLU;
	uint32_t x104 = 109935U;
	static volatile uint64_t t17 = 513981233173LLU;

	t17 = ((x101&(x102*x103))*x104);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x105 = 212;
	static int8_t x106 = 3;
	uint64_t x107 = 39360459859276LLU;
	int8_t x108 = INT8_MAX;
	volatile uint64_t t18 = 4048LLU;

	t18 = ((x105&(x106*x107))*x108);

	if (t18 != 24892LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = -1LL;
	uint8_t x110 = 7U;
	static int8_t x111 = INT8_MIN;
	static int32_t x112 = -1;

	t19 = ((x109&(x110*x111))*x112);

	if (t19 != 896LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	int32_t x114 = -134047;
	int16_t x115 = 354;
	int8_t x116 = -1;
	int32_t t20 = 344;

	t20 = ((x113&(x114*x115))*x116);

	if (t20 != 47452638) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = INT32_MAX;
	volatile int16_t x122 = INT16_MIN;
	static volatile int64_t x123 = 187939887319406LL;
	static volatile uint64_t x124 = UINT64_MAX;
	static uint64_t t21 = 193347736031586LLU;

	t21 = ((x121&(x122*x123))*x124);

	if (t21 != 18446744071641169920LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MIN;
	uint64_t x131 = 160037063673175LLU;
	volatile uint64_t t22 = 109422LLU;

	t22 = ((x129&(x130*x131))*x132);

	if (t22 != 7067609434591068160LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x137 = 230LLU;
	int32_t x138 = INT32_MIN;
	int64_t x139 = -1LL;
	int16_t x140 = -15;
	uint64_t t23 = 32LLU;

	t23 = ((x137&(x138*x139))*x140);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x142 = 1563620U;
	uint8_t x143 = UINT8_MAX;
	static volatile int16_t x144 = INT16_MIN;
	uint32_t t24 = 9909U;

	t24 = ((x141&(x142*x143))*x144);

	if (t24 != 4227465216U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x149 = 88LL;
	uint16_t x150 = 0U;
	static uint64_t x151 = 22994049575LLU;
	static uint64_t x152 = 24LLU;

	t25 = ((x149&(x150*x151))*x152);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x157 = 7852LLU;
	uint32_t x159 = UINT32_MAX;
	uint32_t x160 = 14U;
	uint64_t t26 = 114560363LLU;

	t26 = ((x157&(x158*x159))*x160);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x166 = INT64_MAX;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t27 = -1036977733LL;

	t27 = ((x165&(x166*x167))*x168);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x169 = 10;
	int16_t x171 = -1;
	int16_t x172 = -1;

	t28 = ((x169&(x170*x171))*x172);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x177 = UINT64_MAX;
	int64_t x178 = -1LL;
	int16_t x179 = INT16_MAX;
	uint16_t x180 = 0U;
	uint64_t t29 = 1206LLU;

	t29 = ((x177&(x178*x179))*x180);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x181 = INT8_MIN;
	int64_t x183 = -1LL;
	uint8_t x184 = 0U;
	static int64_t t30 = 596182832172942217LL;

	t30 = ((x181&(x182*x183))*x184);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = 16;
	uint32_t x188 = 0U;
	static volatile uint64_t t31 = 7815050186728LLU;

	t31 = ((x185&(x186*x187))*x188);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = INT16_MIN;
	uint64_t x190 = UINT64_MAX;
	static uint64_t x191 = 260939LLU;
	int64_t x192 = 3051276423874LL;

	t32 = ((x189&(x190*x191))*x192);

	if (t32 != 17646870266849525760LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x197 = 1;
	volatile uint8_t x199 = 5U;
	int8_t x200 = INT8_MIN;
	int32_t t33 = 14;

	t33 = ((x197&(x198*x199))*x200);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x210 = -1;
	int8_t x211 = 1;
	static uint64_t x212 = 35566938901635287LLU;
	uint64_t t34 = 7363098790362550LLU;

	t34 = ((x209&(x210*x211))*x212);

	if (t34 != 497937144622894018LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x217 = 811521959807370LL;
	int64_t x218 = INT64_MIN;
	static int8_t x219 = 1;
	int64_t t35 = 1LL;

	t35 = ((x217&(x218*x219))*x220);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = 2239LLU;
	int64_t x228 = 4664694LL;
	volatile uint64_t t36 = 116252LLU;

	t36 = ((x225&(x226*x227))*x228);

	if (t36 != 20033371311864576LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x230 = -7;
	uint32_t x232 = 517968004U;
	volatile int64_t t37 = 2LL;

	t37 = ((x229&(x230*x231))*x232);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x234 = -1;
	uint16_t x236 = 58U;

	t38 = ((x233&(x234*x235))*x236);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x238 = 1467752LLU;
	int8_t x240 = -1;
	volatile uint64_t t39 = 259962246014400LLU;

	t39 = ((x237&(x238*x239))*x240);

	if (t39 != 18446744025615721832LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x242 = 6;
	volatile int8_t x243 = -1;
	static int16_t x244 = -1;
	static int32_t t40 = -2754;

	t40 = ((x241&(x242*x243))*x244);

	if (t40 != -65530) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x245 = -1;
	int32_t x246 = INT32_MIN;
	static volatile uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MIN;
	static volatile uint64_t t41 = 24562597526377LLU;

	t41 = ((x245&(x246*x247))*x248);

	if (t41 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x249 = 1505;
	volatile int16_t x250 = INT16_MIN;
	static volatile uint64_t x252 = UINT64_MAX;
	volatile uint64_t t42 = 712LLU;

	t42 = ((x249&(x250*x251))*x252);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x253 = -1LL;
	uint16_t x254 = 37U;
	static volatile uint16_t x256 = 3U;
	int64_t t43 = 1LL;

	t43 = ((x253&(x254*x255))*x256);

	if (t43 != -111LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x258 = UINT8_MAX;
	uint32_t x259 = UINT32_MAX;

	t44 = ((x257&(x258*x259))*x260);

	if (t44 != 145144490283209LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x269 = 2070220982688888490LLU;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = UINT32_MAX;
	uint32_t x272 = UINT32_MAX;
	uint64_t t45 = 1210430982LLU;

	t45 = ((x269&(x270*x271))*x272);

	if (t45 != 549755813760LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x273 = INT8_MIN;
	int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	static uint64_t x276 = UINT64_MAX;
	volatile uint64_t t46 = 262883278645383LLU;

	t46 = ((x273&(x274*x275))*x276);

	if (t46 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x279 = -1LL;
	uint16_t x280 = 1U;
	static volatile int64_t t47 = 153998420713LL;

	t47 = ((x277&(x278*x279))*x280);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x285 = 36;
	int8_t x287 = INT8_MAX;
	static int16_t x288 = -1;

	t48 = ((x285&(x286*x287))*x288);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x289 = 63U;
	uint32_t x290 = 1154003U;
	int64_t x292 = -1LL;
	int64_t t49 = -201781976652LL;

	t49 = ((x289&(x290*x291))*x292);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x293 = 71U;
	static volatile int8_t x294 = -1;
	uint8_t x295 = 10U;
	static volatile uint16_t x296 = UINT16_MAX;

	t50 = ((x293&(x294*x295))*x296);

	if (t50 != 4587450) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MAX;
	int16_t x303 = INT16_MAX;
	int32_t x304 = -1;
	static int32_t t51 = 322295;

	t51 = ((x301&(x302*x303))*x304);

	if (t51 != -1073676288) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x305 = INT64_MIN;
	volatile int32_t x306 = -1;
	int8_t x307 = -2;
	volatile int64_t t52 = -7776981485203LL;

	t52 = ((x305&(x306*x307))*x308);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x309 = 103405U;
	static volatile uint32_t t53 = 1968866U;

	t53 = ((x309&(x310*x311))*x312);

	if (t53 != 13122656U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x317 = 7048730LLU;
	uint16_t x318 = 168U;
	int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	volatile uint64_t t54 = 1598756357LLU;

	t54 = ((x317&(x318*x319))*x320);

	if (t54 != 18446743842754396160LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x325 = 662557392LLU;
	uint64_t x326 = 5141642040015204LLU;
	static int32_t x327 = INT32_MIN;
	uint64_t x328 = 1852LLU;
	volatile uint64_t t55 = 1597113862342LLU;

	t55 = ((x325&(x326*x327))*x328);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x337 = 16U;
	volatile uint16_t x338 = 232U;
	uint16_t x339 = 10615U;
	uint64_t x340 = UINT64_MAX;
	uint64_t t56 = 44801304432475212LLU;

	t56 = ((x337&(x338*x339))*x340);

	if (t56 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x349 = 416779650182709LLU;
	int8_t x350 = INT8_MIN;
	volatile uint8_t x351 = 116U;
	int16_t x352 = -1;
	uint64_t t57 = 48623395LLU;

	t57 = ((x349&(x350*x351))*x352);

	if (t57 != 18446327294059379200LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x353 = 3062;
	int64_t x354 = -2907LL;

	t58 = ((x353&(x354*x355))*x356);

	if (t58 != -676LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x361 = 1434U;
	int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	static int32_t x364 = INT32_MIN;
	uint32_t t59 = 29U;

	t59 = ((x361&(x362*x363))*x364);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x370 = 3;
	static uint64_t x371 = UINT64_MAX;
	uint16_t x372 = UINT16_MAX;
	volatile uint64_t t60 = 19448200430293LLU;

	t60 = ((x369&(x370*x371))*x372);

	if (t60 != 9223372036854579203LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x377 = INT32_MAX;
	static uint64_t x378 = 21631447630320LLU;
	int8_t x379 = INT8_MIN;
	static uint32_t x380 = UINT32_MAX;
	uint64_t t61 = 102LLU;

	t61 = ((x377&(x378*x379))*x380);

	if (t61 != 2287555931287910400LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x381 = UINT32_MAX;
	static volatile uint64_t x382 = UINT64_MAX;
	static int16_t x383 = INT16_MAX;
	int16_t x384 = INT16_MIN;
	volatile uint64_t t62 = 496724496337616956LLU;

	t62 = ((x381&(x382*x383))*x384);

	if (t62 != 18446603337294905344LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x389 = UINT64_MAX;
	volatile uint64_t x390 = 259176274LLU;
	uint64_t x392 = 1773427LLU;
	static uint64_t t63 = 4LLU;

	t63 = ((x389&(x390*x391))*x392);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = 1116LLU;
	static int16_t x400 = 15908;
	uint64_t t64 = 4368844612911LLU;

	t64 = ((x397&(x398*x399))*x400);

	if (t64 != 18408619092131971072LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x407 = UINT16_MAX;
	int16_t x408 = INT16_MAX;

	t65 = ((x405&(x406*x407))*x408);

	if (t65 != 558410485329905464LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x409 = INT64_MAX;
	int64_t x410 = -1LL;
	volatile uint64_t x411 = 4LLU;
	uint32_t x412 = UINT32_MAX;
	static volatile uint64_t t66 = 978579LLU;

	t66 = ((x409&(x410*x411))*x412);

	if (t66 != 9223372019674906628LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x413 = UINT64_MAX;
	uint64_t x415 = UINT64_MAX;
	uint64_t t67 = 8053LLU;

	t67 = ((x413&(x414*x415))*x416);

	if (t67 != 4294967295LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x417 = INT32_MIN;
	static uint8_t x419 = 33U;
	static volatile int32_t t68 = -641382656;

	t68 = ((x417&(x418*x419))*x420);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x421 = 7915U;
	volatile uint8_t x422 = 24U;
	volatile int32_t x423 = -1;
	volatile int32_t x424 = 435357;
	static volatile uint32_t t69 = 0U;

	t69 = ((x421&(x422*x423))*x424);

	if (t69 != 3444544584U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x442 = INT32_MAX;
	uint32_t x443 = UINT32_MAX;
	volatile int32_t x444 = INT32_MAX;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = ((x441&(x442*x443))*x444);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x450 = 14U;
	int16_t x452 = -1;
	static volatile uint64_t t71 = 206897845106158LLU;

	t71 = ((x449&(x450*x451))*x452);

	if (t71 != 18446743765008431600LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x461 = INT16_MAX;
	static int64_t x462 = 2LL;
	uint32_t x463 = 2793U;
	uint8_t x464 = 98U;
	int64_t t72 = -12950585161567LL;

	t72 = ((x461&(x462*x463))*x464);

	if (t72 != 547428LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x465 = -15231;
	volatile uint32_t x466 = 13927857U;
	int16_t x467 = INT16_MIN;
	uint64_t x468 = UINT64_MAX;

	t73 = ((x465&(x466*x467))*x468);

	if (t73 != 18446744070536069120LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x483 = 14U;
	int32_t x484 = -29579028;
	uint64_t t74 = 71LLU;

	t74 = ((x481&(x482*x483))*x484);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x485 = INT32_MIN;
	uint8_t x486 = 0U;
	uint8_t x488 = 4U;

	t75 = ((x485&(x486*x487))*x488);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x493 = -1;
	int64_t x494 = -1LL;
	int8_t x496 = INT8_MIN;
	volatile int64_t t76 = 6733781LL;

	t76 = ((x493&(x494*x495))*x496);

	if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x497 = -8;
	uint16_t x498 = UINT16_MAX;
	int16_t x499 = INT16_MAX;
	int32_t x500 = -1;
	int32_t t77 = -1;

	t77 = ((x497&(x498*x499))*x500);

	if (t77 != -2147385344) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x501 = UINT8_MAX;
	uint64_t x502 = 57193158384580LLU;
	int64_t x503 = 16872522020943175LL;
	volatile int32_t x504 = 3034;
	uint64_t t78 = 1066543409283727LLU;

	t78 = ((x501&(x502*x503))*x504);

	if (t78 != 279128LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x505 = UINT64_MAX;
	volatile uint32_t x508 = UINT32_MAX;
	uint64_t t79 = 973028607349LLU;

	t79 = ((x505&(x506*x507))*x508);

	if (t79 != 18446742282708189601LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x510 = UINT32_MAX;
	static int8_t x511 = -21;
	int16_t x512 = INT16_MAX;
	volatile uint32_t t80 = 56325U;

	t80 = ((x509&(x510*x511))*x512);

	if (t80 != 688107U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x517 = 112U;
	int8_t x518 = INT8_MIN;
	static int16_t x519 = 6;
	int64_t x520 = 20574588569564LL;
	int64_t t81 = -97190LL;

	t81 = ((x517&(x518*x519))*x520);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x525 = INT8_MIN;
	static volatile uint8_t x526 = 2U;
	int8_t x527 = 1;
	uint64_t x528 = 3766547498137LLU;
	uint64_t t82 = 104579605535LLU;

	t82 = ((x525&(x526*x527))*x528);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x529 = UINT16_MAX;
	int32_t x530 = -1834;
	uint64_t x531 = UINT64_MAX;
	int32_t x532 = -1;
	uint64_t t83 = 20196581729398189LLU;

	t83 = ((x529&(x530*x531))*x532);

	if (t83 != 18446744073709549782LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x534 = UINT8_MAX;
	volatile uint16_t x535 = UINT16_MAX;
	volatile int64_t t84 = 2108054LL;

	t84 = ((x533&(x534*x535))*x536);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x541 = UINT32_MAX;
	int8_t x543 = INT8_MIN;
	uint32_t t85 = 455136864U;

	t85 = ((x541&(x542*x543))*x544);

	if (t85 != 6946816U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x549 = -1LL;
	uint16_t x550 = 13533U;
	int64_t x552 = -1LL;
	volatile int64_t t86 = -167218081826LL;

	t86 = ((x549&(x550*x551))*x552);

	if (t86 != -204321234LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x554 = -8;
	static int64_t x555 = 107216526864871578LL;
	uint32_t x556 = 10064U;
	static uint64_t t87 = 100331381524487443LLU;

	t87 = ((x553&(x554*x555))*x556);

	if (t87 != 5635840LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x561 = INT64_MIN;
	int64_t x562 = -1LL;
	volatile int16_t x563 = INT16_MIN;
	int64_t t88 = -30449649878397611LL;

	t88 = ((x561&(x562*x563))*x564);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x565 = UINT64_MAX;
	int16_t x567 = -10;

	t89 = ((x565&(x566*x567))*x568);

	if (t89 != 349396171520LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x569 = INT16_MAX;
	int64_t x570 = 1LL;
	volatile int8_t x571 = 0;
	int32_t x572 = 0;
	int64_t t90 = 5534022130LL;

	t90 = ((x569&(x570*x571))*x572);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x573 = -1;
	static volatile uint8_t x574 = 1U;
	int8_t x575 = -1;
	int64_t x576 = 11421836LL;

	t91 = ((x573&(x574*x575))*x576);

	if (t91 != -11421836LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x577 = -132752027;
	int32_t x579 = INT32_MIN;
	int32_t x580 = -1;
	uint32_t t92 = 16623479U;

	t92 = ((x577&(x578*x579))*x580);

	if (t92 != 2147483648U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x593 = INT8_MIN;
	volatile uint64_t x594 = 445441LLU;
	static uint8_t x595 = 9U;
	uint64_t t93 = 0LLU;

	t93 = ((x593&(x594*x595))*x596);

	if (t93 != 1022284800LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x597 = INT16_MIN;
	uint32_t x598 = 401971298U;
	static uint64_t x599 = UINT64_MAX;
	static int8_t x600 = INT8_MIN;
	volatile uint64_t t94 = 29790320491400LLU;

	t94 = ((x597&(x598*x599))*x600);

	if (t94 != 51455721472LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x601 = -464994436;
	int32_t x602 = -1;
	int64_t x603 = -1LL;
	static uint16_t x604 = 21084U;
	int64_t t95 = 26830315705172298LL;

	t95 = ((x601&(x602*x603))*x604);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x609 = -6;
	int16_t x611 = -242;
	uint32_t x612 = 1U;

	t96 = ((x609&(x610*x611))*x612);

	if (t96 != 1725944U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x613 = UINT32_MAX;
	uint64_t x614 = 3LLU;
	uint8_t x615 = 5U;
	volatile uint16_t x616 = 2011U;
	uint64_t t97 = 3636787LLU;

	t97 = ((x613&(x614*x615))*x616);

	if (t97 != 30165LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x618 = 56;
	volatile int32_t x619 = -1;
	static uint64_t t98 = 11LLU;

	t98 = ((x617&(x618*x619))*x620);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x625 = 9U;
	int16_t x626 = 0;
	volatile int16_t x627 = INT16_MIN;
	int16_t x628 = INT16_MAX;
	int32_t t99 = -54845;

	t99 = ((x625&(x626*x627))*x628);

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

