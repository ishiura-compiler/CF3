#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
volatile int32_t t0 = -1;
volatile int32_t x12 = 46619;
int8_t x13 = -25;
static uint8_t x14 = UINT8_MAX;
uint16_t x19 = 55U;
int8_t x20 = -33;
volatile int16_t x21 = INT16_MIN;
int8_t x23 = -1;
int8_t x32 = INT8_MIN;
int16_t x41 = INT16_MIN;
uint64_t x45 = 12756824LLU;
int16_t x46 = 94;
uint8_t x50 = 1U;
int16_t x57 = INT16_MIN;
int32_t x58 = -1;
static uint16_t x69 = 182U;
volatile int8_t x70 = INT8_MIN;
static int8_t x86 = 36;
int64_t x87 = 1LL;
int16_t x88 = INT16_MIN;
uint32_t x91 = 92U;
int64_t t20 = INT64_MIN;
int64_t x106 = 1LL;
int8_t x110 = INT8_MAX;
uint8_t x111 = 11U;
volatile uint64_t t24 = 482LLU;
volatile int64_t x118 = INT64_MAX;
uint8_t x125 = UINT8_MAX;
uint16_t x132 = 8057U;
int64_t t30 = 549101765LL;
static int8_t x141 = 1;
int16_t x144 = INT16_MAX;
int32_t x149 = INT32_MIN;
uint64_t x153 = 1020LLU;
static uint64_t t33 = 1913228575631527569LLU;
volatile int8_t x158 = 53;
int8_t x159 = INT8_MIN;
uint32_t x163 = 0U;
int16_t x164 = 2304;
int16_t x173 = 4852;
int32_t x174 = INT32_MIN;
int64_t x188 = INT64_MIN;
static int8_t x194 = -1;
volatile int16_t x197 = -1;
volatile int32_t x200 = -181624;
int32_t t44 = -80026452;
uint64_t x204 = 115LLU;
int32_t x209 = INT32_MIN;
static uint16_t x217 = UINT16_MAX;
int16_t x225 = INT16_MIN;
int64_t x235 = INT64_MAX;
static uint64_t t53 = 17124720597876LLU;
int32_t x243 = -368833445;
uint32_t x255 = UINT32_MAX;
volatile int64_t t57 = 127507LL;
uint16_t x271 = 111U;
uint8_t x273 = 0U;
static int32_t x283 = INT32_MIN;
int8_t x290 = INT8_MIN;
volatile int32_t t65 = 4853;
int16_t x296 = INT16_MAX;
int16_t x298 = INT16_MAX;
uint64_t x300 = UINT64_MAX;
int64_t x310 = 108161668LL;
uint16_t x315 = 2422U;
uint16_t x318 = 61U;
int32_t x319 = -1;
static int32_t x320 = 29939047;
int16_t x324 = INT16_MAX;
volatile int32_t x346 = INT32_MAX;
int16_t x347 = INT16_MIN;
uint8_t x352 = 9U;
uint8_t x354 = UINT8_MAX;
static uint32_t x358 = 27495U;
int64_t x359 = INT64_MIN;
static int32_t x372 = -2037;
int16_t x374 = -1;
int64_t x384 = -65714724065441LL;
static volatile int64_t t86 = 18787902894979317LL;
uint64_t x388 = 253LLU;
int16_t x391 = 66;
volatile uint8_t x394 = UINT8_MAX;
static uint32_t x396 = 14U;
uint8_t x409 = UINT8_MAX;
uint64_t x410 = 21475LLU;
uint64_t x411 = 1402849LLU;
uint16_t x415 = 13U;
int32_t t93 = 222757543;
volatile int32_t x418 = -130318;
static int32_t t94 = 124;
int64_t x430 = INT64_MAX;
int16_t x437 = 1;
uint16_t x439 = 110U;
volatile int64_t t99 = 255989LL;


