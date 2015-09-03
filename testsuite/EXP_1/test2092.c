#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = UINT64_MAX;
uint8_t x4 = UINT8_MAX;
int32_t x5 = INT32_MIN;
int64_t x8 = INT64_MAX;
static uint8_t x15 = 15U;
int32_t x23 = INT32_MIN;
volatile int16_t x29 = 1259;
int32_t x40 = INT32_MIN;
int64_t x41 = 194681LL;
int32_t x42 = INT32_MAX;
volatile int64_t t12 = 114162981LL;
uint64_t x53 = 197202871232252LLU;
volatile int16_t x54 = INT16_MIN;
static int64_t x56 = -1LL;
volatile int16_t x62 = 764;
int64_t x67 = INT64_MIN;
int32_t x72 = INT32_MAX;
int8_t x76 = INT8_MIN;
static int32_t x77 = INT32_MAX;
uint64_t x80 = 1321017LLU;
static volatile uint32_t t20 = 8196U;
int32_t t21 = -933575;
static int64_t x92 = 11980LL;
static int8_t x113 = INT8_MAX;
static int32_t x121 = -1;
int8_t x125 = INT8_MIN;
uint16_t x133 = 1U;
int64_t x136 = -4277486495LL;
int64_t t33 = 30965LL;
int8_t x140 = -63;
int32_t t34 = -12;
volatile uint16_t x151 = UINT16_MAX;
static volatile int32_t t37 = 122875;
volatile int32_t x153 = -1;
int8_t x160 = INT8_MIN;
volatile int8_t x164 = -8;
int8_t x167 = -12;
int64_t x168 = INT64_MAX;
int16_t x174 = 1;
static int32_t x179 = INT32_MIN;
int8_t x182 = -1;
static int64_t x183 = -2487082886629352LL;
int32_t x192 = -1;
static volatile int64_t t49 = 23982609703796LL;
static int8_t x204 = INT8_MAX;
volatile int64_t t50 = -118918848202323623LL;
int32_t t51 = 191;
int32_t t53 = 320748;
volatile uint64_t t55 = UINT64_MAX;
uint16_t x231 = 36U;
uint32_t x232 = 1961047093U;
int32_t x235 = INT32_MAX;
int64_t x236 = INT64_MAX;
int32_t x237 = INT32_MIN;
volatile uint16_t x239 = UINT16_MAX;
int64_t x247 = -491LL;
volatile int64_t t61 = 1916828LL;
volatile uint32_t x251 = 84308614U;
volatile uint64_t t65 = UINT64_MAX;
int32_t x265 = 4;
int64_t x272 = INT64_MAX;
static int8_t x274 = -1;
static uint32_t x278 = 31184U;
volatile int64_t t69 = -1LL;
uint16_t x284 = UINT16_MAX;
uint64_t x289 = 1113LLU;
uint64_t x294 = UINT64_MAX;
uint8_t x297 = UINT8_MAX;
uint32_t x298 = 8U;
uint8_t x304 = 50U;
int64_t t77 = 34654LL;
volatile int32_t t78 = INT32_MAX;
int16_t x325 = -1;
uint32_t t81 = 228151548U;
static volatile int16_t x329 = INT16_MAX;
volatile uint8_t x339 = 1U;
uint32_t x344 = 12610280U;
int32_t x349 = -3867;
int8_t x351 = -1;
volatile int32_t t88 = 92410877;
static volatile int32_t t89 = 234770;
int64_t x367 = INT64_MIN;
uint64_t x372 = UINT64_MAX;
uint32_t x380 = 46340U;
static uint16_t x384 = UINT16_MAX;
uint64_t x385 = UINT64_MAX;
int64_t x387 = INT64_MIN;
uint16_t x390 = 11U;
volatile int32_t x391 = -1;
static int16_t x393 = INT16_MIN;


