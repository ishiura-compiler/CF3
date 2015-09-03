#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
static uint64_t t2 = UINT64_MAX;
int32_t t3 = 378221398;
int16_t x17 = INT16_MIN;
uint16_t x20 = 534U;
volatile int32_t t4 = 81101;
volatile int16_t x31 = INT16_MIN;
uint32_t t7 = 762792U;
static uint8_t x40 = UINT8_MAX;
volatile int32_t t9 = -255670;
static volatile int8_t x42 = INT8_MIN;
uint32_t x46 = 2236953U;
volatile int32_t t12 = 42128;
int8_t x57 = INT8_MIN;
volatile uint32_t t13 = 234787061U;
int32_t x62 = INT32_MIN;
int32_t t14 = 378672249;
int8_t x69 = INT8_MAX;
int8_t x78 = 3;
volatile uint16_t x81 = 182U;
int8_t x91 = 5;
volatile int32_t x97 = INT32_MIN;
volatile uint8_t x104 = 62U;
int8_t x107 = INT8_MAX;
int16_t x108 = -98;
int64_t x111 = 487280117145080808LL;
static int32_t t26 = 876;
volatile uint8_t x135 = UINT8_MAX;
volatile int8_t x137 = -1;
int8_t x140 = 55;
int32_t x153 = -3;
int16_t x154 = -1;
int32_t x156 = -1;
int32_t t37 = 4;
int8_t x159 = -1;
int32_t x166 = INT32_MIN;
static uint64_t x168 = 77813244LLU;
uint64_t x173 = 26834LLU;
static volatile int32_t t42 = 0;
int16_t x183 = INT16_MIN;
uint16_t x186 = 337U;
int32_t t45 = INT32_MIN;
int32_t x195 = INT32_MAX;
int64_t x196 = -1LL;
volatile int16_t x197 = INT16_MAX;
uint16_t x204 = 42U;
volatile int32_t t49 = 293;
int8_t x209 = 2;
static int64_t x214 = -1LL;
int32_t x222 = INT32_MIN;
int8_t x223 = INT8_MAX;
int32_t t55 = INT32_MIN;
volatile uint32_t x231 = 987U;
static int16_t x235 = INT16_MIN;
volatile int64_t x238 = -3077557LL;
uint64_t x240 = 49216184436723LLU;
int16_t x242 = -101;
uint16_t x243 = UINT16_MAX;
static int32_t x244 = 1;
uint32_t x247 = UINT32_MAX;
int64_t x250 = -360LL;
uint8_t x253 = UINT8_MAX;
uint32_t x256 = UINT32_MAX;
uint64_t x265 = UINT64_MAX;
int64_t x266 = -26802492LL;
int32_t x270 = INT32_MIN;
static uint32_t x273 = 5U;
int32_t x288 = -68;
volatile int32_t t69 = 1;
int16_t x296 = INT16_MAX;
int32_t x297 = INT32_MAX;
volatile uint32_t x303 = 124024U;
int32_t t73 = INT32_MIN;
uint16_t x309 = UINT16_MAX;
int32_t x310 = INT32_MAX;
static int16_t x317 = INT16_MIN;
int32_t t76 = -511;
int16_t x327 = 1235;
static uint16_t x330 = 2713U;
volatile int32_t t78 = INT32_MAX;
static uint8_t x333 = 54U;
volatile uint16_t x336 = UINT16_MAX;
uint16_t x338 = 9U;
static uint16_t x344 = UINT16_MAX;
int16_t x347 = INT16_MIN;
volatile int32_t t82 = 756;
volatile uint16_t x367 = 11U;
volatile uint64_t x375 = 1063136526320741385LLU;
int32_t t89 = 13;
volatile uint16_t x394 = UINT16_MAX;
volatile int8_t x397 = 17;
volatile int32_t x405 = -1;
uint16_t x420 = UINT16_MAX;
int32_t t99 = 770940173;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x2 = 34681525279LLU;
	static uint8_t x4 = 85U;
	volatile int32_t t0 = 6;

	t0 = ((x1<(x2%x3))+x4);

	if (t0 != 86) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -1LL;
	static int64_t x6 = -1LL;
	int64_t x7 = INT64_MIN;
	int16_t x8 = -9842;
	volatile int32_t t1 = -49027322;

	t1 = ((x5<(x6%x7))+x8);

	if (t1 != -9842) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -24;
	int16_t x10 = INT16_MAX;
	volatile uint32_t x11 = UINT32_MAX;
	uint64_t x12 = UINT64_MAX;

	t2 = ((x9<(x10%x11))+x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MAX;
	uint64_t x15 = 151964574653659LLU;
	int32_t x16 = 599;

	t3 = ((x13<(x14%x15))+x16);

	if (t3 != 599) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x18 = INT8_MAX;
	static volatile int8_t x19 = INT8_MIN;

	t4 = ((x17<(x18%x19))+x20);

	if (t4 != 535) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MIN;
	static int16_t x23 = 3;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -114;

	t5 = ((x21<(x22%x23))+x24);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 2;
	int16_t x26 = INT16_MIN;
	static volatile int64_t x27 = INT64_MIN;
	int32_t x28 = -3;
	volatile int32_t t6 = -131010;

	t6 = ((x25<(x26%x27))+x28);

	if (t6 != -3) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int64_t x30 = 219952758988422LL;
	uint32_t x32 = 63264U;

	t7 = ((x29<(x30%x31))+x32);

	if (t7 != 63265U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static int8_t x34 = INT8_MIN;
	int64_t x35 = 130118409565879879LL;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -28;

	t8 = ((x33<(x34%x35))+x36);

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 12U;
	static int32_t x38 = INT32_MAX;
	int32_t x39 = -16292;

	t9 = ((x37<(x38%x39))+x40);

	if (t9 != 256) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 0U;
	int16_t x43 = INT16_MIN;
	int8_t x44 = -1;
	int32_t t10 = -1;

	t10 = ((x41<(x42%x43))+x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 164022956242051486LLU;
	volatile int8_t x47 = INT8_MIN;
	uint32_t x48 = 881496161U;
	static uint32_t t11 = 5722U;

	t11 = ((x45<(x46%x47))+x48);

	if (t11 != 881496161U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x53 = 8069153189745LLU;
	int8_t x54 = INT8_MAX;
	uint64_t x55 = 25266161157590LLU;
	int16_t x56 = -5;

	t12 = ((x53<(x54%x55))+x56);

	if (t12 != -5) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x58 = UINT16_MAX;
	volatile uint16_t x59 = 283U;
	uint32_t x60 = 126U;

	t13 = ((x57<(x58%x59))+x60);

	if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int16_t x63 = INT16_MAX;
	static volatile uint16_t x64 = UINT16_MAX;

	t14 = ((x61<(x62%x63))+x64);

	if (t14 != 65536) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	volatile int64_t x66 = -1LL;
	volatile int16_t x67 = INT16_MAX;
	int32_t x68 = 100432624;
	volatile int32_t t15 = 60208;

	t15 = ((x65<(x66%x67))+x68);

	if (t15 != 100432624) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = INT16_MIN;
	int16_t x71 = -157;
	int64_t x72 = INT64_MIN;
	int64_t t16 = INT64_MIN;

	t16 = ((x69<(x70%x71))+x72);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = -1;
	uint16_t x75 = 3208U;
	int16_t x76 = -5;
	static volatile int32_t t17 = -773;

	t17 = ((x73<(x74%x75))+x76);

	if (t17 != -4) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 0;
	static int8_t x79 = -13;
	static uint64_t x80 = UINT64_MAX;
	static uint64_t t18 = 970587441005290210LLU;

	t18 = ((x77<(x78%x79))+x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = INT32_MIN;
	static int16_t x83 = INT16_MIN;
	static uint16_t x84 = 108U;
	static volatile int32_t t19 = -40334;

	t19 = ((x81<(x82%x83))+x84);

	if (t19 != 108) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -117290494716281LL;
	int32_t x86 = -1645;
	volatile int64_t x87 = INT64_MIN;
	static int32_t x88 = -1;
	static volatile int32_t t20 = 29922;

	t20 = ((x85<(x86%x87))+x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 1016;
	int64_t x90 = INT64_MIN;
	int8_t x92 = -1;
	int32_t t21 = -6566793;

	t21 = ((x89<(x90%x91))+x92);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 406U;
	static uint64_t x94 = 6370110057171885LLU;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MIN;
	static int64_t t22 = -4103LL;

	t22 = ((x93<(x94%x95))+x96);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = -58;
	uint32_t x99 = 145307U;
	uint32_t x100 = 22U;
	static volatile uint32_t t23 = 1793U;

	t23 = ((x97<(x98%x99))+x100);

	if (t23 != 22U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 1U;
	uint32_t x102 = 51808421U;
	uint16_t x103 = 1631U;
	int32_t t24 = 23904;

	t24 = ((x101<(x102%x103))+x104);

	if (t24 != 63) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = INT32_MIN;
	static volatile int64_t x106 = INT64_MIN;
	volatile int32_t t25 = 0;

	t25 = ((x105<(x106%x107))+x108);

	if (t25 != -97) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = UINT16_MAX;
	uint8_t x112 = UINT8_MAX;

	t26 = ((x109<(x110%x111))+x112);

	if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	static int32_t x114 = 1;
	int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MAX;
	int32_t t27 = INT32_MAX;

	t27 = ((x113<(x114%x115))+x116);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x117 = 41;
	uint32_t x118 = 115U;
	int32_t x119 = -25647228;
	volatile int64_t x120 = 105696771195945LL;
	volatile int64_t t28 = -6546130346LL;

	t28 = ((x117<(x118%x119))+x120);

	if (t28 != 105696771195946LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 1U;
	volatile int64_t x122 = -150125893308645490LL;
	int64_t x123 = -465708152LL;
	int16_t x124 = 3;
	int32_t t29 = -1289449;

	t29 = ((x121<(x122%x123))+x124);

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = INT32_MIN;
	volatile int32_t x126 = 1;
	static int32_t x127 = INT32_MAX;
	static uint64_t x128 = 134342354403458423LLU;
	uint64_t t30 = 36635340872796LLU;

	t30 = ((x125<(x126%x127))+x128);

	if (t30 != 134342354403458424LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 1U;
	uint16_t x130 = UINT16_MAX;
	int8_t x131 = 40;
	volatile int16_t x132 = INT16_MAX;
	static int32_t t31 = -1;

	t31 = ((x129<(x130%x131))+x132);

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = INT64_MIN;
	volatile uint64_t x134 = UINT64_MAX;
	volatile uint32_t x136 = 2U;
	volatile uint32_t t32 = 1812468U;

	t32 = ((x133<(x134%x135))+x136);

	if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = INT64_MAX;
	int32_t x139 = 48807;
	int32_t t33 = 765814;

	t33 = ((x137<(x138%x139))+x140);

	if (t33 != 56) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -7;
	uint16_t x142 = UINT16_MAX;
	static uint64_t x143 = 100081162937LLU;
	static volatile int16_t x144 = INT16_MIN;
	int32_t t34 = -45;

	t34 = ((x141<(x142%x143))+x144);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = 13023;
	int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int8_t x148 = 0;
	static volatile int32_t t35 = -13;

	t35 = ((x145<(x146%x147))+x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = UINT64_MAX;
	static int64_t x150 = -1LL;
	int32_t x151 = INT32_MIN;
	static int16_t x152 = 10077;
	volatile int32_t t36 = 60;

	t36 = ((x149<(x150%x151))+x152);

	if (t36 != 10077) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x155 = -1;

	t37 = ((x153<(x154%x155))+x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MIN;
	int32_t x160 = -1;
	static volatile int32_t t38 = -1;

	t38 = ((x157<(x158%x159))+x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = -28;
	int32_t x163 = -1;
	uint64_t x164 = 27562LLU;
	volatile uint64_t t39 = 54LLU;

	t39 = ((x161<(x162%x163))+x164);

	if (t39 != 27563LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -5;
	static int32_t x167 = INT32_MAX;
	volatile uint64_t t40 = 305458182LLU;

	t40 = ((x165<(x166%x167))+x168);

	if (t40 != 77813245LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x169 = INT64_MIN;
	uint16_t x170 = 951U;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t41 = 534476698U;

	t41 = ((x169<(x170%x171))+x172);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x174 = -1;
	volatile int64_t x175 = 5394972LL;
	static volatile uint16_t x176 = UINT16_MAX;

	t42 = ((x173<(x174%x175))+x176);

	if (t42 != 65536) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 5472U;
	uint32_t x178 = 1655954901U;
	int32_t x179 = 2;
	static int8_t x180 = INT8_MIN;
	static volatile int32_t t43 = -607435805;

	t43 = ((x177<(x178%x179))+x180);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -15;
	static int64_t x182 = -91LL;
	static volatile uint32_t x184 = 995U;
	volatile uint32_t t44 = 26724U;

	t44 = ((x181<(x182%x183))+x184);

	if (t44 != 995U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 31422U;
	int32_t x187 = INT32_MIN;
	static int32_t x188 = INT32_MIN;

	t45 = ((x185<(x186%x187))+x188);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = UINT64_MAX;
	int16_t x190 = INT16_MIN;
	uint32_t x191 = UINT32_MAX;
	uint64_t x192 = 429426217500LLU;
	uint64_t t46 = 19818655034LLU;

	t46 = ((x189<(x190%x191))+x192);

	if (t46 != 429426217500LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x193 = UINT64_MAX;
	static uint16_t x194 = UINT16_MAX;
	static int64_t t47 = 120802524180LL;

	t47 = ((x193<(x194%x195))+x196);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x198 = -1;
	int64_t x199 = -5924836LL;
	volatile uint16_t x200 = UINT16_MAX;
	int32_t t48 = 1;

	t48 = ((x197<(x198%x199))+x200);

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = UINT8_MAX;
	static volatile uint8_t x202 = UINT8_MAX;
	int64_t x203 = -1LL;

	t49 = ((x201<(x202%x203))+x204);

	if (t49 != 42) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x205 = UINT64_MAX;
	volatile int32_t x206 = INT32_MAX;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t50 = -361367;

	t50 = ((x205<(x206%x207))+x208);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	static uint8_t x212 = 23U;
	int32_t t51 = 61126;

	t51 = ((x209<(x210%x211))+x212);

	if (t51 != 23) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x213 = -1;
	static uint64_t x215 = 37017LLU;
	uint32_t x216 = 10200U;
	static volatile uint32_t t52 = 553449454U;

	t52 = ((x213<(x214%x215))+x216);

	if (t52 != 10200U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MIN;
	volatile int64_t x218 = INT64_MAX;
	int64_t x219 = 485998859LL;
	volatile int32_t x220 = 10;
	static volatile int32_t t53 = 110380;

	t53 = ((x217<(x218%x219))+x220);

	if (t53 != 11) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MAX;
	uint8_t x224 = UINT8_MAX;
	int32_t t54 = 1;

	t54 = ((x221<(x222%x223))+x224);

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x225 = INT64_MAX;
	uint8_t x226 = 2U;
	int8_t x227 = INT8_MAX;
	int32_t x228 = INT32_MIN;

	t55 = ((x225<(x226%x227))+x228);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x229 = -9567LL;
	int32_t x230 = -168140239;
	int8_t x232 = 2;
	int32_t t56 = -45455844;

	t56 = ((x229<(x230%x231))+x232);

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = UINT32_MAX;
	uint64_t x234 = 2144743495700769LLU;
	int32_t x236 = INT32_MIN;
	static int32_t t57 = -198;

	t57 = ((x233<(x234%x235))+x236);

	if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x237 = -22;
	int64_t x239 = INT64_MIN;
	static uint64_t t58 = 14256931806LLU;

	t58 = ((x237<(x238%x239))+x240);

	if (t58 != 49216184436723LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MIN;
	int32_t t59 = -1598;

	t59 = ((x241<(x242%x243))+x244);

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 7U;
	int8_t x246 = INT8_MIN;
	int8_t x248 = INT8_MIN;
	int32_t t60 = -316503;

	t60 = ((x245<(x246%x247))+x248);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x249 = 1616U;
	int8_t x251 = INT8_MAX;
	uint16_t x252 = UINT16_MAX;
	int32_t t61 = -57568931;

	t61 = ((x249<(x250%x251))+x252);

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x254 = 676U;
	static int32_t x255 = INT32_MIN;
	uint32_t t62 = 22455366U;

	t62 = ((x253<(x254%x255))+x256);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	uint32_t x260 = 2181448U;
	static uint32_t t63 = 173970714U;

	t63 = ((x257<(x258%x259))+x260);

	if (t63 != 2181448U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = UINT8_MAX;
	volatile int16_t x262 = -1;
	static int32_t x263 = 19749;
	int64_t x264 = 1922937932528706LL;
	int64_t t64 = 3LL;

	t64 = ((x261<(x262%x263))+x264);

	if (t64 != 1922937932528706LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x267 = INT16_MAX;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t65 = 1;

	t65 = ((x265<(x266%x267))+x268);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x269 = 1;
	int32_t x271 = 955580;
	int16_t x272 = INT16_MIN;
	volatile int32_t t66 = -137580;

	t66 = ((x269<(x270%x271))+x272);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x274 = INT64_MIN;
	uint8_t x275 = 1U;
	int8_t x276 = INT8_MIN;
	int32_t t67 = 1;

	t67 = ((x273<(x274%x275))+x276);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x277 = 8207497921881LL;
	static uint16_t x278 = 2U;
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = INT32_MIN;
	volatile int32_t t68 = INT32_MIN;

	t68 = ((x277<(x278%x279))+x280);

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MIN;
	volatile int16_t x286 = INT16_MAX;
	static uint32_t x287 = 340U;

	t69 = ((x285<(x286%x287))+x288);

	if (t69 != -68) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x289 = 2U;
	int32_t x290 = 1;
	uint32_t x291 = UINT32_MAX;
	volatile int16_t x292 = -1;
	int32_t t70 = 488;

	t70 = ((x289<(x290%x291))+x292);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x293 = 2851U;
	int16_t x294 = INT16_MIN;
	volatile int16_t x295 = INT16_MAX;
	volatile int32_t t71 = -50783;

	t71 = ((x293<(x294%x295))+x296);

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x298 = -102713;
	int8_t x299 = -1;
	int8_t x300 = INT8_MIN;
	volatile int32_t t72 = -337704054;

	t72 = ((x297<(x298%x299))+x300);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = 0;
	volatile int32_t x304 = INT32_MIN;

	t73 = ((x301<(x302%x303))+x304);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x305 = -3;
	static int8_t x306 = INT8_MIN;
	static int64_t x307 = INT64_MIN;
	volatile int64_t x308 = -3352273690171LL;
	volatile int64_t t74 = 7993544LL;

	t74 = ((x305<(x306%x307))+x308);

	if (t74 != -3352273690171LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t75 = 25390307;

	t75 = ((x309<(x310%x311))+x312);

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x318 = INT16_MAX;
	int8_t x319 = 23;
	volatile uint16_t x320 = UINT16_MAX;

	t76 = ((x317<(x318%x319))+x320);

	if (t76 != 65536) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MIN;
	static int8_t x326 = INT8_MAX;
	uint32_t x328 = 15U;
	uint32_t t77 = 37U;

	t77 = ((x325<(x326%x327))+x328);

	if (t77 != 16U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = INT32_MAX;

	t78 = ((x329<(x330%x331))+x332);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x334 = UINT64_MAX;
	volatile uint64_t x335 = UINT64_MAX;
	int32_t t79 = -15;

	t79 = ((x333<(x334%x335))+x336);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x337 = -1;
	int16_t x339 = INT16_MAX;
	static int16_t x340 = -400;
	int32_t t80 = -30320201;

	t80 = ((x337<(x338%x339))+x340);

	if (t80 != -399) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MIN;
	volatile uint8_t x342 = 19U;
	int32_t x343 = INT32_MAX;
	volatile int32_t t81 = 1;

	t81 = ((x341<(x342%x343))+x344);

	if (t81 != 65536) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = 8843670654568093LLU;
	int8_t x346 = -24;
	int16_t x348 = INT16_MIN;

	t82 = ((x345<(x346%x347))+x348);

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 2251U;
	int8_t x350 = -39;
	int8_t x351 = INT8_MAX;
	int64_t x352 = INT64_MIN;
	volatile int64_t t83 = INT64_MIN;

	t83 = ((x349<(x350%x351))+x352);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x353 = -1;
	uint16_t x354 = 1U;
	volatile int8_t x355 = INT8_MIN;
	volatile int64_t x356 = INT64_MIN;
	volatile int64_t t84 = -352160LL;

	t84 = ((x353<(x354%x355))+x356);

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = -1;
	int32_t x358 = INT32_MAX;
	uint64_t x359 = 1LLU;
	static uint16_t x360 = UINT16_MAX;
	volatile int32_t t85 = -3;

	t85 = ((x357<(x358%x359))+x360);

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = UINT64_MAX;
	static int16_t x362 = INT16_MIN;
	uint16_t x363 = 15688U;
	uint64_t x364 = 636533LLU;
	uint64_t t86 = 14395628LLU;

	t86 = ((x361<(x362%x363))+x364);

	if (t86 != 636533LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MAX;
	static uint8_t x366 = UINT8_MAX;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t87 = 689056935;

	t87 = ((x365<(x366%x367))+x368);

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x369 = 2748923U;
	int8_t x370 = INT8_MAX;
	int32_t x371 = 94132425;
	static int32_t x372 = INT32_MIN;
	static volatile int32_t t88 = INT32_MIN;

	t88 = ((x369<(x370%x371))+x372);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = INT16_MIN;
	volatile int16_t x376 = 1;

	t89 = ((x373<(x374%x375))+x376);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MIN;
	static int8_t x378 = INT8_MIN;
	int64_t x379 = -58385289370415LL;
	volatile uint64_t x380 = UINT64_MAX;
	volatile uint64_t t90 = 8045LLU;

	t90 = ((x377<(x378%x379))+x380);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = -194911;
	uint8_t x382 = 2U;
	int16_t x383 = -1;
	volatile int16_t x384 = INT16_MAX;
	int32_t t91 = -612054;

	t91 = ((x381<(x382%x383))+x384);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x385 = INT8_MAX;
	volatile int64_t x386 = -42417377LL;
	int8_t x387 = INT8_MAX;
	uint32_t x388 = UINT32_MAX;
	static uint32_t t92 = UINT32_MAX;

	t92 = ((x385<(x386%x387))+x388);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = 21U;
	volatile int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MIN;
	volatile int64_t x392 = -19167876340347LL;
	int64_t t93 = -32554075212LL;

	t93 = ((x389<(x390%x391))+x392);

	if (t93 != -19167876340347LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = INT8_MIN;
	int64_t x395 = INT64_MAX;
	uint32_t x396 = 939844U;
	static uint32_t t94 = 1U;

	t94 = ((x393<(x394%x395))+x396);

	if (t94 != 939845U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x398 = INT16_MAX;
	volatile int8_t x399 = -8;
	static uint8_t x400 = UINT8_MAX;
	volatile int32_t t95 = -1064;

	t95 = ((x397<(x398%x399))+x400);

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = -1909;
	int16_t x402 = INT16_MIN;
	static uint64_t x403 = UINT64_MAX;
	static uint64_t x404 = UINT64_MAX;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = ((x401<(x402%x403))+x404);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x406 = -3403337901800LL;
	static int32_t x407 = INT32_MIN;
	volatile uint64_t x408 = UINT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = ((x405<(x406%x407))+x408);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = 2052258731852446LL;
	uint32_t x410 = 194548U;
	static int8_t x411 = INT8_MAX;
	int8_t x412 = -1;
	volatile int32_t t98 = -64;

	t98 = ((x409<(x410%x411))+x412);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = -129832LL;
	int64_t x418 = -1LL;
	int16_t x419 = INT16_MIN;

	t99 = ((x417<(x418%x419))+x420);

	if (t99 != 65536) { NG(); } else { ; }
	
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

