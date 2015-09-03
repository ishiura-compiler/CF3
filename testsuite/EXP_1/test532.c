#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -667843934820965LL;
int8_t x5 = INT8_MAX;
int32_t t5 = 1;
int32_t x35 = -4;
static int16_t x38 = INT16_MIN;
int32_t x41 = -1;
int64_t x50 = INT64_MAX;
volatile uint64_t t11 = 15922129610LLU;
static volatile int32_t x72 = -1;
uint8_t x73 = UINT8_MAX;
volatile uint8_t x77 = 69U;
int32_t x78 = INT32_MAX;
volatile uint8_t x79 = UINT8_MAX;
static int16_t x87 = -8918;
static int16_t x89 = INT16_MIN;
uint32_t x90 = UINT32_MAX;
int64_t x92 = -6165LL;
int64_t t18 = -895594562LL;
int16_t x94 = INT16_MIN;
uint64_t x102 = 5641107310358142LLU;
int64_t x103 = 159425293LL;
static volatile int16_t x110 = INT16_MAX;
int32_t t22 = 26605;
int32_t x113 = -31925;
volatile uint32_t x115 = 23U;
volatile uint8_t x119 = 96U;
volatile int64_t t25 = 22LL;
int32_t x126 = INT32_MAX;
int16_t x127 = 34;
static int64_t x130 = INT64_MIN;
uint64_t x140 = 5696495422188615941LLU;
uint8_t x141 = 5U;
int32_t t31 = -855399;
int16_t x156 = INT16_MIN;
int32_t t33 = 323549;
int8_t x157 = INT8_MAX;
int32_t x162 = -37994;
static volatile uint8_t x175 = UINT8_MAX;
int8_t x181 = INT8_MIN;
volatile uint32_t t40 = 34388U;
int16_t x185 = 10551;
int16_t x196 = INT16_MIN;
int64_t x197 = -1LL;
uint64_t x199 = UINT64_MAX;
uint16_t x200 = UINT16_MAX;
uint64_t t44 = 3LLU;
int16_t x203 = INT16_MAX;
int8_t x208 = -1;
uint64_t x209 = 24580031LLU;
int32_t x218 = INT32_MIN;
static int32_t x220 = INT32_MAX;
int16_t x235 = 3;
uint16_t x240 = 2210U;
int8_t x242 = INT8_MIN;
uint8_t x243 = 0U;
volatile int64_t t53 = -352060562205503319LL;
volatile int8_t x247 = INT8_MIN;
uint8_t x259 = 8U;
static int16_t x260 = -1;
int64_t x261 = -1LL;
int64_t x265 = INT64_MAX;
static volatile int64_t x268 = -1278176LL;
uint16_t x280 = 1U;
int8_t x286 = INT8_MIN;
uint64_t x297 = 147378274301159LLU;
int8_t x308 = INT8_MIN;
int8_t x312 = INT8_MAX;
static uint32_t x315 = UINT32_MAX;
int64_t x316 = INT64_MIN;
int64_t x320 = INT64_MIN;
int64_t t72 = -254778LL;
uint64_t t74 = UINT64_MAX;
uint16_t x329 = 24613U;
volatile uint64_t x336 = UINT64_MAX;
volatile uint32_t t77 = 13076604U;
int64_t t79 = -16067228524LL;
volatile int64_t t80 = -28032992678679454LL;
volatile int32_t t83 = -656272981;
int64_t x372 = 44LL;
int8_t x384 = -1;
volatile uint64_t t88 = UINT64_MAX;
volatile int64_t t90 = -194480541LL;
int64_t x396 = INT64_MIN;
uint16_t x397 = 753U;
int16_t x398 = INT16_MAX;
uint64_t x400 = UINT64_MAX;
volatile uint32_t x404 = UINT32_MAX;
uint16_t x405 = UINT16_MAX;
int32_t x408 = INT32_MIN;
volatile int64_t t94 = 37941105400612857LL;
uint32_t x415 = UINT32_MAX;
static uint8_t x417 = UINT8_MAX;
int64_t x418 = 886372982769840LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MIN;
	int64_t x3 = 544707993194915488LL;
	int16_t x4 = 5619;

	t0 = (((x1/x2)-x3)|x4);

	if (t0 != -544707993194914305LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = -1;
	int16_t x7 = -1;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -72994;

	t1 = (((x5/x6)-x7)|x8);

	if (t1 != -126) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static int8_t x10 = -1;
	static int32_t x11 = INT32_MIN;
	static volatile uint8_t x12 = 124U;
	volatile int32_t t2 = 116974424;

	t2 = (((x9/x10)-x11)|x12);

	if (t2 != 2147483645) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int16_t x14 = INT16_MAX;
	uint8_t x15 = 5U;
	int16_t x16 = INT16_MIN;
	int64_t t3 = 16974872217825LL;

	t3 = (((x13/x14)-x15)|x16);

	if (t3 != -32765LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 27738836969324293LL;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = 1U;
	static int64_t x24 = -1LL;
	volatile int64_t t4 = -983584561943303944LL;

	t4 = (((x21/x22)-x23)|x24);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 1U;
	int8_t x30 = INT8_MIN;
	uint8_t x31 = UINT8_MAX;
	volatile int8_t x32 = -1;

	t5 = (((x29/x30)-x31)|x32);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x33 = 197257U;
	uint16_t x34 = UINT16_MAX;
	static int64_t x36 = INT64_MIN;
	volatile int64_t t6 = -3736383757611743981LL;

	t6 = (((x33/x34)-x35)|x36);

	if (t6 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = INT8_MAX;
	volatile int32_t x39 = 98629438;
	int8_t x40 = -1;
	static volatile int32_t t7 = -502003;

	t7 = (((x37/x38)-x39)|x40);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x42 = 2801171869831LLU;
	static int32_t x43 = INT32_MAX;
	int64_t x44 = INT64_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = (((x41/x42)-x43)|x44);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	int16_t x46 = INT16_MIN;
	static int32_t x47 = -10196;
	int32_t x48 = INT32_MIN;
	int32_t t9 = -4061841;

	t9 = (((x45/x46)-x47)|x48);

	if (t9 != -2147473452) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	int32_t x51 = 0;
	uint16_t x52 = UINT16_MAX;
	uint64_t t10 = 2827156934LLU;

	t10 = (((x49/x50)-x51)|x52);

	if (t10 != 65535LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = -1;
	int32_t x55 = -1;
	uint64_t x56 = 2460LLU;

	t11 = (((x53/x54)-x55)|x56);

	if (t11 != 2461LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 0;
	int64_t x58 = -1LL;
	int8_t x59 = INT8_MIN;
	int16_t x60 = -1;
	static volatile int64_t t12 = -10318449LL;

	t12 = (((x57/x58)-x59)|x60);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 0U;
	uint64_t x62 = 3241593296LLU;
	static int8_t x63 = INT8_MAX;
	static uint32_t x64 = UINT32_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (((x61/x62)-x63)|x64);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x70 = 105U;
	int16_t x71 = INT16_MIN;
	static int64_t t14 = 870875760217LL;

	t14 = (((x69/x70)-x71)|x72);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = INT8_MIN;
	uint16_t x75 = 0U;
	int16_t x76 = INT16_MIN;
	volatile int32_t t15 = 8026;

	t15 = (((x73/x74)-x75)|x76);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x80 = INT32_MIN;
	int32_t t16 = -2;

	t16 = (((x77/x78)-x79)|x80);

	if (t16 != -255) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MAX;
	uint32_t x88 = 52U;
	uint32_t t17 = 10383103U;

	t17 = (((x85/x86)-x87)|x88);

	if (t17 != 74492U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x91 = -1;

	t18 = (((x89/x90)-x91)|x92);

	if (t18 != -6165LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = 71678066U;
	uint8_t x95 = UINT8_MAX;
	static uint8_t x96 = UINT8_MAX;
	uint32_t t19 = UINT32_MAX;

	t19 = (((x93/x94)-x95)|x96);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	volatile uint32_t x98 = UINT32_MAX;
	volatile int64_t x99 = INT64_MAX;
	uint8_t x100 = 30U;
	int64_t t20 = 13320LL;

	t20 = (((x97/x98)-x99)|x100);

	if (t20 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -5;
	int64_t x104 = -147LL;
	static volatile uint64_t t21 = 2332LLU;

	t21 = (((x101/x102)-x103)|x104);

	if (t21 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = INT32_MIN;
	int16_t x111 = INT16_MAX;
	uint16_t x112 = 5266U;

	t22 = (((x109/x110)-x111)|x112);

	if (t22 != -98305) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x114 = INT16_MIN;
	uint64_t x116 = 165384404LLU;
	uint64_t t23 = 7817113LLU;

	t23 = (((x113/x114)-x115)|x116);

	if (t23 != 4294967293LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MAX;
	uint32_t x118 = 48U;
	static uint8_t x120 = 41U;
	uint32_t t24 = 78U;

	t24 = (((x117/x118)-x119)|x120);

	if (t24 != 619U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = 63;
	static int64_t x122 = 3591202740667648LL;
	int64_t x123 = INT64_MAX;
	uint8_t x124 = UINT8_MAX;

	t25 = (((x121/x122)-x123)|x124);

	if (t25 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x125 = INT64_MAX;
	volatile int32_t x128 = INT32_MIN;
	static volatile int64_t t26 = 825996LL;

	t26 = (((x125/x126)-x127)|x128);

	if (t26 != -32LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = UINT32_MAX;
	uint64_t x131 = UINT64_MAX;
	int16_t x132 = INT16_MIN;
	uint64_t t27 = 101848700LLU;

	t27 = (((x129/x130)-x131)|x132);

	if (t27 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = 21U;
	int64_t x134 = INT64_MIN;
	volatile int32_t x135 = INT32_MAX;
	int8_t x136 = INT8_MAX;
	int64_t t28 = 191LL;

	t28 = (((x133/x134)-x135)|x136);

	if (t28 != -2147483521LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x137 = UINT64_MAX;
	volatile int8_t x138 = -1;
	int64_t x139 = INT64_MIN;
	volatile uint64_t t29 = 808202168782LLU;

	t29 = (((x137/x138)-x139)|x140);

	if (t29 != 14919867459043391749LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x142 = 102;
	int16_t x143 = INT16_MIN;
	int8_t x144 = -1;
	int32_t t30 = -3304735;

	t30 = (((x141/x142)-x143)|x144);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x145 = 0;
	int8_t x146 = -1;
	int32_t x147 = 925;
	volatile uint16_t x148 = 117U;

	t31 = (((x145/x146)-x147)|x148);

	if (t31 != -905) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x149 = 15U;
	int64_t x150 = INT64_MAX;
	int64_t x151 = INT64_MAX;
	uint64_t x152 = 396LLU;
	uint64_t t32 = 5423704911237678940LLU;

	t32 = (((x149/x150)-x151)|x152);

	if (t32 != 9223372036854776205LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	int32_t x154 = -1;
	volatile uint8_t x155 = UINT8_MAX;

	t33 = (((x153/x154)-x155)|x156);

	if (t33 != -254) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	static volatile int16_t x160 = INT16_MIN;
	int32_t t34 = -455521;

	t34 = (((x157/x158)-x159)|x160);

	if (t34 != -32640) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = -1;
	int64_t x163 = -5799347429821LL;
	int8_t x164 = -1;
	int64_t t35 = -20LL;

	t35 = (((x161/x162)-x163)|x164);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MAX;
	int64_t x166 = INT64_MAX;
	uint8_t x167 = UINT8_MAX;
	int16_t x168 = 77;
	volatile int64_t t36 = -1661427LL;

	t36 = (((x165/x166)-x167)|x168);

	if (t36 != -179LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MAX;
	volatile uint64_t x170 = UINT64_MAX;
	volatile uint16_t x171 = UINT16_MAX;
	int8_t x172 = -1;
	uint64_t t37 = UINT64_MAX;

	t37 = (((x169/x170)-x171)|x172);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = 5U;
	volatile int8_t x174 = -1;
	int16_t x176 = INT16_MAX;
	volatile int32_t t38 = -94468180;

	t38 = (((x173/x174)-x175)|x176);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x177 = 343;
	static int64_t x178 = INT64_MAX;
	uint32_t x179 = 301U;
	static int8_t x180 = -1;
	volatile int64_t t39 = -7LL;

	t39 = (((x177/x178)-x179)|x180);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x182 = 6778505;
	uint32_t x183 = 599321U;
	static volatile int16_t x184 = INT16_MIN;

	t40 = (((x181/x182)-x183)|x184);

	if (t40 != 4294957799U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x186 = 525790739;
	volatile uint64_t x187 = UINT64_MAX;
	uint32_t x188 = UINT32_MAX;
	volatile uint64_t t41 = 67LLU;

	t41 = (((x185/x186)-x187)|x188);

	if (t41 != 4294967295LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MIN;
	int8_t x191 = -1;
	int64_t x192 = -22LL;
	volatile int64_t t42 = 1056339803507LL;

	t42 = (((x189/x190)-x191)|x192);

	if (t42 != -21LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x193 = -1LL;
	int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	volatile int64_t t43 = 230LL;

	t43 = (((x193/x194)-x195)|x196);

	if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x198 = 1U;

	t44 = (((x197/x198)-x199)|x200);

	if (t44 != 65535LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x201 = UINT32_MAX;
	int64_t x202 = -1LL;
	static uint8_t x204 = 56U;
	volatile int64_t t45 = -156225377155LL;

	t45 = (((x201/x202)-x203)|x204);

	if (t45 != -4295000006LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MAX;
	int16_t x206 = -31;
	uint32_t x207 = 26U;
	static uint32_t t46 = UINT32_MAX;

	t46 = (((x205/x206)-x207)|x208);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x210 = 1799;
	static volatile int16_t x211 = INT16_MIN;
	int8_t x212 = -15;
	uint64_t t47 = UINT64_MAX;

	t47 = (((x209/x210)-x211)|x212);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -1000;
	volatile uint32_t x214 = 736758637U;
	int32_t x215 = -371;
	int32_t x216 = 355683883;
	static volatile uint32_t t48 = 22822U;

	t48 = (((x213/x214)-x215)|x216);

	if (t48 != 355684219U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x217 = UINT8_MAX;
	int64_t x219 = -9LL;
	int64_t t49 = -462438906974669LL;

	t49 = (((x217/x218)-x219)|x220);

	if (t49 != 2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	int64_t x222 = -1LL;
	int32_t x223 = -1;
	int16_t x224 = 2;
	int64_t t50 = 138LL;

	t50 = (((x221/x222)-x223)|x224);

	if (t50 != -254LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MAX;
	int32_t x234 = -1;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t51 = -1331295;

	t51 = (((x233/x234)-x235)|x236);

	if (t51 != -32770) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x237 = -1;
	uint16_t x238 = 6055U;
	int32_t x239 = 379263093;
	static volatile int32_t t52 = -1235;

	t52 = (((x237/x238)-x239)|x240);

	if (t52 != -379261013) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x241 = INT64_MIN;
	int8_t x244 = -1;

	t53 = (((x241/x242)-x243)|x244);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = -1;
	int64_t x246 = 33359706015595741LL;
	uint32_t x248 = 404122988U;
	volatile int64_t t54 = 3648122029LL;

	t54 = (((x245/x246)-x247)|x248);

	if (t54 != 404123116LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MIN;
	uint8_t x251 = 2U;
	uint8_t x252 = 43U;
	int32_t t55 = -633743;

	t55 = (((x249/x250)-x251)|x252);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MIN;
	uint16_t x255 = UINT16_MAX;
	int32_t x256 = INT32_MAX;
	volatile int32_t t56 = -301433680;

	t56 = (((x253/x254)-x255)|x256);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int64_t x258 = 896LL;
	static int64_t t57 = 246019038115440042LL;

	t57 = (((x257/x258)-x259)|x260);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x262 = 8210238610583LL;
	static int64_t x263 = INT64_MAX;
	uint16_t x264 = 3753U;
	volatile int64_t t58 = 2LL;

	t58 = (((x261/x262)-x263)|x264);

	if (t58 != -9223372036854772055LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x266 = INT64_MAX;
	uint64_t x267 = 316009LLU;
	uint64_t t59 = 2901633LLU;

	t59 = (((x265/x266)-x267)|x268);

	if (t59 != 18446744073709518776LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = 1;
	int64_t x271 = INT64_MIN;
	static int8_t x272 = INT8_MAX;
	int64_t t60 = INT64_MAX;

	t60 = (((x269/x270)-x271)|x272);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = 210U;
	int16_t x274 = INT16_MIN;
	int16_t x275 = -1;
	int64_t x276 = -718075027284121663LL;
	static int64_t t61 = 5LL;

	t61 = (((x273/x274)-x275)|x276);

	if (t61 != -718075027284121663LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x277 = 16U;
	volatile uint32_t x278 = 3U;
	int32_t x279 = 2;
	uint32_t t62 = 25010U;

	t62 = (((x277/x278)-x279)|x280);

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x281 = 339257946U;
	int16_t x282 = INT16_MIN;
	uint16_t x283 = 2U;
	static volatile uint16_t x284 = 3969U;
	static volatile uint32_t t63 = UINT32_MAX;

	t63 = (((x281/x282)-x283)|x284);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MIN;
	int32_t x287 = 875381349;
	volatile uint32_t x288 = UINT32_MAX;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = (((x285/x286)-x287)|x288);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = 14;
	volatile int16_t x290 = 1325;
	uint64_t x291 = 266166LLU;
	int16_t x292 = -1;
	uint64_t t65 = UINT64_MAX;

	t65 = (((x289/x290)-x291)|x292);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x293 = 4742U;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = INT8_MIN;
	static int16_t x296 = 52;
	volatile uint64_t t66 = 10241LLU;

	t66 = (((x293/x294)-x295)|x296);

	if (t66 != 180LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x298 = 923168019972048887LLU;
	static int8_t x299 = INT8_MIN;
	uint8_t x300 = 91U;
	uint64_t t67 = 18110742655LLU;

	t67 = (((x297/x298)-x299)|x300);

	if (t67 != 219LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x301 = -1;
	int32_t x302 = -1;
	int64_t x303 = INT64_MAX;
	static int64_t x304 = -16137069380524827LL;
	volatile int64_t t68 = -3952874284LL;

	t68 = (((x301/x302)-x303)|x304);

	if (t68 != -16137069380524825LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x305 = 3056217294LLU;
	uint32_t x306 = UINT32_MAX;
	volatile int8_t x307 = -1;
	volatile uint64_t t69 = 99249438473506143LLU;

	t69 = (((x305/x306)-x307)|x308);

	if (t69 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	int32_t x310 = INT32_MAX;
	static volatile int64_t x311 = -88505056787219LL;
	uint64_t t70 = 39061377613897926LLU;

	t70 = (((x309/x310)-x311)|x312);

	if (t70 != 88513646721919LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x313 = 71U;
	volatile int64_t x314 = INT64_MAX;
	volatile int64_t t71 = 1527548787252985LL;

	t71 = (((x313/x314)-x315)|x316);

	if (t71 != -4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = -1;
	int16_t x318 = -67;
	static int8_t x319 = INT8_MIN;

	t72 = (((x317/x318)-x319)|x320);

	if (t72 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = -2004;
	int16_t x322 = INT16_MIN;
	volatile int8_t x323 = INT8_MIN;
	int64_t x324 = -6350936199LL;
	static volatile int64_t t73 = 376564481454075LL;

	t73 = (((x321/x322)-x323)|x324);

	if (t73 != -6350936071LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x325 = UINT8_MAX;
	uint64_t x326 = 1897191757203LLU;
	int16_t x327 = INT16_MAX;
	int32_t x328 = INT32_MAX;

	t74 = (((x325/x326)-x327)|x328);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x330 = INT16_MIN;
	volatile uint16_t x331 = 3051U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t75 = -64665;

	t75 = (((x329/x330)-x331)|x332);

	if (t75 != -107) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x333 = INT64_MAX;
	static int32_t x334 = 12738492;
	static uint8_t x335 = 63U;
	uint64_t t76 = UINT64_MAX;

	t76 = (((x333/x334)-x335)|x336);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int8_t x338 = 5;
	uint32_t x339 = 4U;
	volatile uint32_t x340 = 211493U;

	t77 = (((x337/x338)-x339)|x340);

	if (t77 != 211503U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MAX;
	static uint8_t x343 = 2U;
	uint64_t x344 = UINT64_MAX;
	uint64_t t78 = UINT64_MAX;

	t78 = (((x341/x342)-x343)|x344);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x345 = 1;
	uint8_t x346 = 32U;
	volatile int8_t x347 = -1;
	int64_t x348 = INT64_MIN;

	t79 = (((x345/x346)-x347)|x348);

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x349 = INT64_MIN;
	uint16_t x350 = 2753U;
	int32_t x351 = 507;
	static volatile int32_t x352 = INT32_MIN;

	t80 = (((x349/x350)-x351)|x352);

	if (t80 != -767571850LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x353 = 136U;
	int16_t x354 = -1174;
	int16_t x355 = INT16_MIN;
	static int8_t x356 = -1;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (((x353/x354)-x355)|x356);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x357 = UINT64_MAX;
	int64_t x358 = -27811977LL;
	uint32_t x359 = 213922U;
	volatile int8_t x360 = INT8_MIN;
	uint64_t t82 = 468201LLU;

	t82 = (((x357/x358)-x359)|x360);

	if (t82 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x361 = INT32_MIN;
	uint16_t x362 = 6565U;
	int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;

	t83 = (((x361/x362)-x363)|x364);

	if (t83 != -294342) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MAX;
	int16_t x367 = -1;
	int32_t x368 = 195;
	static int32_t t84 = 0;

	t84 = (((x365/x366)-x367)|x368);

	if (t84 != -16909317) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x369 = UINT64_MAX;
	uint8_t x370 = 23U;
	static volatile int64_t x371 = 0LL;
	volatile uint64_t t85 = 7896993LLU;

	t85 = (((x369/x370)-x371)|x372);

	if (t85 != 802032351030850110LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = INT16_MAX;
	int64_t x374 = -296463969924512430LL;
	volatile int64_t x375 = INT64_MAX;
	int64_t x376 = INT64_MIN;
	static int64_t t86 = 98214LL;

	t86 = (((x373/x374)-x375)|x376);

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = 0U;
	volatile uint32_t t87 = 17U;

	t87 = (((x377/x378)-x379)|x380);

	if (t87 != 163844U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MAX;
	uint64_t x383 = UINT64_MAX;

	t88 = (((x381/x382)-x383)|x384);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x385 = 61U;
	volatile int8_t x386 = INT8_MIN;
	static int32_t x387 = INT32_MIN;
	volatile int32_t x388 = -1;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (((x385/x386)-x387)|x388);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x389 = 59428;
	static int16_t x390 = -1;
	int64_t x391 = 437380865077549LL;
	int8_t x392 = -5;

	t90 = (((x389/x390)-x391)|x392);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x393 = 0U;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = 6619974803312445317LLU;
	volatile uint64_t t91 = 3263857LLU;

	t91 = (((x393/x394)-x395)|x396);

	if (t91 != 11826769270397106299LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x399 = -1;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (((x397/x398)-x399)|x400);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x401 = UINT16_MAX;
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = -1;
	uint32_t t93 = UINT32_MAX;

	t93 = (((x401/x402)-x403)|x404);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x406 = INT64_MIN;
	static int64_t x407 = -27335662797938LL;

	t94 = (((x405/x406)-x407)|x408);

	if (t94 != -1804041102LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = 10U;
	static int16_t x414 = -1;
	int32_t x416 = -1587662;
	volatile uint32_t t95 = 324177U;

	t95 = (((x413/x414)-x415)|x416);

	if (t95 != 4294967287U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x419 = INT8_MIN;
	uint8_t x420 = 5U;
	volatile int64_t t96 = 28348555LL;

	t96 = (((x417/x418)-x419)|x420);

	if (t96 != 133LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = -49;
	volatile int32_t x422 = INT32_MAX;
	volatile uint64_t x423 = UINT64_MAX;
	int32_t x424 = INT32_MIN;
	volatile uint64_t t97 = 2LLU;

	t97 = (((x421/x422)-x423)|x424);

	if (t97 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x425 = INT8_MAX;
	volatile uint8_t x426 = UINT8_MAX;
	int16_t x427 = INT16_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t98 = 136651;

	t98 = (((x425/x426)-x427)|x428);

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = -1;
	int64_t x430 = INT64_MAX;
	volatile int8_t x431 = INT8_MIN;
	int32_t x432 = 38;
	volatile int64_t t99 = -74485910368629LL;

	t99 = (((x429/x430)-x431)|x432);

	if (t99 != 166LL) { NG(); } else { ; }
	
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

