#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = 222240;
int16_t x7 = INT16_MIN;
int8_t x8 = 30;
int8_t x11 = -25;
uint16_t x15 = UINT16_MAX;
uint16_t x29 = 8995U;
uint64_t x32 = UINT64_MAX;
uint64_t t7 = 9081534240948158875LLU;
uint8_t x33 = 10U;
int64_t t8 = -4155231LL;
int32_t x37 = -2569;
int16_t x38 = -1;
uint16_t x52 = UINT16_MAX;
uint32_t x58 = 352684170U;
uint32_t t13 = 16158800U;
int16_t x62 = INT16_MIN;
static volatile int8_t x66 = -1;
int32_t x67 = INT32_MIN;
uint64_t x79 = UINT64_MAX;
static uint8_t x82 = UINT8_MAX;
int8_t x95 = INT8_MIN;
static int16_t x96 = INT16_MIN;
volatile int32_t x101 = INT32_MIN;
static int32_t x106 = -1;
int64_t t25 = 8603135LL;
static int64_t x114 = -48086608481157638LL;
int8_t x115 = -1;
int8_t x118 = INT8_MIN;
static uint16_t x121 = UINT16_MAX;
int32_t t29 = 67;
int64_t t31 = 417LL;
uint32_t x133 = 0U;
int16_t x135 = INT16_MIN;
uint32_t x141 = 1723227929U;
int32_t x142 = INT32_MIN;
uint16_t x146 = 14931U;
uint32_t t35 = 1501U;
int16_t x154 = -88;
static volatile uint8_t x159 = UINT8_MAX;
int16_t x161 = 377;
static volatile uint32_t x163 = 31U;
static int8_t x169 = INT8_MIN;
volatile uint32_t x171 = 565272U;
int64_t x175 = INT64_MIN;
volatile int64_t x194 = INT64_MIN;
static int32_t x203 = -290;
volatile uint32_t x213 = UINT32_MAX;
static volatile uint8_t x224 = 20U;
static uint16_t x227 = 1U;
volatile int64_t x229 = -1LL;
uint32_t x240 = 46193U;
int8_t x242 = INT8_MIN;
int16_t x243 = INT16_MIN;
int32_t x247 = 1622;
uint64_t x248 = 15789150733LLU;
volatile uint64_t t56 = 133859LLU;
int32_t x251 = INT32_MIN;
int32_t x254 = INT32_MAX;
int64_t t58 = -96684LL;
static uint16_t x259 = 3123U;
static uint64_t x260 = 16464458125946LLU;
int16_t x262 = INT16_MIN;
volatile int32_t t62 = -459;
int32_t x273 = INT32_MAX;
int16_t x276 = INT16_MIN;
volatile int32_t t63 = 0;
uint32_t x280 = 31U;
static volatile int64_t t64 = -507615839609672LL;
volatile int32_t t65 = -335987;
int64_t x293 = INT64_MIN;
uint64_t x295 = UINT64_MAX;
int8_t x296 = INT8_MIN;
volatile uint64_t t67 = 146887827LLU;
volatile int64_t t69 = -767310631LL;
int64_t x305 = 1926054075092206LL;
static uint16_t x320 = 0U;
static volatile int32_t t72 = 12780;
int16_t x321 = 1843;
uint8_t x323 = UINT8_MAX;
int32_t x329 = 451085;
int32_t x330 = -1;
volatile int64_t t75 = 683331094777679557LL;
int8_t x341 = -7;
static volatile int64_t x345 = -1987793LL;
uint16_t x346 = 40U;
int8_t x359 = INT8_MIN;
volatile int64_t t80 = -14973813911861LL;
volatile int64_t x368 = INT64_MIN;
int16_t x370 = INT16_MAX;
static volatile int32_t x377 = -20405070;
volatile int32_t t85 = 48229819;
uint16_t x387 = 478U;
volatile int64_t t88 = -2169261493LL;
uint8_t x406 = UINT8_MAX;
int16_t x418 = INT16_MAX;
volatile uint32_t t94 = 2770U;
volatile int32_t x429 = -1;
int32_t x433 = INT32_MAX;
int64_t x435 = -885150005LL;
static int32_t x438 = 15;
int16_t x441 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x2 = 3964799LL;
	static int8_t x3 = -1;
	static int8_t x4 = INT8_MIN;
	static int64_t t0 = 22467056451LL;

	t0 = (x1+((x2/x3)|x4));

	if (t0 != -32895LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	volatile int32_t t1 = -260660;

	t1 = (x5+((x6/x7)|x8));

	if (t1 != 65533) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile int32_t x10 = -2;
	int8_t x12 = -7;
	uint64_t t2 = 4661188LLU;

	t2 = (x9+((x10/x11)|x12));

	if (t2 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 531603696;
	int32_t x14 = INT32_MIN;
	static volatile int8_t x16 = 1;
	int32_t t3 = 173;

	t3 = (x13+((x14/x15)|x16));

	if (t3 != 531570929) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 14013;
	int8_t x18 = INT8_MIN;
	int32_t x19 = -1;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 5035;

	t4 = (x17+((x18/x19)|x20));

	if (t4 != -18627) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 0;
	uint64_t x22 = 70483724358831LLU;
	int32_t x23 = -1;
	uint32_t x24 = UINT32_MAX;
	volatile uint64_t t5 = 7LLU;

	t5 = (x21+((x22/x23)|x24));

	if (t5 != 4294967295LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -7;
	int32_t x26 = INT32_MIN;
	static int64_t x27 = INT64_MAX;
	static int64_t x28 = -1LL;
	static int64_t t6 = 1LL;

	t6 = (x25+((x26/x27)|x28));

	if (t6 != -8LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = 0U;
	volatile int64_t x31 = INT64_MAX;

	t7 = (x29+((x30/x31)|x32));

	if (t7 != 8994LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = INT32_MAX;
	static uint32_t x35 = 1598681786U;
	int64_t x36 = -1LL;

	t8 = (x33+((x34/x35)|x36));

	if (t8 != 9LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x39 = UINT8_MAX;
	volatile int16_t x40 = -7051;
	volatile int32_t t9 = -568291000;

	t9 = (x37+((x38/x39)|x40));

	if (t9 != -9620) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	volatile int16_t x42 = INT16_MIN;
	int64_t x43 = -238LL;
	volatile uint64_t x44 = 3993549189LLU;
	volatile uint64_t t10 = 38053345652060612LLU;

	t10 = (x41+((x42/x43)|x44));

	if (t10 != 3993549196LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	int32_t x50 = INT32_MIN;
	volatile int8_t x51 = INT8_MAX;
	int32_t t11 = -111006;

	t11 = (x49+((x50/x51)|x52));

	if (t11 != -16908290) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x53 = UINT32_MAX;
	int16_t x54 = -7;
	static int32_t x55 = -1;
	int32_t x56 = INT32_MAX;
	uint32_t t12 = 604673U;

	t12 = (x53+((x54/x55)|x56));

	if (t12 != 2147483646U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	static int8_t x59 = INT8_MAX;
	static volatile uint16_t x60 = 75U;

	t13 = (x57+((x58/x59)|x60));

	if (t13 != 2777050U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	static int8_t x63 = -1;
	int32_t x64 = 2702;
	int32_t t14 = -888;

	t14 = (x61+((x62/x63)|x64));

	if (t14 != 35342) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	int32_t x68 = INT32_MAX;
	static volatile int64_t t15 = 0LL;

	t15 = (x65+((x66/x67)|x68));

	if (t15 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 5U;
	volatile uint64_t x70 = 227526198324521LLU;
	uint8_t x71 = UINT8_MAX;
	int8_t x72 = 1;
	uint64_t t16 = 1025174225596166LLU;

	t16 = (x69+((x70/x71)|x72));

	if (t16 != 892259601278LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x73 = 1;
	int64_t x74 = 423LL;
	int16_t x75 = -1;
	static int32_t x76 = -34;
	int64_t t17 = -603LL;

	t17 = (x73+((x74/x75)|x76));

	if (t17 != -32LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 2775U;
	int16_t x78 = 3317;
	int16_t x80 = INT16_MAX;
	static uint64_t t18 = 1068006935LLU;

	t18 = (x77+((x78/x79)|x80));

	if (t18 != 35542LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	static int64_t x83 = -1LL;
	static int64_t x84 = INT64_MAX;
	int64_t t19 = 380596181357577348LL;

	t19 = (x81+((x82/x83)|x84));

	if (t19 != 4294967294LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = INT32_MIN;
	int16_t x86 = 3639;
	volatile int32_t x87 = INT32_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t20 = -196740;

	t20 = (x85+((x86/x87)|x88));

	if (t20 != -2147418113) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 1158230268256LLU;
	int64_t x90 = INT64_MIN;
	static int8_t x91 = 14;
	static int32_t x92 = INT32_MIN;
	uint64_t t21 = 8231LLU;

	t21 = (x89+((x90/x91)|x92));

	if (t21 != 1157616701500LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 34U;
	int64_t x94 = INT64_MIN;
	int64_t t22 = 251403047827329LL;

	t22 = (x93+((x94/x95)|x96));

	if (t22 != -32734LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 2LLU;
	int16_t x98 = -1;
	int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MAX;
	volatile uint64_t t23 = 1720LLU;

	t23 = (x97+((x98/x99)|x100));

	if (t23 != 129LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x102 = 518239004719LLU;
	int64_t x103 = -1LL;
	int32_t x104 = INT32_MIN;
	volatile uint64_t t24 = 1892260570LLU;

	t24 = (x101+((x102/x103)|x104));

	if (t24 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = 210;
	static int64_t x107 = INT64_MIN;
	int8_t x108 = -1;

	t25 = (x105+((x106/x107)|x108));

	if (t25 != 209LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x109 = INT16_MAX;
	int16_t x110 = INT16_MIN;
	volatile int16_t x111 = INT16_MAX;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t26 = 16748645U;

	t26 = (x109+((x110/x111)|x112));

	if (t26 != 32766U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	volatile uint64_t x116 = 547LLU;
	volatile uint64_t t27 = 49LLU;

	t27 = (x113+((x114/x115)|x116));

	if (t27 != 48086608481124903LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 323U;
	uint64_t x119 = 2791067LLU;
	int64_t x120 = 34125157396929LL;
	static volatile uint64_t t28 = 116150517064828706LLU;

	t28 = (x117+((x118/x119)|x120));

	if (t28 != 34136197329670LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x122 = -1;
	static uint16_t x123 = UINT16_MAX;
	int32_t x124 = INT32_MIN;

	t29 = (x121+((x122/x123)|x124));

	if (t29 != -2147418113) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	static int64_t x126 = INT64_MIN;
	int64_t x127 = -547LL;
	uint16_t x128 = 3932U;
	volatile int64_t t30 = -151969241096610553LL;

	t30 = (x125+((x126/x127)|x128));

	if (t30 != 16861740469571581LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x129 = -1LL;
	volatile int16_t x130 = -1;
	static volatile int16_t x131 = -587;
	int64_t x132 = -1585056368137147LL;

	t31 = (x129+((x130/x131)|x132));

	if (t31 != -1585056368137148LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x134 = 60;
	int64_t x136 = -54495550LL;
	int64_t t32 = 6838390LL;

	t32 = (x133+((x134/x135)|x136));

	if (t32 != -54495550LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = -1;
	uint64_t x138 = 157613LLU;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = UINT8_MAX;
	volatile uint64_t t33 = 755140665398481300LLU;

	t33 = (x137+((x138/x139)|x140));

	if (t33 != 254LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x143 = 6466395677537953LLU;
	int8_t x144 = INT8_MIN;
	static uint64_t t34 = 5LLU;

	t34 = (x141+((x142/x143)|x144));

	if (t34 != 1723227837LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = -1;
	uint8_t x147 = UINT8_MAX;
	uint32_t x148 = 30U;

	t35 = (x145+((x146/x147)|x148));

	if (t35 != 61U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = UINT64_MAX;
	static int8_t x150 = INT8_MIN;
	static int16_t x151 = -1;
	static uint32_t x152 = UINT32_MAX;
	volatile uint64_t t36 = 8107709207LLU;

	t36 = (x149+((x150/x151)|x152));

	if (t36 != 4294967294LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 0;
	int64_t x155 = 77903475059777320LL;
	volatile int64_t x156 = INT64_MAX;
	volatile int64_t t37 = INT64_MAX;

	t37 = (x153+((x154/x155)|x156));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 11U;
	volatile int64_t x158 = -1LL;
	uint8_t x160 = 5U;
	static int64_t t38 = -3133544209LL;

	t38 = (x157+((x158/x159)|x160));

	if (t38 != 16LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x162 = UINT8_MAX;
	static int32_t x164 = INT32_MIN;
	uint32_t t39 = 23537453U;

	t39 = (x161+((x162/x163)|x164));

	if (t39 != 2147484033U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x170 = 24017LLU;
	int32_t x172 = INT32_MIN;
	uint64_t t40 = 454461LLU;

	t40 = (x169+((x170/x171)|x172));

	if (t40 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 17278408U;
	static volatile int8_t x174 = -1;
	uint8_t x176 = 118U;
	volatile int64_t t41 = 526169546LL;

	t41 = (x173+((x174/x175)|x176));

	if (t41 != 17278526LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MIN;
	volatile int16_t x182 = -9493;
	int64_t x183 = INT64_MAX;
	static uint16_t x184 = 549U;
	int64_t t42 = 1514103117783915194LL;

	t42 = (x181+((x182/x183)|x184));

	if (t42 != -2147483099LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = 3U;
	int64_t x186 = 611297798LL;
	int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MIN;
	int64_t t43 = -34303911541360LL;

	t43 = (x185+((x186/x187)|x188));

	if (t43 != -125LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 8994U;
	static uint16_t x195 = 1U;
	int8_t x196 = -1;
	volatile int64_t t44 = -573846865998LL;

	t44 = (x193+((x194/x195)|x196));

	if (t44 != 8993LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MIN;
	volatile int32_t x198 = 409796229;
	static uint64_t x199 = 62676LLU;
	volatile int32_t x200 = -1;
	uint64_t t45 = 1125LLU;

	t45 = (x197+((x198/x199)|x200));

	if (t45 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MIN;
	uint64_t x202 = UINT64_MAX;
	volatile uint64_t x204 = 9LLU;
	static uint64_t t46 = 69817LLU;

	t46 = (x201+((x202/x203)|x204));

	if (t46 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = 4U;
	int16_t x206 = 175;
	int8_t x207 = INT8_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t47 = 0;

	t47 = (x205+((x206/x207)|x208));

	if (t47 != -32763) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MIN;
	static int8_t x216 = INT8_MIN;
	uint32_t t48 = 486U;

	t48 = (x213+((x214/x215)|x216));

	if (t48 != 4294967167U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x217 = UINT16_MAX;
	static int8_t x218 = 55;
	uint64_t x219 = 236987090LLU;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t49 = 0LLU;

	t49 = (x217+((x218/x219)|x220));

	if (t49 != 65407LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 799290721U;
	int16_t x222 = -451;
	int32_t x223 = INT32_MIN;
	static uint32_t t50 = 1091U;

	t50 = (x221+((x222/x223)|x224));

	if (t50 != 799290741U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MAX;
	uint16_t x226 = 438U;
	int8_t x228 = INT8_MIN;
	int64_t t51 = 11620LL;

	t51 = (x225+((x226/x227)|x228));

	if (t51 != 9223372036854775733LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x230 = UINT8_MAX;
	static int16_t x231 = 6515;
	int16_t x232 = -13293;
	int64_t t52 = 48785LL;

	t52 = (x229+((x230/x231)|x232));

	if (t52 != -13294LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = INT32_MIN;
	volatile int8_t x234 = -1;
	static uint32_t x235 = 19735096U;
	volatile uint32_t x236 = UINT32_MAX;
	uint32_t t53 = 5U;

	t53 = (x233+((x234/x235)|x236));

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MAX;
	int8_t x238 = -1;
	int8_t x239 = -4;
	volatile uint32_t t54 = 377540392U;

	t54 = (x237+((x238/x239)|x240));

	if (t54 != 2147529840U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x241 = UINT32_MAX;
	volatile uint32_t x244 = UINT32_MAX;
	volatile uint32_t t55 = 640164774U;

	t55 = (x241+((x242/x243)|x244));

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x245 = 40U;
	volatile uint16_t x246 = 5729U;

	t56 = (x245+((x246/x247)|x248));

	if (t56 != 15789150775LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = INT64_MIN;
	static uint32_t x250 = 581186191U;
	static int16_t x252 = -1;
	int64_t t57 = 46535880558751LL;

	t57 = (x249+((x250/x251)|x252));

	if (t57 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = UINT32_MAX;
	uint8_t x255 = 3U;
	static int64_t x256 = -508212024LL;

	t58 = (x253+((x254/x255)|x256));

	if (t58 != 3955224297LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x257 = 120U;
	int64_t x258 = INT64_MAX;
	volatile uint64_t t59 = 50242613091606535LLU;

	t59 = (x257+((x258/x259)|x260));

	if (t59 != 2954370541810551LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = 75U;
	int32_t x263 = -58739;
	int32_t x264 = INT32_MIN;
	volatile int32_t t60 = 703931583;

	t60 = (x261+((x262/x263)|x264));

	if (t60 != -2147483573) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = UINT16_MAX;
	static volatile uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MIN;
	volatile int32_t t61 = 3;

	t61 = (x265+((x266/x267)|x268));

	if (t61 != -2147418111) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x269 = UINT16_MAX;
	uint16_t x270 = 0U;
	volatile int16_t x271 = -249;
	static volatile int8_t x272 = -1;

	t62 = (x269+((x270/x271)|x272));

	if (t62 != 65534) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x274 = INT16_MAX;
	int32_t x275 = INT32_MAX;

	t63 = (x273+((x274/x275)|x276));

	if (t63 != 2147450879) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x277 = 3559;
	uint32_t x278 = 53962U;
	volatile int64_t x279 = INT64_MAX;

	t64 = (x277+((x278/x279)|x280));

	if (t64 != 3590LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x281 = -73896476;
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	static volatile int8_t x284 = -1;

	t65 = (x281+((x282/x283)|x284));

	if (t65 != -73896477) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = INT8_MIN;
	static uint64_t x286 = UINT64_MAX;
	static int16_t x287 = INT16_MAX;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t66 = 11895907LLU;

	t66 = (x285+((x286/x287)|x288));

	if (t66 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x294 = 6792;

	t67 = (x293+((x294/x295)|x296));

	if (t67 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = UINT64_MAX;
	int64_t x298 = INT64_MIN;
	uint32_t x299 = 4169U;
	static uint8_t x300 = UINT8_MAX;
	volatile uint64_t t68 = 17002930989769286LLU;

	t68 = (x297+((x298/x299)|x300));

	if (t68 != 18444531703348109054LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = -1LL;
	int64_t x302 = INT64_MAX;
	volatile int64_t x303 = -63800914000925LL;
	static int32_t x304 = INT32_MIN;

	t69 = (x301+((x302/x303)|x304));

	if (t69 != -144565LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x306 = 56U;
	uint16_t x307 = 26377U;
	int16_t x308 = INT16_MIN;
	int64_t t70 = 22467838LL;

	t70 = (x305+((x306/x307)|x308));

	if (t70 != 1926054075059438LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MIN;
	static int8_t x315 = -4;
	static uint64_t x316 = 140LLU;
	volatile uint64_t t71 = 7LLU;

	t71 = (x313+((x314/x315)|x316));

	if (t71 != 18446744073709527180LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x317 = UINT8_MAX;
	uint16_t x318 = UINT16_MAX;
	static uint8_t x319 = UINT8_MAX;

	t72 = (x317+((x318/x319)|x320));

	if (t72 != 512) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x322 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t73 = 24903817;

	t73 = (x321+((x322/x323)|x324));

	if (t73 != -8419661) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x325 = 303;
	int8_t x326 = -1;
	uint8_t x327 = UINT8_MAX;
	int8_t x328 = 1;
	static volatile int32_t t74 = 1;

	t74 = (x325+((x326/x327)|x328));

	if (t74 != 304) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x331 = INT64_MIN;
	int16_t x332 = -120;

	t75 = (x329+((x330/x331)|x332));

	if (t75 != 450965LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x342 = UINT64_MAX;
	static uint64_t x343 = 64LLU;
	int16_t x344 = -5044;
	volatile uint64_t t76 = 150264LLU;

	t76 = (x341+((x342/x343)|x344));

	if (t76 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x347 = -204LL;
	volatile uint64_t x348 = UINT64_MAX;
	volatile uint64_t t77 = 5779562108772LLU;

	t77 = (x345+((x346/x347)|x348));

	if (t77 != 18446744073707563822LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = -2;
	static uint16_t x350 = 1U;
	static int16_t x351 = INT16_MIN;
	static volatile uint32_t x352 = UINT32_MAX;
	volatile uint32_t t78 = 245169U;

	t78 = (x349+((x350/x351)|x352));

	if (t78 != 4294967293U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x353 = INT32_MIN;
	volatile int8_t x354 = 27;
	uint16_t x355 = 38U;
	int8_t x356 = 0;
	static volatile int32_t t79 = INT32_MIN;

	t79 = (x353+((x354/x355)|x356));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x357 = -6LL;
	static int16_t x358 = 43;
	uint8_t x360 = 1U;

	t80 = (x357+((x358/x359)|x360));

	if (t80 != -5LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x361 = INT8_MAX;
	int32_t x362 = INT32_MIN;
	static int64_t x363 = -1LL;
	volatile uint16_t x364 = UINT16_MAX;
	int64_t t81 = -5415539125592719LL;

	t81 = (x361+((x362/x363)|x364));

	if (t81 != 2147549310LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x365 = 509077136069LLU;
	int64_t x366 = -46648965LL;
	int16_t x367 = INT16_MAX;
	static volatile uint64_t t82 = 8LLU;

	t82 = (x365+((x366/x367)|x368));

	if (t82 != 509077134646LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x371 = INT64_MIN;
	static volatile int16_t x372 = INT16_MIN;
	uint64_t t83 = 4093560LLU;

	t83 = (x369+((x370/x371)|x372));

	if (t83 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x373 = INT64_MIN;
	uint64_t x374 = 30610360LLU;
	int64_t x375 = -1LL;
	static volatile int32_t x376 = 38951809;
	uint64_t t84 = 199938543333516LLU;

	t84 = (x373+((x374/x375)|x376));

	if (t84 != 9223372036893727617LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x378 = -890660915;
	int32_t x379 = -360095417;
	uint16_t x380 = 31U;

	t85 = (x377+((x378/x379)|x380));

	if (t85 != -20405039) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x381 = 0;
	volatile int64_t x382 = -1LL;
	uint32_t x383 = 50033U;
	uint64_t x384 = 999165974LLU;
	volatile uint64_t t86 = 150562LLU;

	t86 = (x381+((x382/x383)|x384));

	if (t86 != 999165974LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int32_t x388 = INT32_MAX;
	volatile int32_t t87 = 906705555;

	t87 = (x385+((x386/x387)|x388));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = -1LL;
	int16_t x390 = 0;
	int64_t x391 = -1LL;
	static int8_t x392 = -1;

	t88 = (x389+((x390/x391)|x392));

	if (t88 != -2LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = INT64_MIN;
	uint64_t x394 = 506999LLU;
	uint64_t x395 = UINT64_MAX;
	static uint64_t x396 = 8809LLU;
	volatile uint64_t t89 = 5089957664620LLU;

	t89 = (x393+((x394/x395)|x396));

	if (t89 != 9223372036854784617LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x401 = INT8_MIN;
	uint16_t x402 = 107U;
	uint64_t x403 = 93697307LLU;
	int64_t x404 = 441LL;
	uint64_t t90 = 105LLU;

	t90 = (x401+((x402/x403)|x404));

	if (t90 != 313LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = INT16_MAX;
	uint64_t x407 = 42524855621LLU;
	int16_t x408 = INT16_MIN;
	uint64_t t91 = UINT64_MAX;

	t91 = (x405+((x406/x407)|x408));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x409 = -1;
	int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MIN;
	int8_t x412 = -11;
	int64_t t92 = 1264069525156LL;

	t92 = (x409+((x410/x411)|x412));

	if (t92 != -12LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x413 = INT64_MIN;
	int64_t x414 = -1LL;
	uint16_t x415 = 692U;
	int32_t x416 = INT32_MAX;
	int64_t t93 = -1598470LL;

	t93 = (x413+((x414/x415)|x416));

	if (t93 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x417 = 1;
	volatile uint8_t x419 = 56U;
	uint32_t x420 = 481151327U;

	t94 = (x417+((x418/x419)|x420));

	if (t94 != 481151840U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x421 = INT32_MIN;
	int32_t x422 = INT32_MIN;
	uint64_t x423 = 10183339003454LLU;
	volatile int32_t x424 = INT32_MIN;
	uint64_t t95 = 3LLU;

	t95 = (x421+((x422/x423)|x424));

	if (t95 != 18446744069416395783LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MAX;
	int32_t x432 = INT32_MAX;
	int32_t t96 = 60;

	t96 = (x429+((x430/x431)|x432));

	if (t96 != 2147483646) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x434 = INT8_MIN;
	int8_t x436 = -1;
	int64_t t97 = 6LL;

	t97 = (x433+((x434/x435)|x436));

	if (t97 != 2147483646LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x437 = 7U;
	int32_t x439 = -30885328;
	int8_t x440 = 1;
	volatile int32_t t98 = -17;

	t98 = (x437+((x438/x439)|x440));

	if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x442 = INT8_MAX;
	uint64_t x443 = 3LLU;
	int64_t x444 = -13330LL;
	volatile uint64_t t99 = 249LLU;

	t99 = (x441+((x442/x443)|x444));

	if (t99 != 18446744073709538285LLU) { NG(); } else { ; }
	
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

