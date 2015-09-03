#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
static uint8_t x10 = 25U;
uint32_t x18 = UINT32_MAX;
static uint8_t x20 = 9U;
volatile int32_t t4 = -5613;
uint8_t x22 = 2U;
static int16_t x24 = INT16_MIN;
static int32_t t5 = 0;
int16_t x28 = -1;
int8_t x29 = 0;
volatile int64_t t11 = 1750076032LL;
volatile int8_t x55 = INT8_MAX;
static uint64_t t14 = 10289888624333075LLU;
int64_t x64 = INT64_MAX;
uint16_t x70 = 303U;
static int32_t t17 = -832056;
uint64_t x73 = UINT64_MAX;
int16_t x78 = INT16_MIN;
static int16_t x81 = INT16_MIN;
volatile int64_t t21 = -196454257307077LL;
int64_t x96 = INT64_MIN;
volatile uint32_t t25 = 2783268U;
int8_t x108 = INT8_MIN;
int64_t t27 = -9081644084LL;
uint32_t x115 = 209U;
volatile int64_t t28 = 0LL;
volatile int32_t t29 = 2177435;
uint32_t x124 = 13U;
int32_t t31 = 5879;
static volatile int64_t x131 = -1LL;
int8_t x138 = -1;
static int16_t x139 = INT16_MAX;
uint32_t x140 = 1777U;
static volatile uint32_t t34 = 776U;
static int8_t x142 = 13;
volatile int64_t x149 = 450LL;
int32_t t37 = -19789104;
static uint32_t x163 = 6322U;
int32_t x165 = INT32_MIN;
int16_t x178 = INT16_MAX;
int64_t x186 = -1LL;
int32_t x189 = 43;
int64_t x190 = INT64_MIN;
int8_t x191 = INT8_MIN;
int32_t x195 = INT32_MAX;
int16_t x208 = -1;
int32_t x212 = -1;
volatile int32_t t51 = 51;
uint32_t t52 = 375U;
volatile int32_t x217 = INT32_MIN;
volatile uint64_t t55 = 18847858483116784LLU;
int8_t x232 = INT8_MIN;
uint32_t x237 = UINT32_MAX;
volatile int16_t x250 = INT16_MIN;
int64_t x251 = -2549635509433872LL;
int16_t x252 = INT16_MAX;
volatile int64_t t61 = 1075LL;
int16_t x259 = INT16_MIN;
static uint16_t x262 = 1138U;
volatile int32_t t64 = -7071;
int32_t t65 = -12759;
static int8_t x274 = INT8_MIN;
volatile uint64_t t67 = 9170928449LLU;
uint8_t x277 = 2U;
int32_t t70 = 61;
int8_t x289 = -3;
static int8_t x291 = -2;
uint8_t x296 = 9U;
uint64_t x300 = UINT64_MAX;
volatile uint64_t t73 = 57546LLU;
int32_t x304 = INT32_MIN;
uint16_t x305 = 10859U;
static uint64_t x306 = 3624335LLU;
static int32_t x316 = INT32_MIN;
volatile int64_t t77 = -59064267227951646LL;
int64_t x317 = INT64_MIN;
int32_t x318 = -7287;
int64_t x326 = INT64_MIN;
int8_t x330 = 46;
int64_t x331 = INT64_MIN;
int32_t x336 = INT32_MAX;
int32_t t83 = 0;
volatile int64_t t85 = -5825424465LL;
volatile int16_t x350 = INT16_MAX;
uint16_t x352 = UINT16_MAX;
volatile int32_t x356 = -1;
int64_t x365 = -1LL;
static volatile int32_t x368 = -1;
int16_t x380 = INT16_MIN;
int32_t t93 = 21956;
int16_t x384 = INT16_MIN;
static int16_t x385 = INT16_MIN;
int16_t x395 = INT16_MIN;
static uint64_t x400 = 402LLU;
volatile uint64_t t98 = 913828866967707LLU;
static volatile uint16_t x402 = UINT16_MAX;
int32_t t99 = 206;


