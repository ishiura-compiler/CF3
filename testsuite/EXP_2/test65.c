#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = -1;
volatile uint64_t x15 = UINT64_MAX;
uint16_t x29 = UINT16_MAX;
int64_t x48 = INT64_MAX;
int16_t x50 = -38;
int8_t x53 = INT8_MAX;
volatile uint8_t x57 = UINT8_MAX;
static volatile int16_t x58 = -1;
uint8_t x69 = 0U;
int8_t x72 = INT8_MIN;
uint16_t x74 = 3U;
volatile int16_t x76 = INT16_MAX;
volatile int8_t x81 = 3;
uint64_t x83 = 1430125554018299LLU;
int64_t x87 = INT64_MIN;
volatile int64_t t16 = 245244131215698LL;
int8_t x90 = INT8_MAX;
int64_t x93 = -4115268504910007LL;
uint8_t x94 = 0U;
int64_t t18 = -1596342382248LL;
int64_t x103 = INT64_MIN;
int16_t x106 = INT16_MIN;
int16_t x107 = -1;
uint8_t x109 = 27U;
int8_t x110 = INT8_MIN;
static uint64_t x113 = UINT64_MAX;
int16_t x116 = -226;
uint64_t t24 = 962LLU;
volatile int64_t t25 = INT64_MAX;
int64_t x130 = -200246826LL;
volatile int64_t t26 = 9550264357631LL;
volatile uint8_t x134 = 25U;
uint64_t x136 = 192683LLU;
uint64_t t27 = 963406852LLU;
uint16_t x139 = 1U;
static int8_t x141 = INT8_MIN;
int16_t x142 = 13627;
int8_t x152 = -1;
uint32_t x155 = 55822U;
uint64_t x161 = 128290314LLU;
uint32_t x168 = UINT32_MAX;
int32_t x184 = INT32_MIN;
volatile uint64_t x186 = 1532088651460299LLU;
static volatile int8_t x187 = INT8_MIN;
int16_t x188 = INT16_MIN;
int32_t x196 = -1;
volatile uint64_t x197 = 3960302935065062LLU;
int64_t x199 = -1LL;
static int64_t x200 = 260761LL;
static volatile int32_t x201 = INT32_MAX;
volatile int32_t t40 = -893;
int16_t x206 = -1;
volatile uint32_t t41 = 13876315U;
static volatile int32_t t42 = -1677;
static volatile uint64_t t43 = 39087884156LLU;
int16_t x247 = INT16_MIN;
uint32_t t49 = 162168357U;
uint16_t x258 = 2687U;
int16_t x259 = INT16_MAX;
volatile uint16_t x260 = UINT16_MAX;
uint32_t x264 = 44U;
int8_t x268 = INT8_MIN;
int64_t x293 = 9604015429158263LL;
volatile int64_t x296 = INT64_MIN;
uint64_t x298 = UINT64_MAX;
static int16_t x299 = INT16_MIN;
static volatile uint32_t x301 = 3U;
uint16_t x305 = UINT16_MAX;
int16_t x307 = -1;
uint64_t x326 = UINT64_MAX;
static uint64_t t65 = 1995LLU;
volatile int32_t t66 = -3;
int32_t x343 = 219785888;
uint16_t x346 = 0U;
static uint32_t x351 = UINT32_MAX;
static volatile int64_t t69 = 50066173727094614LL;
static uint64_t x354 = 3280464165084LLU;
volatile uint8_t x364 = 0U;
int16_t x370 = 0;
int16_t x372 = 14;
static uint64_t t74 = 1124564931453452LLU;
volatile int32_t x393 = INT32_MAX;
static volatile uint64_t t77 = 4919917811654LLU;
volatile uint16_t x398 = 506U;
int64_t x401 = INT64_MAX;
volatile int16_t x402 = INT16_MIN;
int8_t x407 = 46;
int8_t x410 = -1;
int8_t x411 = INT8_MAX;
volatile int64_t t82 = -638869LL;
volatile uint16_t x422 = 564U;
volatile int32_t x429 = INT32_MIN;
uint8_t x430 = 1U;
int64_t x439 = -1LL;
int64_t x443 = -1042521034LL;
int64_t t89 = 24LL;
int16_t x451 = -1;
int16_t x457 = INT16_MIN;
int64_t x462 = -1LL;
uint8_t x474 = 30U;
int32_t t95 = INT32_MIN;
volatile int64_t x480 = -1397044359954LL;
uint8_t x493 = UINT8_MAX;
static volatile int16_t x494 = INT16_MAX;
static volatile int32_t t99 = -5329;


