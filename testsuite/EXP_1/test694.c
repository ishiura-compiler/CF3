#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -1;
int8_t x9 = INT8_MIN;
volatile uint64_t t2 = 337604541147744395LLU;
int64_t x15 = -1LL;
int32_t x17 = 4;
int16_t x18 = 1;
int16_t x23 = INT16_MAX;
static volatile int32_t x26 = INT32_MIN;
volatile int32_t t7 = 1094217;
int64_t x35 = 1069898966818235LL;
volatile uint64_t t8 = 114LLU;
uint64_t x42 = 57415470149740483LLU;
int8_t x44 = INT8_MIN;
static int8_t x45 = 0;
volatile int64_t x56 = -1LL;
volatile int64_t x57 = -617215LL;
int64_t x65 = 3671540384607LL;
static int16_t x78 = -1;
int16_t x79 = INT16_MIN;
volatile int64_t t19 = 871070LL;
volatile int64_t t23 = -80825429612633084LL;
volatile uint32_t x116 = 1535U;
uint32_t t25 = 15605U;
volatile int16_t x135 = INT16_MAX;
uint64_t x138 = 733810197LLU;
uint16_t x147 = UINT16_MAX;
volatile uint64_t t30 = 149LLU;
uint8_t x153 = 15U;
int32_t t32 = 714898;
volatile uint32_t t33 = 1031655838U;
volatile int64_t t35 = 104430724927230137LL;
int16_t x177 = INT16_MAX;
int64_t x181 = INT64_MAX;
uint64_t t38 = 10095604071137LLU;
int32_t x195 = INT32_MAX;
int64_t x199 = INT64_MIN;
uint64_t x203 = UINT64_MAX;
static volatile int32_t x204 = INT32_MIN;
int64_t x214 = -12LL;
uint64_t x222 = 2LLU;
int32_t x225 = -1;
uint64_t x238 = 16255LLU;
int64_t x241 = -1LL;
volatile int64_t t51 = -221LL;
uint32_t x263 = 0U;
static volatile int8_t x266 = -1;
uint16_t x273 = 13U;
int64_t t58 = 33315462LL;
uint16_t x301 = 17563U;
int64_t x305 = -53960LL;
static uint32_t x307 = UINT32_MAX;
int64_t t65 = -16067049LL;
volatile int64_t x313 = INT64_MAX;
volatile int64_t x322 = -124967236111LL;
volatile int64_t x328 = 73072439409596LL;
int8_t x329 = -1;
static volatile int8_t x332 = INT8_MIN;
volatile int32_t x333 = 5;
int64_t x334 = 208LL;
int8_t x341 = INT8_MIN;
int16_t x343 = INT16_MIN;
int64_t x347 = -14961996325LL;
int32_t x349 = INT32_MIN;
int16_t x352 = INT16_MIN;
int16_t x355 = -1;
int64_t x356 = INT64_MIN;
static uint16_t x359 = UINT16_MAX;
static volatile uint8_t x361 = 1U;
uint16_t x366 = 9U;
int8_t x374 = -1;
int64_t x376 = 2244074517LL;
int8_t x396 = INT8_MIN;
static uint32_t x399 = 5U;
volatile int32_t x401 = 8687036;
volatile int32_t t84 = -422179;
volatile int8_t x410 = INT8_MIN;
uint32_t t86 = 55U;
int8_t x425 = INT8_MAX;
uint32_t x431 = 192188U;
volatile int16_t x432 = -1;
uint64_t x439 = 15071LLU;
volatile int64_t x440 = 502225665LL;
int8_t x445 = INT8_MAX;
int16_t x447 = 0;
int64_t x448 = -1LL;
static int32_t x450 = INT32_MIN;
int64_t x455 = INT64_MIN;
static volatile uint8_t x461 = 123U;
uint16_t x472 = 8U;


