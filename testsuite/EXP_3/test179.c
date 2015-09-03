#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -24147948;
uint64_t x4 = UINT64_MAX;
static uint8_t x11 = 29U;
static volatile int64_t x16 = 4267937870667485LL;
static volatile int32_t t3 = -11;
int8_t x29 = INT8_MIN;
int16_t x31 = -1;
uint32_t x33 = UINT32_MAX;
static volatile int32_t x44 = -1907;
uint8_t x52 = 29U;
uint64_t x56 = UINT64_MAX;
static volatile int32_t x57 = -1;
int32_t x59 = 390008;
int8_t x63 = INT8_MAX;
volatile uint64_t x67 = 23677098346LLU;
static volatile int16_t x84 = INT16_MIN;
int32_t x85 = INT32_MAX;
volatile int32_t x107 = INT32_MAX;
uint32_t x114 = 10U;
uint32_t x116 = UINT32_MAX;
uint32_t x118 = 48U;
int32_t t24 = -6814787;
int16_t x121 = -1;
volatile uint8_t x124 = 25U;
int32_t t26 = 3;
int16_t x135 = INT16_MIN;
uint8_t x137 = 0U;
int32_t t28 = -138971;
volatile int32_t t29 = -1;
int64_t x145 = INT64_MIN;
volatile int64_t x146 = INT64_MAX;
int32_t t32 = 161099825;
int32_t t33 = 138211;
int32_t x169 = -1;
int8_t x172 = -1;
uint8_t x182 = 27U;
uint16_t x196 = UINT16_MAX;
int32_t t42 = -10684246;
uint32_t x209 = 899831809U;
uint8_t x217 = 6U;
uint64_t x219 = 1690127114679852092LLU;
static volatile int8_t x220 = -16;
int32_t t44 = 419776;
int8_t x227 = -1;
static volatile int32_t t45 = -4;
int16_t x242 = INT16_MIN;
int32_t x243 = INT32_MIN;
int8_t x244 = -41;
int8_t x249 = -1;
volatile int32_t t52 = -5002916;
uint32_t x257 = 446U;
volatile int32_t t54 = 81323;
uint32_t x268 = UINT32_MAX;
static volatile int32_t t55 = -269;
volatile int64_t x270 = -148197128257LL;
int32_t t57 = 1;
int32_t x283 = -11664432;
volatile int32_t t58 = -28;
static uint32_t x287 = UINT32_MAX;
volatile int32_t t59 = 10;
static int8_t x291 = INT8_MIN;
uint16_t x293 = UINT16_MAX;
volatile int32_t t63 = -233740992;
int64_t x310 = INT64_MAX;
int16_t x311 = INT16_MIN;
int32_t t65 = 5817;
int16_t x322 = -29;
int64_t x326 = INT64_MAX;
volatile int32_t t67 = 3;
int16_t x330 = 6;
uint8_t x358 = 33U;
int32_t x359 = INT32_MIN;
volatile int8_t x360 = INT8_MIN;
int16_t x377 = 1;
volatile int32_t x383 = INT32_MIN;
static int16_t x396 = -52;
int32_t t81 = -322;
static int16_t x402 = INT16_MAX;
int64_t x403 = -1LL;
static int64_t x404 = -1LL;
uint32_t x414 = 162277U;
volatile uint8_t x415 = 14U;
volatile int16_t x419 = INT16_MIN;
int32_t t84 = -13458196;
int16_t x424 = -1;
static volatile int32_t t85 = -11458516;
volatile int32_t t86 = 349587046;
uint64_t x443 = UINT64_MAX;
static int16_t x444 = 5623;
int16_t x465 = INT16_MIN;
uint32_t x467 = 1011603U;
int32_t t91 = -43171421;
static int32_t x482 = -1;
volatile int16_t x494 = -1;
volatile int32_t t95 = 10189;
int32_t x505 = 361628;
int8_t x507 = INT8_MAX;
uint64_t x510 = 295323919469LLU;


