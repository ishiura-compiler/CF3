#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
volatile int64_t t0 = 352903210LL;
int32_t x9 = INT32_MIN;
volatile int32_t x10 = -4573324;
volatile int8_t x13 = INT8_MAX;
static volatile uint64_t t3 = 459578755LLU;
uint32_t x18 = 596999U;
static int16_t x23 = -163;
int32_t t5 = 9722;
volatile uint32_t x26 = UINT32_MAX;
int16_t x27 = 77;
uint64_t t6 = 750758534577684371LLU;
volatile int64_t x31 = INT64_MIN;
int16_t x32 = 1;
volatile int64_t t7 = 2LL;
static int32_t x33 = 80741338;
volatile int32_t x44 = INT32_MAX;
static int64_t t10 = -34901LL;
static uint64_t x60 = 88816385861LLU;
static int16_t x64 = 58;
uint64_t x65 = 122780977369456667LLU;
volatile int8_t x67 = INT8_MAX;
volatile uint8_t x69 = 104U;
int64_t x71 = INT64_MAX;
uint8_t x75 = 1U;
int64_t t18 = 13178LL;
volatile uint64_t t20 = 0LLU;
int16_t x91 = INT16_MIN;
int8_t x99 = INT8_MIN;
static int64_t t22 = 20671611LL;
volatile int32_t x114 = -64025325;
int64_t x116 = -43984190879LL;
uint32_t x134 = 30185U;
int16_t x136 = -1;
volatile int64_t t31 = 4829675108640LL;
uint32_t x139 = 1126620U;
static volatile uint32_t t32 = 87U;
uint64_t x148 = 7258LLU;
int64_t x154 = 28337LL;
int16_t x157 = 11222;
int8_t x161 = INT8_MAX;
volatile int32_t t39 = 1846643;
int16_t x169 = -1;
volatile int64_t x171 = -1LL;
static volatile int64_t x175 = -1172865242893115925LL;
volatile uint64_t t42 = 59LLU;
int32_t x181 = -1;
volatile uint16_t x184 = 92U;
uint64_t x186 = UINT64_MAX;
static volatile int16_t x188 = INT16_MIN;
uint64_t t44 = 20LLU;
int64_t t45 = -3098610325LL;
static int8_t x197 = -1;
uint8_t x204 = 76U;
uint64_t x205 = 254604759289954945LLU;
uint64_t t48 = 663764674LLU;
int32_t x219 = INT32_MIN;
int8_t x223 = INT8_MAX;
int8_t x230 = -1;
uint64_t t56 = 1365499754473LLU;
int8_t x245 = INT8_MAX;
volatile int64_t x252 = -1LL;
int32_t x254 = INT32_MAX;
int8_t x255 = 28;
static uint16_t x256 = UINT16_MAX;
uint64_t x263 = 17733607LLU;
int16_t x271 = -4;
int8_t x274 = -1;
int64_t t65 = -27137341473LL;
int8_t x280 = 6;
static int64_t x283 = 1698LL;
uint64_t x284 = 131945429176253LLU;
int8_t x291 = -1;
volatile int8_t x292 = -1;
static int8_t x294 = 37;
volatile int64_t x295 = INT64_MAX;
uint8_t x298 = 115U;
static int64_t x301 = -17020585772002LL;
int8_t x304 = INT8_MAX;
static volatile int64_t t72 = 52507LL;
int16_t x308 = 4;
int8_t x313 = INT8_MIN;
uint64_t t75 = 3369730574016448812LLU;
int64_t t76 = -828014887494379LL;
static uint64_t x321 = 235841890262359LLU;
int8_t x330 = 1;
volatile int64_t t81 = 879276220697LL;
int16_t x343 = INT16_MIN;
volatile uint64_t t82 = 136182832326LLU;
volatile uint64_t x353 = 44907336381LLU;
int16_t x354 = -1;
static int16_t x357 = -1530;
int32_t x359 = INT32_MIN;
volatile uint32_t x366 = UINT32_MAX;
volatile int64_t t88 = 8579392935LL;
int8_t x373 = 2;
uint8_t x375 = 3U;
uint32_t x387 = UINT32_MAX;
volatile uint8_t x394 = 1U;
uint16_t x397 = UINT16_MAX;
int32_t t96 = 45921916;


