#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
uint32_t x2 = 12302U;
int32_t x4 = INT32_MIN;
uint8_t x9 = UINT8_MAX;
static int64_t x19 = INT64_MIN;
static volatile int8_t x31 = 41;
int8_t x42 = INT8_MIN;
volatile uint32_t t8 = 98U;
int32_t x51 = -1;
static int64_t x62 = -1LL;
int32_t x65 = -1;
int16_t x76 = INT16_MAX;
volatile uint32_t t13 = 98821075U;
int16_t x98 = -25;
volatile uint64_t t16 = 5515395396023864349LLU;
uint8_t x110 = UINT8_MAX;
static int16_t x113 = INT16_MAX;
int32_t t22 = -190;
uint16_t x129 = 613U;
static int64_t x134 = -5553492538LL;
volatile uint32_t x145 = 201U;
int32_t x146 = 1;
int16_t x150 = -1;
int16_t x155 = 537;
uint32_t x156 = 2797952U;
uint32_t x160 = 189U;
uint32_t t29 = 8020U;
volatile uint8_t x163 = 10U;
uint32_t x164 = 113U;
uint32_t t30 = 1528475U;
static volatile uint64_t t31 = 121386LLU;
int8_t x178 = -22;
int8_t x179 = INT8_MIN;
int64_t x184 = -1LL;
static volatile int16_t x185 = -3886;
volatile int32_t x186 = 13425;
int8_t x191 = INT8_MAX;
volatile uint64_t t36 = 757152683708065LLU;
volatile int32_t x194 = 23801;
int16_t x198 = -175;
static int64_t x199 = -1LL;
static uint64_t t38 = 11LLU;
uint64_t x211 = 2395LLU;
volatile uint64_t t39 = 4694883469891LLU;
uint32_t x217 = 1088961U;
int32_t x219 = INT32_MAX;
static int64_t t41 = -281992221167124043LL;
static volatile int32_t t43 = -1952103;
uint32_t x230 = 190412166U;
uint32_t t44 = 963463U;
uint64_t x234 = 605138438927LLU;
int8_t x249 = 0;
uint64_t t47 = 688LLU;
int8_t x260 = -1;
volatile int64_t t49 = -191179LL;
int64_t x274 = -2LL;
uint64_t x275 = 1412668282181LLU;
static volatile int8_t x284 = INT8_MAX;
volatile int64_t t53 = 24956318864060234LL;
int64_t x287 = INT64_MAX;
static volatile int64_t t54 = -2095515242236LL;
static int16_t x299 = INT16_MIN;
static int32_t x300 = INT32_MAX;
int32_t t57 = -181471;
static int16_t x301 = 6181;
int64_t x309 = -6096576359LL;
volatile uint64_t t62 = 23LLU;
static int64_t x321 = INT64_MAX;
int16_t x328 = -1;
uint32_t x330 = 65U;
uint8_t x332 = 2U;
uint32_t t65 = 4U;
int32_t t67 = 5495;
volatile uint16_t x350 = 226U;
static volatile int16_t x355 = INT16_MAX;
int16_t x363 = 216;
uint8_t x365 = 29U;
volatile uint64_t t72 = 133330LLU;
uint8_t x374 = UINT8_MAX;
volatile uint8_t x380 = 1U;
volatile int16_t x386 = -1;
uint64_t x390 = UINT64_MAX;
uint64_t x391 = 29964LLU;
static uint8_t x410 = UINT8_MAX;
int8_t x411 = 1;
volatile uint32_t t82 = 13195267U;
static uint64_t x434 = 118511333374154607LLU;
uint16_t x438 = 869U;
static uint16_t x443 = 1U;
volatile int32_t x444 = 1021752;
volatile int32_t x447 = -1;
uint32_t x449 = 872U;
static uint64_t x451 = 9278505145LLU;
volatile uint64_t t90 = 341LLU;
uint64_t t91 = 22LLU;
static int8_t x478 = -1;
volatile int16_t x480 = INT16_MIN;
uint32_t x481 = UINT32_MAX;
int16_t x482 = -1;
int64_t x489 = INT64_MAX;
int64_t x492 = INT64_MAX;
volatile int8_t x495 = -1;
static int32_t x496 = -7;


