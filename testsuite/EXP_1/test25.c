#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 0;
int16_t x13 = INT16_MIN;
uint16_t x15 = UINT16_MAX;
uint64_t x21 = 683LLU;
volatile int16_t x27 = -85;
static int64_t t5 = -3LL;
int32_t x29 = -1;
int64_t x35 = 2281758024960839777LL;
int64_t x36 = -1LL;
static int32_t x37 = -360;
int16_t x40 = -2312;
int32_t x51 = -733;
static volatile int32_t x55 = 0;
uint16_t x63 = UINT16_MAX;
uint64_t x66 = 45093242804LLU;
int16_t x67 = 1836;
int64_t x75 = -1LL;
volatile uint32_t x78 = 16725201U;
int32_t x79 = -8392439;
volatile int64_t t17 = 5415590LL;
volatile uint16_t x88 = 190U;
int32_t x94 = -1;
volatile uint64_t t22 = 819972LLU;
int8_t x102 = INT8_MIN;
int8_t x103 = INT8_MIN;
uint16_t x105 = UINT16_MAX;
static volatile int32_t t24 = 33980350;
volatile int8_t x110 = -1;
volatile uint64_t t27 = UINT64_MAX;
uint8_t x121 = UINT8_MAX;
int64_t t28 = 89LL;
static int16_t x126 = -1;
volatile int16_t x132 = INT16_MAX;
int8_t x135 = INT8_MIN;
uint64_t x136 = 984594592729LLU;
uint64_t x138 = 501289839912524LLU;
static uint8_t x139 = 5U;
int8_t x140 = INT8_MIN;
int8_t x152 = INT8_MIN;
uint16_t x153 = UINT16_MAX;
int32_t x158 = -1;
volatile uint64_t x160 = 46131089LLU;
volatile int8_t x162 = INT8_MIN;
uint32_t x167 = UINT32_MAX;
int64_t t38 = -20265766966745LL;
uint64_t x170 = 271LLU;
uint8_t x171 = 1U;
uint8_t x185 = UINT8_MAX;
int32_t x192 = INT32_MIN;
int16_t x201 = INT16_MAX;
volatile int32_t x211 = INT32_MAX;
uint64_t t46 = 2156670021LLU;
int16_t x236 = 1;
uint32_t x237 = UINT32_MAX;
int16_t x242 = INT16_MIN;
volatile int64_t t53 = -32397465701LL;
uint32_t x259 = 2100U;
uint32_t t56 = 63616889U;
int32_t x271 = INT32_MIN;
volatile uint64_t t57 = 14775954331LLU;
static uint64_t x276 = 5844608747544395365LLU;
volatile uint64_t t58 = 191942LLU;
uint8_t x278 = UINT8_MAX;
volatile int64_t t59 = -5370086LL;
uint64_t x281 = UINT64_MAX;
int8_t x285 = INT8_MAX;
uint32_t x293 = UINT32_MAX;
static int32_t x297 = -1;
int8_t x301 = INT8_MIN;
static int16_t x302 = INT16_MIN;
volatile uint64_t x303 = UINT64_MAX;
int64_t x304 = INT64_MAX;
uint16_t x308 = 0U;
volatile int64_t t66 = 23LL;
int32_t x311 = -1;
int8_t x314 = INT8_MIN;
volatile uint8_t x319 = 0U;
static volatile uint64_t x320 = UINT64_MAX;
int64_t x325 = -1LL;
volatile uint64_t t73 = UINT64_MAX;
int32_t x341 = INT32_MAX;
int16_t x351 = -1;
uint32_t x360 = 353U;
int16_t x375 = INT16_MIN;
int16_t x379 = INT16_MIN;
int64_t x380 = 0LL;
static int64_t t79 = 503LL;
uint64_t x388 = UINT64_MAX;
volatile uint64_t t81 = UINT64_MAX;
int16_t x396 = 1;
volatile int8_t x406 = -1;
uint8_t x408 = 0U;
int32_t t87 = -35408;
static int32_t x425 = 7442359;
int32_t x428 = -1;
uint32_t x435 = UINT32_MAX;
int64_t x451 = INT64_MIN;
int8_t x457 = INT8_MIN;
int64_t x463 = -7073544416LL;
uint16_t x464 = 14U;
int64_t x465 = -1LL;
int64_t t95 = -24LL;
uint32_t x470 = UINT32_MAX;
uint64_t x472 = UINT64_MAX;
int32_t x480 = -262461;
uint32_t t98 = 16U;