void f0(void) {
	volatile uint64_t x2 = 577221255701860273LLU;
	int16_t x3 = INT16_MIN;
	static int8_t x4 = -15;
	uint64_t t0 = 83643LLU;

	t0 = (((x1%x2)-x3)%x4);

	if (t0 != 552885146951915920LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 34402628321637142LL;
	volatile int16_t x6 = INT16_MAX;
	int16_t x7 = INT16_MAX;
	uint32_t x8 = 115U;
	int64_t t1 = 1514176524930439LL;

	t1 = (((x5%x6)-x7)%x8);

	if (t1 != -66LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = UINT64_MAX;
	volatile int16_t x11 = INT16_MIN;
	int64_t x12 = 28139LL;

	t2 = (((x9%x10)-x11)%x12);

	if (t2 != 4501LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 63U;
	int32_t x14 = INT32_MIN;
	static uint8_t x16 = 6U;
	static volatile int64_t t3 = 12LL;

	t3 = (((x13%x14)-x15)%x16);

	if (t3 != 4LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x19 = 16746945LLU;
	uint8_t x20 = 7U;
	static uint64_t t4 = 15648663744847LLU;

	t4 = (((x17%x18)-x19)%x20);

	if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int16_t x22 = 5087;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 227893;

	t5 = (((x21%x22)-x23)%x24);

	if (t5 != -31257) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	static uint8_t x27 = UINT8_MAX;
	int32_t x28 = -4834402;
	volatile int64_t t6 = 110267070913144632LL;

	t6 = (((x25%x26)-x27)%x28);

	if (t6 != -256LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1U;
	uint8_t x30 = 2U;
	volatile int32_t x31 = INT32_MAX;
	int16_t x32 = -1;

	t7 = (((x29%x30)-x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	uint64_t x34 = UINT64_MAX;
	uint16_t x36 = 39U;

	t8 = (((x33%x34)-x35)%x36);

	if (t8 != 8LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static uint32_t x38 = UINT32_MAX;
	int16_t x39 = INT16_MAX;
	int32_t x40 = INT32_MAX;
	volatile uint32_t t9 = 78871U;

	t9 = (((x37%x38)-x39)%x40);

	if (t9 != 2147450754U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -4;
	volatile int8_t x43 = -1;
	static uint64_t t10 = 552900269814209LLU;

	t10 = (((x41%x42)-x43)%x44);

	if (t10 != 16378155642856570LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	volatile int16_t x47 = INT16_MIN;
	int16_t x48 = -1;
	volatile int32_t t11 = -49;

	t11 = (((x45%x46)-x47)%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = -1;
	volatile int32_t x55 = 1798;
	static int64_t t12 = -376LL;

	t12 = (((x53%x54)-x55)%x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x58 = INT8_MAX;
	uint32_t x59 = 756695U;
	int64_t x60 = -1LL;
	volatile int64_t t13 = 501027127240LL;

	t13 = (((x57%x58)-x59)%x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x66 = INT8_MIN;
	int16_t x67 = -1;
	uint16_t x68 = 7U;
	int64_t t14 = -225066877LL;

	t14 = (((x65%x66)-x67)%x68);

	if (t14 != 5LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x77 = INT64_MIN;
	int64_t x80 = -1544390798950LL;
	static volatile int64_t t15 = -266438214LL;

	t15 = (((x77%x78)-x79)%x80);

	if (t15 != 32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int8_t x82 = INT8_MIN;
	uint8_t x83 = 113U;
	volatile int16_t x84 = INT16_MIN;
	uint64_t t16 = 51462986357474545LLU;

	t16 = (((x81%x82)-x83)%x84);

	if (t16 != 14LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	uint8_t x87 = 0U;
	int16_t x88 = -1;
	volatile int32_t t17 = -8904916;

	t17 = (((x85%x86)-x87)%x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x89 = 6573315082730039LL;
	int16_t x90 = INT16_MIN;
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = -1;
	volatile int64_t t18 = -309371642776LL;

	t18 = (((x89%x90)-x91)%x92);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	int8_t x95 = 0;
	int64_t x96 = 736781758519729294LL;

	t19 = (((x93%x94)-x95)%x96);

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = 458870100;
	int32_t x98 = -1;
	int16_t x99 = 965;
	uint64_t x100 = UINT64_MAX;
	uint64_t t20 = 255LLU;

	t20 = (((x97%x98)-x99)%x100);

	if (t20 != 18446744073709550651LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x101 = INT32_MIN;
	volatile int8_t x102 = -1;
	int32_t x103 = INT32_MAX;
	int8_t x104 = -6;
	volatile int32_t t21 = 44;

	t21 = (((x101%x102)-x103)%x104);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x105 = 721258453U;
	static int32_t x106 = INT32_MIN;
	uint32_t x107 = 26603U;
	static uint64_t x108 = 618LLU;
	static uint64_t t22 = 9017965LLU;

	t22 = (((x105%x106)-x107)%x108);

	if (t22 != 512LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 3193U;
	volatile int16_t x110 = 5;
	int64_t x111 = INT64_MAX;
	uint32_t x112 = 129U;

	t23 = (((x109%x110)-x111)%x112);

	if (t23 != -124LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -1;
	int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MIN;
	volatile int64_t t24 = -233LL;

	t24 = (((x113%x114)-x115)%x116);

	if (t24 != 1122LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 52U;
	static volatile int8_t x118 = INT8_MIN;
	volatile int8_t x119 = INT8_MIN;
	uint8_t x120 = 33U;

	t25 = (((x117%x118)-x119)%x120);

	if (t25 != 15U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x121 = 32LL;
	uint8_t x122 = 21U;
	int16_t x123 = INT16_MAX;
	static uint64_t x124 = UINT64_MAX;
	uint64_t t26 = 340668360397039LLU;

	t26 = (((x121%x122)-x123)%x124);

	if (t26 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x133 = 3823U;
	uint16_t x134 = UINT16_MAX;
	int32_t x136 = -1;
	volatile int32_t t27 = 7384;

	t27 = (((x133%x134)-x135)%x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x137 = INT8_MIN;
	int8_t x139 = -5;
	static volatile int8_t x140 = -1;
	volatile uint64_t t28 = 20063466LLU;

	t28 = (((x137%x138)-x139)%x140);

	if (t28 != 519612967LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 50U;
	int16_t x142 = INT16_MIN;
	int8_t x143 = 21;
	static uint64_t x144 = 84743027582273619LLU;
	volatile uint64_t t29 = 8LLU;

	t29 = (((x141%x142)-x143)%x144);

	if (t29 != 29LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static uint64_t x146 = 7132884046103271840LLU;
	int16_t x148 = INT16_MAX;

	t30 = (((x145%x146)-x147)%x148);

	if (t30 != 270LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MIN;
	volatile uint8_t x151 = UINT8_MAX;
	int32_t x152 = INT32_MAX;
	int64_t t31 = -1496038958926098LL;

	t31 = (((x149%x150)-x151)%x152);

	if (t31 != -255LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x154 = 45U;
	uint16_t x155 = 2U;
	int32_t x156 = INT32_MAX;

	t32 = (((x153%x154)-x155)%x156);

	if (t32 != 13) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x165 = -1;
	volatile uint32_t x166 = UINT32_MAX;
	static uint32_t x167 = UINT32_MAX;
	volatile int8_t x168 = -1;

	t33 = (((x165%x166)-x167)%x168);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x169 = 961U;
	uint32_t x170 = 770216242U;
	static int64_t x171 = -2944285LL;
	int16_t x172 = -1;
	volatile int64_t t34 = -6LL;

	t34 = (((x169%x170)-x171)%x172);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = -1;
	int32_t x174 = -189620;
	int8_t x175 = -9;
	int64_t x176 = -2006180039148365LL;

	t35 = (((x173%x174)-x175)%x176);

	if (t35 != 8LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x178 = INT16_MIN;
	volatile int64_t x179 = 133825LL;
	static uint64_t x180 = UINT64_MAX;
	uint64_t t36 = 43898779150LLU;

	t36 = (((x177%x178)-x179)%x180);

	if (t36 != 18446744073709450558LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x182 = INT16_MIN;
	static int8_t x183 = -4;
	uint8_t x184 = UINT8_MAX;
	int64_t t37 = -959691158377773LL;

	t37 = (((x181%x182)-x183)%x184);

	if (t37 != 131LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = -1;
	uint8_t x186 = 19U;
	uint64_t x187 = 342926915498967LLU;
	static int16_t x188 = 10251;

	t38 = (((x185%x186)-x187)%x188);

	if (t38 != 795LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x189 = INT64_MIN;
	static uint16_t x190 = 16926U;
	uint64_t x191 = UINT64_MAX;
	volatile int16_t x192 = INT16_MIN;
	volatile uint64_t t39 = 4082980LLU;

	t39 = (((x189%x190)-x191)%x192);

	if (t39 != 32761LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x193 = -1;
	volatile int16_t x194 = INT16_MIN;
	uint64_t x196 = 51578027273388034LLU;
	uint64_t t40 = 8130387588391500LLU;

	t40 = (((x193%x194)-x195)%x196);

	if (t40 != 33388334962539830LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x197 = 80099775935846102LLU;
	int16_t x198 = INT16_MIN;
	static int32_t x200 = INT32_MIN;
	uint64_t t41 = 8144140460LLU;

	t41 = (((x197%x198)-x199)%x200);

	if (t41 != 9303471812790621910LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x201 = UINT8_MAX;
	int32_t x202 = INT32_MIN;
	uint64_t t42 = 429070807948862458LLU;

	t42 = (((x201%x202)-x203)%x204);

	if (t42 != 256LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x210 = 243089780U;
	int16_t x211 = INT16_MIN;
	int16_t x212 = -2;
	volatile uint32_t t43 = 570304360U;

	t43 = (((x209%x210)-x211)%x212);

	if (t43 != 202798176U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x213 = INT16_MIN;
	int8_t x215 = INT8_MAX;
	int32_t x216 = 4816;
	int64_t t44 = -230550LL;

	t44 = (((x213%x214)-x215)%x216);

	if (t44 != -135LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x217 = INT8_MIN;
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	uint16_t x220 = 1387U;
	int64_t t45 = 1078731240735980LL;

	t45 = (((x217%x218)-x219)%x220);

	if (t45 != 384LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x221 = 107512332777603771LLU;
	volatile int8_t x223 = -4;
	uint8_t x224 = UINT8_MAX;
	volatile uint64_t t46 = 429426734159904455LLU;

	t46 = (((x221%x222)-x223)%x224);

	if (t46 != 5LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x226 = 1017;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MAX;
	static volatile int32_t t47 = -8;

	t47 = (((x225%x226)-x227)%x228);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = 578;
	volatile uint16_t x231 = 335U;
	int16_t x232 = -47;
	int64_t t48 = -83719370787655233LL;

	t48 = (((x229%x230)-x231)%x232);

	if (t48 != -22LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x233 = -1;
	static uint32_t x234 = 3695481U;
	static volatile uint8_t x235 = 7U;
	uint16_t x236 = 1U;
	volatile uint32_t t49 = 6U;

	t49 = (((x233%x234)-x235)%x236);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x237 = -1LL;
	int64_t x239 = 404266283987656LL;
	volatile uint16_t x240 = 3390U;
	static uint64_t t50 = 505690624049430LLU;

	t50 = (((x237%x238)-x239)%x240);

	if (t50 != 2895LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = 6313841;
	uint8_t x244 = 106U;

	t51 = (((x241%x242)-x243)%x244);

	if (t51 != -58LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 151086956804LLU;
	static uint64_t x250 = 1868LLU;
	int16_t x251 = INT16_MIN;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t52 = 6103102100214LLU;

	t52 = (((x249%x250)-x251)%x252);

	if (t52 != 33748LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x257 = 0U;
	static int16_t x258 = -1;
	uint64_t x259 = 467835113455057244LLU;
	static int64_t x260 = INT64_MIN;
	volatile uint64_t t53 = 3366143139262LLU;

	t53 = (((x257%x258)-x259)%x260);

	if (t53 != 8755536923399718564LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x261 = UINT16_MAX;
	volatile int32_t x262 = -1;
	int32_t x264 = INT32_MAX;
	uint32_t t54 = 279U;

	t54 = (((x261%x262)-x263)%x264);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = 2;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	volatile int32_t t55 = 1;

	t55 = (((x265%x266)-x267)%x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x269 = 23;
	volatile int8_t x270 = -1;
	int32_t x271 = -49;
	int64_t x272 = INT64_MIN;
	volatile int64_t t56 = -1066LL;

	t56 = (((x269%x270)-x271)%x272);

	if (t56 != 49LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x274 = INT64_MAX;
	uint8_t x275 = 41U;
	static uint64_t x276 = 1879LLU;
	static uint64_t t57 = 2148365782915LLU;

	t57 = (((x273%x274)-x275)%x276);

	if (t57 != 1028LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x277 = 6U;
	int16_t x278 = 2;
	volatile int64_t x279 = 1508953067LL;
	int64_t x280 = INT64_MAX;

	t58 = (((x277%x278)-x279)%x280);

	if (t58 != -1508953067LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x285 = UINT16_MAX;
	uint32_t x286 = 51U;
	uint64_t x287 = 12266LLU;
	int32_t x288 = 1;
	volatile uint64_t t59 = 7720131880060508LLU;

	t59 = (((x285%x286)-x287)%x288);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x289 = 1U;
	uint16_t x290 = UINT16_MAX;
	uint32_t x291 = 844U;
	int32_t x292 = INT32_MIN;
	volatile uint32_t t60 = 125869U;

	t60 = (((x289%x290)-x291)%x292);

	if (t60 != 2147482805U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x293 = 2U;
	static volatile uint16_t x294 = 18U;
	static int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MAX;
	int64_t t61 = 1405881700655LL;

	t61 = (((x293%x294)-x295)%x296);

	if (t61 != 130LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x297 = 0U;
	int8_t x298 = -1;
	uint8_t x299 = 4U;
	int64_t x300 = INT64_MAX;
	volatile int64_t t62 = -319712262007450761LL;

	t62 = (((x297%x298)-x299)%x300);

	if (t62 != -4LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x302 = INT64_MIN;
	int8_t x303 = 25;
	int32_t x304 = INT32_MIN;
	int64_t t63 = 3549495LL;

	t63 = (((x301%x302)-x303)%x304);

	if (t63 != 17538LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x306 = INT32_MAX;
	static int32_t x308 = INT32_MIN;
	static volatile int64_t t64 = 297459759LL;

	t64 = (((x305%x306)-x307)%x308);

	if (t64 != -53959LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = -3;
	int64_t x310 = -1LL;
	int16_t x311 = -1;
	volatile uint8_t x312 = UINT8_MAX;

	t65 = (((x309%x310)-x311)%x312);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x314 = 193549220LL;
	int16_t x315 = -1;
	uint64_t x316 = 1768110028LLU;
	static uint64_t t66 = 9548011103829782LLU;

	t66 = (((x313%x314)-x315)%x316);

	if (t66 != 103828888LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = 61;
	uint16_t x323 = 8U;
	uint8_t x324 = 9U;
	int64_t t67 = -1217102112731796007LL;

	t67 = (((x321%x322)-x323)%x324);

	if (t67 != 8LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x325 = 19868;
	int16_t x326 = -1;
	static int16_t x327 = INT16_MAX;
	int64_t t68 = 6175259LL;

	t68 = (((x325%x326)-x327)%x328);

	if (t68 != -32767LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x330 = 2082253980U;
	int64_t x331 = -11349760933795LL;
	volatile int64_t t69 = 212762166567741LL;

	t69 = (((x329%x330)-x331)%x332);

	if (t69 != 106LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x335 = -1;
	int8_t x336 = -25;
	int64_t t70 = -89514LL;

	t70 = (((x333%x334)-x335)%x336);

	if (t70 != 6LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x342 = INT64_MIN;
	int32_t x344 = INT32_MIN;
	static volatile int64_t t71 = -415467928366278LL;

	t71 = (((x341%x342)-x343)%x344);

	if (t71 != 32640LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x345 = UINT16_MAX;
	static int16_t x346 = -1;
	int64_t x348 = -1LL;
	volatile int64_t t72 = -3698259330LL;

	t72 = (((x345%x346)-x347)%x348);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x350 = 409029035068654984LLU;
	int64_t x351 = 0LL;
	volatile uint64_t t73 = 1589322612904LLU;

	t73 = (((x349%x350)-x351)%x352);

	if (t73 != 40437493472593688LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = 110193576805LL;
	int64_t x354 = INT64_MAX;
	int64_t t74 = -794995363617LL;

	t74 = (((x353%x354)-x355)%x356);

	if (t74 != 110193576806LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x357 = UINT32_MAX;
	int16_t x358 = INT16_MAX;
	static uint16_t x360 = 104U;
	uint32_t t75 = 1659U;

	t75 = (((x357%x358)-x359)%x360);

	if (t75 != 36U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x362 = -2970;
	int64_t x363 = INT64_MAX;
	int8_t x364 = INT8_MAX;
	int64_t t76 = 4678787LL;

	t76 = (((x361%x362)-x363)%x364);

	if (t76 != -126LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x367 = -52;
	int64_t x368 = INT64_MIN;
	volatile int64_t t77 = -30591LL;

	t77 = (((x365%x366)-x367)%x368);

	if (t77 != 55LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = INT16_MIN;
	volatile uint64_t x370 = 318552378647937187LLU;
	static int16_t x371 = INT16_MIN;
	volatile int32_t x372 = INT32_MIN;
	uint64_t t78 = 37995LLU;

	t78 = (((x369%x370)-x371)%x372);

	if (t78 != 289258490777131957LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x373 = 394U;
	static int32_t x375 = -1;
	volatile int64_t t79 = -402033252038844LL;

	t79 = (((x373%x374)-x375)%x376);

	if (t79 != 395LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x381 = INT8_MIN;
	volatile int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	static int64_t t80 = 294145024057660LL;

	t80 = (((x381%x382)-x383)%x384);

	if (t80 != 32640LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x389 = 15975U;
	uint32_t x390 = UINT32_MAX;
	volatile uint16_t x391 = 5393U;
	int8_t x392 = -3;
	uint32_t t81 = 6U;

	t81 = (((x389%x390)-x391)%x392);

	if (t81 != 10582U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x393 = 39U;
	volatile int8_t x394 = 53;
	uint32_t x395 = 3344377U;
	volatile uint32_t t82 = 104U;

	t82 = (((x393%x394)-x395)%x396);

	if (t82 != 4291622958U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x397 = 1120LLU;
	int32_t x398 = 16236274;
	int16_t x400 = INT16_MIN;
	static volatile uint64_t t83 = 66566LLU;

	t83 = (((x397%x398)-x399)%x400);

	if (t83 != 1115LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MIN;

	t84 = (((x401%x402)-x403)%x404);

	if (t84 != 3521) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = INT64_MAX;
	int16_t x406 = -1;
	int8_t x407 = INT8_MIN;
	uint8_t x408 = 18U;
	volatile int64_t t85 = -18246409301LL;

	t85 = (((x405%x406)-x407)%x408);

	if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x409 = 96708U;
	int8_t x411 = 10;
	int32_t x412 = 137833173;

	t86 = (((x409%x410)-x411)%x412);

	if (t86 != 96698U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x417 = INT32_MIN;
	uint16_t x418 = UINT16_MAX;
	int64_t x419 = -674690813969460LL;
	static volatile int32_t x420 = INT32_MIN;
	volatile int64_t t87 = -126397921807046265LL;

	t87 = (((x417%x418)-x419)%x420);

	if (t87 != 843858996LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = 1;
	volatile int16_t x423 = -1;
	int32_t x424 = INT32_MAX;
	int32_t t88 = 499;

	t88 = (((x421%x422)-x423)%x424);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x426 = 460937868467464514LLU;
	uint32_t x427 = UINT32_MAX;
	int32_t x428 = -1;
	uint64_t t89 = 2126535LLU;

	t89 = (((x425%x426)-x427)%x428);

	if (t89 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x429 = 2612;
	uint32_t x430 = UINT32_MAX;
	static uint32_t t90 = 127010979U;

	t90 = (((x429%x430)-x431)%x432);

	if (t90 != 4294777720U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x437 = 499884053108LLU;
	int64_t x438 = INT64_MAX;
	volatile uint64_t t91 = 14LLU;

	t91 = (((x437%x438)-x439)%x440);

	if (t91 != 169501362LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x441 = 28U;
	int8_t x442 = INT8_MIN;
	static int16_t x443 = 225;
	uint64_t x444 = 1022014741148039225LLU;
	uint64_t t92 = 153088LLU;

	t92 = (((x441%x442)-x443)%x444);

	if (t92 != 50478733044845369LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x446 = INT16_MIN;
	volatile int64_t t93 = -58650LL;

	t93 = (((x445%x446)-x447)%x448);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = 35;
	int8_t x451 = -1;
	int64_t x452 = INT64_MIN;
	volatile int64_t t94 = -1LL;

	t94 = (((x449%x450)-x451)%x452);

	if (t94 != 36LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x453 = INT64_MIN;
	static int32_t x454 = 6587;
	uint16_t x456 = 2U;
	int64_t t95 = 835628225661LL;

	t95 = (((x453%x454)-x455)%x456);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = -1;
	uint8_t x458 = 33U;
	int8_t x459 = INT8_MIN;
	int64_t x460 = 1160343872227LL;
	static int64_t t96 = 38301361LL;

	t96 = (((x457%x458)-x459)%x460);

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x462 = 3379788247573566LLU;
	uint16_t x463 = 121U;
	static volatile uint64_t x464 = 244144944871645810LLU;
	uint64_t t97 = 318755165103865752LLU;

	t97 = (((x461%x462)-x463)%x464);

	if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x465 = 124163U;
	int8_t x466 = INT8_MIN;
	int64_t x467 = INT64_MAX;
	int16_t x468 = INT16_MAX;
	int64_t t98 = 28788974806538760LL;

	t98 = (((x465%x466)-x467)%x468);

	if (t98 != -6912LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x469 = UINT16_MAX;
	int8_t x470 = 28;
	volatile int16_t x471 = -13120;
	static volatile int32_t t99 = -306447235;

	t99 = (((x469%x470)-x471)%x472);

	if (t99 != 7) { NG(); } else { ; }
	
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