void f0(void) {
	volatile uint8_t x1 = 12U;
	volatile uint8_t x2 = UINT8_MAX;
	int32_t x4 = INT32_MAX;

	t0 = ((x1&(x2+x3))&x4);

	if (t0 != 12) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -8;
	int32_t x6 = 7822;
	volatile int32_t x7 = INT32_MIN;
	int32_t x8 = 383722;
	static volatile int32_t t1 = -48;

	t1 = ((x5&(x6+x7))&x8);

	if (t1 != 6792) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -30;
	int64_t x10 = 268613532968696LL;
	uint32_t x11 = 390779U;
	int64_t t2 = 2439LL;

	t2 = ((x9&(x10+x11))&x12);

	if (t2 != 37890LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x15 = 15680U;
	uint64_t x16 = 38472281641LLU;
	uint64_t t3 = 3LLU;

	t3 = ((x13&(x14+x15))&x16);

	if (t3 != 11809LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	int64_t x18 = INT64_MIN;
	int64_t t4 = 55662640820LL;

	t4 = ((x17&(x18+x19))&x20);

	if (t4 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 45929LLU;
	int16_t x24 = 6865;
	uint64_t t5 = 9821496069125870LLU;

	t5 = ((x21&(x22+x23))&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	volatile int8_t x26 = INT8_MIN;
	int8_t x27 = -16;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -476;

	t6 = ((x25&(x26+x27))&x28);

	if (t6 != -256) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -150;
	int8_t x30 = INT8_MIN;
	int64_t x31 = 0LL;
	volatile int64_t t7 = -1943367297147LL;

	t7 = ((x29&(x30+x31))&x32);

	if (t7 != -256LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x42 = INT16_MIN;
	static volatile int8_t x43 = INT8_MIN;
	static uint8_t x44 = 14U;
	volatile int32_t t8 = -1961538;

	t8 = ((x41&(x42+x43))&x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x47 = INT8_MIN;
	int16_t x48 = -1;
	uint64_t t9 = 74627LLU;

	t9 = ((x45&(x46+x47))&x48);

	if (t9 != 12756824LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	static volatile int16_t x51 = -1;
	uint64_t x52 = 7LLU;
	static volatile uint64_t t10 = 347561278898910LLU;

	t10 = ((x49&(x50+x51))&x52);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 898U;
	volatile int32_t x54 = -54;
	static uint16_t x55 = UINT16_MAX;
	static volatile int16_t x56 = 114;
	static volatile int32_t t11 = 488540;

	t11 = ((x53&(x54+x55))&x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MAX;
	int32_t t12 = 350061;

	t12 = ((x57&(x58+x59))&x60);

	if (t12 != 2147450880) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x61 = UINT8_MAX;
	static volatile int64_t x62 = -4966414971713867LL;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = INT32_MAX;
	int64_t t13 = 7049168LL;

	t13 = ((x61&(x62+x63))&x64);

	if (t13 != 180LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	int16_t x66 = INT16_MAX;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	static uint32_t t14 = 45664U;

	t14 = ((x65&(x66+x67))&x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x71 = INT8_MAX;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t15 = -1;

	t15 = ((x69&(x70+x71))&x72);

	if (t15 != 182) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	int16_t x74 = -3027;
	uint64_t x75 = 46545LLU;
	volatile uint64_t x76 = UINT64_MAX;
	static volatile uint64_t t16 = 63815678944LLU;

	t16 = ((x73&(x74+x75))&x76);

	if (t16 != 32768LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MAX;
	static int64_t x82 = -6603LL;
	int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MIN;
	volatile int64_t t17 = 2096765352701LL;

	t17 = ((x81&(x82+x83))&x84);

	if (t17 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = 61;
	static int64_t t18 = 0LL;

	t18 = ((x85&(x86+x87))&x88);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 7;
	static int32_t x90 = -1501834;
	uint16_t x92 = UINT16_MAX;
	volatile uint32_t t19 = 195U;

	t19 = ((x89&(x90+x91))&x92);

	if (t19 != 2U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -468;
	int32_t x98 = -130679;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MIN;

	t20 = ((x97&(x98+x99))&x100);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x101 = 32517U;
	static volatile int16_t x102 = -1;
	uint8_t x103 = 0U;
	volatile int16_t x104 = -1;
	int32_t t21 = 60;

	t21 = ((x101&(x102+x103))&x104);

	if (t21 != 32517) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MAX;
	static int16_t x107 = 4;
	int32_t x108 = 6;
	static int64_t t22 = -12762003LL;

	t22 = ((x105&(x106+x107))&x108);

	if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 2U;
	int64_t x112 = -927763235555LL;
	volatile int64_t t23 = -1000595LL;

	t23 = ((x109&(x110+x111))&x112);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = INT32_MIN;
	volatile uint64_t x114 = 167013233455468LLU;
	int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MAX;

	t24 = ((x113&(x114+x115))&x116);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -2;
	int8_t x119 = -1;
	static volatile int8_t x120 = INT8_MIN;
	static volatile int64_t t25 = -66984344895532LL;

	t25 = ((x117&(x118+x119))&x120);

	if (t25 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x121 = -14870;
	uint64_t x122 = 26860053LLU;
	int8_t x123 = 0;
	int16_t x124 = INT16_MIN;
	static volatile uint64_t t26 = 1931144138282LLU;

	t26 = ((x121&(x122+x123))&x124);

	if (t26 != 26836992LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x126 = 2298350675808LLU;
	volatile uint64_t x127 = UINT64_MAX;
	int64_t x128 = -1LL;
	volatile uint64_t t27 = 5301LLU;

	t27 = ((x125&(x126+x127))&x128);

	if (t27 != 95LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MIN;
	static volatile int32_t t28 = -33;

	t28 = ((x129&(x130+x131))&x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = UINT32_MAX;
	static int64_t x134 = 439015565985LL;
	static volatile uint32_t x135 = 20853U;
	int8_t x136 = -13;
	int64_t t29 = -39LL;

	t29 = ((x133&(x134+x135))&x136);

	if (t29 != 928922642LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x137 = 2;
	int32_t x138 = INT32_MAX;
	volatile int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;

	t30 = ((x137&(x138+x139))&x140);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x142 = -4;
	static int8_t x143 = 0;
	int32_t t31 = -171360;

	t31 = ((x141&(x142+x143))&x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x150 = 51559150U;
	int8_t x151 = INT8_MIN;
	static int8_t x152 = -1;
	static uint32_t t32 = 14803U;

	t32 = ((x149&(x150+x151))&x152);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x154 = -17145640;
	int16_t x155 = -5;
	static volatile int8_t x156 = -1;

	t33 = ((x153&(x154+x155))&x156);

	if (t33 != 208LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = -62190;
	volatile int16_t x160 = 160;
	int32_t t34 = 46823;

	t34 = ((x157&(x158+x159))&x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = UINT16_MAX;
	int32_t x162 = -6;
	volatile uint32_t t35 = 30U;

	t35 = ((x161&(x162+x163))&x164);

	if (t35 != 2304U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = 124829741016273140LLU;
	int8_t x166 = INT8_MAX;
	int16_t x167 = INT16_MIN;
	static uint64_t x168 = 100127366641219336LLU;
	uint64_t t36 = 4771613238828859428LLU;

	t36 = ((x165&(x166+x167))&x168);

	if (t36 != 81972217618989056LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MIN;
	static uint8_t x170 = 75U;
	volatile uint32_t x171 = 496U;
	int16_t x172 = INT16_MAX;
	volatile uint32_t t37 = 3U;

	t37 = ((x169&(x170+x171))&x172);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x175 = 3;
	volatile uint32_t x176 = 0U;
	static volatile uint32_t t38 = 50070U;

	t38 = ((x173&(x174+x175))&x176);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x177 = INT32_MAX;
	int32_t x178 = INT32_MAX;
	static volatile uint64_t x179 = 91658647LLU;
	static int8_t x180 = -1;
	static uint64_t t39 = 1291036135282LLU;

	t39 = ((x177&(x178+x179))&x180);

	if (t39 != 91658646LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = INT32_MAX;
	uint8_t x182 = 125U;
	volatile int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MIN;
	volatile int32_t t40 = 561377776;

	t40 = ((x181&(x182+x183))&x184);

	if (t40 != 2147450880) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x185 = 3U;
	static int16_t x186 = -1;
	static uint8_t x187 = 2U;
	int64_t t41 = 161087348101LL;

	t41 = ((x185&(x186+x187))&x188);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x189 = 14U;
	int8_t x190 = INT8_MIN;
	static volatile int8_t x191 = INT8_MAX;
	int32_t x192 = -1;
	volatile int32_t t42 = -124749572;

	t42 = ((x189&(x190+x191))&x192);

	if (t42 != 14) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 4U;
	int8_t x195 = INT8_MIN;
	volatile int64_t x196 = -1LL;
	int64_t t43 = -4LL;

	t43 = ((x193&(x194+x195))&x196);

	if (t43 != 4LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x198 = UINT8_MAX;
	uint8_t x199 = UINT8_MAX;

	t44 = ((x197&(x198+x199))&x200);

	if (t44 != 136) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x201 = UINT16_MAX;
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = 1;
	static uint64_t t45 = 1565520LLU;

	t45 = ((x201&(x202+x203))&x204);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x205 = 12;
	int16_t x206 = -157;
	uint32_t x207 = UINT32_MAX;
	static uint32_t x208 = 11481967U;
	uint32_t t46 = 1439713961U;

	t46 = ((x205&(x206+x207))&x208);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = -1;
	int32_t x212 = INT32_MIN;
	static uint64_t t47 = 781053340134831LLU;

	t47 = ((x209&(x210+x211))&x212);

	if (t47 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x218 = 964983001LLU;
	int16_t x219 = -43;
	uint16_t x220 = UINT16_MAX;
	volatile uint64_t t48 = 3LLU;

	t48 = ((x217&(x218+x219))&x220);

	if (t48 != 30894LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = 3675;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = 125U;
	int16_t x224 = INT16_MAX;
	static volatile int32_t t49 = 1722514;

	t49 = ((x221&(x222+x223))&x224);

	if (t49 != 3673) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x226 = 3U;
	static volatile int8_t x227 = -1;
	static uint64_t x228 = 24337946462743LLU;
	uint64_t t50 = 1131LLU;

	t50 = ((x225&(x226+x227))&x228);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 1092180143LLU;
	int64_t x230 = -1LL;
	int32_t x231 = -6362;
	int64_t x232 = 1LL;
	static uint64_t t51 = 270504LLU;

	t51 = ((x229&(x230+x231))&x232);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = 13U;
	uint64_t x234 = 12433LLU;
	volatile uint64_t x236 = 8LLU;
	volatile uint64_t t52 = 135259559200LLU;

	t52 = ((x233&(x234+x235))&x236);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x237 = 41U;
	volatile uint64_t x238 = 1007933850LLU;
	volatile int64_t x239 = -1LL;
	volatile int8_t x240 = INT8_MAX;

	t53 = ((x237&(x238+x239))&x240);

	if (t53 != 9LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x241 = INT64_MIN;
	static uint32_t x242 = 5148U;
	int64_t x244 = -1LL;
	volatile int64_t t54 = 413229657690618LL;

	t54 = ((x241&(x242+x243))&x244);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x245 = UINT32_MAX;
	volatile int32_t x246 = -51;
	uint32_t x247 = UINT32_MAX;
	uint32_t x248 = 1U;
	uint32_t t55 = 1U;

	t55 = ((x245&(x246+x247))&x248);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x249 = 62LLU;
	uint8_t x250 = 62U;
	volatile uint16_t x251 = UINT16_MAX;
	int16_t x252 = 240;
	volatile uint64_t t56 = 107119485LLU;

	t56 = ((x249&(x250+x251))&x252);

	if (t56 != 48LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x253 = 3U;
	int16_t x254 = INT16_MIN;
	int64_t x256 = INT64_MIN;

	t57 = ((x253&(x254+x255))&x256);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = -1;
	int16_t x259 = INT16_MAX;
	static volatile uint8_t x260 = 4U;
	static int64_t t58 = 4955574809303LL;

	t58 = ((x257&(x258+x259))&x260);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x261 = INT64_MIN;
	volatile int16_t x262 = 1055;
	int64_t x263 = INT64_MIN;
	int16_t x264 = 237;
	int64_t t59 = -1LL;

	t59 = ((x261&(x262+x263))&x264);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x265 = INT64_MIN;
	uint64_t x266 = 1LLU;
	int16_t x267 = -303;
	int16_t x268 = INT16_MAX;
	volatile uint64_t t60 = 1065867339075LLU;

	t60 = ((x265&(x266+x267))&x268);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = 48157;
	static int32_t x270 = 10661;
	int8_t x272 = INT8_MIN;
	int32_t t61 = 0;

	t61 = ((x269&(x270+x271))&x272);

	if (t61 != 10240) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	int32_t x276 = -1;
	volatile int32_t t62 = 227272738;

	t62 = ((x273&(x274+x275))&x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x277 = UINT16_MAX;
	int16_t x278 = INT16_MIN;
	uint8_t x279 = 2U;
	static uint16_t x280 = 2U;
	int32_t t63 = 2179;

	t63 = ((x277&(x278+x279))&x280);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x281 = 7U;
	volatile uint16_t x282 = 835U;
	uint16_t x284 = 4U;
	static volatile int32_t t64 = -3877478;

	t64 = ((x281&(x282+x283))&x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = 13U;
	int16_t x291 = INT16_MAX;
	volatile int8_t x292 = INT8_MIN;

	t65 = ((x289&(x290+x291))&x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x293 = 7736U;
	static volatile uint8_t x294 = 1U;
	uint8_t x295 = 29U;
	uint32_t t66 = 503452952U;

	t66 = ((x293&(x294+x295))&x296);

	if (t66 != 24U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MIN;
	uint64_t x299 = 3648LLU;
	volatile uint64_t t67 = 107LLU;

	t67 = ((x297&(x298+x299))&x300);

	if (t67 != 32768LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x301 = 61027LLU;
	int8_t x302 = -4;
	volatile int64_t x303 = 1687659908802LL;
	uint8_t x304 = 2U;
	static uint64_t t68 = 1400024435519LLU;

	t68 = ((x301&(x302+x303))&x304);

	if (t68 != 2LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = 29062171680283867LL;
	volatile int8_t x306 = -39;
	uint32_t x307 = 35143U;
	int16_t x308 = INT16_MAX;
	int64_t t69 = -943LL;

	t69 = ((x305&(x306+x307))&x308);

	if (t69 != 2048LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MIN;
	static volatile int32_t x311 = INT32_MIN;
	static volatile int64_t x312 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = ((x309&(x310+x311))&x312);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x313 = 337637736LLU;
	int16_t x314 = -1696;
	volatile int16_t x316 = INT16_MAX;
	volatile uint64_t t71 = 7185185891711LLU;

	t71 = ((x313&(x314+x315))&x316);

	if (t71 != 64LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x317 = 31LLU;
	volatile uint64_t t72 = 13024176LLU;

	t72 = ((x317&(x318+x319))&x320);

	if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x321 = INT32_MAX;
	int8_t x322 = -1;
	static uint8_t x323 = UINT8_MAX;
	static int32_t t73 = 455168786;

	t73 = ((x321&(x322+x323))&x324);

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 10784607564765LLU;
	int8_t x326 = INT8_MAX;
	int8_t x327 = -1;
	int8_t x328 = -1;
	static uint64_t t74 = 17312LLU;

	t74 = ((x325&(x326+x327))&x328);

	if (t74 != 92LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x329 = 12588143U;
	volatile int64_t x330 = -1722LL;
	int16_t x331 = INT16_MAX;
	volatile int16_t x332 = INT16_MIN;
	static volatile int64_t t75 = -102702327765210574LL;

	t75 = ((x329&(x330+x331))&x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x333 = -1;
	volatile int64_t x334 = -1LL;
	int16_t x335 = -1;
	int32_t x336 = 591504;
	volatile int64_t t76 = 1840978030LL;

	t76 = ((x333&(x334+x335))&x336);

	if (t76 != 591504LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = -2;
	int64_t x348 = -1LL;
	static volatile int64_t t77 = 3347811285607LL;

	t77 = ((x345&(x346+x347))&x348);

	if (t77 != 2147450878LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = -1;
	static uint64_t x350 = UINT64_MAX;
	static int64_t x351 = -55146LL;
	volatile uint64_t t78 = 160688LLU;

	t78 = ((x349&(x350+x351))&x352);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = 2;
	int32_t x355 = -1;
	uint64_t x356 = 3303256908LLU;
	static volatile uint64_t t79 = 132160LLU;

	t79 = ((x353&(x354+x355))&x356);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x357 = INT8_MAX;
	volatile int64_t x360 = INT64_MIN;
	static int64_t t80 = -267750169871377LL;

	t80 = ((x357&(x358+x359))&x360);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x361 = 1U;
	uint64_t x362 = 544736674945LLU;
	int8_t x363 = INT8_MAX;
	static uint64_t x364 = 5616337627658665LLU;
	volatile uint64_t t81 = 965493650LLU;

	t81 = ((x361&(x362+x363))&x364);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = 39;
	uint8_t x366 = 1U;
	static volatile int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t82 = -41128896;

	t82 = ((x365&(x366+x367))&x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = 0LLU;
	uint64_t t83 = 1LLU;

	t83 = ((x369&(x370+x371))&x372);

	if (t83 != 4294934528LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x373 = 10633;
	int8_t x375 = -45;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t84 = -8590;

	t84 = ((x373&(x374+x375))&x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = -1LL;
	volatile int8_t x378 = INT8_MAX;
	int16_t x379 = -1;
	uint32_t x380 = 1922167U;
	int64_t t85 = -1803471138827735LL;

	t85 = ((x377&(x378+x379))&x380);

	if (t85 != 118LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = -2557;
	int8_t x382 = 9;
	static uint8_t x383 = UINT8_MAX;

	t86 = ((x381&(x382+x383))&x384);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x385 = 13921;
	uint64_t x386 = 476137364LLU;
	static uint16_t x387 = 281U;
	uint64_t t87 = 1LLU;

	t87 = ((x385&(x386+x387))&x388);

	if (t87 != 33LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x389 = INT8_MIN;
	volatile int32_t x390 = INT32_MIN;
	int64_t x392 = -1LL;
	int64_t t88 = -40218169919807LL;

	t88 = ((x389&(x390+x391))&x392);

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = INT32_MAX;
	static int8_t x395 = INT8_MIN;
	static volatile uint32_t t89 = 16U;

	t89 = ((x393&(x394+x395))&x396);

	if (t89 != 14U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x397 = UINT64_MAX;
	uint16_t x398 = UINT16_MAX;
	int16_t x399 = -11747;
	volatile int8_t x400 = INT8_MIN;
	volatile uint64_t t90 = 741101643829258LLU;

	t90 = ((x397&(x398+x399))&x400);

	if (t90 != 53760LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x401 = INT16_MAX;
	static int8_t x402 = INT8_MIN;
	uint16_t x403 = UINT16_MAX;
	volatile int32_t x404 = INT32_MAX;
	volatile int32_t t91 = 31697;

	t91 = ((x401&(x402+x403))&x404);

	if (t91 != 32639) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x412 = -19;
	volatile uint64_t t92 = 34263856951031105LLU;

	t92 = ((x409&(x410+x411))&x412);

	if (t92 != 196LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = 12;
	int16_t x414 = INT16_MAX;
	int8_t x416 = INT8_MAX;

	t93 = ((x413&(x414+x415))&x416);

	if (t93 != 12) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x417 = 0;
	int16_t x419 = -1;
	uint8_t x420 = 80U;

	t94 = ((x417&(x418+x419))&x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = 1202U;
	uint8_t x422 = UINT8_MAX;
	uint32_t x423 = UINT32_MAX;
	uint16_t x424 = 1U;
	volatile uint32_t t95 = 6001U;

	t95 = ((x421&(x422+x423))&x424);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x425 = -1;
	uint16_t x426 = 57U;
	static int32_t x427 = 187844;
	int16_t x428 = INT16_MIN;
	int32_t t96 = -7699;

	t96 = ((x425&(x426+x427))&x428);

	if (t96 != 163840) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x429 = -1;
	int16_t x431 = INT16_MIN;
	uint16_t x432 = 715U;
	int64_t t97 = -1021451894LL;

	t97 = ((x429&(x430+x431))&x432);

	if (t97 != 715LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x433 = 74667356811376LLU;
	uint16_t x434 = 163U;
	int8_t x435 = -54;
	uint16_t x436 = UINT16_MAX;
	volatile uint64_t t98 = 82LLU;

	t98 = ((x433&(x434+x435))&x436);

	if (t98 != 96LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x438 = -1;
	int64_t x440 = INT64_MIN;

	t99 = ((x437&(x438+x439))&x440);

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