void f0(void) {
	int32_t x1 = -1;
	uint8_t x2 = 23U;
	int32_t x3 = INT32_MAX;
	int8_t x4 = 0;
	volatile int32_t t0 = 0;

	t0 = (((x1+x2)-x3)|x4);

	if (t0 != -2147483625) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 4U;
	int16_t x6 = 1;
	int8_t x7 = INT8_MAX;
	uint8_t x8 = UINT8_MAX;

	t1 = (((x5+x6)-x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x14 = -10550;
	volatile int64_t x16 = INT64_MIN;
	volatile int64_t t2 = 1118033270642114LL;

	t2 = (((x13+x14)-x15)|x16);

	if (t2 != -108853LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 1U;
	uint32_t x18 = UINT32_MAX;
	static uint64_t x19 = UINT64_MAX;
	static int8_t x20 = INT8_MAX;
	volatile uint64_t t3 = 607070LLU;

	t3 = (((x17+x18)-x19)|x20);

	if (t3 != 127LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = UINT32_MAX;
	int8_t x23 = 7;
	int16_t x24 = INT16_MIN;
	volatile uint64_t t4 = 65692350693236380LLU;

	t4 = (((x21+x22)-x23)|x24);

	if (t4 != 18446744073709519523LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x25 = INT64_MIN;
	uint8_t x26 = 35U;
	static uint16_t x28 = UINT16_MAX;

	t5 = (((x25+x26)-x27)|x28);

	if (t5 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MAX;
	int16_t x32 = -1;
	int32_t t6 = 15;

	t6 = (((x29+x30)-x31)|x32);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	static uint32_t x34 = 288008U;
	volatile int64_t t7 = 2657780050035205LL;

	t7 = (((x33+x34)-x35)|x36);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	static volatile int32_t t8 = -3151987;

	t8 = (((x37+x38)-x39)|x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MIN;
	volatile uint32_t x42 = UINT32_MAX;
	volatile int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MIN;
	volatile uint32_t t9 = 130436074U;

	t9 = (((x41+x42)-x43)|x44);

	if (t9 != 4294967167U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = -6;
	static int8_t x47 = INT8_MIN;
	volatile int64_t x48 = INT64_MAX;
	static int64_t t10 = -93657635524169LL;

	t10 = (((x45+x46)-x47)|x48);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 675;
	volatile int8_t x50 = 0;
	static uint32_t x52 = 1U;
	volatile uint32_t t11 = 42498227U;

	t11 = (((x49+x50)-x51)|x52);

	if (t11 != 1409U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	uint8_t x54 = UINT8_MAX;
	static uint32_t x56 = 7510U;
	volatile uint32_t t12 = 14U;

	t12 = (((x53+x54)-x55)|x56);

	if (t12 != 4294942207U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = 6;
	volatile int8_t x58 = -37;
	int16_t x59 = -1;
	int32_t x60 = -252582;
	static int32_t t13 = -1;

	t13 = (((x57+x58)-x59)|x60);

	if (t13 != -6) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = 14124;
	int8_t x62 = INT8_MAX;
	uint8_t x64 = 62U;
	volatile int32_t t14 = 9753475;

	t14 = (((x61+x62)-x63)|x64);

	if (t14 != -51266) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	int8_t x68 = -1;
	static volatile uint64_t t15 = UINT64_MAX;

	t15 = (((x65+x66)-x67)|x68);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = INT16_MIN;
	static volatile uint16_t x74 = 140U;
	volatile uint16_t x76 = 25U;
	static int64_t t16 = 1LL;

	t16 = (((x73+x74)-x75)|x76);

	if (t16 != -32611LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	int64_t x80 = -1LL;

	t17 = (((x77+x78)-x79)|x80);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 2292680833425LLU;
	uint16_t x82 = UINT16_MAX;
	int64_t x83 = -1LL;
	int64_t x84 = INT64_MIN;
	static volatile uint64_t t18 = 9878253314LLU;

	t18 = (((x81+x82)-x83)|x84);

	if (t18 != 9223374329535674769LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MAX;
	static int32_t x86 = INT32_MIN;
	uint64_t x87 = UINT64_MAX;
	uint64_t t19 = 53313586923LLU;

	t19 = (((x85+x86)-x87)|x88);

	if (t19 != 18446744071562100926LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = UINT64_MAX;
	volatile uint16_t x90 = 2034U;
	uint64_t x91 = UINT64_MAX;
	static volatile uint64_t x92 = UINT64_MAX;
	uint64_t t20 = UINT64_MAX;

	t20 = (((x89+x90)-x91)|x92);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = -141026412;
	uint16_t x95 = 2U;
	volatile int32_t x96 = -1;
	volatile int32_t t21 = -1032114;

	t21 = (((x93+x94)-x95)|x96);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = -1LL;
	uint64_t x98 = UINT64_MAX;
	uint8_t x99 = 11U;
	int16_t x100 = 26;

	t22 = (((x97+x98)-x99)|x100);

	if (t22 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = -1806;
	int16_t x104 = INT16_MIN;
	int32_t t23 = 8010770;

	t23 = (((x101+x102)-x103)|x104);

	if (t23 != -1806) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x106 = INT32_MIN;
	int32_t x107 = 2;
	static int8_t x108 = -19;

	t24 = (((x105+x106)-x107)|x108);

	if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	int64_t x111 = -14663LL;
	static volatile int16_t x112 = INT16_MIN;
	static int64_t t25 = 13074237LL;

	t25 = (((x109+x110)-x111)|x112);

	if (t25 != -17979LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x113 = INT16_MIN;
	int32_t x114 = -1;
	uint32_t x115 = UINT32_MAX;
	int64_t x116 = INT64_MIN;
	volatile int64_t t26 = -2529LL;

	t26 = (((x113+x114)-x115)|x116);

	if (t26 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 12568U;
	int16_t x118 = INT16_MIN;
	int16_t x119 = 8740;
	uint64_t x120 = UINT64_MAX;

	t27 = (((x117+x118)-x119)|x120);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x122 = 0LL;
	volatile int16_t x123 = -1;
	int64_t x124 = 6340300742684435LL;

	t28 = (((x121+x122)-x123)|x124);

	if (t28 != 6340300742684435LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MAX;
	uint32_t x127 = 94U;
	uint16_t x128 = 1U;
	volatile int64_t t29 = -37LL;

	t29 = (((x125+x126)-x127)|x128);

	if (t29 != 9223372036854775713LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 611U;
	int8_t x130 = INT8_MIN;
	static int16_t x131 = INT16_MIN;
	int32_t t30 = 322652;

	t30 = (((x129+x130)-x131)|x132);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 1189U;
	static int16_t x134 = 2187;
	volatile uint64_t t31 = 93LLU;

	t31 = (((x133+x134)-x135)|x136);

	if (t31 != 984594595833LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -1LL;
	uint64_t t32 = 65348890503644573LLU;

	t32 = (((x137+x138)-x139)|x140);

	if (t32 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x145 = INT64_MIN;
	uint64_t x146 = 121988922LLU;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = -19632156527367LL;
	volatile uint64_t t33 = 3508226293402126LLU;

	t33 = (((x145+x146)-x147)|x148);

	if (t33 != 18446724441670809339LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = UINT64_MAX;
	static int8_t x150 = INT8_MAX;
	int64_t x151 = INT64_MIN;
	volatile uint64_t t34 = 24558410320LLU;

	t34 = (((x149+x150)-x151)|x152);

	if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = INT32_MIN;
	uint32_t x155 = 6U;
	static uint16_t x156 = UINT16_MAX;
	volatile uint32_t t35 = 9305U;

	t35 = (((x153+x154)-x155)|x156);

	if (t35 != 2147549183U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = UINT16_MAX;
	int16_t x159 = INT16_MIN;
	uint64_t t36 = 1642199524130013LLU;

	t36 = (((x157+x158)-x159)|x160);

	if (t36 != 46137343LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x163 = UINT32_MAX;
	static int64_t x164 = INT64_MAX;
	int64_t t37 = INT64_MAX;

	t37 = (((x161+x162)-x163)|x164);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x165 = -1LL;
	static int32_t x166 = INT32_MIN;
	int32_t x168 = 4;

	t38 = (((x165+x166)-x167)|x168);

	if (t38 != -6442450940LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x169 = INT32_MIN;
	uint32_t x172 = UINT32_MAX;
	uint64_t t39 = UINT64_MAX;

	t39 = (((x169+x170)-x171)|x172);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x186 = 57;
	static int64_t x187 = INT64_MAX;
	volatile uint16_t x188 = 0U;
	volatile int64_t t40 = 7169993696LL;

	t40 = (((x185+x186)-x187)|x188);

	if (t40 != -9223372036854775495LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MIN;
	volatile uint16_t x190 = 5U;
	static int8_t x191 = INT8_MAX;
	volatile int32_t t41 = -1;

	t41 = (((x189+x190)-x191)|x192);

	if (t41 != -250) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = 0U;
	volatile int8_t x195 = 12;
	int16_t x196 = -213;
	uint32_t t42 = 17735867U;

	t42 = (((x193+x194)-x195)|x196);

	if (t42 != 4294967167U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = 438618;
	uint16_t x198 = 45U;
	volatile uint32_t x199 = 35449044U;
	static volatile int32_t x200 = INT32_MIN;
	uint32_t t43 = 107U;

	t43 = (((x197+x198)-x199)|x200);

	if (t43 != 4259956915U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = 0U;
	int64_t t44 = 13811168728676LL;

	t44 = (((x201+x202)-x203)|x204);

	if (t44 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x209 = INT16_MAX;
	static int16_t x210 = INT16_MIN;
	int8_t x212 = INT8_MAX;
	int32_t t45 = 0;

	t45 = (((x209+x210)-x211)|x212);

	if (t45 != -2147483521) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x221 = 9;
	static volatile int8_t x222 = INT8_MAX;
	int64_t x223 = -1LL;
	static volatile uint64_t x224 = 522799290LLU;

	t46 = (((x221+x222)-x223)|x224);

	if (t46 != 522799291LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x225 = 9893;
	uint32_t x226 = 999038U;
	uint8_t x227 = UINT8_MAX;
	static int8_t x228 = INT8_MIN;
	static uint32_t t47 = 3910315U;

	t47 = (((x225+x226)-x227)|x228);

	if (t47 != 4294967204U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = INT16_MIN;
	volatile int64_t x234 = -1LL;
	static int8_t x235 = -1;
	int64_t t48 = -50692145276880LL;

	t48 = (((x233+x234)-x235)|x236);

	if (t48 != -32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x238 = INT16_MIN;
	int32_t x239 = -1;
	static volatile uint8_t x240 = 62U;
	volatile uint32_t t49 = 65614377U;

	t49 = (((x237+x238)-x239)|x240);

	if (t49 != 4294934590U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = 2228;
	volatile int32_t x243 = -244723816;
	uint16_t x244 = 1002U;
	volatile int32_t t50 = -988;

	t50 = (((x241+x242)-x243)|x244);

	if (t50 != 244694014) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x245 = 1U;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MAX;
	int32_t x248 = -1;
	uint32_t t51 = UINT32_MAX;

	t51 = (((x245+x246)-x247)|x248);

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x249 = INT32_MIN;
	uint16_t x250 = 2U;
	static volatile uint64_t x251 = 740699LLU;
	static volatile int64_t x252 = -9503708772759LL;
	volatile uint64_t t52 = 29178LLU;

	t52 = (((x249+x250)-x251)|x252);

	if (t52 != 18446744071561328367LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = 7740173003LL;
	int64_t x254 = INT64_MIN;
	static uint32_t x255 = 57U;
	int32_t x256 = INT32_MIN;

	t53 = (((x253+x254)-x255)|x256);

	if (t53 != -849761646LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x257 = -176370665673309305LL;
	uint8_t x258 = 24U;
	volatile int8_t x260 = INT8_MIN;
	int64_t t54 = -385813655261LL;

	t54 = (((x257+x258)-x259)|x260);

	if (t54 != -21LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x261 = UINT16_MAX;
	volatile int64_t x262 = INT64_MIN;
	int32_t x263 = -27;
	uint16_t x264 = 1U;
	int64_t t55 = 198216366LL;

	t55 = (((x261+x262)-x263)|x264);

	if (t55 != -9223372036854710245LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x265 = 14U;
	uint16_t x266 = 1003U;
	uint32_t x267 = 1402U;
	volatile uint16_t x268 = 7012U;

	t56 = (((x265+x266)-x267)|x268);

	if (t56 != 4294967167U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x269 = 6LLU;
	uint16_t x270 = UINT16_MAX;
	volatile int32_t x272 = INT32_MIN;

	t57 = (((x269+x270)-x271)|x272);

	if (t57 != 18446744071562133509LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = -53106LL;
	int32_t x274 = INT32_MIN;
	static uint32_t x275 = UINT32_MAX;

	t58 = (((x273+x274)-x275)|x276);

	if (t58 != 18446744069414534895LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x277 = INT8_MAX;
	volatile int64_t x279 = -9249184LL;
	static uint32_t x280 = UINT32_MAX;

	t59 = (((x277+x278)-x279)|x280);

	if (t59 != 4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x282 = INT16_MAX;
	int16_t x283 = INT16_MIN;
	volatile int16_t x284 = 83;
	uint64_t t60 = 171505LLU;

	t60 = (((x281+x282)-x283)|x284);

	if (t60 != 65535LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x286 = 580613626407551151LLU;
	static int16_t x287 = -1;
	static volatile uint32_t x288 = UINT32_MAX;
	uint64_t t61 = 11980113LLU;

	t61 = (((x285+x286)-x287)|x288);

	if (t61 != 580613629196369919LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = INT16_MIN;
	static uint32_t x290 = UINT32_MAX;
	volatile int8_t x291 = 6;
	static int16_t x292 = INT16_MIN;
	volatile uint32_t t62 = 832143U;

	t62 = (((x289+x290)-x291)|x292);

	if (t62 != 4294967289U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x294 = 38102814382599LLU;
	volatile uint32_t x295 = 44478U;
	int64_t x296 = -1LL;
	static volatile uint64_t t63 = UINT64_MAX;

	t63 = (((x293+x294)-x295)|x296);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x298 = -27;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MIN;
	uint32_t t64 = 1563393388U;

	t64 = (((x297+x298)-x299)|x300);

	if (t64 != 4294967269U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (((x301+x302)-x303)|x304);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = -1LL;
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = -3174572237LL;

	t66 = (((x305+x306)-x307)|x308);

	if (t66 != 3174572491LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x309 = 0U;
	uint32_t x310 = 6020423U;
	uint64_t x312 = 8623195139LLU;
	volatile uint64_t t67 = 7854LLU;

	t67 = (((x309+x310)-x311)|x312);

	if (t67 != 8623217995LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x313 = UINT16_MAX;
	static volatile uint8_t x315 = 7U;
	int64_t x316 = INT64_MIN;
	static volatile int64_t t68 = -21588836736616LL;

	t68 = (((x313+x314)-x315)|x316);

	if (t68 != -9223372036854710408LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = -1;
	volatile uint64_t x318 = 6914075843246507912LLU;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (((x317+x318)-x319)|x320);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = INT8_MAX;
	volatile uint32_t x322 = 3U;
	int16_t x323 = INT16_MIN;
	uint64_t x324 = 6141802096046LLU;
	volatile uint64_t t70 = 91495LLU;

	t70 = (((x321+x322)-x323)|x324);

	if (t70 != 6141802096046LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x326 = -773LL;
	int16_t x327 = INT16_MAX;
	static volatile int16_t x328 = -1;
	int64_t t71 = 694308LL;

	t71 = (((x325+x326)-x327)|x328);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x333 = UINT16_MAX;
	int32_t x334 = 408678;
	uint8_t x335 = 2U;
	uint32_t x336 = 5U;
	uint32_t t72 = 414349U;

	t72 = (((x333+x334)-x335)|x336);

	if (t72 != 474215U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = 512553LLU;
	volatile uint32_t x338 = 5405968U;
	static int16_t x339 = INT16_MAX;
	int8_t x340 = -1;

	t73 = (((x337+x338)-x339)|x340);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x342 = 11416384357850LLU;
	volatile uint16_t x343 = UINT16_MAX;
	static int8_t x344 = -4;
	volatile uint64_t t74 = 505810857LLU;

	t74 = (((x341+x342)-x343)|x344);

	if (t74 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = INT8_MIN;
	static int8_t x350 = INT8_MIN;
	int32_t x352 = 45433;
	static int32_t t75 = 838;

	t75 = (((x349+x350)-x351)|x352);

	if (t75 != -135) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x357 = 914404417LLU;
	int64_t x358 = INT64_MAX;
	int16_t x359 = -1;
	static volatile uint64_t t76 = 5048LLU;

	t76 = (((x357+x358)-x359)|x360);

	if (t76 != 9223372037769180513LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = INT64_MAX;
	static int32_t x370 = INT32_MIN;
	int16_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int64_t t77 = -5415436098708LL;

	t77 = (((x369+x370)-x371)|x372);

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x373 = 239025691U;
	uint16_t x374 = UINT16_MAX;
	volatile uint32_t x376 = 1177380498U;
	volatile uint32_t t78 = 1406U;

	t78 = (((x373+x374)-x375)|x376);

	if (t78 != 1315831450U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x377 = -2042728LL;
	static volatile int32_t x378 = INT32_MIN;

	t79 = (((x377+x378)-x379)|x380);

	if (t79 != -2149493608LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x381 = 398U;
	volatile int32_t x382 = -242657;
	uint8_t x383 = 28U;
	uint16_t x384 = 70U;
	volatile uint32_t t80 = 439917276U;

	t80 = (((x381+x382)-x383)|x384);

	if (t80 != 4294725079U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	static int8_t x387 = 6;

	t81 = (((x385+x386)-x387)|x388);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x389 = 41U;
	uint16_t x390 = UINT16_MAX;
	int16_t x391 = INT16_MAX;
	uint8_t x392 = 6U;
	int32_t t82 = 4816543;

	t82 = (((x389+x390)-x391)|x392);

	if (t82 != 32815) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x393 = 103397LL;
	volatile int8_t x394 = -1;
	int8_t x395 = INT8_MAX;
	static volatile int64_t t83 = 7016151LL;

	t83 = (((x393+x394)-x395)|x396);

	if (t83 != 103269LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x397 = -1LL;
	volatile int8_t x398 = INT8_MAX;
	uint64_t x399 = 104LLU;
	static int16_t x400 = 99;
	uint64_t t84 = 279085026942606252LLU;

	t84 = (((x397+x398)-x399)|x400);

	if (t84 != 119LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x401 = -1LL;
	volatile int32_t x402 = -1;
	int32_t x403 = INT32_MIN;
	uint16_t x404 = UINT16_MAX;
	static int64_t t85 = -47432LL;

	t85 = (((x401+x402)-x403)|x404);

	if (t85 != 2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x405 = -1LL;
	uint64_t x407 = UINT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (((x405+x406)-x407)|x408);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x409 = 1570U;
	int32_t x410 = 136;
	static int8_t x411 = INT8_MAX;
	static int16_t x412 = 1;

	t87 = (((x409+x410)-x411)|x412);

	if (t87 != 1579) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = -2096910335096LL;
	uint16_t x414 = UINT16_MAX;
	int16_t x415 = INT16_MIN;
	volatile int8_t x416 = INT8_MAX;
	volatile int64_t t88 = 42921814190764894LL;

	t88 = (((x413+x414)-x415)|x416);

	if (t88 != -2096910236673LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x426 = 62170280LLU;
	int16_t x427 = -83;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (((x425+x426)-x427)|x428);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x433 = -1;
	int64_t x434 = INT64_MAX;
	volatile int64_t x436 = -1LL;
	static volatile int64_t t90 = 222821464113593LL;

	t90 = (((x433+x434)-x435)|x436);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x437 = -785574084538881LL;
	static int32_t x438 = INT32_MIN;
	int64_t x439 = -1LL;
	int8_t x440 = INT8_MIN;
	int64_t t91 = 7191757542LL;

	t91 = (((x437+x438)-x439)|x440);

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x449 = INT64_MAX;
	uint64_t x450 = 43LLU;
	int8_t x452 = -1;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x449+x450)-x451)|x452);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x458 = 52U;
	static int8_t x459 = -1;
	int32_t x460 = INT32_MIN;
	int32_t t93 = 254058;

	t93 = (((x457+x458)-x459)|x460);

	if (t93 != -75) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x461 = -1;
	int16_t x462 = -1;
	volatile int64_t t94 = -410975231110520LL;

	t94 = (((x461+x462)-x463)|x464);

	if (t94 != 7073544414LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x466 = -1;
	uint8_t x467 = UINT8_MAX;
	int64_t x468 = -133206526911LL;

	t95 = (((x465+x466)-x467)|x468);

	if (t95 != -257LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x469 = -1;
	volatile int64_t x471 = INT64_MAX;
	static uint64_t t96 = UINT64_MAX;

	t96 = (((x469+x470)-x471)|x472);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x473 = INT8_MIN;
	int8_t x474 = INT8_MAX;
	uint32_t x475 = 171275U;
	int16_t x476 = INT16_MAX;
	uint32_t t97 = 17U;

	t97 = (((x473+x474)-x475)|x476);

	if (t97 != 4294803455U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x477 = -1;
	uint32_t x478 = 855050U;
	static int32_t x479 = INT32_MIN;

	t98 = (((x477+x478)-x479)|x480);

	if (t98 != 4294966987U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x481 = INT64_MIN;
	int32_t x482 = INT32_MAX;
	int16_t x483 = -1;
	uint16_t x484 = 1486U;
	int64_t t99 = -66921443818LL;

	t99 = (((x481+x482)-x483)|x484);

	if (t99 != -9223372034707290674LL) { NG(); } else { ; }
	
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