void f0(void) {
	uint64_t x1 = 94346LLU;
	uint32_t x3 = 4U;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 15253483360512LL;

	t0 = ((x1<x2)-(x3^x4));

	if (t0 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	uint8_t x6 = 11U;
	int8_t x7 = INT8_MIN;
	volatile int64_t x8 = -1LL;
	volatile int64_t t1 = 267212508LL;

	t1 = ((x5<x6)-(x7^x8));

	if (t1 != -127LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x9 = 1065U;
	uint32_t x11 = 108715294U;
	int16_t x12 = -1;
	volatile uint32_t t2 = 192628U;

	t2 = ((x9<x10)-(x11^x12));

	if (t2 != 108715295U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static uint32_t x14 = 2307U;
	int16_t x15 = -1;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -5;

	t3 = ((x13<x14)-(x15^x16));

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile uint8_t x19 = 7U;

	t4 = ((x17<x18)-(x19^x20));

	if (t4 != -13) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;

	t5 = ((x21<x22)-(x23^x24));

	if (t5 != 32770) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	static uint16_t x26 = 441U;
	static int64_t x27 = 164136304744073330LL;
	volatile int64_t t6 = -44237656799LL;

	t6 = ((x25<x26)-(x27^x28));

	if (t6 != 164136304744073332LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = 2788;
	volatile uint16_t x31 = 96U;
	uint32_t x32 = 133U;
	uint32_t t7 = 7327U;

	t7 = ((x29<x30)-(x31^x32));

	if (t7 != 4294967068U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 7U;
	int8_t x34 = INT8_MIN;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = -1;
	volatile uint64_t t8 = 719LLU;

	t8 = ((x33<x34)-(x35^x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -71;
	static int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MAX;
	volatile uint16_t x40 = 681U;
	static int32_t t9 = 109563326;

	t9 = ((x37<x38)-(x39^x40));

	if (t9 != -32086) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MAX;
	volatile int16_t x43 = INT16_MIN;
	static int64_t x44 = INT64_MIN;
	int64_t t10 = -1LL;

	t10 = ((x41<x42)-(x43^x44));

	if (t10 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -276003362500228LL;
	volatile int32_t x46 = INT32_MIN;
	static int64_t x47 = INT64_MIN;
	int8_t x48 = 13;

	t11 = ((x45<x46)-(x47^x48));

	if (t11 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	volatile int32_t x50 = -1;
	int64_t x51 = -1LL;
	uint32_t x52 = 50U;
	int64_t t12 = 38192572219760LL;

	t12 = ((x49<x50)-(x51^x52));

	if (t12 != 51LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	volatile int32_t x54 = INT32_MIN;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 3081417074429459LL;

	t13 = ((x53<x54)-(x55^x56));

	if (t13 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -6742;
	int64_t x58 = INT64_MAX;
	int8_t x59 = INT8_MIN;
	volatile uint64_t x60 = 56LLU;

	t14 = ((x57<x58)-(x59^x60));

	if (t14 != 73LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -1;
	int16_t x62 = INT16_MIN;
	uint32_t x63 = 166876U;
	static volatile int64_t t15 = 658LL;

	t15 = ((x61<x62)-(x63^x64));

	if (t15 != -9223372036854608931LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -919692392025LL;
	volatile uint16_t x66 = UINT16_MAX;
	static uint8_t x67 = 1U;
	int32_t x68 = -1;
	volatile int32_t t16 = 5;

	t16 = ((x65<x66)-(x67^x68));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int32_t x71 = INT32_MIN;
	int8_t x72 = 51;

	t17 = ((x69<x70)-(x71^x72));

	if (t17 != 2147483598) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -10575;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = -104;
	uint32_t t18 = 46045064U;

	t18 = ((x73<x74)-(x75^x76));

	if (t18 != 4294967193U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 2498298402941170LLU;
	uint8_t x79 = 3U;
	uint16_t x80 = 89U;
	int32_t t19 = -154066118;

	t19 = ((x77<x78)-(x79^x80));

	if (t19 != -89) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 1U;
	uint64_t x83 = 1104390069289262564LLU;
	int8_t x84 = -1;
	uint64_t t20 = 70238695LLU;

	t20 = ((x81<x82)-(x83^x84));

	if (t20 != 1104390069289262565LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x85 = -1LL;
	int8_t x86 = -1;
	static uint32_t x87 = UINT32_MAX;
	volatile int64_t x88 = INT64_MIN;

	t21 = ((x85<x86)-(x87^x88));

	if (t21 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int8_t x90 = 2;
	static int64_t x91 = -122852LL;
	uint16_t x92 = UINT16_MAX;
	static volatile int64_t t22 = -3LL;

	t22 = ((x89<x90)-(x91^x92));

	if (t22 != 73757LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	static int32_t x94 = INT32_MIN;
	static int8_t x95 = -1;
	static int64_t t23 = 2836569175727947LL;

	t23 = ((x93<x94)-(x95^x96));

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 268072250;
	uint64_t x98 = 101958069488LLU;
	int16_t x99 = INT16_MAX;
	uint16_t x100 = 3U;
	volatile int32_t t24 = -119623;

	t24 = ((x97<x98)-(x99^x100));

	if (t24 != -32763) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x101 = 96657;
	int8_t x102 = -1;
	static uint8_t x103 = 103U;
	uint32_t x104 = UINT32_MAX;

	t25 = ((x101<x102)-(x103^x104));

	if (t25 != 104U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int32_t x106 = INT32_MIN;
	int16_t x107 = INT16_MIN;
	int32_t t26 = 650;

	t26 = ((x105<x106)-(x107^x108));

	if (t26 != -32640) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MIN;
	int32_t x111 = -1;
	int64_t x112 = INT64_MIN;

	t27 = ((x109<x110)-(x111^x112));

	if (t27 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	volatile uint8_t x114 = 4U;
	static int64_t x116 = INT64_MIN;

	t28 = ((x113<x114)-(x115^x116));

	if (t28 != 9223372036854775600LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static uint64_t x118 = UINT64_MAX;
	static uint8_t x119 = 5U;
	int8_t x120 = INT8_MIN;

	t29 = ((x117<x118)-(x119^x120));

	if (t29 != 124) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	volatile int32_t x122 = -1;
	int32_t x123 = INT32_MAX;
	uint32_t t30 = 701590U;

	t30 = ((x121<x122)-(x123^x124));

	if (t30 != 2147483662U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int32_t x126 = -1;
	volatile int32_t x127 = INT32_MIN;
	uint8_t x128 = UINT8_MAX;

	t31 = ((x125<x126)-(x127^x128));

	if (t31 != 2147483393) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int64_t x130 = INT64_MIN;
	int32_t x132 = INT32_MIN;
	static int64_t t32 = 264438077819LL;

	t32 = ((x129<x130)-(x131^x132));

	if (t32 != -2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -7;
	volatile uint8_t x134 = 0U;
	int32_t x135 = -72;
	volatile int16_t x136 = 92;
	static volatile int32_t t33 = -304635061;

	t33 = ((x133<x134)-(x135^x136));

	if (t33 != 29) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -22;

	t34 = ((x137<x138)-(x139^x140));

	if (t34 != 4294936307U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	static volatile int8_t x143 = -1;
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -276239;

	t35 = ((x141<x142)-(x143^x144));

	if (t35 != -2147483646) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int64_t x146 = 3720583778926560LL;
	uint64_t x147 = 3768920671989513834LLU;
	uint8_t x148 = 8U;
	volatile uint64_t t36 = 38216973774LLU;

	t36 = ((x145<x146)-(x147^x148));

	if (t36 != 14677823401720037791LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x150 = UINT32_MAX;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MAX;

	t37 = ((x149<x150)-(x151^x152));

	if (t37 != 2147450882) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -7;
	volatile int16_t x154 = INT16_MIN;
	volatile uint32_t x155 = UINT32_MAX;
	int16_t x156 = INT16_MIN;
	static volatile uint32_t t38 = 8729387U;

	t38 = ((x153<x154)-(x155^x156));

	if (t38 != 4294934529U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 9U;
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MAX;
	int8_t x160 = 55;
	static int64_t t39 = 401LL;

	t39 = ((x157<x158)-(x159^x160));

	if (t39 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	static volatile int16_t x162 = -1;
	uint16_t x164 = UINT16_MAX;
	volatile uint32_t t40 = 156U;

	t40 = ((x161<x162)-(x163^x164));

	if (t40 != 4294908083U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = -1243735148769094LL;
	volatile int64_t x167 = -382562129325834155LL;
	int32_t x168 = -8000;
	int64_t t41 = 100173942787033LL;

	t41 = ((x165<x166)-(x167^x168));

	if (t41 != -382562129325826197LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -7318;
	static int16_t x170 = 61;
	volatile uint16_t x171 = 9342U;
	int8_t x172 = 1;
	int32_t t42 = 9;

	t42 = ((x169<x170)-(x171^x172));

	if (t42 != -9342) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MAX;
	uint8_t x175 = UINT8_MAX;
	int8_t x176 = -1;
	int32_t t43 = -187106;

	t43 = ((x173<x174)-(x175^x176));

	if (t43 != 257) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 2551070082975167148LL;
	static int64_t x179 = 853LL;
	int32_t x180 = 11783;
	int64_t t44 = -42558LL;

	t44 = ((x177<x178)-(x179^x180));

	if (t44 != -11602LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 17626616204479LLU;
	int32_t x182 = 455650594;
	volatile int8_t x183 = INT8_MIN;
	volatile int8_t x184 = -1;
	int32_t t45 = -240018;

	t45 = ((x181<x182)-(x183^x184));

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 0U;
	int16_t x187 = INT16_MIN;
	int8_t x188 = 0;
	static volatile int32_t t46 = -29865;

	t46 = ((x185<x186)-(x187^x188));

	if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x192 = INT16_MIN;
	int32_t t47 = 283;

	t47 = ((x189<x190)-(x191^x192));

	if (t47 != -32640) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	static int64_t x194 = -1LL;
	int16_t x196 = INT16_MAX;
	static volatile int32_t t48 = -5158504;

	t48 = ((x193<x194)-(x195^x196));

	if (t48 != -2147450879) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = -1LL;
	uint64_t x202 = 1LLU;
	static uint16_t x203 = 1679U;
	uint16_t x204 = 1871U;
	volatile int32_t t49 = -1;

	t49 = ((x201<x202)-(x203^x204));

	if (t49 != -448) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 14U;
	int16_t x206 = -1;
	int64_t x207 = 506746705696693488LL;
	volatile int64_t t50 = 255958518266012LL;

	t50 = ((x205<x206)-(x207^x208));

	if (t50 != 506746705696693489LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -61;
	static uint64_t x210 = 3838267LLU;
	uint16_t x211 = 61U;

	t51 = ((x209<x210)-(x211^x212));

	if (t51 != 62) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = UINT32_MAX;
	int32_t x214 = -1;
	uint32_t x215 = UINT32_MAX;
	uint8_t x216 = UINT8_MAX;

	t52 = ((x213<x214)-(x215^x216));

	if (t52 != 256U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x218 = 3632517;
	int8_t x219 = INT8_MAX;
	int8_t x220 = -1;
	volatile int32_t t53 = 3;

	t53 = ((x217<x218)-(x219^x220));

	if (t53 != 129) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x221 = -1;
	volatile int64_t x222 = INT64_MIN;
	uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MAX;
	volatile int64_t t54 = 0LL;

	t54 = ((x221<x222)-(x223^x224));

	if (t54 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = 2365U;
	volatile int64_t x226 = -1LL;
	volatile uint64_t x227 = 68169287635213LLU;
	int32_t x228 = INT32_MIN;

	t55 = ((x225<x226)-(x227^x228));

	if (t55 != 68168006725363LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x229 = 4428335U;
	static uint8_t x230 = UINT8_MAX;
	uint8_t x231 = 0U;
	volatile int32_t t56 = 24963420;

	t56 = ((x229<x230)-(x231^x232));

	if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = -1LL;
	uint64_t x234 = 25771327433848740LLU;
	uint16_t x235 = 239U;
	volatile uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t57 = 45372789LLU;

	t57 = ((x233<x234)-(x235^x236));

	if (t57 != 240LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x238 = INT8_MIN;
	volatile uint16_t x239 = 112U;
	uint8_t x240 = 2U;
	static int32_t t58 = -98;

	t58 = ((x237<x238)-(x239^x240));

	if (t58 != -114) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x241 = -1;
	uint16_t x242 = 5133U;
	uint16_t x243 = 380U;
	int8_t x244 = INT8_MIN;
	static int32_t t59 = 890269424;

	t59 = ((x241<x242)-(x243^x244));

	if (t59 != 261) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	int32_t x246 = 6;
	int16_t x247 = 207;
	int8_t x248 = -56;
	volatile int32_t t60 = 0;

	t60 = ((x245<x246)-(x247^x248));

	if (t60 != 250) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -5;

	t61 = ((x249<x250)-(x251^x252));

	if (t61 != 2549635509438961LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -1;
	int8_t x254 = -1;
	volatile int32_t x255 = -259440;
	int32_t x256 = INT32_MIN;
	int32_t t62 = 96;

	t62 = ((x253<x254)-(x255^x256));

	if (t62 != -2147224208) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = INT8_MIN;
	uint32_t x258 = 150U;
	int64_t x260 = INT64_MAX;
	int64_t t63 = 40220032053241407LL;

	t63 = ((x257<x258)-(x259^x260));

	if (t63 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = -1LL;
	int8_t x263 = INT8_MAX;
	uint16_t x264 = 113U;

	t64 = ((x261<x262)-(x263^x264));

	if (t64 != -13) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = 2000653185913629669LL;
	uint32_t x266 = 3814U;
	uint16_t x267 = 2611U;
	int8_t x268 = INT8_MAX;

	t65 = ((x265<x266)-(x267^x268));

	if (t65 != -2636) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = 7U;
	int16_t x270 = INT16_MAX;
	volatile int32_t x271 = INT32_MAX;
	volatile uint8_t x272 = UINT8_MAX;
	volatile int32_t t66 = -614074;

	t66 = ((x269<x270)-(x271^x272));

	if (t66 != -2147483391) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x273 = 3;
	int64_t x275 = -57LL;
	uint64_t x276 = 6253804042330745LLU;

	t67 = ((x273<x274)-(x275^x276));

	if (t67 != 6253804042330690LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x278 = -1LL;
	int16_t x279 = INT16_MAX;
	volatile uint8_t x280 = UINT8_MAX;
	volatile int32_t t68 = -21038755;

	t68 = ((x277<x278)-(x279^x280));

	if (t68 != -32512) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	uint8_t x282 = 3U;
	int32_t x283 = -803;
	uint32_t x284 = 146212U;
	volatile uint32_t t69 = 1696780871U;

	t69 = ((x281<x282)-(x283^x284));

	if (t69 != 145416U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x285 = 8076816555LL;
	static uint64_t x286 = 174895309929LLU;
	uint16_t x287 = 2325U;
	int16_t x288 = INT16_MIN;

	t70 = ((x285<x286)-(x287^x288));

	if (t70 != 30444) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x290 = -20;
	int8_t x292 = -1;
	volatile int32_t t71 = 337;

	t71 = ((x289<x290)-(x291^x292));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = INT64_MIN;
	int16_t x295 = -1;
	volatile int32_t t72 = 10;

	t72 = ((x293<x294)-(x295^x296));

	if (t72 != 10) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = 582;
	int16_t x298 = INT16_MAX;
	uint8_t x299 = UINT8_MAX;

	t73 = ((x297<x298)-(x299^x300));

	if (t73 != 257LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = -19791;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = 26700140023374LL;
	volatile int64_t t74 = -790843516132LL;

	t74 = ((x301<x302)-(x303^x304));

	if (t74 != 26701335851443LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x307 = INT8_MIN;
	static uint8_t x308 = UINT8_MAX;
	int32_t t75 = -12;

	t75 = ((x305<x306)-(x307^x308));

	if (t75 != 130) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x309 = -1;
	volatile int16_t x310 = 0;
	int32_t x311 = 1;
	int8_t x312 = -9;
	static volatile int32_t t76 = -477295;

	t76 = ((x309<x310)-(x311^x312));

	if (t76 != 11) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	static int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MAX;

	t77 = ((x313<x314)-(x315^x316));

	if (t77 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x319 = 3U;
	uint16_t x320 = UINT16_MAX;
	int32_t t78 = 8551;

	t78 = ((x317<x318)-(x319^x320));

	if (t78 != -65531) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MIN;
	static int16_t x322 = INT16_MAX;
	int32_t x323 = -406;
	volatile int16_t x324 = -1;
	volatile int32_t t79 = -4;

	t79 = ((x321<x322)-(x323^x324));

	if (t79 != -404) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = UINT16_MAX;
	uint64_t x327 = UINT64_MAX;
	volatile int16_t x328 = INT16_MIN;
	static uint64_t t80 = 88550731687LLU;

	t80 = ((x325<x326)-(x327^x328));

	if (t80 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = -3968537;
	volatile uint8_t x332 = 5U;
	static volatile int64_t t81 = -545LL;

	t81 = ((x329<x330)-(x331^x332));

	if (t81 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = 0;
	uint16_t x334 = 9U;
	uint64_t x335 = UINT64_MAX;
	volatile uint64_t t82 = 7643492645827673LLU;

	t82 = ((x333<x334)-(x335^x336));

	if (t82 != 2147483649LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x337 = UINT16_MAX;
	volatile uint16_t x338 = UINT16_MAX;
	static int32_t x339 = INT32_MAX;
	static int8_t x340 = -14;

	t83 = ((x337<x338)-(x339^x340));

	if (t83 != 2147483635) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -1;
	int16_t x342 = 1550;
	volatile int16_t x343 = INT16_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t84 = -508409;

	t84 = ((x341<x342)-(x343^x344));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = 17;
	volatile int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	int64_t x348 = -1LL;

	t85 = ((x345<x346)-(x347^x348));

	if (t85 != -2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = 315457018U;
	int8_t x351 = -1;
	volatile int32_t t86 = -1287;

	t86 = ((x349<x350)-(x351^x352));

	if (t86 != 65536) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x353 = 30221010U;
	uint8_t x354 = 51U;
	static volatile int32_t x355 = -1;
	volatile int32_t t87 = 962;

	t87 = ((x353<x354)-(x355^x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MIN;
	int32_t x359 = -1;
	volatile int8_t x360 = INT8_MIN;
	static int32_t t88 = -62064;

	t88 = ((x357<x358)-(x359^x360));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = INT32_MIN;
	uint32_t x362 = 170128591U;
	volatile uint64_t x363 = 461702851509LLU;
	volatile int8_t x364 = 0;
	uint64_t t89 = 495933785733609LLU;

	t89 = ((x361<x362)-(x363^x364));

	if (t89 != 18446743612006700107LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x366 = -1;
	volatile int8_t x367 = INT8_MIN;
	int32_t t90 = 340207555;

	t90 = ((x365<x366)-(x367^x368));

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x369 = -35;
	volatile int8_t x370 = -1;
	int32_t x371 = 1;
	volatile uint32_t x372 = UINT32_MAX;
	volatile uint32_t t91 = 477U;

	t91 = ((x369<x370)-(x371^x372));

	if (t91 != 3U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x373 = 4;
	int8_t x374 = -1;
	int64_t x375 = -3897030576308LL;
	static uint16_t x376 = 10715U;
	static int64_t t92 = 3971228LL;

	t92 = ((x373<x374)-(x375^x376));

	if (t92 != 3897030582633LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = 45722LLU;
	uint8_t x378 = 66U;
	int8_t x379 = INT8_MIN;

	t93 = ((x377<x378)-(x379^x380));

	if (t93 != -32640) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = 150809942U;
	int64_t x382 = -184210868331797934LL;
	static int64_t x383 = -1LL;
	volatile int64_t t94 = 895105LL;

	t94 = ((x381<x382)-(x383^x384));

	if (t94 != -32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x386 = INT8_MIN;
	int16_t x387 = -2;
	volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t95 = -21;

	t95 = ((x385<x386)-(x387^x388));

	if (t95 != 256) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x389 = UINT64_MAX;
	volatile int16_t x390 = -3488;
	uint64_t x391 = 10379534618857923LLU;
	int16_t x392 = -1926;
	uint64_t t96 = 68LLU;

	t96 = ((x389<x390)-(x391^x392));

	if (t96 != 10379534618859079LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x393 = INT8_MAX;
	static uint16_t x394 = 374U;
	uint8_t x396 = UINT8_MAX;
	static int32_t t97 = 1049;

	t97 = ((x393<x394)-(x395^x396));

	if (t97 != 32514) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x397 = 705LLU;
	int64_t x398 = -486151984427LL;
	uint16_t x399 = 0U;

	t98 = ((x397<x398)-(x399^x400));

	if (t98 != 18446744073709551215LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = 406007;
	volatile uint8_t x403 = 28U;
	uint8_t x404 = 0U;

	t99 = ((x401<x402)-(x403^x404));

	if (t99 != -28) { NG(); } else { ; }
	
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

