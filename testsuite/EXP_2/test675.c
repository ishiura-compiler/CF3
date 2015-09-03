#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = INT64_MIN;
static int32_t x4 = -1;
int64_t t3 = -2080823631214120LL;
volatile uint32_t t4 = 7828560U;
uint8_t x30 = UINT8_MAX;
static int32_t x35 = INT32_MAX;
int32_t t8 = 0;
uint8_t x42 = UINT8_MAX;
volatile int32_t t10 = INT32_MAX;
int32_t x48 = INT32_MIN;
int32_t x54 = -1;
static uint64_t t13 = 628167240LLU;
static volatile int64_t t14 = 453080LL;
volatile uint64_t t16 = UINT64_MAX;
int8_t x69 = INT8_MAX;
static int8_t x72 = 12;
static int32_t x79 = INT32_MIN;
volatile int64_t t19 = 70289729LL;
int64_t x83 = -1LL;
int64_t x89 = INT64_MIN;
static uint32_t x92 = 153592342U;
volatile uint64_t x94 = 138948056853542LLU;
uint64_t x95 = 28339055564798244LLU;
static uint64_t x99 = UINT64_MAX;
uint8_t x101 = 98U;
static volatile int64_t x104 = INT64_MIN;
int8_t x107 = -59;
static int32_t x108 = -1;
int16_t x109 = INT16_MAX;
int8_t x114 = -3;
static uint8_t x118 = 5U;
int16_t x120 = INT16_MIN;
uint32_t x121 = 21488023U;
volatile int64_t x126 = 25LL;
int32_t x129 = -1905781;
int32_t x130 = INT32_MAX;
uint64_t x131 = 77256LLU;
volatile uint64_t t32 = 601652546064LLU;
int32_t x134 = -1;
static volatile int8_t x135 = 18;
int64_t x136 = INT64_MAX;
uint8_t x137 = UINT8_MAX;
volatile int64_t x138 = INT64_MIN;
int32_t x145 = INT32_MAX;
static volatile uint8_t x146 = 7U;
int16_t x152 = INT16_MAX;
volatile int64_t x157 = -1LL;
uint64_t t40 = UINT64_MAX;
volatile int8_t x165 = -23;
uint16_t x166 = 15U;
static volatile uint64_t t42 = 495119LLU;
uint8_t x174 = 83U;
static int8_t x181 = -1;
int32_t x188 = INT32_MAX;
int16_t x193 = INT16_MIN;
int64_t t49 = 142370894818869213LL;
uint64_t t50 = 42673949232222960LLU;
int64_t t51 = -5789LL;
int16_t x220 = INT16_MIN;
volatile int64_t t54 = 2729141030070LL;
uint64_t x221 = UINT64_MAX;
static uint64_t x226 = 15624656664157LLU;
volatile uint64_t t56 = 9752903399929682LLU;
volatile uint64_t t58 = 15795015LLU;
int32_t x244 = INT32_MIN;
static int32_t x252 = INT32_MIN;
volatile uint32_t x270 = 0U;
static int32_t t67 = 4379954;
int8_t x290 = INT8_MIN;
volatile int16_t x291 = 550;
uint8_t x299 = UINT8_MAX;
static uint32_t t78 = 2U;
int8_t x321 = INT8_MIN;
volatile int64_t x323 = 7755805887471LL;
int32_t x327 = INT32_MIN;
volatile uint16_t x334 = 2U;
int64_t x336 = -1LL;
int64_t t83 = 1035215270646230LL;
int16_t x343 = INT16_MAX;
static volatile int64_t t84 = 709176153245570348LL;
uint64_t x345 = 87915LLU;
static uint64_t x347 = UINT64_MAX;
int16_t x348 = INT16_MIN;
uint8_t x352 = 0U;
uint32_t t87 = 32230U;
volatile uint8_t x357 = UINT8_MAX;
int16_t x359 = -1;
int8_t x365 = 29;
volatile int64_t t90 = 36819LL;
uint16_t x369 = 1749U;
volatile uint16_t x372 = 97U;
uint32_t t93 = 669100516U;
static int32_t t95 = INT32_MIN;
uint32_t x392 = 1202U;
static volatile uint32_t t96 = 5081823U;
static int32_t x393 = INT32_MAX;
int64_t x400 = -306630447LL;
uint64_t x402 = 71LLU;


