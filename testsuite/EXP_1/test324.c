#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 1271145096664372LLU;
int64_t x10 = INT64_MIN;
uint64_t t3 = 1076173509752LLU;
int32_t x22 = 21309763;
volatile int32_t t5 = -237476583;
uint8_t x31 = UINT8_MAX;
int64_t x45 = -50672534293601239LL;
uint32_t x54 = UINT32_MAX;
int64_t x58 = INT64_MIN;
int16_t x62 = -1;
uint32_t t14 = UINT32_MAX;
uint64_t x81 = 202LLU;
int64_t x84 = INT64_MIN;
uint64_t x89 = 1516703113565608LLU;
int8_t x94 = INT8_MIN;
int8_t x96 = INT8_MIN;
volatile int16_t x98 = INT16_MIN;
int64_t x99 = INT64_MAX;
volatile int64_t t21 = -18246580271589LL;
volatile uint32_t x107 = 8U;
int8_t x108 = -1;
int64_t x119 = INT64_MIN;
int16_t x123 = -2;
uint64_t t27 = UINT64_MAX;
static int8_t x125 = INT8_MAX;
volatile uint32_t t28 = 458782478U;
int64_t t29 = -228147777630LL;
volatile int64_t x134 = 1223801457583128157LL;
static volatile int64_t t30 = -27865575705LL;
int8_t x141 = -1;
uint32_t x142 = 2870512U;
volatile int32_t x147 = -1;
uint8_t x149 = 3U;
int16_t x157 = -1;
uint32_t t36 = UINT32_MAX;
uint64_t x161 = 283974LLU;
uint64_t x164 = 77325067457252LLU;
volatile uint64_t t38 = UINT64_MAX;
uint32_t x173 = UINT32_MAX;
uint8_t x177 = 5U;
int16_t x179 = INT16_MIN;
int64_t x185 = 30LL;
int8_t x188 = INT8_MIN;
uint64_t x189 = 168418803512LLU;
volatile int8_t x196 = 2;
volatile uint64_t t44 = 15049532396LLU;
int16_t x201 = -2;
static volatile uint64_t t48 = UINT64_MAX;
uint64_t x217 = 10925LLU;
static uint8_t x219 = UINT8_MAX;
static volatile uint8_t x222 = 13U;
uint64_t t51 = UINT64_MAX;
volatile int8_t x226 = INT8_MIN;
static uint32_t x245 = 120862051U;
volatile int64_t t57 = 135749274900329628LL;
int8_t x249 = -1;
uint8_t x250 = 24U;
uint32_t x254 = UINT32_MAX;
int8_t x255 = -1;
uint64_t x258 = 33LLU;
static volatile uint64_t t60 = UINT64_MAX;
int8_t x263 = -1;
volatile int64_t t62 = 19746LL;
int64_t x271 = 866722878732766919LL;
uint16_t x274 = 4008U;
uint32_t x282 = 19U;
int32_t x288 = -1733336;
int32_t t67 = -52;
static int32_t x289 = INT32_MIN;
static volatile uint64_t t69 = UINT64_MAX;
int16_t x299 = INT16_MIN;
volatile uint64_t t71 = 188085LLU;
volatile uint32_t t72 = 11732493U;
uint8_t x318 = UINT8_MAX;
volatile int32_t t75 = 1;
int8_t x326 = INT8_MIN;
int64_t t78 = 41775LL;
static volatile int32_t x337 = INT32_MIN;
int64_t x339 = -1LL;
int32_t x345 = INT32_MIN;
static int32_t x356 = -1042376;
uint32_t x358 = 2575042U;
int64_t x366 = INT64_MAX;
static uint64_t x374 = 4150510LLU;
int16_t x378 = -8013;
static int32_t x385 = 125094;
static int8_t x404 = 1;
volatile int64_t t94 = -4285676658022LL;
uint64_t t95 = UINT64_MAX;
volatile uint64_t t96 = 10799042002436525LLU;
volatile int64_t x417 = -1LL;
int64_t x419 = INT64_MIN;
int16_t x423 = -1;
uint32_t x426 = UINT32_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile int64_t x3 = INT64_MIN;
	int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 3LLU;

	t0 = (((x1-x2)|x3)|x4);

	if (t0 != 18446744073576262603LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int16_t x6 = INT16_MIN;
	int8_t x7 = -1;
	static int64_t x8 = -10511533245848LL;
	int64_t t1 = 389LL;

	t1 = (((x5-x6)|x7)|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	int16_t x11 = -1;
	int8_t x12 = 15;
	int64_t t2 = -237388LL;

	t2 = (((x9-x10)|x11)|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	int32_t x14 = INT32_MIN;
	uint16_t x15 = 3436U;
	volatile uint32_t x16 = UINT32_MAX;

	t3 = (((x13-x14)|x15)|x16);

	if (t3 != 4294967295LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static int16_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	static uint32_t x20 = 1984610193U;
	static volatile uint32_t t4 = 14U;

	t4 = (((x17-x18)|x19)|x20);

	if (t4 != 1984626687U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	volatile uint16_t x23 = 7503U;
	int8_t x24 = -3;

	t5 = (((x21-x22)|x23)|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x26 = INT8_MAX;
	volatile uint8_t x27 = 1U;
	static int8_t x28 = INT8_MIN;
	uint64_t t6 = 1458445116649300LLU;

	t6 = (((x25-x26)|x27)|x28);

	if (t6 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = 204LLU;
	int16_t x32 = -355;
	uint64_t t7 = UINT64_MAX;

	t7 = (((x29-x30)|x31)|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 102;
	volatile int64_t x34 = -1LL;
	uint32_t x35 = 9U;
	int32_t x36 = INT32_MIN;
	volatile int64_t t8 = -3560324022LL;

	t8 = (((x33-x34)|x35)|x36);

	if (t8 != -2147483537LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 2;
	uint8_t x42 = 3U;
	static int16_t x43 = INT16_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t9 = -15;

	t9 = (((x41-x42)|x43)|x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MAX;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = 7638;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = (((x45-x46)|x47)|x48);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	int32_t x50 = -18759082;
	volatile int16_t x51 = INT16_MIN;
	volatile int64_t x52 = INT64_MAX;
	int64_t t11 = 6397571324151096LL;

	t11 = (((x49-x50)|x51)|x52);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	static int16_t x55 = INT16_MAX;
	static volatile int16_t x56 = -1;
	static uint32_t t12 = UINT32_MAX;

	t12 = (((x53-x54)|x55)|x56);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	uint64_t x59 = 23989028LLU;
	uint8_t x60 = UINT8_MAX;
	uint64_t t13 = 3024453LLU;

	t13 = (((x57-x58)|x59)|x60);

	if (t13 != 23989247LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = -1;
	volatile int8_t x63 = INT8_MIN;
	uint32_t x64 = UINT32_MAX;

	t14 = (((x61-x62)|x63)|x64);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 1794;
	static uint8_t x66 = 5U;
	uint64_t x67 = 237LLU;
	int8_t x68 = 1;
	volatile uint64_t t15 = 32296784LLU;

	t15 = (((x65-x66)|x67)|x68);

	if (t15 != 1789LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = -1;
	uint64_t x70 = 2120832734911LLU;
	int16_t x71 = INT16_MIN;
	volatile uint16_t x72 = UINT16_MAX;
	uint64_t t16 = UINT64_MAX;

	t16 = (((x69-x70)|x71)|x72);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	int16_t x75 = 6;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t17 = 4395417;

	t17 = (((x73-x74)|x75)|x76);

	if (t17 != -2147418113) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MAX;
	volatile uint64_t t18 = 34181584997994LLU;

	t18 = (((x81-x82)|x83)|x84);

	if (t18 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = -29;
	int16_t x91 = 62;
	int32_t x92 = 0;
	uint64_t t19 = 1011315346LLU;

	t19 = (((x89-x90)|x91)|x92);

	if (t19 != 1516703113565695LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 0U;
	int8_t x95 = INT8_MIN;
	volatile int32_t t20 = 2;

	t20 = (((x93-x94)|x95)|x96);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	int16_t x100 = INT16_MIN;

	t21 = (((x97-x98)|x99)|x100);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = -1;
	static volatile int64_t x102 = INT64_MAX;
	int16_t x103 = 4951;
	volatile int16_t x104 = 10348;
	int64_t t22 = -1237558365797086LL;

	t22 = (((x101-x102)|x103)|x104);

	if (t22 != -9223372036854760577LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = -1;
	int64_t x106 = INT64_MIN;
	static volatile int64_t t23 = -1208LL;

	t23 = (((x105-x106)|x107)|x108);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x109 = 4U;
	static int32_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	static volatile int16_t x112 = INT16_MIN;
	int32_t t24 = -120730925;

	t24 = (((x109-x110)|x111)|x112);

	if (t24 != -32513) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x113 = UINT8_MAX;
	uint16_t x114 = 223U;
	static uint16_t x115 = UINT16_MAX;
	static int8_t x116 = INT8_MIN;
	volatile int32_t t25 = 4920277;

	t25 = (((x113-x114)|x115)|x116);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MIN;
	volatile int16_t x118 = INT16_MIN;
	volatile int64_t x120 = INT64_MAX;
	volatile int64_t t26 = -36324521676LL;

	t26 = (((x117-x118)|x119)|x120);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x122 = 1;
	int32_t x124 = 619;

	t27 = (((x121-x122)|x123)|x124);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x126 = 10;
	volatile uint32_t x127 = 3U;
	uint32_t x128 = 305946U;

	t28 = (((x125-x126)|x127)|x128);

	if (t28 != 306047U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = -60;
	int64_t x130 = -3712526898023557108LL;
	int32_t x131 = INT32_MIN;
	int8_t x132 = -1;

	t29 = (((x129-x130)|x131)|x132);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x133 = -73398851;
	static int8_t x135 = INT8_MIN;
	volatile int16_t x136 = 6;

	t30 = (((x133-x134)|x135)|x136);

	if (t30 != -26LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = 4463;
	uint16_t x138 = 5U;
	int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t31 = 0;

	t31 = (((x137-x138)|x139)|x140);

	if (t31 != -28310) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x143 = INT8_MIN;
	uint16_t x144 = UINT16_MAX;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (((x141-x142)|x143)|x144);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x145 = UINT8_MAX;
	static volatile int32_t x146 = 5990803;
	volatile uint16_t x148 = 939U;
	volatile int32_t t33 = 65715;

	t33 = (((x145-x146)|x147)|x148);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x150 = INT16_MIN;
	static uint32_t x151 = 9502406U;
	int32_t x152 = INT32_MIN;
	static volatile uint32_t t34 = 2004145U;

	t34 = (((x149-x150)|x151)|x152);

	if (t34 != 2156986055U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x153 = 5337LLU;
	static int32_t x154 = INT32_MIN;
	static volatile int64_t x155 = INT64_MIN;
	volatile int64_t x156 = INT64_MIN;
	volatile uint64_t t35 = 6575085946LLU;

	t35 = (((x153-x154)|x155)|x156);

	if (t35 != 9223372039002264793LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x158 = 0U;
	static int32_t x159 = INT32_MAX;
	volatile int16_t x160 = -2097;

	t36 = (((x157-x158)|x159)|x160);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x162 = 30U;
	uint8_t x163 = UINT8_MAX;
	uint64_t t37 = 6102LLU;

	t37 = (((x161-x162)|x163)|x164);

	if (t37 != 77325067474943LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MAX;
	uint64_t x166 = 138340LLU;
	int64_t x167 = -323LL;
	int8_t x168 = -1;

	t38 = (((x165-x166)|x167)|x168);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x169 = -1;
	static uint32_t x170 = UINT32_MAX;
	uint16_t x171 = 1100U;
	uint64_t x172 = 45708174LLU;
	volatile uint64_t t39 = 19566LLU;

	t39 = (((x169-x170)|x171)|x172);

	if (t39 != 45709262LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x174 = -1;
	int64_t x175 = INT64_MIN;
	volatile int64_t x176 = INT64_MAX;
	volatile int64_t t40 = -142400LL;

	t40 = (((x173-x174)|x175)|x176);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = -107;
	uint32_t x180 = 360306U;
	static uint32_t t41 = 1046U;

	t41 = (((x177-x178)|x179)|x180);

	if (t41 != 4294967154U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x186 = UINT32_MAX;
	int16_t x187 = INT16_MIN;
	int64_t t42 = -705353LL;

	t42 = (((x185-x186)|x187)|x188);

	if (t42 != -97LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x190 = 5U;
	static int64_t x191 = 497LL;
	int64_t x192 = -1LL;
	uint64_t t43 = UINT64_MAX;

	t43 = (((x189-x190)|x191)|x192);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = 1092394516386378462LLU;
	int32_t x194 = -1;
	uint8_t x195 = 12U;

	t44 = (((x193-x194)|x195)|x196);

	if (t44 != 1092394516386378463LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = INT8_MIN;
	uint32_t x198 = UINT32_MAX;
	uint32_t x199 = 415U;
	volatile int16_t x200 = 132;
	volatile uint32_t t45 = 288681U;

	t45 = (((x197-x198)|x199)|x200);

	if (t45 != 4294967199U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x202 = -39;
	int8_t x203 = 1;
	int16_t x204 = -1;
	static volatile int32_t t46 = 2;

	t46 = (((x201-x202)|x203)|x204);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = 48U;
	int16_t x206 = INT16_MAX;
	int8_t x207 = -1;
	int8_t x208 = -1;
	int32_t t47 = 3;

	t47 = (((x205-x206)|x207)|x208);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 6LLU;
	int32_t x210 = INT32_MAX;
	int32_t x211 = INT32_MIN;
	int16_t x212 = -4;

	t48 = (((x209-x210)|x211)|x212);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -24375928390849LL;
	int64_t x214 = -505481414625LL;
	volatile int8_t x215 = INT8_MIN;
	volatile uint8_t x216 = 18U;
	int64_t t49 = -4081560LL;

	t49 = (((x213-x214)|x215)|x216);

	if (t49 != -78LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x218 = UINT8_MAX;
	static int32_t x220 = INT32_MIN;
	static uint64_t t50 = 3914938388966LLU;

	t50 = (((x217-x218)|x219)|x220);

	if (t50 != 18446744071562078719LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x221 = 5U;
	static int8_t x223 = -1;
	uint64_t x224 = 8144863255243431LLU;

	t51 = (((x221-x222)|x223)|x224);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x227 = -1;
	int64_t x228 = INT64_MIN;
	static int64_t t52 = 4096696672LL;

	t52 = (((x225-x226)|x227)|x228);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = 6052982063539445LL;
	volatile int64_t x231 = 819746512LL;
	volatile int16_t x232 = INT16_MAX;
	volatile int64_t t53 = 63LL;

	t53 = (((x229-x230)|x231)|x232);

	if (t53 != -6052983395745793LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x233 = -79677056;
	static uint64_t x234 = 5637844LLU;
	static int64_t x235 = -1LL;
	static volatile int16_t x236 = 14128;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (((x233-x234)|x235)|x236);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x237 = INT8_MIN;
	static int8_t x238 = INT8_MAX;
	static int64_t x239 = INT64_MIN;
	static int16_t x240 = INT16_MIN;
	volatile int64_t t55 = 378LL;

	t55 = (((x237-x238)|x239)|x240);

	if (t55 != -255LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -3;
	volatile int16_t x242 = INT16_MIN;
	int32_t x243 = -12;
	static uint16_t x244 = UINT16_MAX;
	volatile int32_t t56 = -21;

	t56 = (((x241-x242)|x243)|x244);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x246 = 193724067LL;
	uint32_t x247 = UINT32_MAX;
	static int16_t x248 = -5149;

	t57 = (((x245-x246)|x247)|x248);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x251 = UINT64_MAX;
	int8_t x252 = INT8_MAX;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = (((x249-x250)|x251)|x252);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MAX;
	int8_t x256 = 1;
	uint32_t t59 = UINT32_MAX;

	t59 = (((x253-x254)|x255)|x256);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x257 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	volatile int64_t x260 = 501956576552LL;

	t60 = (((x257-x258)|x259)|x260);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = -1;
	uint16_t x262 = 108U;
	static uint8_t x264 = 4U;
	volatile int32_t t61 = -28511;

	t61 = (((x261-x262)|x263)|x264);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = -1;
	uint16_t x266 = 215U;
	static int8_t x267 = INT8_MAX;
	int64_t x268 = 1840LL;

	t62 = (((x265-x266)|x267)|x268);

	if (t62 != -129LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MAX;
	volatile uint32_t x270 = 9114U;
	uint8_t x272 = 6U;
	int64_t t63 = -37536LL;

	t63 = (((x269-x270)|x271)|x272);

	if (t63 != 866722879914368743LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int64_t x275 = -1LL;
	int32_t x276 = INT32_MIN;
	volatile int64_t t64 = 11077LL;

	t64 = (((x273-x274)|x275)|x276);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x277 = UINT64_MAX;
	static uint32_t x278 = UINT32_MAX;
	volatile int32_t x279 = INT32_MIN;
	uint32_t x280 = UINT32_MAX;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (((x277-x278)|x279)|x280);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = -1LL;
	static uint64_t x283 = UINT64_MAX;
	volatile int64_t x284 = 43LL;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (((x281-x282)|x283)|x284);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = UINT8_MAX;
	uint16_t x286 = 3U;
	int16_t x287 = -1;

	t67 = (((x285-x286)|x287)|x288);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x290 = -1LL;
	int32_t x291 = INT32_MAX;
	int64_t x292 = 2231989082199973579LL;
	volatile int64_t t68 = 11301LL;

	t68 = (((x289-x290)|x291)|x292);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = 455939716565223LL;
	int8_t x294 = -4;
	int8_t x295 = 2;
	volatile uint64_t x296 = UINT64_MAX;

	t69 = (((x293-x294)|x295)|x296);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = UINT64_MAX;
	volatile uint8_t x298 = UINT8_MAX;
	uint32_t x300 = 15475U;
	volatile uint64_t t70 = 5343291LLU;

	t70 = (((x297-x298)|x299)|x300);

	if (t70 != 18446744073709551475LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = 43134227694LLU;
	int16_t x302 = INT16_MAX;
	static uint8_t x303 = 1U;
	uint32_t x304 = 1311114094U;

	t71 = (((x301-x302)|x303)|x304);

	if (t71 != 44275046383LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -12;
	volatile uint32_t x306 = 3706444U;
	static volatile int8_t x307 = 3;
	int8_t x308 = 23;

	t72 = (((x305-x306)|x307)|x308);

	if (t72 != 4291260863U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = -1;
	volatile int8_t x310 = -1;
	int64_t x311 = 65055LL;
	static uint32_t x312 = UINT32_MAX;
	volatile int64_t t73 = -2717266427097LL;

	t73 = (((x309-x310)|x311)|x312);

	if (t73 != 4294967295LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x317 = 28U;
	int8_t x319 = INT8_MIN;
	volatile int16_t x320 = INT16_MAX;
	int32_t t74 = 2023245;

	t74 = (((x317-x318)|x319)|x320);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x321 = -1;
	uint16_t x322 = 25427U;
	static int32_t x323 = INT32_MAX;
	int16_t x324 = INT16_MIN;

	t75 = (((x321-x322)|x323)|x324);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = UINT64_MAX;
	static volatile uint8_t x327 = 1U;
	int32_t x328 = INT32_MIN;
	uint64_t t76 = 539650LLU;

	t76 = (((x325-x326)|x327)|x328);

	if (t76 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x329 = 111;
	int8_t x330 = -14;
	uint8_t x331 = 1U;
	int64_t x332 = INT64_MIN;
	int64_t t77 = -9910681108LL;

	t77 = (((x329-x330)|x331)|x332);

	if (t77 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = 0U;
	int16_t x334 = INT16_MAX;
	static int8_t x335 = INT8_MAX;
	int64_t x336 = INT64_MIN;

	t78 = (((x333-x334)|x335)|x336);

	if (t78 != -32641LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x338 = -192;
	int16_t x340 = INT16_MAX;
	int64_t t79 = -2695764073LL;

	t79 = (((x337-x338)|x339)|x340);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x346 = INT64_MIN;
	int32_t x347 = INT32_MIN;
	int16_t x348 = -1;
	int64_t t80 = -121347239473LL;

	t80 = (((x345-x346)|x347)|x348);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int8_t x354 = -1;
	int64_t x355 = INT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (((x353-x354)|x355)|x356);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x357 = INT8_MIN;
	static uint64_t x359 = 7316512051353LLU;
	uint64_t x360 = 279714644484034053LLU;
	volatile uint64_t t82 = 128495149855LLU;

	t82 = (((x357-x358)|x359)|x360);

	if (t82 != 279714658594242239LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x361 = UINT16_MAX;
	uint32_t x362 = 2U;
	int32_t x363 = -1;
	int16_t x364 = -3818;
	static volatile uint32_t t83 = UINT32_MAX;

	t83 = (((x361-x362)|x363)|x364);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x365 = 414U;
	int64_t x367 = 6364399278725LL;
	int8_t x368 = INT8_MIN;
	int64_t t84 = 2393929329940LL;

	t84 = (((x365-x366)|x367)|x368);

	if (t84 != -97LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x369 = 10775U;
	int32_t x370 = -470;
	uint32_t x371 = UINT32_MAX;
	static uint64_t x372 = 8459349LLU;
	volatile uint64_t t85 = 164LLU;

	t85 = (((x369-x370)|x371)|x372);

	if (t85 != 4294967295LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x373 = 34262LLU;
	int8_t x375 = -1;
	volatile int16_t x376 = 2928;
	uint64_t t86 = UINT64_MAX;

	t86 = (((x373-x374)|x375)|x376);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x377 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	volatile int64_t x380 = INT64_MAX;
	static int64_t t87 = 200351471475489LL;

	t87 = (((x377-x378)|x379)|x380);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = INT8_MAX;
	int32_t x382 = INT32_MAX;
	uint16_t x383 = 1U;
	static volatile int64_t x384 = INT64_MAX;
	int64_t t88 = 8079LL;

	t88 = (((x381-x382)|x383)|x384);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x386 = INT16_MIN;
	uint32_t x387 = 62715020U;
	static volatile uint8_t x388 = UINT8_MAX;
	uint32_t t89 = 2091455557U;

	t89 = (((x385-x386)|x387)|x388);

	if (t89 != 62848255U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x389 = INT16_MIN;
	uint16_t x390 = UINT16_MAX;
	static int16_t x391 = INT16_MIN;
	static volatile int64_t x392 = INT64_MIN;
	volatile int64_t t90 = -1062419382247LL;

	t90 = (((x389-x390)|x391)|x392);

	if (t90 != -32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x393 = 0U;
	int64_t x394 = -1LL;
	uint64_t x395 = 1361249331LLU;
	int64_t x396 = INT64_MIN;
	uint64_t t91 = 3340LLU;

	t91 = (((x393-x394)|x395)|x396);

	if (t91 != 9223372038216025139LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = -1LL;
	int8_t x398 = -1;
	int32_t x399 = 6053;
	int16_t x400 = 0;
	static int64_t t92 = -1412813LL;

	t92 = (((x397-x398)|x399)|x400);

	if (t92 != 6053LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x401 = INT16_MAX;
	volatile int32_t x402 = -1;
	int64_t x403 = -5608254062LL;
	int64_t t93 = -798LL;

	t93 = (((x401-x402)|x403)|x404);

	if (t93 != -5608254061LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x405 = 3264U;
	volatile uint8_t x406 = UINT8_MAX;
	uint16_t x407 = UINT16_MAX;
	int64_t x408 = INT64_MIN;

	t94 = (((x405-x406)|x407)|x408);

	if (t94 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x409 = 26966585245LLU;
	int16_t x410 = INT16_MAX;
	volatile uint16_t x411 = UINT16_MAX;
	int8_t x412 = -1;

	t95 = (((x409-x410)|x411)|x412);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x413 = -32;
	static uint8_t x414 = 2U;
	volatile uint64_t x415 = 74741458LLU;
	int16_t x416 = INT16_MIN;

	t96 = (((x413-x414)|x415)|x416);

	if (t96 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x418 = INT32_MIN;
	static int32_t x420 = INT32_MAX;
	static int64_t t97 = -5784883510LL;

	t97 = (((x417-x418)|x419)|x420);

	if (t97 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = INT32_MAX;
	int32_t x422 = 98709797;
	int8_t x424 = INT8_MIN;
	static int32_t t98 = 953798323;

	t98 = (((x421-x422)|x423)|x424);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x425 = 312U;
	int64_t x427 = INT64_MAX;
	int8_t x428 = INT8_MIN;
	volatile int64_t t99 = 1148854172360482456LL;

	t99 = (((x425-x426)|x427)|x428);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