void f0(void) {
	uint32_t x1 = 67690579U;
	uint32_t x2 = 1U;
	volatile uint64_t t0 = 707LLU;

	t0 = (((x1^x2)%x3)|x4);

	if (t0 != 67690751LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 40117291678833621LLU;
	int32_t x7 = 34;
	static volatile uint64_t t1 = 872LLU;

	t1 = (((x5^x6)%x7)|x8);

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile uint8_t x10 = UINT8_MAX;
	uint64_t x11 = 2099735764LLU;
	volatile uint8_t x12 = 4U;
	uint64_t t2 = 192474484640LLU;

	t2 = (((x9^x10)%x11)|x12);

	if (t2 != 1619057900LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -787889680LL;
	int64_t x14 = -1LL;
	uint8_t x16 = 35U;
	int64_t t3 = -515734927135LL;

	t3 = (((x13^x14)%x15)|x16);

	if (t3 != 43LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MAX;
	volatile int8_t x19 = -1;
	uint64_t x20 = 29801290455036257LLU;
	volatile uint64_t t4 = 851LLU;

	t4 = (((x17^x18)%x19)|x20);

	if (t4 != 29801290455036257LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static int8_t x22 = INT8_MIN;
	int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 4733850139930514LL;

	t5 = (((x21^x22)%x23)|x24);

	if (t5 != -32641LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 15;
	int64_t x26 = INT64_MIN;
	uint8_t x27 = 3U;
	static volatile uint64_t x28 = 28LLU;
	uint64_t t6 = 7160855087033561698LLU;

	t6 = (((x25^x26)%x27)|x28);

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = 393U;
	uint32_t t7 = 2162U;

	t7 = (((x29^x30)%x31)|x32);

	if (t7 != 4294936043U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = 41;
	int8_t x35 = -1;
	int32_t x36 = 143910967;
	volatile int32_t t8 = 104783639;

	t8 = (((x33^x34)%x35)|x36);

	if (t8 != 143910967) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	int8_t x38 = -1;
	static volatile int16_t x39 = -1;
	static int32_t t9 = INT32_MIN;

	t9 = (((x37^x38)%x39)|x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x43 = UINT8_MAX;
	int32_t x44 = 242965;
	int64_t t10 = 840690LL;

	t10 = (((x41^x42)%x43)|x44);

	if (t10 != 242975LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int64_t x46 = INT64_MAX;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = -1;
	uint64_t t11 = UINT64_MAX;

	t11 = (((x45^x46)%x47)|x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint32_t x50 = 27U;
	int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MIN;

	t12 = (((x49^x50)%x51)|x52);

	if (t12 != -2147483622LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x55 = INT32_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (((x53^x54)%x55)|x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static int8_t x58 = INT8_MIN;
	int8_t x59 = 1;
	static int16_t x60 = -6;
	int32_t t14 = 80;

	t14 = (((x57^x58)%x59)|x60);

	if (t14 != -6) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 1173;
	int16_t x63 = INT16_MIN;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (((x61^x62)%x63)|x64);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -582333652989LL;
	static int16_t x66 = -1;
	volatile uint64_t x68 = 3736LLU;
	uint64_t t16 = 20266LLU;

	t16 = (((x65^x66)%x67)|x68);

	if (t16 != 582333652988LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 185495216U;
	volatile int8_t x70 = 15;
	int64_t x71 = -1470LL;
	int64_t t17 = 28306932899LL;

	t17 = (((x69^x70)%x71)|x72);

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	uint64_t x74 = 2171433818LLU;
	volatile uint32_t x75 = UINT32_MAX;
	uint64_t t18 = 125009623723605537LLU;

	t18 = (((x73^x74)%x75)|x76);

	if (t18 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = UINT32_MAX;
	volatile int32_t x79 = -84;
	uint64_t t19 = 2LLU;

	t19 = (((x77^x78)%x79)|x80);

	if (t19 != 2148804665LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 1;
	uint32_t x82 = 2U;
	int32_t x83 = INT32_MIN;
	uint8_t x84 = 28U;

	t20 = (((x81^x82)%x83)|x84);

	if (t20 != 31U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	volatile uint8_t x86 = 16U;
	static int16_t x87 = INT16_MIN;
	static int16_t x88 = INT16_MAX;

	t21 = (((x85^x86)%x87)|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	volatile int64_t t22 = 50828916644565430LL;

	t22 = (((x89^x90)%x91)|x92);

	if (t22 != 11980LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MAX;
	int16_t x94 = -1;
	static int16_t x95 = -1;
	int8_t x96 = -6;
	int64_t t23 = -3501340520LL;

	t23 = (((x93^x94)%x95)|x96);

	if (t23 != -6LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 1;
	uint8_t x98 = UINT8_MAX;
	volatile int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MAX;
	int64_t t24 = -4473890619107334875LL;

	t24 = (((x97^x98)%x99)|x100);

	if (t24 != 255LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 488687U;
	int16_t x102 = INT16_MIN;
	volatile uint64_t x103 = 3LLU;
	int32_t x104 = -1;
	static uint64_t t25 = UINT64_MAX;

	t25 = (((x101^x102)%x103)|x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	static uint32_t x106 = UINT32_MAX;
	static int32_t x107 = INT32_MIN;
	int64_t x108 = -175281230472LL;
	int64_t t26 = 18382LL;

	t26 = (((x105^x106)%x107)|x108);

	if (t26 != -175281230472LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -755963619;
	uint32_t x110 = UINT32_MAX;
	static int64_t x111 = -1LL;
	int16_t x112 = INT16_MIN;
	volatile int64_t t27 = 524915742365143638LL;

	t27 = (((x109^x110)%x111)|x112);

	if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = UINT64_MAX;
	uint16_t x115 = 28U;
	int16_t x116 = 1650;
	uint64_t t28 = 931022416499777270LLU;

	t28 = (((x113^x114)%x115)|x116);

	if (t28 != 1650LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MIN;
	static volatile int32_t x119 = -1;
	static int32_t x120 = 189183944;
	static uint64_t t29 = 9LLU;

	t29 = (((x117^x118)%x119)|x120);

	if (t29 != 189202431LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = 81U;
	int32_t x123 = 225645289;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = -36955;

	t30 = (((x121^x122)%x123)|x124);

	if (t30 != -82) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 35U;
	static int64_t x127 = -684LL;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t31 = -31897740259719LL;

	t31 = (((x125^x126)%x127)|x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -9429450543027LL;
	int8_t x130 = -1;
	int64_t x131 = -3632341LL;
	uint8_t x132 = 7U;
	int64_t t32 = 1LL;

	t32 = (((x129^x130)%x131)|x132);

	if (t32 != 2277263LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x134 = -1;
	int32_t x135 = INT32_MIN;

	t33 = (((x133^x134)%x135)|x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x137 = 104U;
	int8_t x138 = 15;
	static int8_t x139 = -1;

	t34 = (((x137^x138)%x139)|x140);

	if (t34 != -63) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 260477150LL;
	volatile int32_t x142 = INT32_MAX;
	int32_t x143 = INT32_MIN;
	int8_t x144 = -1;
	int64_t t35 = 48LL;

	t35 = (((x141^x142)%x143)|x144);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	uint32_t x146 = 3U;
	static uint64_t x147 = 67703205LLU;
	volatile uint64_t x148 = 4882LLU;
	uint64_t t36 = 8257777317LLU;

	t36 = (((x145^x146)%x147)|x148);

	if (t36 != 4990LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -1;
	int8_t x150 = INT8_MIN;
	int32_t x152 = -1;

	t37 = (((x149^x150)%x151)|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MAX;
	volatile int32_t x155 = INT32_MIN;
	volatile int64_t x156 = -84LL;
	int64_t t38 = 1583LL;

	t38 = (((x153^x154)%x155)|x156);

	if (t38 != -84LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	static uint64_t x158 = UINT64_MAX;
	volatile uint64_t x159 = UINT64_MAX;
	volatile uint64_t t39 = 1034271424LLU;

	t39 = (((x157^x158)%x159)|x160);

	if (t39 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int64_t x162 = INT64_MAX;
	int64_t x163 = 55203LL;
	int64_t t40 = -300323781605718LL;

	t40 = (((x161^x162)%x163)|x164);

	if (t40 != -8LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int8_t x166 = -3;
	static int64_t t41 = INT64_MAX;

	t41 = (((x165^x166)%x167)|x168);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = -1;
	volatile int8_t x170 = 8;
	static int64_t x171 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile int64_t t42 = -117116419201453LL;

	t42 = (((x169^x170)%x171)|x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	static int32_t x175 = 388242;
	int64_t x176 = -11239033515LL;
	volatile int64_t t43 = -17222127059063LL;

	t43 = (((x173^x174)%x175)|x176);

	if (t43 != -2731LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 0U;
	uint64_t x178 = 825435LLU;
	int64_t x180 = INT64_MIN;
	uint64_t t44 = 8902470074150684665LLU;

	t44 = (((x177^x178)%x179)|x180);

	if (t44 != 9223372036855601243LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = 13592;
	int8_t x184 = INT8_MIN;
	static int64_t t45 = -3921281540664127996LL;

	t45 = (((x181^x182)%x183)|x184);

	if (t45 != -25LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = UINT64_MAX;
	int32_t x186 = INT32_MIN;
	static volatile int32_t x187 = -1;
	int16_t x188 = INT16_MIN;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (((x185^x186)%x187)|x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = 1;
	uint8_t x191 = UINT8_MAX;
	static volatile int32_t t47 = 297;

	t47 = (((x189^x190)%x191)|x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1U;
	static uint64_t x194 = 98488229307LLU;
	uint8_t x195 = UINT8_MAX;
	volatile int64_t x196 = 68LL;
	volatile uint64_t t48 = 10326841102522235LLU;

	t48 = (((x193^x194)%x195)|x196);

	if (t48 != 124LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x198 = 15;
	int64_t x199 = INT64_MAX;
	int32_t x200 = INT32_MAX;

	t49 = (((x197^x198)%x199)|x200);

	if (t49 != 4294967295LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = 7581467890786615LL;
	uint8_t x202 = UINT8_MAX;
	volatile int32_t x203 = INT32_MIN;

	t50 = (((x201^x202)%x203)|x204);

	if (t50 != 209822207LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x205 = 25U;
	int32_t x206 = INT32_MIN;
	static int32_t x207 = INT32_MIN;
	static int8_t x208 = 1;

	t51 = (((x205^x206)%x207)|x208);

	if (t51 != -2147483623) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	int64_t x210 = INT64_MAX;
	volatile int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	int64_t t52 = INT64_MIN;

	t52 = (((x209^x210)%x211)|x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	volatile int8_t x214 = INT8_MIN;
	volatile int32_t x215 = INT32_MIN;
	uint8_t x216 = 6U;

	t53 = (((x213^x214)%x215)|x216);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	static int32_t x218 = 48;
	volatile int64_t x219 = INT64_MAX;
	uint64_t x220 = 3261741476724LLU;
	uint64_t t54 = 29LLU;

	t54 = (((x217^x218)%x219)|x220);

	if (t54 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	volatile int16_t x223 = INT16_MIN;
	uint64_t x224 = UINT64_MAX;

	t55 = (((x221^x222)%x223)|x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = 14;
	int32_t x226 = -1;
	int64_t x227 = INT64_MAX;
	int8_t x228 = 1;
	static int64_t t56 = 8LL;

	t56 = (((x225^x226)%x227)|x228);

	if (t56 != -15LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x230 = -3;
	static uint32_t t57 = 299U;

	t57 = (((x229^x230)%x231)|x232);

	if (t57 != 1961047095U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = 1U;
	static int64_t x234 = -21671LL;
	volatile int64_t t58 = -2440529LL;

	t58 = (((x233^x234)%x235)|x236);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x238 = 3;
	static volatile int16_t x240 = INT16_MAX;
	int32_t t59 = 270633798;

	t59 = (((x237^x238)%x239)|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -1;
	volatile int16_t x242 = INT16_MIN;
	volatile int64_t x243 = 165058934548LL;
	uint32_t x244 = UINT32_MAX;
	int64_t t60 = 63LL;

	t60 = (((x241^x242)%x243)|x244);

	if (t60 != 4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = 6;
	uint16_t x246 = 1U;
	int32_t x248 = INT32_MIN;

	t61 = (((x245^x246)%x247)|x248);

	if (t61 != -2147483641LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	volatile int32_t x250 = INT32_MIN;
	uint64_t x252 = UINT64_MAX;
	uint64_t t62 = UINT64_MAX;

	t62 = (((x249^x250)%x251)|x252);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -158;
	int8_t x254 = INT8_MIN;
	int16_t x255 = 11;
	volatile int64_t x256 = -1LL;
	int64_t t63 = 37344338LL;

	t63 = (((x253^x254)%x255)|x256);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 28U;
	uint16_t x258 = 154U;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = UINT64_MAX;
	uint64_t t64 = UINT64_MAX;

	t64 = (((x257^x258)%x259)|x260);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x262 = 55527778879LLU;
	int32_t x263 = INT32_MIN;
	int8_t x264 = -1;

	t65 = (((x261^x262)%x263)|x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	int8_t x268 = 13;
	int64_t t66 = 89199LL;

	t66 = (((x265^x266)%x267)|x268);

	if (t66 != 4294967295LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = UINT16_MAX;
	int64_t x270 = -1LL;
	static int8_t x271 = 60;
	volatile int64_t t67 = 689LL;

	t67 = (((x269^x270)%x271)|x272);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = -81;

	t68 = (((x273^x274)%x275)|x276);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 806648313U;
	int16_t x279 = 9;
	int64_t x280 = -1LL;

	t69 = (((x277^x278)%x279)|x280);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	uint8_t x282 = 0U;
	uint16_t x283 = 3U;
	volatile int32_t t70 = -40;

	t70 = (((x281^x282)%x283)|x284);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 23U;
	uint32_t x286 = UINT32_MAX;
	uint32_t x287 = 508776U;
	int64_t x288 = 4LL;
	volatile int64_t t71 = -3026421402092276LL;

	t71 = (((x285^x286)%x287)|x288);

	if (t71 != 389060LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x290 = 1481U;
	int32_t x291 = -1;
	volatile int64_t x292 = 2771LL;
	volatile uint64_t t72 = 32386LLU;

	t72 = (((x289^x290)%x291)|x292);

	if (t72 != 3027LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -6;
	static int8_t x295 = -12;
	static int16_t x296 = INT16_MIN;
	volatile uint64_t t73 = 1629858483LLU;

	t73 = (((x293^x294)%x295)|x296);

	if (t73 != 18446744073709518853LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	volatile uint32_t t74 = 633U;

	t74 = (((x297^x298)%x299)|x300);

	if (t74 != 2147483895U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MAX;
	int8_t x302 = INT8_MIN;
	uint32_t x303 = 36034U;
	volatile uint32_t t75 = 432084413U;

	t75 = (((x301^x302)%x303)|x304);

	if (t75 != 1527U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = INT8_MIN;
	int16_t x306 = 1;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = 1;

	t76 = (((x305^x306)%x307)|x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 7406U;
	int64_t x310 = 3LL;
	int16_t x311 = 4037;
	uint32_t x312 = 284U;

	t77 = (((x309^x310)%x311)|x312);

	if (t77 != 3388LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MAX;
	uint8_t x314 = UINT8_MAX;
	static volatile int32_t x315 = INT32_MAX;
	volatile int32_t x316 = INT32_MAX;

	t78 = (((x313^x314)%x315)|x316);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MIN;
	uint32_t x318 = 1444U;
	uint32_t x319 = 420259U;
	int64_t x320 = INT64_MIN;
	static int64_t t79 = -1045LL;

	t79 = (((x317^x318)%x319)|x320);

	if (t79 != -9223372036854393947LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 721U;
	volatile int64_t x322 = INT64_MIN;
	static int64_t x323 = -1LL;
	uint8_t x324 = 12U;
	volatile int64_t t80 = -16360LL;

	t80 = (((x321^x322)%x323)|x324);

	if (t80 != 12LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x326 = -1;
	static uint32_t x327 = 190899852U;
	uint32_t x328 = 32546338U;

	t81 = (((x325^x326)%x327)|x328);

	if (t81 != 32546338U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = -1LL;
	int16_t x331 = INT16_MIN;
	static int64_t x332 = INT64_MIN;
	volatile int64_t t82 = INT64_MIN;

	t82 = (((x329^x330)%x331)|x332);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = 2022366U;
	int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MAX;
	int64_t x336 = INT64_MIN;
	volatile int64_t t83 = -359566901247388LL;

	t83 = (((x333^x334)%x335)|x336);

	if (t83 != -9223372036854775766LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 685U;
	uint32_t x338 = 47663696U;
	static uint32_t x340 = UINT32_MAX;
	static volatile uint32_t t84 = UINT32_MAX;

	t84 = (((x337^x338)%x339)|x340);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	uint16_t x342 = UINT16_MAX;
	static volatile uint16_t x343 = UINT16_MAX;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (((x341^x342)%x343)|x344);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = UINT32_MAX;
	int8_t x346 = INT8_MAX;
	uint64_t x347 = 5LLU;
	int64_t x348 = INT64_MIN;
	uint64_t t86 = 59LLU;

	t86 = (((x345^x346)%x347)|x348);

	if (t86 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -1;
	volatile int8_t x352 = -1;
	int32_t t87 = -3;

	t87 = (((x349^x350)%x351)|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	int16_t x354 = 0;
	static int8_t x355 = INT8_MAX;
	int32_t x356 = -1;

	t88 = (((x353^x354)%x355)|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = UINT8_MAX;
	volatile int32_t x358 = INT32_MIN;
	static int8_t x359 = -1;
	uint16_t x360 = 431U;

	t89 = (((x357^x358)%x359)|x360);

	if (t89 != 431) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	int64_t x364 = INT64_MAX;
	static volatile int64_t t90 = INT64_MAX;

	t90 = (((x361^x362)%x363)|x364);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -280;
	volatile int16_t x366 = 109;
	static int8_t x368 = INT8_MAX;
	volatile int64_t t91 = 0LL;

	t91 = (((x365^x366)%x367)|x368);

	if (t91 != -257LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = 1919LL;
	static uint16_t x371 = 3U;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (((x369^x370)%x371)|x372);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = 120;
	int32_t x374 = INT32_MIN;
	volatile int32_t x375 = INT32_MAX;
	int8_t x376 = INT8_MAX;
	int32_t t93 = -883002;

	t93 = (((x373^x374)%x375)|x376);

	if (t93 != -2147483521) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 734U;
	int64_t x378 = -1LL;
	static int64_t x379 = 436LL;
	int64_t t94 = -1LL;

	t94 = (((x377^x378)%x379)|x380);

	if (t94 != -43LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = -224538243;
	uint8_t x382 = UINT8_MAX;
	int16_t x383 = INT16_MAX;
	volatile int32_t t95 = -25;

	t95 = (((x381^x382)%x383)|x384);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = -1;
	static int16_t x388 = 3;
	volatile uint64_t t96 = 23LLU;

	t96 = (((x385^x386)%x387)|x388);

	if (t96 != 3LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = 233055;
	static int16_t x392 = -3617;
	volatile int32_t t97 = -14591825;

	t97 = (((x389^x390)%x391)|x392);

	if (t97 != -3617) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	int64_t x395 = -1LL;
	volatile uint32_t x396 = 448971U;
	int64_t t98 = -39839020261872LL;

	t98 = (((x393^x394)%x395)|x396);

	if (t98 != 448971LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -1;
	int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	volatile int64_t t99 = -350417105LL;

	t99 = (((x397^x398)%x399)|x400);

	if (t99 != -9223372036854775681LL) { NG(); } else { ; }
	
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

