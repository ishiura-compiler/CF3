#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 137;
static int32_t t2 = -117;
volatile int32_t x31 = INT32_MAX;
uint8_t x35 = 11U;
static int16_t x38 = -3098;
volatile int32_t t9 = -17;
static volatile int32_t x47 = INT32_MIN;
volatile int32_t t11 = INT32_MAX;
uint32_t x50 = 52819U;
int16_t x60 = INT16_MIN;
int64_t x65 = -1LL;
static int64_t x66 = INT64_MAX;
static int32_t x69 = -1;
int32_t x71 = INT32_MIN;
int64_t x75 = INT64_MAX;
uint16_t x79 = 7889U;
uint16_t x81 = UINT16_MAX;
uint8_t x96 = 6U;
int16_t x97 = INT16_MIN;
static uint16_t x99 = 3U;
static int16_t x101 = -1;
uint64_t x104 = UINT64_MAX;
static volatile int32_t x107 = -1;
int8_t x109 = -1;
int64_t x110 = 15547670893737632LL;
static uint16_t x111 = UINT16_MAX;
static int64_t x113 = 13185463151995272LL;
uint16_t x116 = UINT16_MAX;
int8_t x120 = -1;
int32_t t29 = 4492;
static volatile int32_t t31 = INT32_MIN;
int16_t x133 = INT16_MAX;
int16_t x137 = INT16_MIN;
int8_t x141 = INT8_MAX;
volatile int32_t t35 = -264148666;
static uint64_t x150 = UINT64_MAX;
volatile int32_t t38 = -603;
volatile uint32_t x162 = 18404U;
static uint16_t x164 = 208U;
uint64_t x169 = UINT64_MAX;
uint64_t x171 = 375LLU;
int32_t t42 = 9;
int64_t x175 = -46711948836204294LL;
int16_t x176 = -1;
int32_t t43 = -124859523;
volatile uint16_t x178 = UINT16_MAX;
volatile int32_t t44 = 63249636;
uint32_t t45 = UINT32_MAX;
static int32_t x185 = INT32_MIN;
int32_t x191 = 4409;
uint8_t x192 = UINT8_MAX;
volatile int32_t t47 = -273319;
static int16_t x200 = INT16_MIN;
int32_t t49 = 89;
uint32_t t50 = 106U;
int8_t x206 = -49;
static uint8_t x207 = UINT8_MAX;
int32_t t51 = INT32_MIN;
int16_t x211 = INT16_MAX;
int64_t x214 = 24353LL;
uint32_t x217 = 1003724U;
uint64_t x224 = 2164834659LLU;
uint64_t t55 = 145615680126382LLU;
volatile int8_t x226 = 1;
int64_t x227 = INT64_MAX;
int32_t t61 = 5640;
uint8_t x251 = 3U;
int8_t x254 = INT8_MAX;
uint64_t x262 = 6LLU;
int8_t x264 = 0;
volatile int64_t x265 = INT64_MAX;
static int8_t x273 = INT8_MIN;
uint16_t x274 = 26U;
volatile int64_t x278 = -1LL;
static int16_t x285 = INT16_MAX;
volatile int64_t x295 = INT64_MIN;
int64_t x296 = INT64_MIN;
static volatile int32_t t74 = 1277;
uint16_t x303 = 14U;
uint32_t x304 = 16U;
int64_t x314 = INT64_MIN;
volatile int32_t x318 = 142390;
uint16_t x319 = 941U;
int32_t t79 = INT32_MAX;
uint64_t x322 = UINT64_MAX;
volatile int8_t x323 = INT8_MIN;
static int64_t x325 = INT64_MAX;
int8_t x337 = 3;
uint32_t x340 = 3771610U;
uint8_t x347 = 3U;
volatile int8_t x349 = 50;
int32_t x354 = INT32_MIN;
static int16_t x361 = -1;
volatile int32_t t92 = -5764940;
static int64_t x373 = -7001587941LL;
int8_t x383 = 1;
int64_t x385 = 4417230120757568LL;
int32_t x387 = -74254266;
volatile int32_t t96 = -978666;
int32_t t97 = 52815;
volatile int16_t x397 = INT16_MAX;