void f0(void) {
	int64_t x2 = INT64_MIN;
	int64_t x3 = 123645018854829324LL;
	int64_t t0 = 82215LL;

	t0 = ((x1^(x2/x3))|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = -1;
	int64_t x7 = INT64_MIN;
	int64_t x8 = -2171797744801776LL;
	volatile int64_t t1 = -20900296801918411LL;

	t1 = ((x5^(x6/x7))|x8);

	if (t1 != -22512LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = 31993576268041LL;
	volatile uint64_t x11 = 1623973643995726499LLU;
	static int32_t x12 = INT32_MIN;
	uint64_t t2 = UINT64_MAX;

	t2 = ((x9^(x10/x11))|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int32_t x14 = INT32_MIN;
	static int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;

	t3 = ((x13^(x14/x15))|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 20U;
	uint32_t x18 = UINT32_MAX;
	volatile int8_t x19 = -1;
	uint16_t x20 = 85U;

	t4 = ((x17^(x18/x19))|x20);

	if (t4 != 85U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	static int8_t x22 = -18;
	uint32_t x23 = UINT32_MAX;
	static int16_t x24 = -1;
	uint32_t t5 = UINT32_MAX;

	t5 = ((x21^(x22/x23))|x24);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int8_t x26 = -1;
	volatile uint64_t x27 = 7990235563461780087LLU;
	int32_t x28 = INT32_MIN;
	volatile uint64_t t6 = 7844218LLU;

	t6 = ((x25^(x26/x27))|x28);

	if (t6 != 18446744071562133501LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	int16_t x31 = INT16_MIN;
	static int64_t x32 = -960656746LL;
	int64_t t7 = 2217750323884473LL;

	t7 = ((x29^(x30/x31))|x32);

	if (t7 != -960656746LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 86U;
	int32_t x34 = INT32_MIN;
	int8_t x36 = 0;

	t8 = ((x33^(x34/x35))|x36);

	if (t8 != -87) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -10701;
	int16_t x38 = -1;
	uint64_t x39 = 794LLU;
	int8_t x40 = -2;
	uint64_t t9 = UINT64_MAX;

	t9 = ((x37^(x38/x39))|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MAX;
	int8_t x43 = INT8_MAX;
	static int8_t x44 = INT8_MAX;

	t10 = ((x41^(x42/x43))|x44);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile int32_t x46 = 527196;
	static volatile int8_t x47 = 1;
	int32_t t11 = -759;

	t11 = ((x45^(x46/x47))|x48);

	if (t11 != -527140) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	volatile uint8_t x50 = 0U;
	uint16_t x51 = 7790U;
	static uint32_t x52 = UINT32_MAX;
	uint32_t t12 = UINT32_MAX;

	t12 = ((x49^(x50/x51))|x52);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 1750342710975575LLU;
	int8_t x55 = INT8_MIN;
	int64_t x56 = -3148140344983541LL;

	t13 = ((x53^(x54/x55))|x56);

	if (t13 != 18444201923361758303LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 405U;
	int64_t x58 = INT64_MIN;
	uint8_t x59 = 25U;
	static int16_t x60 = 1;

	t14 = ((x57^(x58/x59))|x60);

	if (t14 != -368934881474191139LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	uint16_t x62 = 55U;
	static int64_t x63 = INT64_MAX;
	int16_t x64 = INT16_MIN;
	static volatile int64_t t15 = 107675LL;

	t15 = ((x61^(x62/x63))|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int16_t x66 = -1;
	static volatile int32_t x67 = 964371;
	uint64_t x68 = 4598LLU;

	t16 = ((x65^(x66/x67))|x68);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MAX;
	static volatile uint64_t x71 = 55510663562LLU;
	uint64_t t17 = 238LLU;

	t17 = ((x69^(x70/x71))|x72);

	if (t17 != 166154940LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MAX;
	int64_t x74 = -1LL;
	static int64_t x75 = INT64_MIN;
	int32_t x76 = INT32_MIN;
	volatile int64_t t18 = 468224LL;

	t18 = ((x73^(x74/x75))|x76);

	if (t18 != -2147483521LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MAX;
	volatile int64_t x80 = -3LL;

	t19 = ((x77^(x78/x79))|x80);

	if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int32_t x84 = INT32_MAX;
	volatile int64_t t20 = -694707443255773LL;

	t20 = ((x81^(x82/x83))|x84);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 1;
	volatile uint64_t x86 = 1620265774LLU;
	int8_t x87 = INT8_MIN;
	static int32_t x88 = INT32_MAX;
	volatile uint64_t t21 = 1724030LLU;

	t21 = ((x85^(x86/x87))|x88);

	if (t21 != 2147483647LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x90 = UINT16_MAX;
	int64_t x91 = 698267LL;
	volatile int64_t t22 = -447020LL;

	t22 = ((x89^(x90/x91))|x92);

	if (t22 != -9223372036701183466LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = INT16_MIN;
	int32_t x96 = INT32_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = ((x93^(x94/x95))|x96);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	volatile uint32_t x98 = 5U;
	int32_t x100 = INT32_MIN;
	uint64_t t24 = UINT64_MAX;

	t24 = ((x97^(x98/x99))|x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = 309570U;
	int32_t x103 = -4186380;
	static volatile int64_t t25 = -96686907LL;

	t25 = ((x101^(x102/x103))|x104);

	if (t25 != -9223372036854775710LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = UINT8_MAX;
	volatile int16_t x106 = INT16_MIN;
	int32_t t26 = -1;

	t26 = ((x105^(x106/x107))|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 10885778;
	int16_t x111 = 1;
	static int16_t x112 = 104;
	volatile int32_t t27 = -3746;

	t27 = ((x109^(x110/x111))|x112);

	if (t27 != 10904941) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int8_t x115 = INT8_MAX;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 7;

	t28 = ((x113^(x114/x115))|x116);

	if (t28 != -2147418113) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 0;
	static volatile int8_t x119 = -1;
	int32_t t29 = 20665;

	t29 = ((x117^(x118/x119))|x120);

	if (t29 != -5) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	static uint8_t x123 = UINT8_MAX;
	volatile uint8_t x124 = 23U;
	volatile uint32_t t30 = 2698253U;

	t30 = ((x121^(x122/x123))|x124);

	if (t30 != 21488023U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -267;
	static uint16_t x127 = 14U;
	int16_t x128 = INT16_MIN;
	static volatile int64_t t31 = 69860054042766672LL;

	t31 = ((x125^(x126/x127))|x128);

	if (t31 != -268LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x132 = 7LLU;

	t32 = ((x129^(x130/x131))|x132);

	if (t32 != 18446744073707620127LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 5;
	static int64_t t33 = INT64_MAX;

	t33 = ((x133^(x134/x135))|x136);

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x139 = 26U;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = 2454332142800LL;

	t34 = ((x137^(x138/x139))|x140);

	if (t34 != -354745078340568085LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	int16_t x142 = 3;
	static int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	int64_t t35 = 282LL;

	t35 = ((x141^(x142/x143))|x144);

	if (t35 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x147 = INT32_MIN;
	static volatile int32_t x148 = INT32_MAX;
	int32_t t36 = INT32_MAX;

	t36 = ((x145^(x146/x147))|x148);

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = 802;
	int64_t x150 = -31377718LL;
	int16_t x151 = INT16_MAX;
	volatile int64_t t37 = 0LL;

	t37 = ((x149^(x150/x151))|x152);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 234181556005799LLU;
	int8_t x154 = -1;
	int64_t x155 = INT64_MAX;
	static volatile int8_t x156 = -1;
	static volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x153^(x154/x155))|x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x158 = INT16_MIN;
	volatile int16_t x159 = INT16_MIN;
	volatile int32_t x160 = INT32_MIN;
	volatile int64_t t39 = -1095778007149LL;

	t39 = ((x157^(x158/x159))|x160);

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = -1;
	uint32_t x162 = UINT32_MAX;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = 26;

	t40 = ((x161^(x162/x163))|x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = INT8_MIN;
	uint64_t t41 = 6672LLU;

	t41 = ((x165^(x166/x167))|x168);

	if (t41 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	static int64_t x170 = 15LL;
	uint64_t x171 = 97LLU;
	int16_t x172 = INT16_MAX;

	t42 = ((x169^(x170/x171))|x172);

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 0;
	int8_t x175 = 3;
	volatile uint8_t x176 = 3U;
	volatile int32_t t43 = 1;

	t43 = ((x173^(x174/x175))|x176);

	if (t43 != 27) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint8_t x178 = UINT8_MAX;
	uint32_t x179 = 77790693U;
	volatile uint8_t x180 = UINT8_MAX;
	static uint32_t t44 = 2491725U;

	t44 = ((x177^(x178/x179))|x180);

	if (t44 != 4294934783U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = -3311LL;
	static uint64_t x183 = 57059701LLU;
	int16_t x184 = -1;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x181^(x182/x183))|x184);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	int8_t x186 = INT8_MIN;
	int64_t x187 = 557671420273156414LL;
	volatile int64_t t46 = -23043657358359LL;

	t46 = ((x185^(x186/x187))|x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = 12846168623664LL;
	volatile int16_t x190 = INT16_MAX;
	static int16_t x191 = INT16_MIN;
	volatile uint8_t x192 = 108U;
	volatile int64_t t47 = 109431523465LL;

	t47 = ((x189^(x190/x191))|x192);

	if (t47 != 12846168623740LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MIN;
	uint32_t x195 = 36U;
	static int64_t x196 = -3479704844LL;
	int64_t t48 = 1LL;

	t48 = ((x193^(x194/x195))|x196);

	if (t48 != -1094713610LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	int64_t x198 = -1LL;
	int8_t x199 = -1;
	static uint8_t x200 = UINT8_MAX;

	t49 = ((x197^(x198/x199))|x200);

	if (t49 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 162126116105LLU;
	int8_t x202 = 1;
	int8_t x203 = INT8_MAX;
	volatile int8_t x204 = -18;

	t50 = ((x201^(x202/x203))|x204);

	if (t50 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	uint8_t x206 = 4U;
	int32_t x207 = INT32_MAX;
	int64_t x208 = INT64_MIN;

	t51 = ((x205^(x206/x207))|x208);

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	volatile int8_t x210 = INT8_MAX;
	static uint16_t x211 = 190U;
	static int16_t x212 = -1;
	int32_t t52 = -1652037;

	t52 = ((x209^(x210/x211))|x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = -1;
	static int8_t x214 = INT8_MIN;
	uint16_t x215 = 181U;
	int16_t x216 = -1;
	static volatile int32_t t53 = 2283;

	t53 = ((x213^(x214/x215))|x216);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = -1LL;
	int8_t x218 = -1;
	static volatile int32_t x219 = INT32_MIN;

	t54 = ((x217^(x218/x219))|x220);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = 2911217281LL;
	static int32_t x223 = 2070;
	int8_t x224 = INT8_MIN;
	uint64_t t55 = 4481557496LLU;

	t55 = ((x221^(x222/x223))|x224);

	if (t55 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int16_t x227 = INT16_MIN;
	int64_t x228 = -1266688LL;

	t56 = ((x225^(x226/x227))|x228);

	if (t56 != 18446744073708306431LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = 0U;
	static uint32_t x234 = 35U;
	volatile int16_t x235 = -1389;
	volatile uint64_t x236 = 1LLU;
	static volatile uint64_t t57 = 904968LLU;

	t57 = ((x233^(x234/x235))|x236);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = UINT32_MAX;
	volatile uint64_t x238 = 49793LLU;
	int8_t x239 = -1;
	volatile uint32_t x240 = 439U;

	t58 = ((x237^(x238/x239))|x240);

	if (t58 != 4294967295LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = -1;
	volatile int16_t x242 = INT16_MAX;
	int32_t x243 = -1;
	volatile int32_t t59 = 26425;

	t59 = ((x241^(x242/x243))|x244);

	if (t59 != -2147450882) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = 11497;
	int32_t x246 = INT32_MIN;
	static volatile uint64_t x247 = 30785450LLU;
	int16_t x248 = INT16_MAX;
	volatile uint64_t t60 = 10572259350536708LLU;

	t60 = ((x245^(x246/x247))|x248);

	if (t60 != 599203348479LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x249 = -1LL;
	static uint8_t x250 = 123U;
	volatile uint64_t x251 = UINT64_MAX;
	uint64_t t61 = UINT64_MAX;

	t61 = ((x249^(x250/x251))|x252);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = -1LL;
	int16_t x254 = INT16_MIN;
	volatile int32_t x255 = INT32_MIN;
	int16_t x256 = 9230;
	volatile int64_t t62 = 2634776LL;

	t62 = ((x253^(x254/x255))|x256);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x258 = 1570U;
	uint8_t x259 = 30U;
	volatile int8_t x260 = INT8_MAX;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x257^(x258/x259))|x260);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 751LLU;
	int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	static volatile int16_t x264 = INT16_MAX;
	uint64_t t64 = 15489072718667570LLU;

	t64 = ((x261^(x262/x263))|x264);

	if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 23U;
	int16_t x266 = 7634;
	int16_t x267 = 2;
	static uint64_t x268 = 155682LLU;
	static uint64_t t65 = 13LLU;

	t65 = ((x265^(x266/x267))|x268);

	if (t65 != 159486LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x271 = 9;
	uint32_t x272 = 15714650U;
	uint32_t t66 = 6318272U;

	t66 = ((x269^(x270/x271))|x272);

	if (t66 != 15728639U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x273 = INT16_MIN;
	volatile int32_t x274 = -39;
	volatile uint16_t x275 = 3U;
	static int8_t x276 = 3;

	t67 = ((x273^(x274/x275))|x276);

	if (t67 != 32755) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x277 = INT16_MIN;
	int32_t x278 = -1;
	uint16_t x279 = 32123U;
	static uint16_t x280 = UINT16_MAX;
	int32_t t68 = -380048578;

	t68 = ((x277^(x278/x279))|x280);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = UINT64_MAX;
	uint64_t x282 = 478132573880LLU;
	int64_t x283 = -1LL;
	uint32_t x284 = UINT32_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x281^(x282/x283))|x284);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MAX;
	volatile int32_t x286 = INT32_MIN;
	uint8_t x287 = 7U;
	static int64_t x288 = -135020054753LL;
	static volatile int64_t t70 = 45852009273089LL;

	t70 = ((x285^(x286/x287))|x288);

	if (t70 != -1838319713LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x289 = 29U;
	static int32_t x292 = -1;
	static volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x289^(x290/x291))|x292);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = -1264;
	int64_t x294 = 3287535467LL;
	int32_t x295 = INT32_MIN;
	static int16_t x296 = -1;
	volatile int64_t t72 = 45913LL;

	t72 = ((x293^(x294/x295))|x296);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	uint8_t x298 = 63U;
	int32_t x300 = INT32_MIN;
	int32_t t73 = -316;

	t73 = ((x297^(x298/x299))|x300);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x301 = INT32_MIN;
	volatile int32_t x302 = 957287609;
	volatile int32_t x303 = INT32_MIN;
	static volatile uint16_t x304 = 589U;
	volatile int32_t t74 = -1;

	t74 = ((x301^(x302/x303))|x304);

	if (t74 != -2147483059) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -1;
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = -1;
	uint16_t x308 = UINT16_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x305^(x306/x307))|x308);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x309 = 2U;
	volatile int8_t x310 = -1;
	uint8_t x311 = UINT8_MAX;
	static volatile int64_t x312 = INT64_MAX;
	volatile int64_t t76 = INT64_MAX;

	t76 = ((x309^(x310/x311))|x312);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	volatile int16_t x314 = 9266;
	static volatile int32_t x315 = INT32_MIN;
	int32_t x316 = -1;
	volatile int64_t t77 = -26LL;

	t77 = ((x313^(x314/x315))|x316);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x317 = 43;
	int8_t x318 = 2;
	volatile int8_t x319 = -1;
	volatile uint32_t x320 = 1U;

	t78 = ((x317^(x318/x319))|x320);

	if (t78 != 4294967253U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x322 = -7;
	static int64_t x324 = -1LL;
	int64_t t79 = -118192688246311LL;

	t79 = ((x321^(x322/x323))|x324);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 10351446382418LLU;
	volatile int16_t x326 = INT16_MAX;
	int16_t x328 = INT16_MIN;
	uint64_t t80 = 39384LLU;

	t80 = ((x325^(x326/x327))|x328);

	if (t80 != 18446744073709541202LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x329 = -1;
	int8_t x330 = INT8_MIN;
	int32_t x331 = INT32_MIN;
	volatile int8_t x332 = INT8_MAX;
	int32_t t81 = 5;

	t81 = ((x329^(x330/x331))|x332);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = -1;
	uint8_t x335 = UINT8_MAX;
	volatile int64_t t82 = 504886705190640LL;

	t82 = ((x333^(x334/x335))|x336);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 120U;
	int64_t x338 = -1LL;
	int8_t x339 = INT8_MIN;
	volatile int16_t x340 = -894;

	t83 = ((x337^(x338/x339))|x340);

	if (t83 != -774LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x341 = UINT8_MAX;
	uint16_t x342 = 0U;
	int64_t x344 = 299LL;

	t84 = ((x341^(x342/x343))|x344);

	if (t84 != 511LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x346 = 1U;
	uint64_t t85 = 76575674155993197LLU;

	t85 = ((x345^(x346/x347))|x348);

	if (t85 != 18446744073709541227LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MAX;
	int64_t t86 = 24598LL;

	t86 = ((x349^(x350/x351))|x352);

	if (t86 != -72624978274533248LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x353 = 448U;
	volatile uint32_t x354 = 5764U;
	uint32_t x355 = UINT32_MAX;
	uint32_t x356 = 391151U;

	t87 = ((x353^(x354/x355))|x356);

	if (t87 != 391151U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x358 = 22285U;
	uint8_t x360 = 1U;
	volatile int32_t t88 = 40;

	t88 = ((x357^(x358/x359))|x360);

	if (t88 != -22515) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x361 = 26U;
	uint64_t x362 = 642739128LLU;
	volatile uint32_t x363 = 225U;
	uint32_t x364 = 11753894U;
	uint64_t t89 = 16092573379742LLU;

	t89 = ((x361^(x362/x363))|x364);

	if (t89 != 12312502LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x366 = INT64_MIN;
	volatile int8_t x367 = 22;
	static volatile uint8_t x368 = UINT8_MAX;

	t90 = ((x365^(x366/x367))|x368);

	if (t90 != -419244183493398785LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x370 = 246U;
	uint16_t x371 = 7U;
	volatile uint32_t t91 = 17U;

	t91 = ((x369^(x370/x371))|x372);

	if (t91 != 1783U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x373 = 377U;
	uint32_t x374 = UINT32_MAX;
	uint16_t x375 = UINT16_MAX;
	int32_t x376 = INT32_MAX;
	uint32_t t92 = 42896U;

	t92 = ((x373^(x374/x375))|x376);

	if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = 792U;
	static volatile uint32_t x380 = 1710174U;

	t93 = ((x377^(x378/x379))|x380);

	if (t93 != 1769471U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = INT16_MIN;
	static int64_t x382 = -1LL;
	int8_t x383 = INT8_MAX;
	uint16_t x384 = UINT16_MAX;
	int64_t t94 = -104789LL;

	t94 = ((x381^(x382/x383))|x384);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x385 = 0U;
	volatile int8_t x386 = -1;
	static int16_t x387 = -1819;
	int32_t x388 = INT32_MIN;

	t95 = ((x385^(x386/x387))|x388);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = 15U;
	volatile int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;

	t96 = ((x389^(x390/x391))|x392);

	if (t96 != 1214U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x394 = 734246U;
	volatile int64_t x395 = INT64_MIN;
	int16_t x396 = -367;
	int64_t t97 = 18749531171LL;

	t97 = ((x393^(x394/x395))|x396);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x397 = -1;
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	volatile int64_t t98 = -15047786686LL;

	t98 = ((x397^(x398/x399))|x400);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x401 = INT16_MAX;
	int8_t x403 = INT8_MIN;
	volatile int16_t x404 = INT16_MIN;
	static uint64_t t99 = UINT64_MAX;

	t99 = ((x401^(x402/x403))|x404);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

