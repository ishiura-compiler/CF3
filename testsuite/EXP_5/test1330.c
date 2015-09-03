#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
int8_t x9 = -7;
uint8_t x15 = 5U;
int32_t x17 = INT32_MAX;
uint64_t x19 = UINT64_MAX;
static int32_t t4 = 0;
int16_t x21 = INT16_MAX;
volatile int64_t x22 = INT64_MIN;
int32_t x23 = -127;
uint32_t t5 = 4U;
static int64_t x25 = -336422093442359LL;
int64_t t6 = 1871635838756590LL;
uint32_t x30 = UINT32_MAX;
volatile uint8_t x31 = 79U;
uint64_t x40 = UINT64_MAX;
uint8_t x45 = 64U;
static int64_t x47 = -7LL;
int16_t x49 = -1;
int8_t x53 = INT8_MAX;
int8_t x55 = INT8_MAX;
int8_t x58 = INT8_MAX;
static volatile int32_t t14 = 89003;
static int64_t x72 = INT64_MIN;
uint8_t x75 = 1U;
uint16_t x76 = 139U;
static int64_t x81 = -576LL;
int64_t x83 = -2587907271272LL;
uint8_t x87 = 4U;
int64_t x95 = INT64_MIN;
volatile uint8_t x97 = UINT8_MAX;
int64_t x100 = INT64_MIN;
int16_t x105 = INT16_MIN;
uint8_t x107 = 63U;
uint32_t x112 = 320U;
volatile int64_t t28 = 2204509LL;
static volatile int64_t x117 = INT64_MIN;
uint32_t x131 = 28020618U;
int64_t x132 = 97989239LL;
static uint8_t x143 = 16U;
int64_t x145 = INT64_MIN;
int16_t x146 = INT16_MAX;
volatile int64_t t36 = 752306215LL;
int32_t x150 = -1017;
uint64_t x161 = 226LLU;
uint8_t x162 = 1U;
int32_t t41 = -13;
uint32_t x172 = 122271874U;
uint32_t x178 = UINT32_MAX;
int64_t t45 = 1445007354071239LL;
int64_t x186 = INT64_MAX;
int64_t x189 = INT64_MIN;
int16_t x200 = -1;
volatile int64_t x204 = -1LL;
int32_t x215 = INT32_MAX;
volatile uint8_t x216 = UINT8_MAX;
int16_t x218 = INT16_MIN;
int32_t x228 = -1;
int16_t x233 = -1458;
uint64_t x241 = 21946984322135LLU;
static volatile int8_t x242 = -1;
static volatile int64_t t61 = -860021859680LL;
int8_t x252 = 3;
volatile uint64_t x253 = 7271171968664627LLU;
int8_t x256 = -6;
volatile uint64_t t63 = 2625673730943751LLU;
int16_t x267 = -1;
int32_t x272 = 264163014;
int16_t x277 = -1;
int64_t x278 = -1LL;
volatile int32_t t69 = 637;
static volatile int32_t x285 = INT32_MAX;
static int8_t x287 = -1;
int32_t x297 = 11793;
volatile uint32_t x299 = 138U;
int32_t t73 = -680393;
static volatile int16_t x302 = 1;
int16_t x303 = INT16_MIN;
volatile uint16_t x306 = UINT16_MAX;
volatile int32_t t75 = -126;
volatile int32_t t76 = 16;
int32_t x321 = INT32_MIN;
uint32_t x322 = 388U;
volatile int64_t t79 = -4183797120627444449LL;
int64_t x325 = INT64_MIN;
int64_t x332 = -1LL;
int32_t t83 = 355619050;
int32_t x352 = INT32_MIN;
int64_t t86 = 3335925LL;
uint32_t x361 = 15159803U;
int8_t x365 = 12;
volatile int8_t x367 = 0;
int64_t x368 = INT64_MIN;
int16_t x369 = INT16_MAX;
int16_t x371 = INT16_MAX;
uint8_t x376 = 62U;
volatile int16_t x378 = INT16_MIN;
volatile uint32_t x379 = 1U;
volatile uint64_t t94 = 101LLU;
int32_t x394 = INT32_MAX;
int16_t x395 = INT16_MIN;
uint8_t x397 = UINT8_MAX;
int32_t x404 = INT32_MIN;
static uint32_t x406 = 401671U;
int8_t x408 = -1;
volatile int32_t t98 = 4199;
uint64_t x411 = 13872967092LLU;
volatile uint16_t x412 = 26592U;