void f0(void) {
	int32_t x1 = -521193337;
	int16_t x2 = -1;
	int32_t t0 = -263581882;

	t0 = ((x1+x2)<=(x3-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 12LL;
	volatile uint32_t x6 = 45782729U;
	int16_t x7 = 12141;
	static int64_t x8 = -28LL;
	volatile int32_t t1 = -22944;

	t1 = ((x5+x6)<=(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 7U;
	int32_t x10 = INT32_MIN;
	uint64_t x12 = 22788614LLU;
	static int32_t t2 = 4186;

	t2 = ((x9+x10)<=(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 1U;

	t3 = ((x13+x14)<=(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 706732221;
	uint32_t x18 = 0U;
	int32_t x19 = 60;
	volatile uint8_t x20 = 1U;
	static volatile int32_t t4 = -80;

	t4 = ((x17+x18)<=(x19-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x30 = UINT64_MAX;
	int32_t x32 = INT32_MAX;
	static volatile int32_t t5 = 95301;

	t5 = ((x29+x30)<=(x31-x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x34 = 14U;
	int8_t x35 = INT8_MAX;
	uint16_t x36 = 1298U;
	volatile int32_t t6 = 1161083;

	t6 = ((x33+x34)<=(x35-x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x41 = -137738914578896826LL;
	volatile int8_t x42 = -1;
	int16_t x43 = -39;
	volatile int32_t t7 = 990;

	t7 = ((x41+x42)<=(x43-x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x45 = -88;
	int16_t x46 = -11934;
	int8_t x47 = -1;
	uint8_t x48 = 0U;
	volatile int32_t t8 = 4169884;

	t8 = ((x45+x46)<=(x47-x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MAX;
	uint32_t x50 = 7622U;
	int32_t x51 = 668137560;
	volatile int32_t t9 = -235;

	t9 = ((x49+x50)<=(x51-x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	uint32_t x54 = 8495U;
	static int32_t x55 = INT32_MAX;
	volatile int32_t t10 = 273130;

	t10 = ((x53+x54)<=(x55-x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x58 = -1;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t11 = -29121;

	t11 = ((x57+x58)<=(x59-x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 86026LLU;
	int16_t x62 = -1;
	uint32_t x64 = 22244U;
	volatile int32_t t12 = 470259;

	t12 = ((x61+x62)<=(x63-x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 262U;
	int64_t x66 = -51180887258LL;
	int8_t x68 = INT8_MIN;
	int32_t t13 = 473;

	t13 = ((x65+x66)<=(x67-x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = 3937392;
	volatile uint32_t x70 = 325U;
	uint8_t x71 = 11U;
	uint32_t x72 = 742993U;
	static int32_t t14 = 137;

	t14 = ((x69+x70)<=(x71-x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x73 = 1U;
	int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MAX;
	volatile int8_t x76 = INT8_MAX;
	int32_t t15 = -51;

	t15 = ((x73+x74)<=(x75-x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x77 = -1;
	static uint16_t x78 = 0U;
	uint32_t x79 = 1U;
	int8_t x80 = INT8_MAX;
	static volatile int32_t t16 = -29;

	t16 = ((x77+x78)<=(x79-x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MAX;
	volatile int32_t x82 = INT32_MIN;
	uint8_t x83 = UINT8_MAX;
	int32_t t17 = 57655;

	t17 = ((x81+x82)<=(x83-x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x86 = -23;
	uint8_t x87 = 61U;
	int8_t x88 = INT8_MAX;
	volatile int32_t t18 = -2979;

	t18 = ((x85+x86)<=(x87-x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MAX;
	static uint8_t x94 = 0U;
	volatile uint64_t x95 = 581902544541670893LLU;
	volatile int32_t x96 = 233837;
	volatile int32_t t19 = -5908;

	t19 = ((x93+x94)<=(x95-x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MAX;
	static volatile uint64_t x98 = 8836157317LLU;
	int64_t x99 = INT64_MIN;
	int64_t x100 = -1LL;
	int32_t t20 = -34730;

	t20 = ((x97+x98)<=(x99-x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 59U;
	uint16_t x106 = 17356U;
	int64_t x108 = -1LL;
	volatile int32_t t21 = 21084626;

	t21 = ((x105+x106)<=(x107-x108));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x110 = -13LL;
	int16_t x111 = INT16_MIN;
	static int8_t x112 = -1;
	int32_t t22 = -355292772;

	t22 = ((x109+x110)<=(x111-x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = INT32_MAX;
	static int64_t x115 = -1LL;
	volatile int32_t t23 = -253196604;

	t23 = ((x113+x114)<=(x115-x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MIN;
	int16_t x119 = -47;
	int64_t x120 = INT64_MIN;

	t24 = ((x117+x118)<=(x119-x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x122 = 7796LL;
	static int64_t x123 = 49506697023LL;
	static int32_t t25 = 1529;

	t25 = ((x121+x122)<=(x123-x124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x130 = 3;
	static uint64_t x131 = 2LLU;
	uint16_t x132 = 9372U;

	t26 = ((x129+x130)<=(x131-x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = INT16_MAX;
	uint8_t x134 = 30U;
	static volatile uint8_t x136 = 59U;
	static int32_t t27 = -3265;

	t27 = ((x133+x134)<=(x135-x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x138 = -1;
	uint64_t x139 = 12871524366LLU;
	uint64_t x140 = 8LLU;

	t28 = ((x137+x138)<=(x139-x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = 153;
	int8_t x142 = INT8_MIN;
	uint16_t x143 = 1U;
	uint16_t x144 = 3U;

	t29 = ((x141+x142)<=(x143-x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x147 = INT64_MAX;
	uint16_t x148 = UINT16_MAX;
	int32_t t30 = -3;

	t30 = ((x145+x146)<=(x147-x148));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = -1;
	int32_t x150 = -1;
	volatile int16_t x151 = -210;
	int32_t x152 = INT32_MIN;
	static int32_t t31 = 3789959;

	t31 = ((x149+x150)<=(x151-x152));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x157 = UINT32_MAX;
	volatile uint32_t x158 = UINT32_MAX;
	static int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MAX;

	t32 = ((x157+x158)<=(x159-x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = INT16_MAX;
	uint32_t x162 = UINT32_MAX;
	int64_t x163 = 41055322074642LL;
	int16_t x164 = -1;

	t33 = ((x161+x162)<=(x163-x164));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x170 = UINT16_MAX;
	uint8_t x171 = 88U;
	static int32_t t34 = 478006;

	t34 = ((x169+x170)<=(x171-x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 201942334618295330LLU;
	volatile int16_t x174 = INT16_MIN;
	volatile int32_t x175 = -1;
	static uint16_t x176 = 428U;
	static int32_t t35 = -524953467;

	t35 = ((x173+x174)<=(x175-x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x183 = 12U;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t36 = -130509504;

	t36 = ((x181+x182)<=(x183-x184));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x185 = INT64_MAX;
	uint8_t x186 = 0U;
	int32_t x187 = 943;
	uint8_t x188 = 27U;
	static int32_t t37 = -7792;

	t37 = ((x185+x186)<=(x187-x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x189 = 1690761642179110136LLU;
	int16_t x190 = INT16_MIN;
	uint32_t x191 = 53254927U;
	uint16_t x192 = 12333U;
	volatile int32_t t38 = -19201994;

	t38 = ((x189+x190)<=(x191-x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x193 = UINT32_MAX;
	volatile int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	int32_t t39 = 1;

	t39 = ((x193+x194)<=(x195-x196));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MIN;
	uint8_t x200 = 31U;
	int32_t t40 = 115803;

	t40 = ((x197+x198)<=(x199-x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x201 = INT64_MIN;
	uint16_t x202 = 20U;
	static int8_t x203 = -1;
	int16_t x204 = INT16_MAX;
	static int32_t t41 = -1;

	t41 = ((x201+x202)<=(x203-x204));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x205 = 13U;
	int32_t x206 = -137;
	volatile int32_t x207 = INT32_MIN;
	uint32_t x208 = 393U;

	t42 = ((x205+x206)<=(x207-x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x210 = INT8_MIN;
	int32_t x211 = 58849496;
	int32_t x212 = INT32_MAX;
	static volatile int32_t t43 = 45;

	t43 = ((x209+x210)<=(x211-x212));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x218 = INT64_MIN;

	t44 = ((x217+x218)<=(x219-x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = INT16_MAX;
	int64_t x226 = -1LL;
	uint32_t x228 = UINT32_MAX;

	t45 = ((x225+x226)<=(x227-x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x229 = -1LL;
	static uint8_t x230 = 1U;
	static volatile int64_t x231 = INT64_MAX;
	uint16_t x232 = 894U;
	int32_t t46 = -5945159;

	t46 = ((x229+x230)<=(x231-x232));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x233 = 91651299LLU;
	int8_t x234 = INT8_MAX;
	static int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MIN;
	volatile int32_t t47 = -44;

	t47 = ((x233+x234)<=(x235-x236));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x237 = INT8_MIN;
	int64_t x238 = -30013381590111376LL;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = -3514;
	int32_t t48 = -1094;

	t48 = ((x237+x238)<=(x239-x240));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int32_t t49 = 1774692;

	t49 = ((x241+x242)<=(x243-x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x245 = -70887;
	static int16_t x246 = INT16_MIN;
	static volatile uint16_t x247 = 5U;
	uint32_t x248 = 74334U;
	volatile int32_t t50 = 1691;

	t50 = ((x245+x246)<=(x247-x248));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x250 = INT16_MAX;
	int16_t x251 = 186;
	int64_t x252 = INT64_MAX;
	static int32_t t51 = 81039805;

	t51 = ((x249+x250)<=(x251-x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x253 = 276;
	static uint32_t x254 = 791U;
	int32_t x255 = -1;
	int64_t x256 = 166376646021965LL;

	t52 = ((x253+x254)<=(x255-x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x258 = -4;
	uint32_t x259 = UINT32_MAX;
	static int32_t x260 = INT32_MIN;
	static volatile int32_t t53 = -106533;

	t53 = ((x257+x258)<=(x259-x260));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = -1;
	int32_t x262 = 7003066;
	int8_t x263 = -49;
	int32_t x264 = INT32_MIN;

	t54 = ((x261+x262)<=(x263-x264));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x265 = 0;
	int64_t x266 = INT64_MIN;
	int8_t x267 = INT8_MIN;

	t55 = ((x265+x266)<=(x267-x268));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int8_t x271 = INT8_MAX;
	uint16_t x272 = 6U;
	volatile int32_t t56 = 2;

	t56 = ((x269+x270)<=(x271-x272));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x273 = 18U;
	uint64_t x274 = UINT64_MAX;
	uint16_t x275 = UINT16_MAX;
	volatile int32_t x276 = -3608888;

	t57 = ((x273+x274)<=(x275-x276));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x281 = 1U;
	volatile uint32_t x282 = 0U;
	int16_t x284 = -1464;

	t58 = ((x281+x282)<=(x283-x284));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x285 = UINT8_MAX;
	int32_t x286 = INT32_MIN;
	int8_t x288 = 3;

	t59 = ((x285+x286)<=(x287-x288));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x289 = UINT32_MAX;
	volatile int16_t x290 = 130;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t60 = 435;

	t60 = ((x289+x290)<=(x291-x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x294 = 982LLU;
	volatile int64_t x295 = 2461081594740372LL;
	uint64_t x296 = 196500LLU;
	volatile int32_t t61 = 2332155;

	t61 = ((x293+x294)<=(x295-x296));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x297 = 190LL;
	volatile int8_t x298 = -5;
	uint16_t x299 = 6292U;
	int16_t x300 = -96;
	int32_t t62 = 1;

	t62 = ((x297+x298)<=(x299-x300));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x305 = 943514000LLU;
	int8_t x306 = -1;
	int16_t x307 = -243;
	int32_t x308 = 1;

	t63 = ((x305+x306)<=(x307-x308));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = INT32_MIN;
	int64_t x312 = INT64_MIN;
	int32_t t64 = -129579;

	t64 = ((x309+x310)<=(x311-x312));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = INT16_MAX;
	int32_t x314 = INT32_MIN;
	static uint8_t x315 = 20U;
	int8_t x316 = INT8_MIN;

	t65 = ((x313+x314)<=(x315-x316));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x321 = 6LLU;
	uint16_t x323 = 7U;
	static int8_t x324 = -6;
	volatile int32_t t66 = -7;

	t66 = ((x321+x322)<=(x323-x324));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x325 = -52;
	static uint16_t x327 = 12U;
	static uint8_t x328 = 114U;

	t67 = ((x325+x326)<=(x327-x328));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x329 = 1;
	volatile int16_t x331 = INT16_MAX;
	volatile int8_t x332 = INT8_MIN;
	int32_t t68 = -2;

	t68 = ((x329+x330)<=(x331-x332));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = UINT32_MAX;
	volatile uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MAX;
	volatile int32_t t69 = 14;

	t69 = ((x333+x334)<=(x335-x336));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x337 = INT16_MIN;
	int8_t x338 = -1;
	static int32_t x339 = -1;
	volatile int16_t x340 = -2507;
	int32_t t70 = -1;

	t70 = ((x337+x338)<=(x339-x340));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = 3;
	int64_t x342 = -3411LL;
	uint32_t x343 = UINT32_MAX;
	volatile uint8_t x344 = UINT8_MAX;
	static int32_t t71 = -114;

	t71 = ((x341+x342)<=(x343-x344));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x345 = 163U;
	static volatile uint16_t x346 = UINT16_MAX;
	int32_t x347 = -1;
	int32_t x348 = 97702967;
	static int32_t t72 = 1;

	t72 = ((x345+x346)<=(x347-x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int32_t t73 = -5;

	t73 = ((x357+x358)<=(x359-x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MAX;
	static int16_t x371 = INT16_MIN;
	int64_t x372 = -11348LL;
	int32_t t74 = -39;

	t74 = ((x369+x370)<=(x371-x372));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x373 = UINT8_MAX;
	static volatile int64_t x374 = -1LL;
	int8_t x375 = INT8_MIN;
	int32_t x376 = -1;
	volatile int32_t t75 = 506902608;

	t75 = ((x373+x374)<=(x375-x376));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x378 = INT8_MIN;
	int16_t x379 = -1;
	volatile uint32_t x380 = 0U;
	volatile int32_t t76 = 17591;

	t76 = ((x377+x378)<=(x379-x380));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x381 = -56;
	int16_t x382 = -1;
	int32_t x384 = 0;
	int32_t t77 = 825;

	t77 = ((x381+x382)<=(x383-x384));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x385 = 8U;
	int32_t x386 = -1;
	uint64_t x387 = 3624480579928586LLU;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t78 = 29263302;

	t78 = ((x385+x386)<=(x387-x388));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = 0U;
	volatile int64_t x390 = INT64_MIN;
	uint64_t x391 = 548010979090LLU;
	int64_t x392 = -753150LL;
	volatile int32_t t79 = 1;

	t79 = ((x389+x390)<=(x391-x392));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x393 = 1227282739U;
	int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MAX;
	int32_t t80 = 7089;

	t80 = ((x393+x394)<=(x395-x396));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = -1LL;
	uint8_t x398 = 29U;
	volatile int32_t x399 = 57;
	int64_t x400 = INT64_MAX;

	t81 = ((x397+x398)<=(x399-x400));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x401 = INT32_MIN;
	int32_t t82 = 74340;

	t82 = ((x401+x402)<=(x403-x404));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x413 = 0U;
	volatile int32_t x416 = -201386999;
	int32_t t83 = -42468534;

	t83 = ((x413+x414)<=(x415-x416));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x417 = -9;
	uint64_t x418 = 6591247809569041LLU;
	int32_t x420 = INT32_MIN;

	t84 = ((x417+x418)<=(x419-x420));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x421 = 2552837668073LLU;
	int8_t x422 = INT8_MIN;
	volatile int64_t x423 = -1LL;

	t85 = ((x421+x422)<=(x423-x424));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x429 = INT8_MIN;
	int32_t x430 = -1;
	volatile uint8_t x431 = 0U;
	uint64_t x432 = 14LLU;

	t86 = ((x429+x430)<=(x431-x432));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x433 = UINT32_MAX;
	int8_t x434 = INT8_MIN;
	volatile int8_t x435 = INT8_MAX;
	uint64_t x436 = UINT64_MAX;
	int32_t t87 = -122;

	t87 = ((x433+x434)<=(x435-x436));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x441 = -30831LL;
	uint8_t x442 = 0U;
	static int32_t t88 = -1280069;

	t88 = ((x441+x442)<=(x443-x444));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x449 = -1;
	volatile uint64_t x450 = 0LLU;
	volatile uint16_t x451 = 4U;
	int64_t x452 = -548753678368685LL;
	int32_t t89 = 1783;

	t89 = ((x449+x450)<=(x451-x452));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x457 = INT8_MAX;
	uint32_t x458 = 2215U;
	int64_t x459 = -2054527059273LL;
	int32_t x460 = INT32_MIN;
	int32_t t90 = 6950505;

	t90 = ((x457+x458)<=(x459-x460));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x466 = -8504760;
	int16_t x468 = INT16_MIN;

	t91 = ((x465+x466)<=(x467-x468));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x477 = -1852;
	volatile int64_t x478 = 3826282827027822LL;
	static int8_t x479 = 1;
	int32_t x480 = -1838638;
	volatile int32_t t92 = -3;

	t92 = ((x477+x478)<=(x479-x480));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x481 = -1;
	int64_t x483 = INT64_MIN;
	int64_t x484 = INT64_MIN;
	int32_t t93 = -168;

	t93 = ((x481+x482)<=(x483-x484));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x493 = -1;
	static int8_t x495 = INT8_MAX;
	uint32_t x496 = 195574807U;
	volatile int32_t t94 = 13337661;

	t94 = ((x493+x494)<=(x495-x496));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x501 = -1;
	static volatile uint16_t x502 = 11U;
	int8_t x503 = INT8_MIN;
	int8_t x504 = -1;

	t95 = ((x501+x502)<=(x503-x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x506 = INT32_MIN;
	volatile int64_t x508 = -1LL;
	static volatile int32_t t96 = 444;

	t96 = ((x505+x506)<=(x507-x508));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x509 = INT16_MAX;
	int32_t x511 = INT32_MAX;
	uint64_t x512 = 75286327754155LLU;
	int32_t t97 = -1232266;

	t97 = ((x509+x510)<=(x511-x512));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x513 = INT8_MAX;
	int8_t x514 = 4;
	uint8_t x515 = 2U;
	uint8_t x516 = 20U;
	volatile int32_t t98 = -5470757;

	t98 = ((x513+x514)<=(x515-x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x521 = INT32_MIN;
	int32_t x522 = INT32_MAX;
	int8_t x523 = -8;
	static int32_t x524 = -1;
	int32_t t99 = 103735485;

	t99 = ((x521+x522)<=(x523-x524));

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