void f0(void) {
	int64_t x3 = INT64_MIN;
	int64_t t0 = 23658LL;

	t0 = (((x1+x2)^x3)-x4);

	if (t0 != -9223372034707279859LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x10 = 237542334LLU;
	int64_t x11 = 35318467643564LL;
	int32_t x12 = INT32_MIN;
	uint64_t t1 = 24488539663296LLU;

	t1 = (((x9+x10)^x11)-x12);

	if (t1 != 35320579970065LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = 235U;
	uint16_t x14 = 504U;
	int64_t x15 = INT64_MAX;
	int64_t x16 = 14773598201544124LL;
	int64_t t2 = -3170661LL;

	t2 = (((x13+x14)^x15)-x16);

	if (t2 != 9208598438653230944LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	uint32_t x18 = UINT32_MAX;
	uint32_t x20 = 15U;
	int64_t t3 = 152212LL;

	t3 = (((x17+x18)^x19)-x20);

	if (t3 != -9223372032559808529LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 55LL;
	int8_t x22 = -1;
	uint32_t x23 = 511069U;
	int32_t x24 = INT32_MIN;
	int64_t t4 = 78900866504381LL;

	t4 = (((x21+x22)^x23)-x24);

	if (t4 != 2147994731LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int32_t x30 = INT32_MIN;
	int8_t x32 = 49;
	int32_t t5 = 10259525;

	t5 = (((x29+x30)^x31)-x32);

	if (t5 != -2147418203) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = 0;
	uint64_t x38 = 3LLU;
	uint8_t x39 = 4U;
	int16_t x40 = INT16_MAX;
	volatile uint64_t t6 = 360574506993746LLU;

	t6 = (((x37+x38)^x39)-x40);

	if (t6 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 7U;
	int32_t x43 = -1;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t7 = -16;

	t7 = (((x41+x42)^x43)-x44);

	if (t7 != 248) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 5570U;
	volatile int16_t x46 = INT16_MIN;
	int8_t x47 = 1;
	static int32_t x48 = INT32_MIN;

	t8 = (((x45+x46)^x47)-x48);

	if (t8 != 2147456451U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = -668472839654839920LL;
	uint32_t x52 = 1984997754U;
	volatile int64_t t9 = -357LL;

	t9 = (((x49+x50)^x51)-x52);

	if (t9 != 668472837669874933LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x61 = 9279371793362LLU;
	int16_t x63 = 1081;
	uint8_t x64 = 5U;
	volatile uint64_t t10 = 27716241LLU;

	t10 = (((x61+x62)^x63)-x64);

	if (t10 != 9279371794403LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x66 = UINT8_MAX;
	volatile int32_t x67 = -2503147;
	int64_t x68 = INT64_MIN;
	int64_t t11 = -1LL;

	t11 = (((x65+x66)^x67)-x68);

	if (t11 != 9223372036852272875LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = 3U;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = UINT64_MAX;
	int16_t x72 = INT16_MAX;
	uint64_t t12 = 1954658793358219048LLU;

	t12 = (((x69+x70)^x71)-x72);

	if (t12 != 9223372036854743037LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = 0;
	int8_t x74 = 25;
	uint32_t x75 = UINT32_MAX;

	t13 = (((x73+x74)^x75)-x76);

	if (t13 != 4294934503U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x77 = INT8_MIN;
	int64_t x78 = -1LL;
	static volatile uint64_t x79 = UINT64_MAX;
	int32_t x80 = 31;
	volatile uint64_t t14 = 15397974600679223LLU;

	t14 = (((x77+x78)^x79)-x80);

	if (t14 != 97LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x85 = -1;
	int8_t x86 = INT8_MIN;
	int64_t x87 = -24940275958005LL;
	int32_t x88 = -1;
	volatile int64_t t15 = -4685791LL;

	t15 = (((x85+x86)^x87)-x88);

	if (t15 != 24940275957877LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = -1LL;
	volatile uint64_t x99 = UINT64_MAX;
	static int8_t x100 = -1;

	t16 = (((x97+x98)^x99)-x100);

	if (t16 != 26LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x101 = 0U;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	int8_t x104 = -1;
	static volatile uint32_t t17 = 0U;

	t17 = (((x101+x102)^x103)-x104);

	if (t17 != 32641U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = -1;
	volatile uint64_t x106 = UINT64_MAX;
	uint64_t x107 = UINT64_MAX;
	volatile uint32_t x108 = 290655U;
	uint64_t t18 = 6039518466862563677LLU;

	t18 = (((x105+x106)^x107)-x108);

	if (t18 != 18446744073709260962LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x109 = 381898278LLU;
	int8_t x111 = INT8_MIN;
	int32_t x112 = -14091826;
	uint64_t t19 = 5080381420LLU;

	t19 = (((x109+x110)^x111)-x112);

	if (t19 != 18446744073341744855LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t20 = 24;

	t20 = (((x113+x114)^x115)-x116);

	if (t20 != 65280) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int32_t x118 = -166961726;
	volatile int16_t x119 = INT16_MIN;
	uint16_t x120 = 4U;
	volatile uint32_t t21 = 96275U;

	t21 = (((x117+x118)^x119)-x120);

	if (t21 != 166976957U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = -11;
	uint16_t x126 = 19U;
	volatile int32_t x127 = 238;
	uint8_t x128 = 1U;

	t22 = (((x125+x126)^x127)-x128);

	if (t22 != 229) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x130 = INT16_MAX;
	static volatile int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t23 = 51528;

	t23 = (((x129+x130)^x131)-x132);

	if (t23 != -65051) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x133 = 196617U;
	uint32_t x135 = 6218439U;
	int64_t x136 = INT64_MIN;
	volatile int64_t t24 = -2544LL;

	t24 = (((x133+x134)^x135)-x136);

	if (t24 != 9223372031295328008LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = -645LL;
	int8_t x138 = INT8_MAX;
	uint32_t x139 = UINT32_MAX;
	static volatile int32_t x140 = INT32_MIN;
	int64_t t25 = 68595687238765LL;

	t25 = (((x137+x138)^x139)-x140);

	if (t25 != -2147483131LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x147 = 1U;
	static volatile uint16_t x148 = 1583U;
	volatile uint32_t t26 = 701U;

	t26 = (((x145+x146)^x147)-x148);

	if (t26 != 4294965916U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x149 = INT32_MAX;
	int8_t x151 = INT8_MIN;
	volatile int64_t x152 = INT64_MIN;
	int64_t t27 = -4438LL;

	t27 = (((x149+x150)^x151)-x152);

	if (t27 != 9223372034707292286LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x153 = 37773989743186LL;
	int32_t x154 = 200;
	int64_t t28 = 1066684237092LL;

	t28 = (((x153+x154)^x155)-x156);

	if (t28 != 37773986944899LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 1U;
	int16_t x159 = INT16_MIN;

	t29 = (((x157+x158)^x159)-x160);

	if (t29 != 4294868803U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = INT16_MAX;
	int32_t x162 = INT32_MIN;

	t30 = (((x161+x162)^x163)-x164);

	if (t30 != 2147516292U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x165 = INT8_MAX;
	int64_t x166 = -648534077LL;
	uint64_t x167 = 268548763382LLU;
	int8_t x168 = INT8_MIN;

	t31 = (((x165+x166)^x167)-x168);

	if (t31 != 18446743804730459956LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x169 = -83622;
	volatile int32_t x170 = INT32_MAX;
	int32_t x171 = -95;
	int64_t x172 = 6336904807LL;
	volatile int64_t t32 = 424604957816LL;

	t32 = (((x169+x170)^x171)-x172);

	if (t32 != -8484304751LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x177 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	static volatile int32_t t33 = -39858925;

	t33 = (((x177+x178)^x179)-x180);

	if (t33 != 2147483625) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = -2;
	int8_t x182 = INT8_MAX;
	uint16_t x183 = 24177U;
	int64_t t34 = 4022LL;

	t34 = (((x181+x182)^x183)-x184);

	if (t34 != 24077LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x187 = INT8_MIN;
	volatile int16_t x188 = INT16_MIN;
	int32_t t35 = -71;

	t35 = (((x185+x186)^x187)-x188);

	if (t35 != 23235) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x189 = 12U;
	uint64_t x190 = UINT64_MAX;
	int64_t x192 = -3414261647819LL;

	t36 = (((x189+x190)^x191)-x192);

	if (t36 != 3414261647935LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x193 = -51;
	int16_t x195 = INT16_MIN;
	uint16_t x196 = 1U;
	volatile int32_t t37 = -2293531;

	t37 = (((x193+x194)^x195)-x196);

	if (t37 != -9019) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = INT8_MAX;
	static uint64_t x200 = UINT64_MAX;

	t38 = (((x197+x198)^x199)-x200);

	if (t38 != 48LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x209 = -3671;
	volatile int64_t x210 = -1LL;
	int64_t x212 = -1LL;

	t39 = (((x209+x210)^x211)-x212);

	if (t39 != 18446744073709549812LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x213 = 2U;
	uint64_t x214 = 16840400888505732LLU;
	int8_t x215 = -1;
	volatile int8_t x216 = 1;
	uint64_t t40 = 61913LLU;

	t40 = (((x213+x214)^x215)-x216);

	if (t40 != 18429903672821045880LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x218 = 139815LL;
	static int64_t x220 = INT64_MAX;

	t41 = (((x217+x218)^x219)-x220);

	if (t41 != -9223372034708520936LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = INT8_MAX;
	int64_t x222 = -16150234LL;
	volatile int8_t x223 = 8;
	int16_t x224 = INT16_MAX;
	volatile int64_t t42 = -61215796653LL;

	t42 = (((x221+x222)^x223)-x224);

	if (t42 != -16182866LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = INT16_MIN;
	volatile int16_t x226 = INT16_MIN;
	uint16_t x227 = UINT16_MAX;
	uint8_t x228 = 21U;

	t43 = (((x225+x226)^x227)-x228);

	if (t43 != -22) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = INT8_MIN;
	int8_t x231 = INT8_MAX;
	int32_t x232 = INT32_MAX;

	t44 = (((x229+x230)^x231)-x232);

	if (t44 != 2337895802U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x233 = 812547228682LLU;
	int64_t x235 = 56171325733LL;
	static int16_t x236 = INT16_MIN;
	uint64_t t45 = 4LLU;

	t45 = (((x233+x234)^x235)-x236);

	if (t45 != 1404466193980LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x245 = INT64_MIN;
	static int64_t x246 = INT64_MAX;
	static int8_t x247 = -1;
	uint64_t x248 = 79922463118308966LLU;
	uint64_t t46 = 7869710841581167LLU;

	t46 = (((x245+x246)^x247)-x248);

	if (t46 != 18366821610591242650LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = -29313LL;
	static int32_t x252 = INT32_MAX;

	t47 = (((x249+x250)^x251)-x252);

	if (t47 != 18446744071562097281LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x257 = -1;
	int8_t x258 = INT8_MIN;
	volatile int32_t x259 = INT32_MAX;
	int32_t t48 = -13120525;

	t48 = (((x257+x258)^x259)-x260);

	if (t48 != -2147483519) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x261 = 6U;
	int64_t x262 = -27239LL;
	volatile uint32_t x263 = UINT32_MAX;
	int8_t x264 = -10;

	t49 = (((x261+x262)^x263)-x264);

	if (t49 != -4294940054LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x265 = 9614U;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = -1;
	int8_t x268 = INT8_MIN;
	uint32_t t50 = 95740422U;

	t50 = (((x265+x266)^x267)-x268);

	if (t50 != 4294957810U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x273 = 1348;
	uint8_t x276 = UINT8_MAX;
	uint64_t t51 = 90LLU;

	t51 = (((x273+x274)^x275)-x276);

	if (t51 != 1412668280584LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = INT16_MAX;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	int16_t x280 = -398;
	volatile int64_t t52 = -512414350462LL;

	t52 = (((x277+x278)^x279)-x280);

	if (t52 != 33165LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = -880LL;
	int32_t x283 = INT32_MIN;

	t53 = (((x281+x282)^x283)-x284);

	if (t53 != 4294966289LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = 6542;
	int64_t x288 = INT64_MIN;

	t54 = (((x285+x286)^x287)-x288);

	if (t54 != 26225LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x289 = -8;
	int16_t x290 = INT16_MAX;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = 30001U;
	volatile int32_t t55 = 4;

	t55 = (((x289+x290)^x291)-x292);

	if (t55 != -62650) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x293 = UINT16_MAX;
	uint32_t x294 = UINT32_MAX;
	int8_t x295 = -10;
	uint16_t x296 = 421U;
	uint32_t t56 = 1220854U;

	t56 = (((x293+x294)^x295)-x296);

	if (t56 != 4294901347U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x297 = -91;
	int8_t x298 = INT8_MIN;

	t57 = (((x297+x298)^x299)-x300);

	if (t57 != -2147451098) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x302 = 29474U;
	volatile int8_t x303 = -3;
	static volatile uint16_t x304 = UINT16_MAX;
	volatile int32_t t58 = 0;

	t58 = (((x301+x302)^x303)-x304);

	if (t58 != -101189) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x305 = UINT64_MAX;
	int32_t x306 = -1;
	int64_t x307 = -1LL;
	int8_t x308 = 0;
	volatile uint64_t t59 = 417058LLU;

	t59 = (((x305+x306)^x307)-x308);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x310 = 7U;
	int8_t x311 = INT8_MAX;
	int32_t x312 = INT32_MAX;
	int64_t t60 = 40192LL;

	t60 = (((x309+x310)^x311)-x312);

	if (t60 != -8244059936LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x313 = 3U;
	int64_t x314 = 166737182561932LL;
	static int16_t x315 = 1876;
	int32_t x316 = 84151;
	int64_t t61 = 48516356350LL;

	t61 = (((x313+x314)^x315)-x316);

	if (t61 != 166737182476580LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x317 = 104U;
	int32_t x318 = 509;
	int16_t x319 = INT16_MAX;
	volatile uint64_t x320 = 4806680985187313LLU;

	t62 = (((x317+x318)^x319)-x320);

	if (t62 != 18441937392724396457LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x322 = INT64_MIN;
	int16_t x323 = -1;
	int32_t x324 = -10162;
	volatile int64_t t63 = 26163223650799LL;

	t63 = (((x321+x322)^x323)-x324);

	if (t63 != 10162LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x325 = -1;
	int16_t x326 = INT16_MAX;
	uint8_t x327 = UINT8_MAX;
	volatile int32_t t64 = 121326;

	t64 = (((x325+x326)^x327)-x328);

	if (t64 != 32514) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x329 = INT32_MAX;
	volatile int8_t x331 = INT8_MIN;

	t65 = (((x329+x330)^x331)-x332);

	if (t65 != 2147483582U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x333 = -15;
	int32_t x334 = -1;
	int64_t x335 = INT64_MAX;
	static int16_t x336 = INT16_MIN;
	volatile int64_t t66 = 8492479459099814LL;

	t66 = (((x333+x334)^x335)-x336);

	if (t66 != -9223372036854743025LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x341 = 3U;
	int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MIN;
	static uint8_t x344 = 47U;

	t67 = (((x341+x342)^x343)-x344);

	if (t67 != -44) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x349 = 0;
	int32_t x351 = -258;
	int8_t x352 = 0;
	int32_t t68 = 761076302;

	t68 = (((x349+x350)^x351)-x352);

	if (t68 != -484) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x353 = 40;
	int16_t x354 = 36;
	int32_t x356 = -1;
	int32_t t69 = 54641776;

	t69 = (((x353+x354)^x355)-x356);

	if (t69 != 32692) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x361 = -1;
	int32_t x362 = -202057;
	int32_t x364 = 35059;
	volatile int32_t t70 = 42;

	t70 = (((x361+x362)^x363)-x364);

	if (t70 != -237189) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x366 = UINT32_MAX;
	static int64_t x367 = INT64_MAX;
	int64_t x368 = -1LL;
	volatile int64_t t71 = 4847423LL;

	t71 = (((x365+x366)^x367)-x368);

	if (t71 != 9223372036854775780LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x369 = -1LL;
	uint8_t x370 = 26U;
	int32_t x371 = -1;
	uint64_t x372 = 7968092647148248613LLU;

	t72 = (((x369+x370)^x371)-x372);

	if (t72 != 10478651426561302977LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x373 = -1;
	uint32_t x375 = 3348221U;
	volatile int32_t x376 = -1;
	static volatile uint32_t t73 = 2U;

	t73 = (((x373+x374)^x375)-x376);

	if (t73 != 3347972U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x377 = INT32_MAX;
	static volatile uint32_t x378 = UINT32_MAX;
	static uint8_t x379 = UINT8_MAX;
	static volatile uint32_t t74 = 22410053U;

	t74 = (((x377+x378)^x379)-x380);

	if (t74 != 2147483392U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x382 = 1LL;
	uint8_t x383 = 5U;
	int16_t x384 = 741;
	volatile int64_t t75 = -45251107LL;

	t75 = (((x381+x382)^x383)-x384);

	if (t75 != 64800LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x385 = 455U;
	static int8_t x387 = 7;
	uint16_t x388 = 7090U;
	volatile int32_t t76 = -724;

	t76 = (((x385+x386)^x387)-x388);

	if (t76 != -6641) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x389 = -1;
	int16_t x392 = INT16_MIN;
	volatile uint64_t t77 = 605LLU;

	t77 = (((x389+x390)^x391)-x392);

	if (t77 != 2802LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x393 = INT16_MAX;
	volatile int8_t x394 = 24;
	int8_t x395 = INT8_MIN;
	uint32_t x396 = 29943648U;
	volatile uint32_t t78 = 101742U;

	t78 = (((x393+x394)^x395)-x396);

	if (t78 != 4264990775U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x397 = -1;
	static int32_t x398 = -34667;
	int32_t x399 = INT32_MIN;
	volatile uint32_t x400 = UINT32_MAX;
	uint32_t t79 = 301167570U;

	t79 = (((x397+x398)^x399)-x400);

	if (t79 != 2147448981U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x401 = INT16_MAX;
	uint8_t x402 = 5U;
	int32_t x403 = -1;
	int8_t x404 = INT8_MIN;
	int32_t t80 = 130619586;

	t80 = (((x401+x402)^x403)-x404);

	if (t80 != -32645) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x405 = -4190011;
	int16_t x406 = -6;
	volatile uint64_t x407 = 2405LLU;
	int16_t x408 = -1;
	uint64_t t81 = 18LLU;

	t81 = (((x405+x406)^x407)-x408);

	if (t81 != 18446744073705363931LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x409 = 130585U;
	int8_t x412 = 5;

	t82 = (((x409+x410)^x411)-x412);

	if (t82 != 130836U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x425 = INT8_MIN;
	static int16_t x426 = -702;
	int32_t x427 = -364280;
	int64_t x428 = -1LL;
	int64_t t83 = -49166LL;

	t83 = (((x425+x426)^x427)-x428);

	if (t83 != 363979LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x429 = -1LL;
	uint32_t x430 = 0U;
	static int32_t x431 = -1;
	uint64_t x432 = 49640862464659852LLU;
	volatile uint64_t t84 = 2749911121543717375LLU;

	t84 = (((x429+x430)^x431)-x432);

	if (t84 != 18397103211244891764LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x433 = -1166;
	int32_t x435 = -1;
	volatile uint64_t x436 = 2088793503809139LLU;
	uint64_t t85 = 1585LLU;

	t85 = (((x433+x434)^x435)-x436);

	if (t85 != 18326143946831589035LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x437 = 4327591;
	int32_t x439 = INT32_MIN;
	volatile int64_t x440 = 1LL;
	static volatile int64_t t86 = 60LL;

	t86 = (((x437+x438)^x439)-x440);

	if (t86 != -2143155189LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x441 = 19149U;
	static uint32_t x442 = 0U;
	volatile uint32_t t87 = 146889783U;

	t87 = (((x441+x442)^x443)-x444);

	if (t87 != 4293964692U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x445 = INT16_MIN;
	int16_t x446 = -1;
	static uint8_t x448 = UINT8_MAX;
	int32_t t88 = 347;

	t88 = (((x445+x446)^x447)-x448);

	if (t88 != 32513) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x450 = INT64_MIN;
	volatile int32_t x452 = INT32_MIN;
	volatile uint64_t t89 = 2874408LLU;

	t89 = (((x449+x450)^x451)-x452);

	if (t89 != 9223372048280765393LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x465 = 65681197129884557LLU;
	int64_t x466 = INT64_MIN;
	int8_t x467 = -1;
	static int8_t x468 = -2;

	t90 = (((x465+x466)^x467)-x468);

	if (t90 != 9157690839724891252LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x469 = INT32_MAX;
	static uint64_t x470 = UINT64_MAX;
	uint8_t x471 = 0U;
	static uint32_t x472 = 1067118778U;

	t91 = (((x469+x470)^x471)-x472);

	if (t91 != 1080364868LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x473 = 25160527371LLU;
	int16_t x474 = -1;
	int32_t x475 = INT32_MAX;
	uint8_t x476 = 0U;
	static volatile uint64_t t92 = 6LLU;

	t92 = (((x473+x474)^x475)-x476);

	if (t92 != 24231596533LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x477 = INT16_MIN;
	volatile uint32_t x479 = 386792U;
	volatile uint32_t t93 = 107817U;

	t93 = (((x477+x478)^x479)-x480);

	if (t93 != 4294646039U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x483 = -1LL;
	static int8_t x484 = INT8_MAX;
	static volatile int64_t t94 = -331760058380LL;

	t94 = (((x481+x482)^x483)-x484);

	if (t94 != -4294967422LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MAX;
	uint8_t x487 = 97U;
	uint64_t x488 = 1017470054145502LLU;
	static uint64_t t95 = 1486377425629644LLU;

	t95 = (((x485+x486)^x487)-x488);

	if (t95 != 18445726603655406016LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x490 = -1;
	int16_t x491 = INT16_MAX;
	int64_t t96 = 0LL;

	t96 = (((x489+x490)^x491)-x492);

	if (t96 != -32766LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x493 = -213720491667LL;
	int8_t x494 = 4;
	int64_t t97 = -453759LL;

	t97 = (((x493+x494)^x495)-x496);

	if (t97 != 213720491669LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x497 = 3U;
	int32_t x498 = 3;
	volatile int16_t x499 = INT16_MAX;
	uint32_t x500 = 846368U;
	uint32_t t98 = 62256430U;

	t98 = (((x497+x498)^x499)-x500);

	if (t98 != 4294153689U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x501 = INT32_MIN;
	uint64_t x502 = 368232071684LLU;
	uint32_t x503 = 1U;
	uint64_t x504 = 19260829879LLU;
	volatile uint64_t t99 = 195765624LLU;

	t99 = (((x501+x502)^x503)-x504);

	if (t99 != 346823758158LLU) { NG(); } else { ; }
	
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