void f0(void) {
	int16_t x2 = INT16_MIN;
	volatile uint16_t x3 = 388U;
	volatile uint8_t x4 = 8U;
	volatile int32_t t0 = 500;

	t0 = (x1/((x2==x3)|x4));

	if (t0 != 8191) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile int8_t x6 = 27;
	volatile uint16_t x7 = UINT16_MAX;
	int32_t x8 = 58102697;
	int64_t t1 = 73208404396LL;

	t1 = (x5/((x6==x7)|x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 4198;
	int16_t x11 = -1;
	static uint16_t x12 = 48U;
	volatile int32_t t2 = 3460;

	t2 = (x9/((x10==x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = -1;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = 0LL;

	t3 = (x13/((x14==x15)|x16));

	if (t3 != 281474976710656LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	static int16_t x20 = INT16_MIN;

	t4 = (x17/((x18==x19)|x20));

	if (t4 != -65538) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x24 = UINT32_MAX;

	t5 = (x21/((x22==x23)|x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = 7LLU;
	volatile uint8_t x27 = 124U;
	int16_t x28 = -1;

	t6 = (x25/((x26==x27)|x28));

	if (t6 != 336422093442359LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -303LL;
	static int64_t x32 = -1LL;
	volatile int64_t t7 = -91668965LL;

	t7 = (x29/((x30==x31)|x32));

	if (t7 != 303LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 62485976673LLU;
	volatile uint32_t x34 = 4590U;
	uint8_t x35 = 12U;
	int16_t x36 = INT16_MIN;
	uint64_t t8 = 7595094976023LLU;

	t8 = (x33/((x34==x35)|x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 16251U;
	int32_t x38 = -1;
	volatile int64_t x39 = 278LL;
	static volatile uint64_t t9 = 19443270018626972LLU;

	t9 = (x37/((x38==x39)|x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile int64_t x42 = -88050108069205197LL;
	int8_t x43 = 59;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = 142260729471879LL;

	t10 = (x41/((x42==x43)|x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x46 = 0U;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -244828;

	t11 = (x45/((x46==x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 221864951U;
	volatile uint64_t x51 = 223284224962LLU;
	int8_t x52 = -1;
	int32_t t12 = 20636879;

	t12 = (x49/((x50==x51)|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -13835640;
	int16_t x56 = 323;
	static volatile int32_t t13 = -461516;

	t13 = (x53/((x54==x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	int32_t x59 = -1;
	int16_t x60 = INT16_MAX;

	t14 = (x57/((x58==x59)|x60));

	if (t14 != -65538) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MIN;
	volatile uint8_t x63 = 0U;
	volatile int64_t x64 = -1LL;
	int64_t t15 = 7929383LL;

	t15 = (x61/((x62==x63)|x64));

	if (t15 != 32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -350230564240869LL;
	static int64_t x66 = INT64_MAX;
	int64_t x67 = INT64_MAX;
	uint32_t x68 = UINT32_MAX;
	int64_t t16 = -4018345LL;

	t16 = (x65/((x66==x67)|x68));

	if (t16 != -81544LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	uint32_t x70 = 11U;
	int8_t x71 = -1;
	static int64_t t17 = 3191917815477LL;

	t17 = (x69/((x70==x71)|x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = UINT8_MAX;
	int8_t x74 = INT8_MAX;
	volatile int32_t t18 = -10213457;

	t18 = (x73/((x74==x75)|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	volatile uint16_t x78 = 1261U;
	uint32_t x79 = UINT32_MAX;
	volatile int32_t x80 = 6;
	volatile uint64_t t19 = 15730LLU;

	t19 = (x77/((x78==x79)|x80));

	if (t19 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 3U;
	volatile int64_t x84 = 1LL;
	static volatile int64_t t20 = -15646084LL;

	t20 = (x81/((x82==x83)|x84));

	if (t20 != -576LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -18968LL;
	static volatile int32_t x86 = INT32_MIN;
	int8_t x88 = INT8_MIN;
	static volatile int64_t t21 = 837110038922612LL;

	t21 = (x85/((x86==x87)|x88));

	if (t21 != 148LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 8548U;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = INT16_MIN;
	static int32_t x92 = INT32_MIN;
	uint32_t t22 = 156U;

	t22 = (x89/((x90==x91)|x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = UINT8_MAX;
	volatile int64_t x94 = -1LL;
	int16_t x96 = INT16_MIN;
	int32_t t23 = 434094;

	t23 = (x93/((x94==x95)|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x98 = INT8_MIN;
	volatile uint8_t x99 = UINT8_MAX;
	int64_t t24 = 884389790706LL;

	t24 = (x97/((x98==x99)|x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MAX;
	int8_t x103 = 0;
	volatile int64_t x104 = -878952433131924104LL;
	static volatile int64_t t25 = -4245LL;

	t25 = (x101/((x102==x103)|x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x106 = 5U;
	static int16_t x108 = INT16_MIN;
	int32_t t26 = 67;

	t26 = (x105/((x106==x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 70U;
	static volatile uint32_t x110 = 26048U;
	int16_t x111 = -1;
	static uint32_t t27 = 3567U;

	t27 = (x109/((x110==x111)|x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static int32_t x114 = -1;
	static volatile int8_t x115 = INT8_MAX;
	static int64_t x116 = INT64_MIN;

	t28 = (x113/((x114==x115)|x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = 222U;
	uint8_t x119 = 112U;
	static uint64_t x120 = 30LLU;
	uint64_t t29 = 5743821374LLU;

	t29 = (x117/((x118==x119)|x120));

	if (t29 != 307445734561825860LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	static int16_t x122 = INT16_MIN;
	volatile int32_t x123 = 1;
	int32_t x124 = -1;
	volatile int32_t t30 = -132024;

	t30 = (x121/((x122==x123)|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	static int32_t x128 = INT32_MIN;
	int64_t t31 = 439057669163341294LL;

	t31 = (x125/((x126==x127)|x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = 57;
	static volatile int64_t t32 = 8256330144LL;

	t32 = (x129/((x130==x131)|x132));

	if (t32 != -94126376844LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	static uint32_t x136 = 1958U;
	uint32_t t33 = 10139U;

	t33 = (x133/((x134==x135)|x136));

	if (t33 != 2193548U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MIN;
	static int8_t x139 = INT8_MIN;
	volatile int64_t x140 = INT64_MAX;
	static volatile int64_t t34 = 323309LL;

	t34 = (x137/((x138==x139)|x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	int16_t x142 = -1;
	uint16_t x144 = 32126U;
	volatile int32_t t35 = -1;

	t35 = (x141/((x142==x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x147 = INT32_MIN;
	uint8_t x148 = 25U;

	t36 = (x145/((x146==x147)|x148));

	if (t36 != -368934881474191032LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -1;
	static int16_t x151 = INT16_MIN;
	static volatile int8_t x152 = INT8_MAX;
	volatile int32_t t37 = 1029289191;

	t37 = (x149/((x150==x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = -23;
	static int32_t x155 = 1235248;
	static uint16_t x156 = 2U;
	static int32_t t38 = 0;

	t38 = (x153/((x154==x155)|x156));

	if (t38 != -64) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	uint8_t x158 = UINT8_MAX;
	static volatile uint64_t x159 = 32850356536LLU;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -43504650726329LL;

	t39 = (x157/((x158==x159)|x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x163 = 1;
	volatile int16_t x164 = -1;
	uint64_t t40 = 12249663LLU;

	t40 = (x161/((x162==x163)|x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -1;
	volatile uint8_t x168 = 19U;

	t41 = (x165/((x166==x167)|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 11390U;
	int16_t x170 = INT16_MIN;
	int64_t x171 = -5036695132LL;
	uint32_t t42 = 2U;

	t42 = (x169/((x170==x171)|x172));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 58U;
	volatile int32_t x174 = -150;
	int16_t x175 = INT16_MAX;
	volatile int32_t x176 = -9285102;
	static int32_t t43 = -80831250;

	t43 = (x173/((x174==x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -6;
	volatile int16_t x179 = -1;
	int64_t x180 = INT64_MIN;
	int64_t t44 = 1297779276965865LL;

	t44 = (x177/((x178==x179)|x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = 116371706597LL;
	static volatile uint8_t x182 = UINT8_MAX;
	int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MAX;

	t45 = (x181/((x182==x183)|x184));

	if (t45 != 54LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	volatile int8_t x187 = INT8_MIN;
	int32_t x188 = -4;
	int64_t t46 = 299431LL;

	t46 = (x185/((x186==x187)|x188));

	if (t46 != 2305843009213693952LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	uint8_t x192 = 1U;
	int64_t t47 = INT64_MIN;

	t47 = (x189/((x190==x191)|x192));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint32_t x194 = UINT32_MAX;
	uint32_t x195 = 178477U;
	int16_t x196 = INT16_MAX;
	int32_t t48 = 15109703;

	t48 = (x193/((x194==x195)|x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	volatile int8_t x198 = INT8_MIN;
	int8_t x199 = -1;
	int32_t t49 = -23517909;

	t49 = (x197/((x198==x199)|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -49;
	uint16_t x202 = 8U;
	int32_t x203 = INT32_MAX;
	volatile int64_t t50 = 21614421613LL;

	t50 = (x201/((x202==x203)|x204));

	if (t50 != 49LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = UINT32_MAX;
	static volatile int16_t x206 = INT16_MAX;
	static volatile int8_t x207 = INT8_MIN;
	volatile uint64_t x208 = 1160011406538718847LLU;
	uint64_t t51 = 2106850075252LLU;

	t51 = (x205/((x206==x207)|x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	volatile uint8_t x210 = UINT8_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -1LL;
	volatile int64_t t52 = 1425978636922LL;

	t52 = (x209/((x210==x211)|x212));

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MIN;
	static int32_t t53 = 91;

	t53 = (x213/((x214==x215)|x216));

	if (t53 != 257) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int64_t x219 = -217149970LL;
	static int64_t x220 = 514LL;
	volatile int64_t t54 = -31463041492680440LL;

	t54 = (x217/((x218==x219)|x220));

	if (t54 != -4177983LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 12U;
	volatile int16_t x222 = -1296;
	int64_t x223 = 247683638661270408LL;
	uint64_t x224 = UINT64_MAX;
	uint64_t t55 = 3554814750602133LLU;

	t55 = (x221/((x222==x223)|x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MAX;
	volatile int8_t x227 = INT8_MIN;
	static volatile int32_t t56 = 0;

	t56 = (x225/((x226==x227)|x228));

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 4551;
	static uint8_t x230 = UINT8_MAX;
	int32_t x231 = 104;
	int8_t x232 = INT8_MIN;
	int32_t t57 = -831129430;

	t57 = (x229/((x230==x231)|x232));

	if (t57 != -35) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MIN;
	int32_t x236 = 135233869;
	static volatile int32_t t58 = -4;

	t58 = (x233/((x234==x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 40U;
	uint32_t x238 = 1000189U;
	static uint32_t x239 = UINT32_MAX;
	volatile int64_t x240 = INT64_MIN;
	static int64_t t59 = -244LL;

	t59 = (x237/((x238==x239)|x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x243 = 24;
	static int16_t x244 = INT16_MIN;
	uint64_t t60 = 1659727557241102300LLU;

	t60 = (x241/((x242==x243)|x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x246 = 956966780540LLU;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = -606;

	t61 = (x245/((x246==x247)|x248));

	if (t61 != 15220085869397319LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = -3;
	static int16_t x250 = INT16_MIN;
	static int32_t x251 = -81880037;
	volatile int32_t t62 = 165644291;

	t62 = (x249/((x250==x251)|x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = INT8_MIN;
	uint16_t x255 = UINT16_MAX;

	t63 = (x253/((x254==x255)|x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 314U;
	static int32_t x258 = INT32_MIN;
	int16_t x259 = -1225;
	int16_t x260 = INT16_MIN;
	int32_t t64 = 1;

	t64 = (x257/((x258==x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x265 = 384186777U;
	int16_t x266 = INT16_MIN;
	volatile int8_t x268 = INT8_MAX;
	volatile uint32_t t65 = 12651022U;

	t65 = (x265/((x266==x267)|x268));

	if (t65 != 3025092U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = -52;
	volatile int32_t x270 = INT32_MIN;
	static int16_t x271 = -1;
	static int32_t t66 = 1453;

	t66 = (x269/((x270==x271)|x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x273 = 0U;
	uint32_t x274 = 7046856U;
	volatile int8_t x275 = -1;
	static int64_t x276 = INT64_MAX;
	volatile int64_t t67 = -249292138025836311LL;

	t67 = (x273/((x274==x275)|x276));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x279 = INT16_MIN;
	volatile int64_t x280 = 4632049929LL;
	static volatile int64_t t68 = -7166680595LL;

	t68 = (x277/((x278==x279)|x280));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 6U;
	static uint64_t x282 = 7359LLU;
	uint64_t x283 = 272219230667714746LLU;
	int32_t x284 = -1;

	t69 = (x281/((x282==x283)|x284));

	if (t69 != -6) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x286 = 2729U;
	static int16_t x288 = INT16_MIN;
	int32_t t70 = 238522513;

	t70 = (x285/((x286==x287)|x288));

	if (t70 != -65535) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = -221;
	int64_t x290 = INT64_MIN;
	int64_t x291 = -1LL;
	int32_t x292 = INT32_MAX;
	int32_t t71 = 7;

	t71 = (x289/((x290==x291)|x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = -1;
	static int8_t x294 = INT8_MIN;
	static uint8_t x295 = 64U;
	uint16_t x296 = 16U;
	static volatile int32_t t72 = 591;

	t72 = (x293/((x294==x295)|x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x298 = 4U;
	int32_t x300 = INT32_MIN;

	t73 = (x297/((x298==x299)|x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = INT64_MIN;
	int8_t x304 = -16;
	static int64_t t74 = 3270250LL;

	t74 = (x301/((x302==x303)|x304));

	if (t74 != 576460752303423488LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = 3429U;
	int64_t x307 = 546319244772515LL;
	static volatile int16_t x308 = INT16_MIN;

	t75 = (x305/((x306==x307)|x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	static int32_t x310 = -1;
	int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MAX;

	t76 = (x309/((x310==x311)|x312));

	if (t76 != -65538) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = 39;
	volatile int8_t x314 = INT8_MIN;
	uint8_t x315 = 0U;
	static int16_t x316 = INT16_MIN;
	static int32_t t77 = 52017;

	t77 = (x313/((x314==x315)|x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 46608288U;
	volatile int64_t x318 = -1LL;
	uint16_t x319 = 9U;
	int16_t x320 = 12;
	static volatile uint32_t t78 = 7U;

	t78 = (x317/((x318==x319)|x320));

	if (t78 != 3884024U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x323 = INT32_MIN;
	static int64_t x324 = 44402LL;

	t79 = (x321/((x322==x323)|x324));

	if (t79 != -48364LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x326 = 0;
	uint16_t x327 = 2875U;
	volatile uint8_t x328 = 8U;
	int64_t t80 = -317734LL;

	t80 = (x325/((x326==x327)|x328));

	if (t80 != -1152921504606846976LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = -1;
	static uint16_t x330 = 16117U;
	static int8_t x331 = INT8_MAX;
	int64_t t81 = -1LL;

	t81 = (x329/((x330==x331)|x332));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x333 = INT64_MAX;
	int32_t x334 = 2076935;
	int32_t x335 = 105;
	int64_t x336 = INT64_MIN;
	volatile int64_t t82 = -243224481041314LL;

	t82 = (x333/((x334==x335)|x336));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x337 = 1U;
	uint32_t x338 = 5U;
	volatile int8_t x339 = 2;
	static int32_t x340 = -5241850;

	t83 = (x337/((x338==x339)|x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MIN;
	uint32_t x350 = 236114692U;
	int64_t x351 = -1LL;
	volatile int32_t t84 = 0;

	t84 = (x349/((x350==x351)|x352));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x353 = 755;
	uint16_t x354 = UINT16_MAX;
	volatile uint64_t x355 = 5401379654000505735LLU;
	uint16_t x356 = 1U;
	int32_t t85 = 822267;

	t85 = (x353/((x354==x355)|x356));

	if (t85 != 755) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MIN;
	volatile uint64_t x358 = 88521390940647887LLU;
	static uint16_t x359 = 0U;
	int64_t x360 = INT64_MIN;

	t86 = (x357/((x358==x359)|x360));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x362 = INT8_MIN;
	int32_t x363 = 133847611;
	int32_t x364 = INT32_MIN;
	volatile uint32_t t87 = 55007U;

	t87 = (x361/((x362==x363)|x364));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x366 = -5;
	static volatile int64_t t88 = 8071018998335097LL;

	t88 = (x365/((x366==x367)|x368));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x370 = 14U;
	int8_t x372 = 1;
	volatile int32_t t89 = -14077;

	t89 = (x369/((x370==x371)|x372));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = UINT32_MAX;
	uint8_t x374 = 76U;
	static volatile int32_t x375 = -1;
	volatile uint32_t t90 = 45U;

	t90 = (x373/((x374==x375)|x376));

	if (t90 != 69273666U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = INT8_MAX;
	static int16_t x380 = INT16_MAX;
	int32_t t91 = -1031663903;

	t91 = (x377/((x378==x379)|x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = 3LL;
	int16_t x382 = INT16_MAX;
	volatile int16_t x383 = 3512;
	int8_t x384 = INT8_MIN;
	volatile int64_t t92 = -925933939116011LL;

	t92 = (x381/((x382==x383)|x384));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MAX;
	volatile uint8_t x386 = UINT8_MAX;
	static int32_t x387 = INT32_MIN;
	uint16_t x388 = 7823U;
	volatile int32_t t93 = 2353;

	t93 = (x385/((x386==x387)|x388));

	if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x389 = 71239675141293888LLU;
	static uint8_t x390 = UINT8_MAX;
	int8_t x391 = 0;
	uint16_t x392 = 48U;

	t94 = (x389/((x390==x391)|x392));

	if (t94 != 1484159898776956LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = -1LL;
	int16_t x396 = 3;
	volatile int64_t t95 = -23812261LL;

	t95 = (x393/((x394==x395)|x396));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	volatile int64_t t96 = 14876LL;

	t96 = (x397/((x398==x399)|x400));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x401 = UINT32_MAX;
	uint64_t x402 = 47450060LLU;
	int16_t x403 = INT16_MIN;
	volatile uint32_t t97 = 34997503U;

	t97 = (x401/((x402==x403)|x404));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x405 = INT8_MIN;
	int8_t x407 = -59;

	t98 = (x405/((x406==x407)|x408));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -1LL;
	volatile uint64_t x410 = 3434726835LLU;
	int64_t t99 = 3933841987634854365LL;

	t99 = (x409/((x410==x411)|x412));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