void f0(void) {
	int64_t x5 = INT64_MAX;
	int16_t x6 = 2;
	int64_t x7 = INT64_MIN;
	uint8_t x8 = 14U;
	int64_t t0 = 67349LL;

	t0 = ((x5%(x6+x7))^x8);

	if (t0 != 15LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = -1;
	int32_t x10 = -1017;
	static int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MAX;
	int32_t t1 = -362;

	t1 = ((x9%(x10+x11))^x12);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	uint16_t x16 = 695U;
	uint64_t t2 = 586LLU;

	t2 = ((x13%(x14+x15))^x16);

	if (t2 != 18446744073709519543LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x25 = INT16_MIN;
	int32_t x26 = 2;
	int32_t x27 = INT32_MIN;
	volatile int64_t x28 = INT64_MIN;
	volatile int64_t t3 = -55LL;

	t3 = ((x25%(x26+x27))^x28);

	if (t3 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x30 = INT16_MIN;
	static int16_t x31 = 0;
	int32_t x32 = -103672361;
	volatile int32_t t4 = 44488200;

	t4 = ((x29%(x30+x31))^x32);

	if (t4 != -103650776) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MAX;
	int32_t x34 = -525973397;
	static uint64_t x35 = UINT64_MAX;
	uint8_t x36 = UINT8_MAX;
	volatile uint64_t t5 = 51319LLU;

	t5 = ((x33%(x34+x35))^x36);

	if (t5 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = INT32_MIN;
	static uint32_t x38 = 10444832U;
	int8_t x39 = INT8_MIN;
	static int16_t x40 = INT16_MIN;
	uint32_t t6 = 7357302U;

	t6 = ((x37%(x38+x39))^x40);

	if (t6 != 4288670944U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;
	uint8_t x42 = 21U;
	uint64_t x43 = 859578532562LLU;
	volatile int64_t x44 = -1LL;
	volatile uint64_t t7 = 101375590LLU;

	t7 = ((x41%(x42+x43))^x44);

	if (t7 != 18446743556929815677LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 0U;
	uint16_t x46 = 254U;
	int8_t x47 = INT8_MAX;
	int64_t t8 = INT64_MAX;

	t8 = ((x45%(x46+x47))^x48);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -1;
	int64_t x51 = -1LL;
	int32_t x52 = INT32_MIN;
	int64_t t9 = -3797443890873152LL;

	t9 = ((x49%(x50+x51))^x52);

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x54 = UINT64_MAX;
	static int8_t x55 = 11;
	uint8_t x56 = UINT8_MAX;
	uint64_t t10 = 5050192891LLU;

	t10 = ((x53%(x54+x55))^x56);

	if (t10 != 248LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x59 = INT8_MIN;
	volatile uint8_t x60 = 7U;
	int32_t t11 = 2216717;

	t11 = ((x57%(x58+x59))^x60);

	if (t11 != 121) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MIN;
	volatile int16_t x66 = 10;
	int64_t x67 = -1LL;
	static int16_t x68 = -1;
	static volatile int64_t t12 = -159531101653LL;

	t12 = ((x65%(x66+x67))^x68);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x70 = 219540LL;
	int64_t x71 = -1LL;
	volatile int64_t t13 = -35LL;

	t13 = ((x69%(x70+x71))^x72);

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = 23;
	int16_t x75 = INT16_MIN;
	static int32_t t14 = -7792;

	t14 = ((x73%(x74+x75))^x76);

	if (t14 != 32744) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x82 = 14149;
	int32_t x84 = INT32_MIN;
	static uint64_t t15 = 49221751LLU;

	t15 = ((x81%(x82+x83))^x84);

	if (t15 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = INT64_MIN;
	uint16_t x86 = 0U;
	int16_t x88 = INT16_MIN;

	t16 = ((x85%(x86+x87))^x88);

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MIN;
	static int8_t x91 = 1;
	int32_t x92 = INT32_MAX;
	int32_t t17 = INT32_MAX;

	t17 = ((x89%(x90+x91))^x92);

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x95 = 3U;
	int16_t x96 = 1;

	t18 = ((x93%(x94+x95))^x96);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	uint16_t x98 = 27U;
	int64_t x99 = -1LL;
	int32_t x100 = -1865;
	int64_t t19 = 124480037667254LL;

	t19 = ((x97%(x98+x99))^x100);

	if (t19 != 1871LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x101 = 1014806780568LL;
	uint16_t x102 = 289U;
	static int16_t x104 = INT16_MIN;
	static int64_t t20 = -259261405506LL;

	t20 = ((x101%(x102+x103))^x104);

	if (t20 != -1014806799720LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x105 = 331U;
	int32_t x108 = INT32_MAX;
	volatile int32_t t21 = -8806;

	t21 = ((x105%(x106+x107))^x108);

	if (t21 != 2147483316) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x111 = INT16_MAX;
	static int8_t x112 = 59;
	int32_t t22 = -5;

	t22 = ((x109%(x110+x111))^x112);

	if (t22 != 32) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x114 = -1;
	int16_t x115 = INT16_MAX;
	volatile uint64_t t23 = 312LLU;

	t23 = ((x113%(x114+x115))^x116);

	if (t23 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x117 = INT8_MIN;
	volatile int8_t x118 = -1;
	int32_t x119 = INT32_MAX;
	uint64_t x120 = UINT64_MAX;

	t24 = ((x117%(x118+x119))^x120);

	if (t24 != 127LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x125 = -1;
	volatile int64_t x126 = INT64_MAX;
	volatile int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MIN;

	t25 = ((x125%(x126+x127))^x128);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x129 = -1;
	static int32_t x131 = INT32_MIN;
	uint16_t x132 = UINT16_MAX;

	t26 = ((x129%(x130+x131))^x132);

	if (t26 != -65536LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x133 = 1LL;
	static int16_t x135 = -1;

	t27 = ((x133%(x134+x135))^x136);

	if (t27 != 192682LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = INT64_MIN;
	int16_t x138 = -2134;
	uint64_t x140 = 487004LLU;
	volatile uint64_t t28 = 43LLU;

	t28 = ((x137%(x138+x139))^x140);

	if (t28 != 18446744073709065145LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x143 = -1LL;
	static volatile int64_t x144 = INT64_MIN;
	volatile int64_t t29 = -3221399456985202658LL;

	t29 = ((x141%(x142+x143))^x144);

	if (t29 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = -1;
	volatile int16_t x151 = INT16_MIN;
	volatile uint32_t t30 = 844U;

	t30 = ((x149%(x150+x151))^x152);

	if (t30 != 4294934527U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x153 = INT32_MIN;
	static int8_t x154 = INT8_MIN;
	volatile uint8_t x156 = 5U;
	volatile uint32_t t31 = 773582U;

	t31 = ((x153%(x154+x155))^x156);

	if (t31 != 34393U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MIN;
	uint32_t x158 = 6U;
	int64_t x159 = -1LL;
	uint8_t x160 = 1U;
	volatile int64_t t32 = 6LL;

	t32 = ((x157%(x158+x159))^x160);

	if (t32 != -4LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x162 = 543563264863803LL;
	int64_t x163 = 501017494LL;
	uint32_t x164 = 5349227U;
	uint64_t t33 = 4817569642407LLU;

	t33 = ((x161%(x162+x163))^x164);

	if (t33 != 133435745LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 119558028537250082LLU;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MIN;
	static volatile uint64_t t34 = 1226441410LLU;

	t34 = ((x165%(x166+x167))^x168);

	if (t34 != 119558026490134237LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = INT8_MIN;
	int32_t x183 = 13818;
	int32_t t35 = -326;

	t35 = ((x181%(x182+x183))^x184);

	if (t35 != -2147481851) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x185 = 9U;
	uint64_t t36 = 1478455407563LLU;

	t36 = ((x185%(x186+x187))^x188);

	if (t36 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x189 = 13U;
	int64_t x190 = -1LL;
	static int16_t x191 = -1;
	static volatile int32_t x192 = -343;
	volatile int64_t t37 = -54LL;

	t37 = ((x189%(x190+x191))^x192);

	if (t37 != -344LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x193 = UINT64_MAX;
	int16_t x194 = -6616;
	int64_t x195 = -1LL;
	static volatile uint64_t t38 = 2832064LLU;

	t38 = ((x193%(x194+x195))^x196);

	if (t38 != 18446744073709544999LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x198 = -1;
	volatile uint64_t t39 = 66074453340LLU;

	t39 = ((x197%(x198+x199))^x200);

	if (t39 != 3960302935096191LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x202 = 601;
	static int16_t x203 = INT16_MAX;
	int16_t x204 = INT16_MIN;

	t40 = ((x201%(x202+x203))^x204);

	if (t40 != -13497) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x205 = UINT32_MAX;
	int16_t x207 = 2962;
	volatile int32_t x208 = INT32_MIN;

	t41 = ((x205%(x206+x207))^x208);

	if (t41 != 2147484911U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = -1281;
	int8_t x210 = 0;
	int8_t x211 = -1;
	static int8_t x212 = -1;

	t42 = ((x209%(x210+x211))^x212);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = 12;
	volatile uint64_t x214 = 163LLU;
	int8_t x215 = 0;
	uint8_t x216 = 2U;

	t43 = ((x213%(x214+x215))^x216);

	if (t43 != 14LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x217 = INT64_MAX;
	uint8_t x218 = 1U;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MIN;
	volatile int64_t t44 = 13LL;

	t44 = ((x217%(x218+x219))^x220);

	if (t44 != -65409LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x229 = 112U;
	static uint8_t x230 = UINT8_MAX;
	volatile int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	volatile int64_t t45 = -6767275739075188LL;

	t45 = ((x229%(x230+x231))^x232);

	if (t45 != 4294967183LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x241 = -1;
	static int16_t x242 = INT16_MAX;
	int8_t x243 = 1;
	static int8_t x244 = INT8_MAX;
	volatile int32_t t46 = 338743319;

	t46 = ((x241%(x242+x243))^x244);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x245 = INT64_MAX;
	static volatile uint8_t x246 = UINT8_MAX;
	uint16_t x248 = UINT16_MAX;
	int64_t t47 = -167LL;

	t47 = ((x245%(x246+x247))^x248);

	if (t47 != 65528LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x249 = INT64_MIN;
	int16_t x250 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = -48127730427LL;
	int64_t t48 = 1659782689LL;

	t48 = ((x249%(x250+x251))^x252);

	if (t48 != 49738341637LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x253 = INT8_MAX;
	uint16_t x254 = UINT16_MAX;
	static int8_t x255 = 10;
	uint32_t x256 = 913U;

	t49 = ((x253%(x254+x255))^x256);

	if (t49 != 1006U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x257 = UINT8_MAX;
	volatile int32_t t50 = -26622;

	t50 = ((x257%(x258+x259))^x260);

	if (t50 != 65280) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x261 = -19;
	int8_t x262 = 1;
	uint16_t x263 = UINT16_MAX;
	uint32_t t51 = 462418136U;

	t51 = ((x261%(x262+x263))^x264);

	if (t51 != 4294967233U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = INT32_MAX;
	uint16_t x266 = 507U;
	int16_t x267 = 14;
	volatile int32_t t52 = -3;

	t52 = ((x265%(x266+x267))^x268);

	if (t52 != -322) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x269 = INT8_MAX;
	int32_t x270 = -1;
	int8_t x271 = -1;
	static int64_t x272 = INT64_MAX;
	int64_t t53 = 14213531905988836LL;

	t53 = ((x269%(x270+x271))^x272);

	if (t53 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x273 = -1;
	int8_t x274 = 0;
	uint8_t x275 = 52U;
	int64_t x276 = -1LL;
	volatile int64_t t54 = -643555LL;

	t54 = ((x273%(x274+x275))^x276);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x277 = 5808U;
	volatile int16_t x278 = INT16_MAX;
	volatile int16_t x279 = -1;
	int32_t x280 = 462641245;
	uint32_t t55 = 126756493U;

	t55 = ((x277%(x278+x279))^x280);

	if (t55 != 462638829U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x281 = -1LL;
	static volatile uint8_t x282 = 7U;
	int64_t x283 = -761011LL;
	int16_t x284 = -1;
	int64_t t56 = 396996903157348LL;

	t56 = ((x281%(x282+x283))^x284);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x285 = INT16_MAX;
	int16_t x286 = -1;
	int32_t x287 = -30077;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t57 = 75;

	t57 = ((x285%(x286+x287))^x288);

	if (t57 != -30079) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x289 = -1LL;
	int64_t x290 = INT64_MIN;
	uint8_t x291 = 1U;
	int8_t x292 = -48;
	int64_t t58 = -22624LL;

	t58 = ((x289%(x290+x291))^x292);

	if (t58 != 47LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x294 = INT16_MIN;
	volatile int32_t x295 = 2640;
	int64_t t59 = 330479LL;

	t59 = ((x293%(x294+x295))^x296);

	if (t59 != -9223372036854746505LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x297 = UINT8_MAX;
	static int16_t x300 = 4;
	static volatile uint64_t t60 = 89937320292533083LLU;

	t60 = ((x297%(x298+x299))^x300);

	if (t60 != 251LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x302 = 5;
	int64_t x303 = 26447984LL;
	int8_t x304 = -1;
	volatile int64_t t61 = 2LL;

	t61 = ((x301%(x302+x303))^x304);

	if (t61 != -4LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x306 = 52U;
	int64_t x308 = -1LL;
	int64_t t62 = -65961081LL;

	t62 = ((x305%(x306+x307))^x308);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x309 = -1;
	volatile uint8_t x310 = 47U;
	uint32_t x311 = 16468U;
	int16_t x312 = -1;
	uint32_t t63 = 30699929U;

	t63 = ((x309%(x310+x311))^x312);

	if (t63 != 4294956960U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x321 = -1;
	static int32_t x322 = -221017756;
	uint8_t x323 = 110U;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t64 = -18265;

	t64 = ((x321%(x322+x323))^x324);

	if (t64 != -256) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = INT32_MIN;
	volatile int16_t x327 = INT16_MIN;
	uint16_t x328 = UINT16_MAX;

	t65 = ((x325%(x326+x327))^x328);

	if (t65 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x337 = -1;
	volatile int8_t x338 = -1;
	int32_t x339 = INT32_MAX;
	uint16_t x340 = UINT16_MAX;

	t66 = ((x337%(x338+x339))^x340);

	if (t66 != -65536) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x341 = -456;
	int64_t x342 = 47053738863378365LL;
	static int64_t x344 = INT64_MIN;
	int64_t t67 = 19087916403087LL;

	t67 = ((x341%(x342+x343))^x344);

	if (t67 != 9223372036854775352LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = -1LL;
	int16_t x347 = -1;
	volatile int64_t x348 = -258174LL;
	int64_t t68 = -27016934285433LL;

	t68 = ((x345%(x346+x347))^x348);

	if (t68 != -258174LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x349 = 4481U;
	int64_t x350 = INT64_MIN;
	uint32_t x352 = UINT32_MAX;

	t69 = ((x349%(x350+x351))^x352);

	if (t69 != 4294962814LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x353 = -1LL;
	uint16_t x355 = 321U;
	int16_t x356 = 1;
	volatile uint64_t t70 = 18LLU;

	t70 = ((x353%(x354+x355))^x356);

	if (t70 != 1893698336161LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MAX;
	uint16_t x363 = 253U;
	int64_t t71 = -1357140030895311LL;

	t71 = ((x361%(x362+x363))^x364);

	if (t71 != -208LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x369 = INT64_MIN;
	static uint64_t x371 = UINT64_MAX;
	uint64_t t72 = 392612381357LLU;

	t72 = ((x369%(x370+x371))^x372);

	if (t72 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x373 = 2U;
	int16_t x374 = INT16_MIN;
	int64_t x375 = -1LL;
	uint16_t x376 = 62U;
	volatile int64_t t73 = 18224LL;

	t73 = ((x373%(x374+x375))^x376);

	if (t73 != 60LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x381 = 540082;
	int64_t x382 = -4LL;
	static uint64_t x383 = UINT64_MAX;
	volatile int64_t x384 = INT64_MAX;

	t74 = ((x381%(x382+x383))^x384);

	if (t74 != 9223372036854235725LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x385 = INT16_MAX;
	volatile uint8_t x386 = 10U;
	int16_t x387 = INT16_MIN;
	int32_t x388 = -804;
	int32_t t75 = -218303696;

	t75 = ((x385%(x386+x387))^x388);

	if (t75 != -811) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x389 = 14;
	uint64_t x390 = UINT64_MAX;
	volatile uint32_t x391 = 2938103U;
	volatile int8_t x392 = 2;
	volatile uint64_t t76 = 17729LLU;

	t76 = ((x389%(x390+x391))^x392);

	if (t76 != 12LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x394 = -1;
	uint16_t x395 = 119U;
	uint64_t x396 = UINT64_MAX;

	t77 = ((x393%(x394+x395))^x396);

	if (t77 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x397 = -1;
	static uint16_t x399 = UINT16_MAX;
	int16_t x400 = INT16_MAX;
	static volatile int32_t t78 = 8513671;

	t78 = ((x397%(x398+x399))^x400);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x403 = INT32_MAX;
	int32_t x404 = INT32_MIN;
	volatile int64_t t79 = 32688248420LL;

	t79 = ((x401%(x402+x403))^x404);

	if (t79 != -2147319806LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x405 = -1;
	volatile int8_t x406 = -1;
	uint64_t x408 = 4502790344LLU;
	volatile uint64_t t80 = 18283435432LLU;

	t80 = ((x405%(x406+x407))^x408);

	if (t80 != 18446744069206761271LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x409 = 178627U;
	volatile int32_t x412 = -65220;
	static uint32_t t81 = 2579794U;

	t81 = ((x409%(x410+x411))^x412);

	if (t81 != 4294902121U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x417 = INT64_MAX;
	uint8_t x418 = 3U;
	int16_t x419 = 586;
	volatile int16_t x420 = INT16_MIN;

	t82 = ((x417%(x418+x419))^x420);

	if (t82 != -32637LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x421 = -14LL;
	volatile uint64_t x423 = 1272929LLU;
	uint8_t x424 = 10U;
	uint64_t t83 = 3320661740487593683LLU;

	t83 = ((x421%(x422+x423))^x424);

	if (t83 != 1072313LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x425 = 397;
	int32_t x426 = -9;
	int16_t x427 = -4;
	volatile int64_t x428 = INT64_MAX;
	static int64_t t84 = 3349398LL;

	t84 = ((x425%(x426+x427))^x428);

	if (t84 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x431 = INT16_MIN;
	uint8_t x432 = 1U;
	volatile int32_t t85 = 411932;

	t85 = ((x429%(x430+x431))^x432);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x433 = INT16_MAX;
	uint32_t x434 = 0U;
	uint32_t x435 = 82528U;
	int32_t x436 = -4883111;
	volatile uint32_t t86 = 341945U;

	t86 = ((x433%(x434+x435))^x436);

	if (t86 != 4290052774U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x437 = INT64_MAX;
	uint32_t x438 = UINT32_MAX;
	int16_t x440 = INT16_MIN;
	int64_t t87 = -4LL;

	t87 = ((x437%(x438+x439))^x440);

	if (t87 != -32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x441 = INT8_MIN;
	volatile uint64_t x442 = 49212058LLU;
	int16_t x444 = -1;
	volatile uint64_t t88 = 1857170LLU;

	t88 = ((x441%(x442+x443))^x444);

	if (t88 != 18446744072716242767LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x445 = 1658576258559457821LL;
	int64_t x446 = INT64_MAX;
	int32_t x447 = -1;
	int16_t x448 = INT16_MIN;

	t89 = ((x445%(x446+x447))^x448);

	if (t89 != -1658576258559460835LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x449 = INT64_MAX;
	uint8_t x450 = UINT8_MAX;
	int64_t x452 = INT64_MIN;
	int64_t t90 = -159786LL;

	t90 = ((x449%(x450+x451))^x452);

	if (t90 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x453 = UINT16_MAX;
	int64_t x454 = 104LL;
	uint16_t x455 = 1U;
	int8_t x456 = INT8_MAX;
	static volatile int64_t t91 = -48639360LL;

	t91 = ((x453%(x454+x455))^x456);

	if (t91 != 112LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x458 = 38034730LL;
	static volatile int64_t x459 = 10LL;
	static int64_t x460 = INT64_MAX;
	volatile int64_t t92 = -29LL;

	t92 = ((x457%(x458+x459))^x460);

	if (t92 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x461 = UINT8_MAX;
	int8_t x463 = INT8_MAX;
	uint16_t x464 = 66U;
	volatile int64_t t93 = -651786LL;

	t93 = ((x461%(x462+x463))^x464);

	if (t93 != 65LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x469 = INT8_MAX;
	uint32_t x470 = 699432859U;
	volatile int8_t x471 = INT8_MAX;
	uint8_t x472 = 1U;
	uint32_t t94 = 4694712U;

	t94 = ((x469%(x470+x471))^x472);

	if (t94 != 126U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x473 = 0;
	int16_t x475 = -1;
	volatile int32_t x476 = INT32_MIN;

	t95 = ((x473%(x474+x475))^x476);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x477 = 176;
	static int32_t x478 = -1;
	volatile int8_t x479 = INT8_MIN;
	int64_t t96 = -1431LL;

	t96 = ((x477%(x478+x479))^x480);

	if (t96 != -1397044359999LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x481 = -3010LL;
	static int16_t x482 = INT16_MAX;
	int8_t x483 = -1;
	int16_t x484 = INT16_MIN;
	int64_t t97 = -5108203541167958LL;

	t97 = ((x481%(x482+x483))^x484);

	if (t97 != 29758LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x489 = INT8_MAX;
	int16_t x490 = -1047;
	int16_t x491 = INT16_MIN;
	static int16_t x492 = INT16_MIN;
	volatile int32_t t98 = 126;

	t98 = ((x489%(x490+x491))^x492);

	if (t98 != -32641) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x495 = INT8_MIN;
	int16_t x496 = -1;

	t99 = ((x493%(x494+x495))^x496);

	if (t99 != -256) { NG(); } else { ; }
	
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

