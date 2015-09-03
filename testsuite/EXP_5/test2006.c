#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x7 = 106244626795LLU;
static uint32_t x18 = 56894U;
volatile uint16_t x22 = 1U;
static int64_t x27 = 6544014602LL;
uint8_t x28 = 0U;
uint16_t x29 = 1637U;
static uint32_t x32 = 120464U;
int32_t x35 = INT32_MIN;
static int8_t x37 = INT8_MIN;
volatile uint64_t t9 = 3343LLU;
static uint16_t x48 = UINT16_MAX;
static uint64_t x50 = 457461565691205LLU;
int32_t x54 = 0;
uint64_t x55 = 18318256398LLU;
uint8_t x59 = 0U;
uint16_t x63 = UINT16_MAX;
uint8_t x64 = UINT8_MAX;
volatile uint64_t x65 = 12741LLU;
int16_t x69 = INT16_MAX;
int16_t x71 = -3759;
volatile int32_t t17 = -1470005;
int32_t x79 = INT32_MAX;
uint64_t x80 = UINT64_MAX;
volatile uint64_t t18 = 14019159019016286LLU;
static int32_t x86 = 1203;
int64_t x87 = -1LL;
volatile int64_t t20 = -907829576LL;
int8_t x92 = INT8_MAX;
uint64_t t21 = 1299LLU;
int32_t x102 = 2045;
uint64_t x114 = 909LLU;
int16_t x120 = 439;
uint16_t x126 = UINT16_MAX;
volatile int32_t t30 = -93491;
uint8_t x144 = UINT8_MAX;
int64_t x152 = -1LL;
volatile uint16_t x153 = 1U;
int8_t x159 = INT8_MIN;
volatile int64_t t38 = -17656707285806LL;
static volatile int32_t x162 = INT32_MIN;
int64_t x167 = INT64_MAX;
volatile int32_t x168 = 54810;
static volatile uint16_t x180 = 1985U;
static int8_t x188 = INT8_MIN;
volatile int64_t t47 = -8988456983LL;
volatile int8_t x201 = 8;
static volatile int32_t t49 = -13645;
int64_t x209 = -1LL;
uint32_t x217 = 936066876U;
uint8_t x220 = 12U;
static volatile int16_t x222 = INT16_MIN;
int64_t x224 = -1657094734739017137LL;
volatile uint64_t x229 = UINT64_MAX;
uint8_t x232 = 1U;
static uint16_t x234 = 6382U;
uint8_t x242 = UINT8_MAX;
int16_t x244 = -1;
int32_t x264 = INT32_MAX;
uint32_t x265 = 16783245U;
int8_t x267 = 2;
volatile int8_t x268 = -1;
volatile uint32_t t64 = 732U;
int64_t x271 = INT64_MIN;
int16_t x272 = INT16_MIN;
int64_t t65 = 71027218816256439LL;
volatile uint64_t x275 = 16545152983LLU;
static uint16_t x279 = UINT16_MAX;
int16_t x286 = -1;
int64_t x287 = INT64_MAX;
static int64_t x292 = -2726846642742601LL;
int16_t x300 = -52;
static volatile int8_t x301 = INT8_MIN;
uint64_t x303 = UINT64_MAX;
int32_t x305 = 9628;
uint8_t x306 = UINT8_MAX;
static int64_t t73 = 525659LL;
volatile int32_t x311 = INT32_MIN;
int16_t x315 = INT16_MIN;
static volatile uint32_t t75 = 0U;
static int16_t x318 = INT16_MAX;
uint64_t t77 = 15LLU;
int8_t x325 = INT8_MAX;
volatile uint16_t x327 = 322U;
static int64_t x331 = INT64_MIN;
static uint64_t x332 = 194LLU;
static int64_t t80 = -1027597LL;
int64_t t81 = 3274897LL;
int32_t x345 = INT32_MIN;
int32_t x346 = 25816;
uint32_t t82 = 0U;
static uint64_t x351 = 75943LLU;
volatile int8_t x359 = 0;
uint32_t x360 = 1071070221U;
volatile uint32_t t85 = 0U;
int32_t t86 = 1717;
static volatile uint32_t x368 = UINT32_MAX;
int16_t x369 = INT16_MIN;
int32_t x370 = -1;
int8_t x377 = 0;
int64_t x380 = INT64_MIN;
int64_t t90 = 0LL;
int8_t x391 = INT8_MAX;
uint32_t x410 = 63U;
uint32_t x413 = 0U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	volatile uint32_t x2 = 11207170U;
	volatile int32_t x3 = -22889;
	int8_t x4 = INT8_MIN;
	static uint32_t t0 = 27257497U;

	t0 = (x1/((x2|x3)|x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = -24;
	static int64_t x8 = INT64_MAX;
	uint64_t t1 = 97141878140LLU;

	t1 = (x5/((x6|x7)|x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	volatile uint8_t x10 = UINT8_MAX;
	volatile int16_t x11 = -4;
	int64_t x12 = 64186LL;
	volatile int64_t t2 = 8756261497867676LL;

	t2 = (x9/((x10|x11)|x12));

	if (t2 != 32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MAX;
	volatile int32_t x15 = INT32_MAX;
	int8_t x16 = -1;
	int64_t t3 = -229825LL;

	t3 = (x13/((x14|x15)|x16));

	if (t3 != -32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -77;
	volatile int8_t x19 = INT8_MIN;
	static int16_t x20 = -1;
	static uint32_t t4 = 96632U;

	t4 = (x17/((x18|x19)|x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 25U;
	int64_t x23 = INT64_MIN;
	int16_t x24 = -1;
	int64_t t5 = 20380974829064LL;

	t5 = (x21/((x22|x23)|x24));

	if (t5 != -25LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -593193270;
	static int16_t x26 = -360;
	int64_t t6 = 80LL;

	t6 = (x25/((x26|x27)|x28));

	if (t6 != 5815620LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 253714868198822059LLU;
	volatile uint16_t x31 = 0U;
	uint64_t t7 = 63121191494166LLU;

	t7 = (x29/((x30|x31)|x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 6;
	static uint64_t x34 = UINT64_MAX;
	int8_t x36 = INT8_MAX;
	volatile uint64_t t8 = 6845512LLU;

	t8 = (x33/((x34|x35)|x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = 2;
	static int16_t x39 = INT16_MAX;
	uint64_t x40 = 17407238857984LLU;

	t9 = (x37/((x38|x39)|x40));

	if (t9 != 1059716LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 1070U;
	uint8_t x42 = 4U;
	static uint8_t x43 = 13U;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -3;

	t10 = (x41/((x42|x43)|x44));

	if (t10 != -9) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 431773U;
	volatile int32_t x46 = -162;
	volatile uint32_t x47 = UINT32_MAX;
	static volatile uint32_t t11 = 226U;

	t11 = (x45/((x46|x47)|x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	int32_t x51 = 1548764;
	int8_t x52 = INT8_MIN;
	uint64_t t12 = 436006717LLU;

	t12 = (x49/((x50|x51)|x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int8_t x56 = 5;
	uint64_t t13 = 61333158479LLU;

	t13 = (x53/((x54|x55)|x56));

	if (t13 != 1007014186LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 1553U;
	volatile uint32_t x58 = 5132596U;
	uint16_t x60 = UINT16_MAX;
	uint32_t t14 = 94U;

	t14 = (x57/((x58|x59)|x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = 13299LL;
	volatile int64_t t15 = 69395421802479LL;

	t15 = (x61/((x62|x63)|x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = 1468792581358LL;
	volatile uint64_t x67 = 3077617LLU;
	int16_t x68 = INT16_MAX;
	static uint64_t t16 = 10324383535318LLU;

	t16 = (x65/((x66|x67)|x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = 11;
	uint16_t x72 = 207U;

	t17 = (x69/((x70|x71)|x72));

	if (t17 != -9) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	uint32_t x78 = 9U;

	t18 = (x77/((x78|x79)|x80));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = UINT32_MAX;
	uint16_t x82 = 1U;
	static uint8_t x83 = 10U;
	static int32_t x84 = INT32_MIN;
	volatile uint32_t t19 = 0U;

	t19 = (x81/((x82|x83)|x84));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x88 = 75U;

	t20 = (x85/((x86|x87)|x88));

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 13U;
	int64_t x90 = -19383454LL;
	uint64_t x91 = 10096365LLU;

	t21 = (x89/((x90|x91)|x92));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -7;
	int8_t x94 = INT8_MIN;
	int8_t x95 = -1;
	int16_t x96 = INT16_MAX;
	int32_t t22 = 1;

	t22 = (x93/((x94|x95)|x96));

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	uint16_t x98 = 82U;
	volatile uint32_t x99 = 1074578U;
	volatile uint64_t x100 = 2047905520669LLU;
	static volatile uint64_t t23 = 293584952420518LLU;

	t23 = (x97/((x98|x99)|x100));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	volatile int64_t x103 = INT64_MIN;
	static uint32_t x104 = 82567U;
	volatile int64_t t24 = -1947835735269843LL;

	t24 = (x101/((x102|x103)|x104));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x105 = UINT64_MAX;
	volatile int16_t x106 = INT16_MIN;
	uint32_t x107 = 81538U;
	static int16_t x108 = INT16_MIN;
	volatile uint64_t t25 = 4067905183211LLU;

	t25 = (x105/((x106|x107)|x108));

	if (t25 != 4294984062LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = UINT32_MAX;
	uint32_t x110 = 636648U;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t26 = 1761891951LLU;

	t26 = (x109/((x110|x111)|x112));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = -39;
	volatile int8_t x115 = INT8_MIN;
	int64_t x116 = 2038692LL;
	volatile uint64_t t27 = 4LLU;

	t27 = (x113/((x114|x115)|x116));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 526612766532LLU;
	static int16_t x118 = INT16_MIN;
	static volatile int64_t x119 = INT64_MAX;
	uint64_t t28 = 4894LLU;

	t28 = (x117/((x118|x119)|x120));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = -20103959LL;
	static int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MIN;
	volatile int64_t t29 = 558965872224769317LL;

	t29 = (x121/((x122|x123)|x124));

	if (t29 != 5LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = 1;
	int8_t x127 = 8;
	int8_t x128 = INT8_MIN;

	t30 = (x125/((x126|x127)|x128));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MAX;
	uint16_t x130 = 117U;
	uint64_t x131 = 144083LLU;
	uint16_t x132 = 6117U;
	uint64_t t31 = 2040943274522LLU;

	t31 = (x129/((x130|x131)|x132));

	if (t31 != 14769LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 102U;
	int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	int8_t x136 = 3;
	volatile int64_t t32 = -3937581LL;

	t32 = (x133/((x134|x135)|x136));

	if (t32 != -102LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MIN;
	static int8_t x140 = -1;
	int32_t t33 = 288156;

	t33 = (x137/((x138|x139)|x140));

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = 15;
	int32_t x143 = 2682898;
	volatile int64_t t34 = -13594920146LL;

	t34 = (x141/((x142|x143)|x144));

	if (t34 != 3437535583134LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static volatile uint16_t x146 = 8943U;
	uint16_t x147 = 2U;
	static uint32_t x148 = UINT32_MAX;
	uint32_t t35 = 5560460U;

	t35 = (x145/((x146|x147)|x148));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = INT32_MAX;
	int16_t x150 = -1;
	volatile int8_t x151 = -1;
	int64_t t36 = 90416687LL;

	t36 = (x149/((x150|x151)|x152));

	if (t36 != -2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x154 = -1;
	int32_t x155 = INT32_MAX;
	volatile int16_t x156 = INT16_MIN;
	static int32_t t37 = -2551575;

	t37 = (x153/((x154|x155)|x156));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = 261U;
	int64_t x158 = INT64_MIN;
	static int16_t x160 = -1;

	t38 = (x157/((x158|x159)|x160));

	if (t38 != -261LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x161 = -587;
	int16_t x163 = -1;
	volatile int16_t x164 = INT16_MAX;
	static volatile int32_t t39 = 1;

	t39 = (x161/((x162|x163)|x164));

	if (t39 != 587) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	volatile int64_t t40 = 407410LL;

	t40 = (x165/((x166|x167)|x168));

	if (t40 != 128LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = -2376LL;
	volatile int8_t x174 = -1;
	static uint8_t x175 = 0U;
	int32_t x176 = INT32_MIN;
	int64_t t41 = 17660606883804985LL;

	t41 = (x173/((x174|x175)|x176));

	if (t41 != 2376LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -1;
	uint64_t x178 = 19581552863114622LLU;
	static volatile int32_t x179 = INT32_MIN;
	volatile uint64_t t42 = 4LLU;

	t42 = (x177/((x178|x179)|x180));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	static int16_t x182 = -1;
	volatile int32_t x183 = INT32_MIN;
	uint16_t x184 = 2505U;
	int32_t t43 = -2;

	t43 = (x181/((x182|x183)|x184));

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x185 = -8881477LL;
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = INT16_MIN;
	volatile int64_t t44 = 485954781241251LL;

	t44 = (x185/((x186|x187)|x188));

	if (t44 != 8881477LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 195645LL;
	int16_t x190 = 46;
	static int64_t x191 = -4400104417738577222LL;
	uint16_t x192 = 52U;
	static volatile int64_t t45 = -135431173LL;

	t45 = (x189/((x190|x191)|x192));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	volatile uint32_t x194 = 1084367U;
	uint16_t x195 = 159U;
	static uint32_t x196 = 10990472U;
	static volatile int64_t t46 = 731131616LL;

	t46 = (x193/((x194|x195)|x196));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	volatile int64_t x198 = -4LL;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = 81U;

	t47 = (x197/((x198|x199)|x200));

	if (t47 != 42LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x202 = INT32_MIN;
	volatile int8_t x203 = 3;
	static int8_t x204 = 1;
	volatile int32_t t48 = -41;

	t48 = (x201/((x202|x203)|x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x205 = INT32_MAX;
	static uint8_t x206 = 86U;
	int16_t x207 = -1;
	int32_t x208 = -1;

	t49 = (x205/((x206|x207)|x208));

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x210 = 807U;
	static uint8_t x211 = 108U;
	int64_t x212 = 4458338714447796LL;
	int64_t t50 = 3276730814LL;

	t50 = (x209/((x210|x211)|x212));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x213 = 970U;
	int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t51 = 1087713149530LL;

	t51 = (x213/((x214|x215)|x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x218 = 2;
	int32_t x219 = 45;
	volatile uint32_t t52 = 30U;

	t52 = (x217/((x218|x219)|x220));

	if (t52 != 19916316U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	int64_t x223 = INT64_MIN;
	volatile int64_t t53 = 7LL;

	t53 = (x221/((x222|x223)|x224));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -1;
	int32_t x226 = -1;
	uint32_t x227 = 156U;
	int8_t x228 = INT8_MAX;
	volatile uint32_t t54 = 425U;

	t54 = (x225/((x226|x227)|x228));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x230 = INT16_MIN;
	int32_t x231 = -7290606;
	uint64_t t55 = 373LLU;

	t55 = (x229/((x230|x231)|x232));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = 1;
	int16_t x235 = INT16_MIN;
	volatile int32_t x236 = INT32_MIN;
	int32_t t56 = -183225;

	t56 = (x233/((x234|x235)|x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MAX;
	uint8_t x238 = UINT8_MAX;
	uint64_t x239 = UINT64_MAX;
	volatile uint16_t x240 = UINT16_MAX;
	volatile uint64_t t57 = 4174348154255LLU;

	t57 = (x237/((x238|x239)|x240));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -1LL;
	int16_t x243 = INT16_MIN;
	volatile int64_t t58 = -1LL;

	t58 = (x241/((x242|x243)|x244));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	static int64_t x246 = INT64_MIN;
	int64_t x247 = -1LL;
	uint32_t x248 = 265528609U;
	int64_t t59 = -122681342477913LL;

	t59 = (x245/((x246|x247)|x248));

	if (t59 != 128LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	static uint32_t x251 = UINT32_MAX;
	uint8_t x252 = UINT8_MAX;
	uint32_t t60 = 25U;

	t60 = (x249/((x250|x251)|x252));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = -1;
	int8_t x254 = INT8_MIN;
	uint32_t x255 = 422390092U;
	volatile uint16_t x256 = 779U;
	static volatile uint32_t t61 = 2U;

	t61 = (x253/((x254|x255)|x256));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -14415LL;
	int64_t x258 = INT64_MIN;
	volatile int64_t x259 = -256474221103156862LL;
	uint16_t x260 = 11U;
	volatile int64_t t62 = -830LL;

	t62 = (x257/((x258|x259)|x260));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x261 = 5784499320LLU;
	int8_t x262 = 1;
	volatile int64_t x263 = -1LL;
	volatile uint64_t t63 = 2895215904782LLU;

	t63 = (x261/((x262|x263)|x264));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x266 = 0U;

	t64 = (x265/((x266|x267)|x268));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 1840795868U;
	static uint16_t x270 = UINT16_MAX;

	t65 = (x269/((x270|x271)|x272));

	if (t65 != -1840795868LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	int64_t x274 = 273500LL;
	uint32_t x276 = UINT32_MAX;
	volatile uint64_t t66 = 589927816LLU;

	t66 = (x273/((x274|x275)|x276));

	if (t66 != 1073741824LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = 16348431U;
	volatile uint32_t x278 = UINT32_MAX;
	static volatile int8_t x280 = INT8_MAX;
	volatile uint32_t t67 = 7U;

	t67 = (x277/((x278|x279)|x280));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = -1775;
	volatile int32_t x288 = INT32_MIN;
	volatile int64_t t68 = -6LL;

	t68 = (x285/((x286|x287)|x288));

	if (t68 != 1775LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 386U;
	volatile int64_t x290 = -1LL;
	static uint8_t x291 = 0U;
	volatile int64_t t69 = 5LL;

	t69 = (x289/((x290|x291)|x292));

	if (t69 != -386LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x293 = INT8_MAX;
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = 38658101LL;
	int32_t x296 = 26;
	volatile uint64_t t70 = 2297913683672876LLU;

	t70 = (x293/((x294|x295)|x296));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = INT8_MIN;
	int16_t x298 = -1;
	volatile uint64_t x299 = 546543968690LLU;
	static uint64_t t71 = 138919957023LLU;

	t71 = (x297/((x298|x299)|x300));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x302 = INT64_MIN;
	uint16_t x304 = 91U;
	uint64_t t72 = 40743140LLU;

	t72 = (x301/((x302|x303)|x304));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x307 = INT8_MIN;
	static int64_t x308 = INT64_MIN;

	t73 = (x305/((x306|x307)|x308));

	if (t73 != -9628LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x309 = 239U;
	static int32_t x310 = INT32_MIN;
	static volatile int64_t x312 = -1LL;
	static int64_t t74 = -249228016348829159LL;

	t74 = (x309/((x310|x311)|x312));

	if (t74 != -239LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	static uint32_t x316 = 2U;

	t75 = (x313/((x314|x315)|x316));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x317 = 32976307605113800LL;
	static volatile int32_t x319 = -1;
	static int16_t x320 = -1;
	int64_t t76 = 3LL;

	t76 = (x317/((x318|x319)|x320));

	if (t76 != -32976307605113800LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x321 = UINT64_MAX;
	static volatile int16_t x322 = INT16_MIN;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = INT32_MAX;

	t77 = (x321/((x322|x323)|x324));

	if (t77 != 4294967297LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x326 = -1;
	int16_t x328 = INT16_MIN;
	volatile int32_t t78 = 330;

	t78 = (x325/((x326|x327)|x328));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -1;
	static int16_t x330 = -338;
	uint64_t t79 = 1713405407683LLU;

	t79 = (x329/((x330|x331)|x332));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = -1;
	uint8_t x338 = UINT8_MAX;
	volatile int64_t x339 = -1LL;
	uint32_t x340 = UINT32_MAX;

	t80 = (x337/((x338|x339)|x340));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x341 = -1;
	int8_t x342 = INT8_MIN;
	static int64_t x343 = -31941738828909LL;
	static int16_t x344 = INT16_MIN;

	t81 = (x341/((x342|x343)|x344));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x347 = 10139922U;
	static volatile uint8_t x348 = 5U;

	t82 = (x345/((x346|x347)|x348));

	if (t82 != 211U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = -1092;
	volatile int16_t x350 = INT16_MAX;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t83 = 94525658820211LLU;

	t83 = (x349/((x350|x351)|x352));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = 1769;
	static int16_t x355 = -1;
	int8_t x356 = INT8_MIN;
	volatile int32_t t84 = -1;

	t84 = (x353/((x354|x355)|x356));

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x357 = UINT16_MAX;
	uint16_t x358 = UINT16_MAX;

	t85 = (x357/((x358|x359)|x360));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x361 = -1;
	static volatile uint16_t x362 = 1414U;
	static int16_t x363 = 5562;
	volatile int8_t x364 = -1;

	t86 = (x361/((x362|x363)|x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x365 = -1;
	int64_t x366 = -1LL;
	volatile int16_t x367 = INT16_MIN;
	volatile int64_t t87 = 225776706099LL;

	t87 = (x365/((x366|x367)|x368));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x371 = INT64_MAX;
	int32_t x372 = -1;
	int64_t t88 = -318743862169LL;

	t88 = (x369/((x370|x371)|x372));

	if (t88 != 32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = 18;
	int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	static int32_t x376 = INT32_MAX;
	volatile int64_t t89 = -1LL;

	t89 = (x373/((x374|x375)|x376));

	if (t89 != -18LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x378 = 1;
	int32_t x379 = 171;

	t90 = (x377/((x378|x379)|x380));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = -217;
	static int16_t x383 = INT16_MIN;
	int16_t x384 = 39;
	volatile int32_t t91 = -21336814;

	t91 = (x381/((x382|x383)|x384));

	if (t91 != 9896238) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = -1LL;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = 0;
	static uint16_t x388 = 2U;
	volatile int64_t t92 = -1436554456319LL;

	t92 = (x385/((x386|x387)|x388));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x389 = 6384619U;
	int64_t x390 = -1LL;
	uint64_t x392 = 1LLU;
	static volatile uint64_t t93 = 325092LLU;

	t93 = (x389/((x390|x391)|x392));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = -1;
	int16_t x394 = -125;
	int16_t x395 = INT16_MIN;
	uint32_t x396 = 1476300002U;
	static volatile uint32_t t94 = 1080144108U;

	t94 = (x393/((x394|x395)|x396));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MAX;
	static int16_t x398 = -53;
	int32_t x399 = 5;
	volatile int64_t x400 = INT64_MIN;
	static int64_t t95 = -365569363LL;

	t95 = (x397/((x398|x399)|x400));

	if (t95 != -43826196LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MIN;
	volatile int16_t x402 = INT16_MAX;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MIN;
	volatile int64_t t96 = 16319808LL;

	t96 = (x401/((x402|x403)|x404));

	if (t96 != 2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x405 = UINT64_MAX;
	uint8_t x406 = UINT8_MAX;
	static int64_t x407 = INT64_MAX;
	int64_t x408 = 61LL;
	uint64_t t97 = 52385259739LLU;

	t97 = (x405/((x406|x407)|x408));

	if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = 62;
	int16_t x411 = 145;
	uint64_t x412 = 1222235595LLU;
	volatile uint64_t t98 = 4548689900LLU;

	t98 = (x409/((x410|x411)|x412));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x414 = INT64_MIN;
	int16_t x415 = 12;
	static int64_t x416 = INT64_MAX;
	volatile int64_t t99 = 50381203884LL;

	t99 = (x413/((x414|x415)|x416));

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