void f0(void) {
	int16_t x2 = -1;
	static uint8_t x3 = 14U;
	int16_t x4 = -120;

	t0 = ((x1^(x2|x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint64_t x6 = UINT64_MAX;
	static volatile uint8_t x7 = 30U;
	volatile uint8_t x8 = 1U;
	volatile uint64_t t1 = 8316312251LLU;

	t1 = ((x5^(x6|x7))/x8);

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x11 = -1LL;
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = 63LL;

	t2 = ((x9^(x10|x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 1U;
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = -1;

	t3 = ((x13^(x14|x15))/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 31U;
	static int64_t x19 = INT64_MIN;
	int32_t x20 = 65419;
	volatile int64_t t4 = -2140602LL;

	t4 = ((x17^(x18|x19))/x20);

	if (t4 != -140989193305525LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -50498069;
	volatile int32_t x22 = INT32_MIN;
	int16_t x24 = -1;

	t5 = ((x21^(x22|x23))/x24);

	if (t5 != -50498230) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -512;
	uint64_t x28 = 3589284332191LLU;

	t6 = ((x25^(x26|x27))/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static volatile int8_t x30 = -1;

	t7 = ((x29^(x30|x31))/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 6;
	int16_t x35 = INT16_MIN;
	volatile int16_t x36 = INT16_MAX;
	volatile int32_t t8 = 2062214;

	t8 = ((x33^(x34|x35))/x36);

	if (t8 != -2465) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	static volatile int32_t x38 = INT32_MIN;
	uint64_t x39 = UINT64_MAX;
	static int8_t x40 = INT8_MIN;
	volatile uint64_t t9 = 490676LLU;

	t9 = ((x37^(x38|x39))/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static int64_t x42 = INT64_MIN;
	int8_t x43 = -1;

	t10 = ((x41^(x42|x43))/x44);

	if (t10 != -4294967298LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x45 = 10U;
	int32_t x46 = 15128838;
	int64_t x47 = -866944786LL;
	uint8_t x48 = 98U;
	int64_t t11 = 506468574577205LL;

	t11 = ((x45^(x46|x47))/x48);

	if (t11 != -8736366LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 15;
	uint8_t x50 = 6U;
	uint32_t x51 = 3899U;
	static int8_t x52 = -1;
	uint32_t t12 = 159U;

	t12 = ((x49^(x50|x51))/x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 8920;
	int16_t x54 = INT16_MIN;
	int32_t x55 = -1;
	int64_t x56 = -1LL;
	volatile int64_t t13 = -8841779199439LL;

	t13 = ((x53^(x54|x55))/x56);

	if (t13 != 8921LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -201695784;
	uint16_t x58 = 657U;
	int32_t x59 = 687152;
	uint64_t t14 = 200106734094145389LLU;

	t14 = ((x57^(x58|x59))/x60);

	if (t14 != 207695279LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 5754004U;
	int16_t x62 = INT16_MAX;
	int64_t x63 = INT64_MAX;
	static int64_t t15 = 187003550789343717LL;

	t15 = ((x61^(x62|x63))/x64);

	if (t15 != 159023655807741755LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -2029;
	volatile int32_t x68 = -1;
	static volatile uint64_t t16 = 654LLU;

	t16 = ((x65^(x66|x67))/x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 722U;
	int32_t x72 = INT32_MAX;
	volatile int64_t t17 = -507226956396LL;

	t17 = ((x69^(x70|x71))/x72);

	if (t17 != 4294967297LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -409799LL;
	int16_t x74 = INT16_MIN;
	int8_t x76 = INT8_MAX;

	t18 = ((x73^(x74|x75))/x76);

	if (t18 != 3223LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 79912;
	uint8_t x78 = 6U;
	int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;
	static int32_t t19 = -10;

	t19 = ((x77^(x78|x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	static int32_t x86 = 753989;
	uint64_t x87 = 984136000818980LLU;
	volatile int32_t x88 = -1;

	t20 = ((x85^(x86|x87))/x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = -1;
	static int8_t x90 = INT8_MAX;
	volatile uint32_t x92 = UINT32_MAX;
	volatile uint32_t t21 = 7U;

	t21 = ((x89^(x90|x91))/x92);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -1;
	int64_t x98 = INT64_MAX;
	int32_t x100 = INT32_MIN;

	t22 = ((x97^(x98|x99))/x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MAX;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = INT16_MIN;
	static uint16_t x104 = 392U;
	int64_t t23 = 10189528316495LL;

	t23 = ((x101^(x102|x103))/x104);

	if (t23 != -23529010298098834LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x105 = 70U;
	uint64_t x106 = 240683LLU;
	uint16_t x107 = UINT16_MAX;
	static int32_t x108 = 1;
	volatile uint64_t t24 = 51381LLU;

	t24 = ((x105^(x106|x107))/x108);

	if (t24 != 262073LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	int16_t x110 = INT16_MIN;
	volatile uint8_t x111 = UINT8_MAX;
	uint16_t x112 = 38U;
	int32_t t25 = -1206;

	t25 = ((x109^(x110|x111))/x112);

	if (t25 != -858) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 12LLU;
	uint32_t x115 = 323050U;
	uint64_t t26 = 719354LLU;

	t26 = ((x113^(x114|x115))/x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 6U;
	int16_t x118 = 179;
	int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	static volatile uint32_t t27 = 1902911U;

	t27 = ((x117^(x118|x119))/x120);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 5U;
	volatile int32_t x122 = INT32_MAX;
	uint32_t x123 = 16U;
	uint16_t x124 = 477U;
	volatile uint32_t t28 = 56U;

	t28 = ((x121^(x122|x123))/x124);

	if (t28 != 4502062U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x125 = UINT32_MAX;
	uint8_t x126 = 126U;
	volatile uint64_t x127 = 6LLU;
	int32_t x128 = -1;
	volatile uint64_t t29 = 14822153774242911LLU;

	t29 = ((x125^(x126|x127))/x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = 1447LL;
	static int16_t x130 = INT16_MIN;
	uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 26U;
	int64_t t30 = -23713946LL;

	t30 = ((x129^(x130|x131))/x132);

	if (t30 != -1207LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	int64_t x135 = INT64_MIN;

	t31 = ((x133^(x134|x135))/x136);

	if (t31 != -9223372036854773225LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 1U;
	volatile int8_t x138 = -29;
	uint16_t x140 = 36U;

	t32 = ((x137^(x138|x139))/x140);

	if (t32 != 119304647U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = 466017LLU;
	uint16_t x142 = 29136U;
	volatile int8_t x143 = INT8_MIN;
	uint8_t x144 = UINT8_MAX;
	uint64_t t33 = 989351923635LLU;

	t33 = ((x141^(x142|x143))/x144);

	if (t33 != 72340172838074845LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	uint32_t x146 = 1023U;
	static volatile int16_t x147 = INT16_MIN;
	volatile uint64_t t34 = 1207358232122379745LLU;

	t34 = ((x145^(x146|x147))/x148);

	if (t34 != 4LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = -1;
	static int16_t x150 = INT16_MIN;
	uint8_t x151 = 24U;
	volatile int16_t x152 = INT16_MAX;
	int32_t t35 = 201832752;

	t35 = ((x149^(x150|x151))/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x153 = INT16_MIN;
	int64_t x155 = INT64_MAX;
	int8_t x156 = 28;
	int64_t t36 = 12963LL;

	t36 = ((x153^(x154|x155))/x156);

	if (t36 != -329406144173383680LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x158 = UINT32_MAX;
	int64_t x159 = INT64_MAX;
	int16_t x160 = -1;
	volatile int64_t t37 = -3385223LL;

	t37 = ((x157^(x158|x159))/x160);

	if (t37 != -9223372036854764585LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x162 = -7993065LL;
	int16_t x163 = 100;
	int32_t x164 = 6700132;
	static volatile int64_t t38 = -256LL;

	t38 = ((x161^(x162|x163))/x164);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 4U;
	static uint8_t x166 = 45U;
	uint16_t x167 = 4079U;
	int16_t x168 = -1;

	t39 = ((x165^(x166|x167))/x168);

	if (t39 != -4075) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x170 = UINT8_MAX;
	uint32_t x172 = 341367U;
	static int64_t t40 = 2939922873751336LL;

	t40 = ((x169^(x170|x171))/x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = 91;
	uint32_t x174 = 2266976U;
	int32_t x176 = INT32_MAX;
	static int64_t t41 = -1750046767418481558LL;

	t41 = ((x173^(x174|x175))/x176);

	if (t41 != -546157939LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x177 = 2749LLU;
	int16_t x178 = -51;
	int64_t x179 = INT64_MAX;
	int16_t x180 = -6;

	t42 = ((x177^(x178|x179))/x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = -1;
	static volatile uint64_t t43 = 86LLU;

	t43 = ((x181^(x182|x183))/x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = 6U;
	uint64_t x187 = 2621LLU;

	t44 = ((x185^(x186|x187))/x188);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MIN;
	static int16_t x195 = INT16_MAX;
	volatile int16_t x196 = -1;

	t45 = ((x193^(x194|x195))/x196);

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x198 = 1156297666LLU;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;
	static volatile uint64_t t46 = 1086588350801219014LLU;

	t46 = ((x197^(x198|x199))/x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = UINT16_MAX;
	int8_t x202 = INT8_MIN;
	int32_t x203 = -1;
	static int32_t t47 = 14449204;

	t47 = ((x201^(x202|x203))/x204);

	if (t47 != -862) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x206 = -12;
	uint64_t x207 = 1529353588985LLU;
	volatile int8_t x208 = -1;

	t48 = ((x205^(x206|x207))/x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MIN;
	uint64_t x212 = 26148664873025194LLU;
	uint64_t t49 = 13818738457LLU;

	t49 = ((x209^(x210|x211))/x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x213 = INT64_MAX;
	uint16_t x214 = UINT16_MAX;
	uint64_t x215 = 2LLU;
	int64_t x216 = -29455476948LL;
	uint64_t t50 = 260542953LLU;

	t50 = ((x213^(x214|x215))/x216);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x217 = UINT64_MAX;
	int64_t x218 = 0LL;
	uint32_t x220 = UINT32_MAX;
	volatile uint64_t t51 = 624318948358LLU;

	t51 = ((x217^(x218|x219))/x220);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MAX;
	volatile int64_t x222 = -1LL;
	static int64_t x224 = INT64_MAX;
	static volatile int64_t t52 = -11353180101565415LL;

	t52 = ((x221^(x222|x223))/x224);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = -1;
	uint32_t x226 = 34572364U;
	volatile int8_t x227 = 28;
	int16_t x228 = INT16_MIN;
	static uint32_t t53 = 3310365U;

	t53 = ((x225^(x226|x227))/x228);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 1U;
	int8_t x231 = INT8_MIN;
	static int64_t x232 = -31440LL;
	int64_t t54 = 2784777544857671LL;

	t54 = ((x229^(x230|x231))/x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = 1;
	int64_t x234 = -1LL;
	volatile uint16_t x235 = 63U;
	uint8_t x236 = 1U;
	int64_t t55 = 272876804779277673LL;

	t55 = ((x233^(x234|x235))/x236);

	if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = 0U;
	int64_t x238 = INT64_MAX;
	uint64_t x239 = 42219LLU;
	int16_t x240 = INT16_MAX;

	t56 = ((x237^(x238|x239))/x240);

	if (t56 != 281483566907400LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = UINT16_MAX;
	static uint16_t x242 = 172U;
	uint8_t x243 = 20U;
	volatile int32_t x244 = INT32_MIN;
	static int32_t t57 = 1;

	t57 = ((x241^(x242|x243))/x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x246 = 402U;
	uint64_t x247 = 484659344884330LLU;
	int8_t x248 = 1;
	uint64_t t58 = 13737826158LLU;

	t58 = ((x245^(x246|x247))/x248);

	if (t58 != 484659344884613LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = 51U;
	static uint32_t x250 = UINT32_MAX;
	static volatile int64_t x251 = INT64_MAX;
	volatile int64_t t59 = -18747324140065LL;

	t59 = ((x249^(x250|x251))/x252);

	if (t59 != -9223372036854775756LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = 26U;
	int32_t t60 = -14433473;

	t60 = ((x253^(x254|x255))/x256);

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x258 = UINT64_MAX;
	int8_t x259 = 15;
	volatile uint32_t x260 = 2841401U;
	uint64_t t61 = 1017401812989922171LLU;

	t61 = ((x257^(x258|x259))/x260);

	if (t61 != 755LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x261 = UINT32_MAX;
	volatile int64_t x262 = INT64_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	uint64_t t62 = 250507616422586LLU;

	t62 = ((x261^(x262|x263))/x264);

	if (t62 != 140739635937010LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x265 = 37U;
	volatile int8_t x266 = -1;
	volatile int64_t x267 = INT64_MIN;
	int32_t x268 = INT32_MIN;
	int64_t t63 = 48846243LL;

	t63 = ((x265^(x266|x267))/x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MAX;
	volatile int8_t x270 = -1;
	uint8_t x272 = 10U;
	volatile int32_t t64 = 54;

	t64 = ((x269^(x270|x271))/x272);

	if (t64 != -214748364) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = 5453LL;
	uint8_t x275 = UINT8_MAX;
	int8_t x276 = INT8_MIN;

	t65 = ((x273^(x274|x275))/x276);

	if (t65 != 42LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = INT64_MAX;
	volatile int32_t x278 = INT32_MAX;
	uint8_t x279 = 34U;
	volatile int64_t t66 = 10805LL;

	t66 = ((x277^(x278|x279))/x280);

	if (t66 != 1537228672451215360LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x282 = 232U;
	volatile uint64_t t67 = 801LLU;

	t67 = ((x281^(x282|x283))/x284);

	if (t67 != 139805LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = -206;
	int8_t x286 = -1;
	static uint64_t x287 = 955568LLU;
	int8_t x288 = INT8_MIN;
	uint64_t t68 = 2268889302748283LLU;

	t68 = ((x285^(x286|x287))/x288);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	volatile int64_t x290 = -1LL;
	volatile int64_t t69 = 23934835881035054LL;

	t69 = ((x289^(x290|x291))/x292);

	if (t69 != -32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x293 = 241740673388483LLU;
	static int16_t x296 = -1;
	static uint64_t t70 = 9909601842LLU;

	t70 = ((x293^(x294|x295))/x296);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 16777993832611521LLU;
	static int64_t x299 = -1LL;
	int16_t x300 = INT16_MIN;
	uint64_t t71 = 166LLU;

	t71 = ((x297^(x298|x299))/x300);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x302 = INT16_MAX;
	volatile int8_t x303 = -1;

	t72 = ((x301^(x302|x303))/x304);

	if (t72 != 134020360409LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = UINT64_MAX;
	volatile int8_t x306 = -1;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t t73 = 7253049144522085LLU;

	t73 = ((x305^(x306|x307))/x308);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = UINT8_MAX;
	int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MAX;
	int32_t x312 = -1;
	int32_t t74 = 13924433;

	t74 = ((x309^(x310|x311))/x312);

	if (t74 != 256) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x314 = INT64_MIN;
	static volatile uint64_t x315 = 1892410LLU;
	uint16_t x316 = UINT16_MAX;

	t75 = ((x313^(x314|x315))/x316);

	if (t75 != 140739635871715LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = 29U;
	static int64_t x318 = INT64_MIN;
	static int64_t x319 = -1LL;
	uint16_t x320 = 1U;

	t76 = ((x317^(x318|x319))/x320);

	if (t76 != -30LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x322 = 0U;
	int16_t x323 = 2;
	uint32_t x324 = 2072402247U;
	volatile uint64_t t77 = 27503646086889LLU;

	t77 = ((x321^(x322|x323))/x324);

	if (t77 != 113801LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x325 = INT8_MIN;
	uint64_t x326 = 853LLU;
	int64_t x327 = -1LL;
	int16_t x328 = -110;
	volatile uint64_t t78 = 23496543LLU;

	t78 = ((x325^(x326|x327))/x328);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = 97648U;
	volatile int8_t x331 = -1;
	static uint8_t x332 = UINT8_MAX;
	volatile uint32_t t79 = 12U;

	t79 = ((x329^(x330|x331))/x332);

	if (t79 != 16842626U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x333 = INT8_MIN;
	int16_t x334 = 2;
	static uint32_t x335 = UINT32_MAX;
	int64_t x336 = -1LL;
	int64_t t80 = 427540128LL;

	t80 = ((x333^(x334|x335))/x336);

	if (t80 != -127LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MIN;
	volatile uint8_t x339 = UINT8_MAX;
	int64_t x340 = INT64_MIN;

	t81 = ((x337^(x338|x339))/x340);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = -352;
	static uint64_t x342 = UINT64_MAX;
	uint32_t x344 = UINT32_MAX;

	t82 = ((x341^(x342|x343))/x344);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = 463288196LLU;
	int64_t x346 = INT64_MAX;
	static int8_t x347 = 56;
	volatile int16_t x348 = INT16_MIN;
	volatile uint64_t t83 = 2711419818856237630LLU;

	t83 = ((x345^(x346|x347))/x348);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x349 = 29679U;
	uint64_t x350 = UINT64_MAX;
	static int64_t x351 = INT64_MAX;
	uint8_t x352 = 14U;
	volatile uint64_t t84 = 11LLU;

	t84 = ((x349^(x350|x351))/x352);

	if (t84 != 1317624576693537281LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x355 = INT32_MIN;
	static int8_t x356 = -1;
	volatile uint64_t t85 = 260697098244LLU;

	t85 = ((x353^(x354|x355))/x356);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x358 = INT64_MIN;
	int16_t x360 = -1;
	volatile int64_t t86 = 6LL;

	t86 = ((x357^(x358|x359))/x360);

	if (t86 != -2147482118LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = -1;
	volatile int8_t x362 = INT8_MIN;
	static int32_t x363 = INT32_MAX;
	volatile uint64_t x364 = 936780321524885233LLU;
	uint64_t t87 = 1LLU;

	t87 = ((x361^(x362|x363))/x364);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x365 = INT64_MIN;
	int8_t x367 = 24;
	static volatile int64_t x368 = -1LL;

	t88 = ((x365^(x366|x367))/x368);

	if (t88 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MIN;
	uint32_t x372 = 236U;
	int64_t t89 = 10393LL;

	t89 = ((x369^(x370|x371))/x372);

	if (t89 != -39082084883728002LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x374 = INT16_MIN;
	static int8_t x376 = -1;
	static volatile int32_t t90 = 417;

	t90 = ((x373^(x374|x375))/x376);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x377 = 715243252661816861LL;
	int16_t x378 = INT16_MIN;
	static int64_t x379 = -1LL;
	int16_t x380 = INT16_MIN;
	int64_t t91 = -129508888617160LL;

	t91 = ((x377^(x378|x379))/x380);

	if (t91 != 21827491841486LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = -1761;
	volatile int16_t x383 = -1;
	int8_t x384 = -1;
	int32_t t92 = 5237;

	t92 = ((x381^(x382|x383))/x384);

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x385 = INT16_MIN;
	int16_t x386 = -1;
	static uint32_t x388 = UINT32_MAX;
	volatile uint32_t t93 = 9904U;

	t93 = ((x385^(x386|x387))/x388);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = 0;
	int32_t x390 = 160573;
	int8_t x391 = INT8_MIN;
	static volatile uint16_t x392 = UINT16_MAX;
	int32_t t94 = 1;

	t94 = ((x389^(x390|x391))/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = 0U;
	static int32_t x395 = INT32_MIN;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t95 = -12483005910LL;

	t95 = ((x393^(x394|x395))/x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x398 = INT32_MAX;
	int32_t x399 = 2;
	static uint16_t x400 = 2U;

	t96 = ((x397^(x398|x399))/x400);

	if (t96 != 1073709056) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MIN;
	int64_t x402 = 12223602379LL;
	int32_t x403 = INT32_MAX;
	uint64_t x404 = 244LLU;
	uint64_t t97 = 2190408534985LLU;

	t97 = ((x401^(x402|x403))/x404);

	if (t97 != 75601410085347059LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	uint16_t x406 = UINT16_MAX;
	int16_t x407 = INT16_MIN;
	volatile int64_t x408 = 50379075450565LL;
	int64_t t98 = -83782294744706LL;

	t98 = ((x405^(x406|x407))/x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x409 = INT16_MIN;
	uint32_t x410 = UINT32_MAX;
	int32_t x411 = INT32_MIN;
	static int64_t x412 = INT64_MIN;
	int64_t t99 = -3336474550950779394LL;

	t99 = ((x409^(x410|x411))/x412);

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