void f0(void) {
	static uint64_t x1 = 610080064LLU;
	int16_t x2 = INT16_MAX;
	int8_t x3 = -1;
	uint16_t x4 = 380U;

	t0 = ((x1<(x2|x3))|x4);

	if (t0 != 381) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 11U;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = 135866532713840LLU;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -176504783893LL;

	t1 = ((x5<(x6|x7))|x8);

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MIN;
	static uint64_t x10 = 5753775850LLU;
	static int64_t x11 = INT64_MIN;
	int16_t x12 = -430;

	t2 = ((x9<(x10|x11))|x12);

	if (t2 != -429) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 101U;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = UINT8_MAX;
	static uint32_t x16 = 9U;
	static volatile uint32_t t3 = 21U;

	t3 = ((x13<(x14|x15))|x16);

	if (t3 != 9U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -188LL;
	uint8_t x18 = 5U;
	uint64_t x19 = UINT64_MAX;
	static uint32_t x20 = 377705113U;
	uint32_t t4 = 156996079U;

	t4 = ((x17<(x18|x19))|x20);

	if (t4 != 377705113U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x21 = 758839280LLU;
	static int32_t x22 = -366568;
	uint8_t x23 = UINT8_MAX;
	uint64_t x24 = 265469LLU;
	uint64_t t5 = 64411LLU;

	t5 = ((x21<(x22|x23))|x24);

	if (t5 != 265469LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 523004593LL;
	uint64_t x26 = 5959263LLU;
	static volatile int16_t x27 = -2658;
	volatile int8_t x28 = -19;
	int32_t t6 = -165;

	t6 = ((x25<(x26|x27))|x28);

	if (t6 != -19) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	static int32_t x30 = 261242;
	volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 517156;

	t7 = ((x29<(x30|x31))|x32);

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	static uint32_t x34 = 2333531U;
	uint16_t x36 = 0U;
	volatile int32_t t8 = -87;

	t8 = ((x33<(x34|x35))|x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -11959060;
	static uint16_t x39 = 7296U;
	int16_t x40 = INT16_MAX;

	t9 = ((x37<(x38|x39))|x40);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int64_t x42 = 249634LL;
	int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MIN;
	int64_t t10 = INT64_MIN;

	t10 = ((x41<(x42|x43))|x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 1;
	volatile uint8_t x46 = UINT8_MAX;
	static int32_t x48 = INT32_MAX;

	t11 = ((x45<(x46|x47))|x48);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	uint64_t x51 = 1634222LLU;
	int8_t x52 = -1;
	int32_t t12 = 1010256;

	t12 = ((x49<(x50|x51))|x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 5670LL;
	int8_t x54 = INT8_MIN;
	volatile uint32_t x55 = UINT32_MAX;
	volatile int32_t x56 = INT32_MAX;
	volatile int32_t t13 = INT32_MAX;

	t13 = ((x53<(x54|x55))|x56);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int32_t x58 = 103273;
	volatile int8_t x59 = INT8_MIN;
	volatile int32_t t14 = 2;

	t14 = ((x57<(x58|x59))|x60);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MIN;
	uint16_t x63 = UINT16_MAX;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = ((x61<(x62|x63))|x64);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x67 = INT32_MAX;
	static int8_t x68 = INT8_MIN;
	int32_t t16 = -133334;

	t16 = ((x65<(x66|x67))|x68);

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int32_t x72 = 190049;
	int32_t t17 = 753052;

	t17 = ((x69<(x70|x71))|x72);

	if (t17 != 190049) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 1U;
	int32_t x74 = INT32_MAX;
	int64_t x76 = 3946306LL;
	int64_t t18 = -126857LL;

	t18 = ((x73<(x74|x75))|x76);

	if (t18 != 3946307LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 0U;
	int32_t x78 = INT32_MIN;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = INT32_MIN;

	t19 = ((x77<(x78|x79))|x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MAX;
	int8_t x83 = -1;
	int16_t x84 = -1;
	int32_t t20 = -1;

	t20 = ((x81<(x82|x83))|x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	static volatile int8_t x86 = INT8_MIN;
	uint32_t x87 = 964745U;
	int16_t x88 = -261;
	static int32_t t21 = 2063;

	t21 = ((x85<(x86|x87))|x88);

	if (t21 != -261) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = -1;
	static volatile int32_t x90 = INT32_MIN;
	int16_t x91 = 193;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 13719856;

	t22 = ((x89<(x90|x91))|x92);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = UINT16_MAX;
	int64_t x94 = 27601164LL;
	int64_t x95 = -1748339LL;
	int32_t t23 = 690;

	t23 = ((x93<(x94|x95))|x96);

	if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = -3460873842314347214LL;
	static int16_t x100 = INT16_MIN;
	static int32_t t24 = -46;

	t24 = ((x97<(x98|x99))|x100);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = INT64_MIN;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = ((x101<(x102|x103))|x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -1;
	uint64_t x106 = 19363361237LLU;
	int16_t x108 = -2;
	volatile int32_t t26 = 114394;

	t26 = ((x105<(x106|x107))|x108);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x112 = -7124981728002LL;
	static int64_t t27 = -38985758LL;

	t27 = ((x109<(x110|x111))|x112);

	if (t27 != -7124981728001LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x114 = INT64_MIN;
	int32_t x115 = -1;
	static int32_t t28 = -66753618;

	t28 = ((x113<(x114|x115))|x116);

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int16_t x118 = -1;
	volatile uint64_t x119 = 116875872LLU;

	t29 = ((x117<(x118|x119))|x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MIN;
	uint32_t x123 = 967985U;
	int8_t x124 = -1;
	volatile int32_t t30 = 6106;

	t30 = ((x121<(x122|x123))|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -4;
	uint8_t x126 = 0U;
	uint64_t x127 = 129289768566LLU;
	int32_t x128 = INT32_MIN;

	t31 = ((x125<(x126|x127))|x128);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x129 = 6;
	int16_t x130 = INT16_MAX;
	static int32_t x131 = 16632499;
	int32_t x132 = INT32_MAX;
	static int32_t t32 = INT32_MAX;

	t32 = ((x129<(x130|x131))|x132);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x134 = 99944599026928LLU;
	int64_t x135 = -6615LL;
	int16_t x136 = INT16_MIN;
	static int32_t t33 = 61221;

	t33 = ((x133<(x134|x135))|x136);

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 74414U;
	uint32_t t34 = 5657U;

	t34 = ((x137<(x138|x139))|x140);

	if (t34 != 74415U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = UINT8_MAX;
	uint32_t x143 = UINT32_MAX;
	volatile int8_t x144 = 14;

	t35 = ((x141<(x142|x143))|x144);

	if (t35 != 15) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MIN;
	volatile int8_t x147 = -1;
	int16_t x148 = -1;
	int32_t t36 = -5335602;

	t36 = ((x145<(x146|x147))|x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int32_t x151 = -518877;
	int16_t x152 = -835;
	volatile int32_t t37 = -5538280;

	t37 = ((x149<(x150|x151))|x152);

	if (t37 != -835) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MAX;
	uint8_t x156 = 107U;

	t38 = ((x153<(x154|x155))|x156);

	if (t38 != 107) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = 28;
	static int16_t x158 = 5;
	static volatile uint32_t x159 = 867U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -9658;

	t39 = ((x157<(x158|x159))|x160);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int32_t x163 = 3641;
	static volatile int32_t t40 = -27;

	t40 = ((x161<(x162|x163))|x164);

	if (t40 != 209) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MAX;
	uint8_t x166 = UINT8_MAX;
	static int64_t x167 = 4208672347LL;
	uint64_t x168 = 779949013961211LLU;
	static uint64_t t41 = 943LLU;

	t41 = ((x165<(x166|x167))|x168);

	if (t41 != 779949013961211LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MIN;
	volatile uint8_t x172 = 5U;

	t42 = ((x169<(x170|x171))|x172);

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = 3388LL;
	static int64_t x174 = -621358394318072LL;

	t43 = ((x173<(x174|x175))|x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	int32_t x179 = INT32_MAX;
	uint8_t x180 = 66U;

	t44 = ((x177<(x178|x179))|x180);

	if (t44 != 67) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 36014720137518532LLU;
	static uint64_t x182 = 1281007166LLU;
	int64_t x183 = 6644541LL;
	uint32_t x184 = UINT32_MAX;

	t45 = ((x181<(x182|x183))|x184);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MIN;
	volatile int16_t x187 = INT16_MAX;
	int8_t x188 = INT8_MAX;
	int32_t t46 = -13332;

	t46 = ((x185<(x186|x187))|x188);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	volatile int64_t x190 = INT64_MAX;

	t47 = ((x189<(x190|x191))|x192);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -174;
	int16_t x194 = -1;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MAX;
	int64_t t48 = INT64_MAX;

	t48 = ((x193<(x194|x195))|x196);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -588;
	int16_t x198 = INT16_MIN;
	volatile int64_t x199 = 1003608975LL;

	t49 = ((x197<(x198|x199))|x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x201 = UINT32_MAX;
	uint16_t x202 = UINT16_MAX;
	volatile int8_t x203 = INT8_MIN;
	uint32_t x204 = 32U;

	t50 = ((x201<(x202|x203))|x204);

	if (t50 != 32U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = UINT64_MAX;
	int32_t x208 = INT32_MIN;

	t51 = ((x205<(x206|x207))|x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 4024;
	int16_t x210 = 140;
	uint32_t x212 = UINT32_MAX;
	uint32_t t52 = UINT32_MAX;

	t52 = ((x209<(x210|x211))|x212);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = UINT32_MAX;
	static int32_t x215 = INT32_MAX;
	int64_t x216 = INT64_MAX;
	int64_t t53 = INT64_MAX;

	t53 = ((x213<(x214|x215))|x216);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = 13U;
	uint32_t x219 = UINT32_MAX;
	int64_t x220 = INT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = ((x217<(x218|x219))|x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 1U;
	uint8_t x222 = UINT8_MAX;
	static int32_t x223 = -31;

	t55 = ((x221<(x222|x223))|x224);

	if (t55 != 2164834659LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 65804947962818620LLU;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 9;

	t56 = ((x225<(x226|x227))|x228);

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	volatile uint32_t x230 = UINT32_MAX;
	int32_t x231 = INT32_MIN;
	volatile int8_t x232 = -23;
	volatile int32_t t57 = -30;

	t57 = ((x229<(x230|x231))|x232);

	if (t57 != -23) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	uint64_t x234 = UINT64_MAX;
	static int16_t x235 = INT16_MIN;
	static int64_t x236 = INT64_MAX;
	static volatile int64_t t58 = INT64_MAX;

	t58 = ((x233<(x234|x235))|x236);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int16_t x238 = 84;
	int8_t x239 = 1;
	int64_t x240 = -1LL;
	int64_t t59 = 0LL;

	t59 = ((x237<(x238|x239))|x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = -6;
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MAX;
	int32_t t60 = 4027;

	t60 = ((x241<(x242|x243))|x244);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = -73404LL;
	int16_t x246 = INT16_MIN;
	int8_t x247 = 26;
	static int16_t x248 = INT16_MAX;

	t61 = ((x245<(x246|x247))|x248);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	int32_t x250 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	volatile int32_t t62 = -228325089;

	t62 = ((x249<(x250|x251))|x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	static int64_t x255 = -161875115734LL;
	static int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 1596;

	t63 = ((x253<(x254|x255))|x256);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = 10U;
	int32_t x258 = -29642;
	int32_t x259 = -288908;
	volatile uint64_t x260 = 60246931202599LLU;
	uint64_t t64 = 74629393437925LLU;

	t64 = ((x257<(x258|x259))|x260);

	if (t64 != 60246931202599LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -1;
	uint8_t x263 = UINT8_MAX;
	volatile int32_t t65 = 1023139609;

	t65 = ((x261<(x262|x263))|x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x266 = INT16_MAX;
	uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MAX;
	int32_t t66 = INT32_MAX;

	t66 = ((x265<(x266|x267))|x268);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 517705LL;
	uint32_t x270 = 4647593U;
	static uint8_t x271 = UINT8_MAX;
	int8_t x272 = 3;
	int32_t t67 = -129542946;

	t67 = ((x269<(x270|x271))|x272);

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x275 = -416;
	int16_t x276 = -1;
	int32_t t68 = 0;

	t68 = ((x273<(x274|x275))|x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MAX;
	uint16_t x279 = UINT16_MAX;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -261329;

	t69 = ((x277<(x278|x279))|x280);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	static volatile int8_t x282 = 14;
	int16_t x283 = -1;
	int16_t x284 = INT16_MAX;
	volatile int32_t t70 = 3099;

	t70 = ((x281<(x282|x283))|x284);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x286 = 2012165674703866LLU;
	static volatile int32_t x287 = INT32_MIN;
	uint64_t x288 = 3170406109668LLU;
	static volatile uint64_t t71 = 2303564764319LLU;

	t71 = ((x285<(x286|x287))|x288);

	if (t71 != 3170406109669LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	uint64_t x290 = UINT64_MAX;
	volatile int16_t x291 = INT16_MAX;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -358834576;

	t72 = ((x289<(x290|x291))|x292);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 867906322;
	int8_t x294 = INT8_MIN;
	static volatile int64_t t73 = INT64_MIN;

	t73 = ((x293<(x294|x295))|x296);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 248;
	int64_t x298 = 2271489629175LL;
	uint32_t x299 = 28U;
	int8_t x300 = INT8_MIN;

	t74 = ((x297<(x298|x299))|x300);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	int8_t x302 = 6;
	volatile uint32_t t75 = 372576849U;

	t75 = ((x301<(x302|x303))|x304);

	if (t75 != 16U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	uint64_t x306 = UINT64_MAX;
	static int16_t x307 = -1;
	volatile int16_t x308 = -1;
	volatile int32_t t76 = -5;

	t76 = ((x305<(x306|x307))|x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MAX;
	int64_t x310 = -1LL;
	int8_t x311 = -1;
	uint8_t x312 = UINT8_MAX;
	static volatile int32_t t77 = -450650;

	t77 = ((x309<(x310|x311))|x312);

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	uint32_t x315 = 18408451U;
	int64_t x316 = INT64_MIN;
	int64_t t78 = INT64_MIN;

	t78 = ((x313<(x314|x315))|x316);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = -1931;
	int32_t x320 = INT32_MAX;

	t79 = ((x317<(x318|x319))|x320);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -7466611229LL;
	uint64_t x324 = UINT64_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x321<(x322|x323))|x324);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = UINT8_MAX;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t81 = -2999;

	t81 = ((x325<(x326|x327))|x328);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 1202763;
	int8_t x330 = INT8_MIN;
	int16_t x331 = 3767;
	int32_t x332 = -22;
	volatile int32_t t82 = 1545;

	t82 = ((x329<(x330|x331))|x332);

	if (t82 != -22) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	uint32_t x334 = 287859U;
	int16_t x335 = 2569;
	uint16_t x336 = 101U;
	volatile int32_t t83 = -107971;

	t83 = ((x333<(x334|x335))|x336);

	if (t83 != 101) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x338 = INT64_MAX;
	uint8_t x339 = 5U;
	uint32_t t84 = 103744U;

	t84 = ((x337<(x338|x339))|x340);

	if (t84 != 3771611U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MIN;
	volatile int32_t x342 = -989711;
	volatile int16_t x343 = -9;
	uint64_t x344 = 14807674185905LLU;
	volatile uint64_t t85 = 102LLU;

	t85 = ((x341<(x342|x343))|x344);

	if (t85 != 14807674185905LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 0LL;
	int32_t x346 = -1;
	int16_t x348 = INT16_MIN;
	int32_t t86 = 18720;

	t86 = ((x345<(x346|x347))|x348);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x350 = 5885LLU;
	int8_t x351 = INT8_MIN;
	uint16_t x352 = 0U;
	volatile int32_t t87 = -1600;

	t87 = ((x349<(x350|x351))|x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -1;
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = -10233;
	volatile int32_t t88 = -3544295;

	t88 = ((x353<(x354|x355))|x356);

	if (t88 != -10233) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x357 = 7U;
	int64_t x358 = -1LL;
	uint32_t x359 = 85U;
	static volatile int64_t x360 = INT64_MIN;
	int64_t t89 = INT64_MIN;

	t89 = ((x357<(x358|x359))|x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = 1;
	volatile uint32_t x363 = 31457U;
	uint16_t x364 = 1U;
	volatile int32_t t90 = 3114;

	t90 = ((x361<(x362|x363))|x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 55U;
	int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MAX;
	int16_t x368 = 0;
	int32_t t91 = -4748;

	t91 = ((x365<(x366|x367))|x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MAX;
	int8_t x370 = INT8_MIN;
	volatile int64_t x371 = 1425071092468LL;
	static uint8_t x372 = 31U;

	t92 = ((x369<(x370|x371))|x372);

	if (t92 != 31) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MAX;
	int64_t x375 = -1LL;
	static volatile uint16_t x376 = 6468U;
	int32_t t93 = 17800;

	t93 = ((x373<(x374|x375))|x376);

	if (t93 != 6469) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = UINT16_MAX;
	static uint16_t x378 = 5U;
	static int64_t x379 = INT64_MIN;
	volatile uint64_t x380 = 10352LLU;
	uint64_t t94 = 2161587110LLU;

	t94 = ((x377<(x378|x379))|x380);

	if (t94 != 10352LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 1;
	static int8_t x382 = 0;
	uint32_t x384 = 64U;
	static uint32_t t95 = 101U;

	t95 = ((x381<(x382|x383))|x384);

	if (t95 != 64U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = INT16_MAX;
	int8_t x388 = INT8_MIN;

	t96 = ((x385<(x386|x387))|x388);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -1;
	volatile uint32_t x390 = 248032932U;
	volatile uint16_t x391 = 6U;
	int32_t x392 = -171097333;

	t97 = ((x389<(x390|x391))|x392);

	if (t97 != -171097333) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = 79;
	volatile int16_t x394 = 9646;
	volatile int32_t x395 = INT32_MAX;
	static int64_t x396 = INT64_MIN;
	static volatile int64_t t98 = -23289LL;

	t98 = ((x393<(x394|x395))|x396);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x398 = 270029LLU;
	int16_t x399 = INT16_MIN;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t99 = 1;

	t99 = ((x397<(x398|x399))|x400);

	if (t99 != 255) { NG(); } else { ; }
	
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

