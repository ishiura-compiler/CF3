#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MAX;
int64_t x6 = INT64_MIN;
static uint32_t t1 = 88U;
int64_t t2 = 164676987710LL;
int32_t t4 = -39923608;
int32_t x22 = -368870253;
uint16_t x27 = UINT16_MAX;
int32_t t6 = 348;
int32_t x30 = INT32_MIN;
volatile int32_t t7 = 4235700;
volatile uint16_t x35 = 3605U;
int32_t t9 = 213541588;
int32_t t11 = -5081788;
int8_t x52 = -1;
static int64_t x53 = 2891246098714921LL;
uint64_t t14 = 858277297LLU;
int32_t t16 = -2;
uint32_t x69 = 1U;
static int16_t x73 = 61;
int32_t x74 = -21068021;
volatile int8_t x77 = -1;
int64_t x81 = -1LL;
uint32_t t20 = 75U;
uint64_t x85 = 278LLU;
int32_t t22 = -184234;
volatile uint8_t x100 = 5U;
int16_t x103 = INT16_MIN;
uint32_t x116 = UINT32_MAX;
volatile int64_t x131 = 380003948LL;
volatile int32_t t31 = 21972563;
int64_t x138 = -3898401LL;
static volatile int64_t x140 = INT64_MAX;
uint64_t x148 = 62451LLU;
volatile uint64_t x150 = 213152722832199198LLU;
int16_t x160 = 5164;
static int16_t x164 = -1;
int32_t x165 = INT32_MAX;
volatile uint8_t x166 = 3U;
volatile int32_t x168 = INT32_MAX;
static uint8_t x174 = UINT8_MAX;
volatile uint32_t x193 = 754534560U;
volatile int64_t x197 = -1LL;
static uint16_t x199 = UINT16_MAX;
int16_t x205 = INT16_MAX;
volatile uint16_t x210 = 1273U;
int8_t x212 = -1;
int32_t x214 = INT32_MAX;
static int16_t x218 = INT16_MIN;
int8_t x220 = -2;
uint32_t x224 = UINT32_MAX;
uint32_t t52 = 126693015U;
volatile int16_t x241 = 7746;
int32_t x244 = 197366;
volatile int32_t t57 = -35969;
int16_t x253 = -1;
static int16_t x257 = INT16_MAX;
static volatile int8_t x263 = INT8_MIN;
int32_t t62 = 63;
int8_t x267 = INT8_MIN;
static int32_t x268 = INT32_MAX;
uint8_t x273 = 52U;
uint8_t x278 = 2U;
int16_t x279 = 33;
int64_t x280 = -1LL;
int8_t x281 = -1;
int64_t x289 = INT64_MAX;
volatile uint32_t x290 = 8116975U;
static uint8_t x295 = UINT8_MAX;
int8_t x298 = INT8_MAX;
uint32_t x311 = 5595U;
uint32_t x335 = 70886817U;
int16_t x344 = -2;
volatile int8_t x346 = -1;
int64_t x348 = INT64_MAX;
int16_t x352 = -4;
int64_t x362 = INT64_MIN;
volatile uint32_t x365 = 8109U;
int8_t x387 = -60;
static uint8_t x397 = 0U;
int8_t x403 = INT8_MIN;
uint8_t x415 = 0U;
volatile int32_t t93 = 23829228;
int16_t x425 = -1;
uint32_t x426 = 12U;
int16_t x431 = INT16_MIN;
static int16_t x434 = -1;
int64_t x436 = INT64_MAX;
int8_t x438 = INT8_MIN;


void f0(void) {
	volatile int16_t x1 = -28;
	uint8_t x2 = 4U;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 2704;

	t0 = ((x1<=(x2|x3))-x4);

	if (t0 != 32769) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	static uint8_t x7 = UINT8_MAX;
	uint32_t x8 = 5484U;

	t1 = ((x5<=(x6|x7))-x8);

	if (t1 != 4294961812U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MAX;

	t2 = ((x9<=(x10|x11))-x12);

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x14 = -1LL;
	volatile uint8_t x15 = 59U;
	volatile uint64_t x16 = 192122LLU;
	static uint64_t t3 = 57471795103141LLU;

	t3 = ((x13<=(x14|x15))-x16);

	if (t3 != 18446744073709359494LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = -12055;
	static uint16_t x19 = 2U;
	volatile int32_t x20 = 118348146;

	t4 = ((x17<=(x18|x19))-x20);

	if (t4 != -118348145) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 17037769;
	uint32_t x23 = UINT32_MAX;
	volatile uint16_t x24 = 1U;
	int32_t t5 = -70500;

	t5 = ((x21<=(x22|x23))-x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 104U;
	int64_t x26 = INT64_MIN;
	static volatile int8_t x28 = 0;

	t6 = ((x25<=(x26|x27))-x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 1;
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = INT8_MAX;

	t7 = ((x29<=(x30|x31))-x32);

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	volatile uint16_t x34 = 7U;
	uint16_t x36 = 2U;
	volatile int32_t t8 = 107;

	t8 = ((x33<=(x34|x35))-x36);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 7U;
	int32_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	static uint16_t x40 = 33U;

	t9 = ((x37<=(x38|x39))-x40);

	if (t9 != -32) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint16_t x42 = 16U;
	static uint8_t x43 = UINT8_MAX;
	uint8_t x44 = 0U;
	volatile int32_t t10 = 993062402;

	t10 = ((x41<=(x42|x43))-x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static uint16_t x46 = UINT16_MAX;
	int64_t x47 = -1LL;
	int32_t x48 = -1;

	t11 = ((x45<=(x46|x47))-x48);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	static uint32_t x50 = UINT32_MAX;
	static uint64_t x51 = UINT64_MAX;
	int32_t t12 = -3575487;

	t12 = ((x49<=(x50|x51))-x52);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x54 = -1;
	uint16_t x55 = 450U;
	uint8_t x56 = 13U;
	static volatile int32_t t13 = 3135695;

	t13 = ((x53<=(x54|x55))-x56);

	if (t13 != -13) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 11635417034972LLU;
	static int8_t x58 = 24;
	static int16_t x59 = INT16_MIN;
	uint64_t x60 = 18LLU;

	t14 = ((x57<=(x58|x59))-x60);

	if (t14 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 962875467243675081LL;
	static volatile int64_t x62 = INT64_MIN;
	uint16_t x63 = 5237U;
	int64_t x64 = 100852653LL;
	static volatile int64_t t15 = 328LL;

	t15 = ((x61<=(x62|x63))-x64);

	if (t15 != -100852653LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 5U;
	int16_t x66 = -1;
	volatile uint16_t x67 = 665U;
	volatile int8_t x68 = 2;

	t16 = ((x65<=(x66|x67))-x68);

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	uint64_t x72 = 56LLU;
	volatile uint64_t t17 = 104500LLU;

	t17 = ((x69<=(x70|x71))-x72);

	if (t17 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x75 = 19U;
	volatile uint8_t x76 = 3U;
	volatile int32_t t18 = -75;

	t18 = ((x73<=(x74|x75))-x76);

	if (t18 != -3) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x78 = 3;
	volatile int64_t x79 = -421LL;
	uint32_t x80 = 12128989U;
	uint32_t t19 = 91U;

	t19 = ((x77<=(x78|x79))-x80);

	if (t19 != 4282838307U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 13U;
	int16_t x83 = -1;
	uint32_t x84 = 370U;

	t20 = ((x81<=(x82|x83))-x84);

	if (t20 != 4294966927U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x86 = -5;
	uint32_t x87 = 367468U;
	uint16_t x88 = 0U;
	volatile int32_t t21 = 0;

	t21 = ((x85<=(x86|x87))-x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	volatile uint16_t x90 = 165U;
	volatile int16_t x91 = -1;
	int32_t x92 = INT32_MAX;

	t22 = ((x89<=(x90|x91))-x92);

	if (t22 != -2147483646) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	int8_t x98 = INT8_MIN;
	int64_t x99 = -4LL;
	volatile int32_t t23 = 653862778;

	t23 = ((x97<=(x98|x99))-x100);

	if (t23 != -5) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = 102U;
	int32_t x102 = -1;
	volatile int8_t x104 = INT8_MAX;
	volatile int32_t t24 = 249672;

	t24 = ((x101<=(x102|x103))-x104);

	if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 9376257361957LL;
	uint32_t x106 = 101615779U;
	uint64_t x107 = UINT64_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t25 = -2651808;

	t25 = ((x105<=(x106|x107))-x108);

	if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	static uint64_t x111 = 1117090229588587LLU;
	static int32_t x112 = -1;
	int32_t t26 = 12132;

	t26 = ((x109<=(x110|x111))-x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	uint16_t x114 = 0U;
	int64_t x115 = -1292815240724LL;
	static uint32_t t27 = 5U;

	t27 = ((x113<=(x114|x115))-x116);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x117 = 4467645108849686447LLU;
	int32_t x118 = INT32_MIN;
	static int64_t x119 = -1LL;
	int64_t x120 = -1LL;
	volatile int64_t t28 = 2921042LL;

	t28 = ((x117<=(x118|x119))-x120);

	if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	uint8_t x122 = 8U;
	int32_t x123 = 699715;
	int16_t x124 = INT16_MAX;
	int32_t t29 = -967542;

	t29 = ((x121<=(x122|x123))-x124);

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x129 = 53U;
	int32_t x130 = INT32_MIN;
	int32_t x132 = -47596;
	volatile int32_t t30 = 116630307;

	t30 = ((x129<=(x130|x131))-x132);

	if (t30 != 47596) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = 226148;
	int32_t x134 = -1055606495;
	int16_t x135 = INT16_MAX;
	int8_t x136 = -5;

	t31 = ((x133<=(x134|x135))-x136);

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = -1;
	int16_t x139 = INT16_MIN;
	static volatile int64_t t32 = -112LL;

	t32 = ((x137<=(x138|x139))-x140);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -1;
	uint32_t x142 = 228U;
	static volatile int16_t x143 = 386;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t33 = 435766826LLU;

	t33 = ((x141<=(x142|x143))-x144);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = -1;
	volatile int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	static uint64_t t34 = 397322201868LLU;

	t34 = ((x145<=(x146|x147))-x148);

	if (t34 != 18446744073709489166LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = INT32_MIN;
	uint8_t x151 = UINT8_MAX;
	static int16_t x152 = -10;
	int32_t t35 = 8;

	t35 = ((x149<=(x150|x151))-x152);

	if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = 8087025684458159460LLU;
	static int64_t x158 = INT64_MIN;
	uint64_t x159 = 1563515LLU;
	int32_t t36 = -398;

	t36 = ((x157<=(x158|x159))-x160);

	if (t36 != -5163) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = INT16_MAX;
	uint8_t x163 = 2U;
	volatile int32_t t37 = 464981;

	t37 = ((x161<=(x162|x163))-x164);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x167 = INT32_MAX;
	volatile int32_t t38 = 21990;

	t38 = ((x165<=(x166|x167))-x168);

	if (t38 != -2147483646) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	uint16_t x170 = 3961U;
	int16_t x171 = INT16_MIN;
	volatile int64_t x172 = INT64_MAX;
	volatile int64_t t39 = 466253LL;

	t39 = ((x169<=(x170|x171))-x172);

	if (t39 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -6599536914220LL;
	volatile int16_t x175 = INT16_MIN;
	int32_t x176 = -139331606;
	volatile int32_t t40 = 42;

	t40 = ((x173<=(x174|x175))-x176);

	if (t40 != 139331607) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int32_t x178 = INT32_MIN;
	static int8_t x179 = INT8_MIN;
	uint16_t x180 = 7U;
	static int32_t t41 = 0;

	t41 = ((x177<=(x178|x179))-x180);

	if (t41 != -7) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = UINT16_MAX;
	int32_t x183 = -1;
	int8_t x184 = INT8_MAX;
	volatile int32_t t42 = -85052;

	t42 = ((x181<=(x182|x183))-x184);

	if (t42 != -126) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MIN;
	int8_t x186 = 3;
	static volatile int16_t x187 = -1;
	int16_t x188 = -10722;
	volatile int32_t t43 = -1;

	t43 = ((x185<=(x186|x187))-x188);

	if (t43 != 10723) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x189 = 2079234U;
	int8_t x190 = INT8_MAX;
	volatile int16_t x191 = INT16_MIN;
	static int8_t x192 = INT8_MIN;
	int32_t t44 = -46929;

	t44 = ((x189<=(x190|x191))-x192);

	if (t44 != 129) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x194 = INT16_MIN;
	volatile int8_t x195 = -1;
	static int16_t x196 = INT16_MIN;
	int32_t t45 = -2128518;

	t45 = ((x193<=(x194|x195))-x196);

	if (t45 != 32769) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x198 = INT16_MAX;
	uint32_t x200 = UINT32_MAX;
	uint32_t t46 = 1721820364U;

	t46 = ((x197<=(x198|x199))-x200);

	if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x201 = 1U;
	volatile uint64_t x202 = 2660977939274LLU;
	volatile int16_t x203 = INT16_MIN;
	static volatile uint16_t x204 = UINT16_MAX;
	static volatile int32_t t47 = 1;

	t47 = ((x201<=(x202|x203))-x204);

	if (t47 != -65534) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x206 = INT32_MIN;
	int64_t x207 = INT64_MAX;
	static uint16_t x208 = 81U;
	int32_t t48 = 497876;

	t48 = ((x205<=(x206|x207))-x208);

	if (t48 != -81) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = -27519LL;
	uint32_t x211 = 2240982U;
	int32_t t49 = -299;

	t49 = ((x209<=(x210|x211))-x212);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	int8_t x215 = INT8_MIN;
	int16_t x216 = 7;
	static int32_t t50 = 101667;

	t50 = ((x213<=(x214|x215))-x216);

	if (t50 != -6) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x217 = -1LL;
	static int32_t x219 = INT32_MAX;
	volatile int32_t t51 = 3478652;

	t51 = ((x217<=(x218|x219))-x220);

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = -1;
	uint16_t x222 = 13621U;
	static uint16_t x223 = 34U;

	t52 = ((x221<=(x222|x223))-x224);

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = INT8_MAX;
	static int32_t x226 = 488928989;
	static int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MAX;
	volatile int32_t t53 = 475;

	t53 = ((x225<=(x226|x227))-x228);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x229 = INT8_MIN;
	uint8_t x230 = 62U;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = UINT64_MAX;
	static uint64_t t54 = 123932871LLU;

	t54 = ((x229<=(x230|x231))-x232);

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = 3;
	uint8_t x234 = 38U;
	int64_t x235 = INT64_MAX;
	int32_t x236 = -1;
	volatile int32_t t55 = 167793;

	t55 = ((x233<=(x234|x235))-x236);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MAX;
	volatile uint32_t x238 = 13U;
	volatile int8_t x239 = -1;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t56 = -1;

	t56 = ((x237<=(x238|x239))-x240);

	if (t56 != 129) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x242 = UINT16_MAX;
	static int16_t x243 = 2982;

	t57 = ((x241<=(x242|x243))-x244);

	if (t57 != -197365) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x245 = INT32_MIN;
	int32_t x246 = INT32_MIN;
	static int32_t x247 = INT32_MIN;
	volatile uint8_t x248 = 22U;
	volatile int32_t t58 = 2610727;

	t58 = ((x245<=(x246|x247))-x248);

	if (t58 != -21) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x249 = UINT16_MAX;
	uint16_t x250 = 6995U;
	static volatile int32_t x251 = -1;
	static int8_t x252 = 6;
	int32_t t59 = -1582005;

	t59 = ((x249<=(x250|x251))-x252);

	if (t59 != -6) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = UINT32_MAX;
	uint32_t t60 = 13173916U;

	t60 = ((x253<=(x254|x255))-x256);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x258 = 72;
	static int32_t x259 = INT32_MIN;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t61 = 3688914;

	t61 = ((x257<=(x258|x259))-x260);

	if (t61 != -255) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x261 = UINT8_MAX;
	static uint64_t x262 = UINT64_MAX;
	int16_t x264 = INT16_MAX;

	t62 = ((x261<=(x262|x263))-x264);

	if (t62 != -32766) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = -3593;
	uint8_t x266 = 119U;
	volatile int32_t t63 = 34110630;

	t63 = ((x265<=(x266|x267))-x268);

	if (t63 != -2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x274 = INT32_MAX;
	int8_t x275 = INT8_MIN;
	uint16_t x276 = 7U;
	static volatile int32_t t64 = 343;

	t64 = ((x273<=(x274|x275))-x276);

	if (t64 != -7) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = 3;
	int64_t t65 = 902293428LL;

	t65 = ((x277<=(x278|x279))-x280);

	if (t65 != 2LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x282 = 1214834;
	int32_t x283 = INT32_MIN;
	int16_t x284 = -105;
	int32_t t66 = 5;

	t66 = ((x281<=(x282|x283))-x284);

	if (t66 != 105) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x291 = 4393771750251LLU;
	static volatile uint64_t x292 = 179230594284953LLU;
	uint64_t t67 = 2081861938875721230LLU;

	t67 = ((x289<=(x290|x291))-x292);

	if (t67 != 18446564843115266663LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = INT64_MIN;
	uint16_t x294 = 7U;
	int8_t x296 = -1;
	int32_t t68 = 1377736;

	t68 = ((x293<=(x294|x295))-x296);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = -34450341;
	int32_t x299 = -934776;
	static int8_t x300 = INT8_MAX;
	volatile int32_t t69 = 17;

	t69 = ((x297<=(x298|x299))-x300);

	if (t69 != -126) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MIN;
	static int8_t x310 = INT8_MIN;
	volatile int8_t x312 = -1;
	static int32_t t70 = 0;

	t70 = ((x309<=(x310|x311))-x312);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x317 = INT8_MIN;
	volatile int16_t x318 = INT16_MIN;
	volatile int64_t x319 = -678062099985LL;
	int32_t x320 = 114332310;
	volatile int32_t t71 = -415;

	t71 = ((x317<=(x318|x319))-x320);

	if (t71 != -114332310) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = INT8_MAX;
	volatile int32_t x322 = -2;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = 644U;
	volatile uint32_t t72 = 36299U;

	t72 = ((x321<=(x322|x323))-x324);

	if (t72 != 4294966652U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = -1;
	int16_t x336 = -635;
	int32_t t73 = -3117640;

	t73 = ((x333<=(x334|x335))-x336);

	if (t73 != 636) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = 386U;
	uint32_t x338 = 14346U;
	uint64_t x339 = 54237LLU;
	int32_t x340 = -501780;
	volatile int32_t t74 = -928982;

	t74 = ((x337<=(x338|x339))-x340);

	if (t74 != 501781) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = INT16_MIN;
	volatile uint8_t x342 = 83U;
	int16_t x343 = INT16_MIN;
	int32_t t75 = -4991;

	t75 = ((x341<=(x342|x343))-x344);

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x345 = 1876U;
	uint16_t x347 = 1U;
	static volatile int64_t t76 = 859LL;

	t76 = ((x345<=(x346|x347))-x348);

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = 723;
	int8_t x350 = INT8_MIN;
	int32_t x351 = -34;
	volatile int32_t t77 = 4;

	t77 = ((x349<=(x350|x351))-x352);

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = INT8_MIN;
	static int16_t x354 = 30;
	volatile int64_t x355 = INT64_MIN;
	static uint16_t x356 = 4U;
	volatile int32_t t78 = -4419907;

	t78 = ((x353<=(x354|x355))-x356);

	if (t78 != -4) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x357 = INT16_MIN;
	volatile uint8_t x358 = 22U;
	static int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MIN;
	int32_t t79 = -1;

	t79 = ((x357<=(x358|x359))-x360);

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = INT32_MAX;
	volatile int64_t x363 = INT64_MAX;
	volatile int16_t x364 = INT16_MAX;
	int32_t t80 = -6;

	t80 = ((x361<=(x362|x363))-x364);

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x366 = 25U;
	static int64_t x367 = -1LL;
	static int16_t x368 = -1;
	static volatile int32_t t81 = 182;

	t81 = ((x365<=(x366|x367))-x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x369 = 14U;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MIN;
	static volatile uint16_t x372 = UINT16_MAX;
	volatile int32_t t82 = -1263;

	t82 = ((x369<=(x370|x371))-x372);

	if (t82 != -65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x373 = INT8_MIN;
	static int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t83 = -94151;

	t83 = ((x373<=(x374|x375))-x376);

	if (t83 != 32769) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = -1;
	int64_t x378 = INT64_MAX;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = 351023175424468LL;
	volatile int64_t t84 = 1895LL;

	t84 = ((x377<=(x378|x379))-x380);

	if (t84 != -351023175424467LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x381 = 26U;
	static uint32_t x382 = 797632U;
	static uint32_t x383 = UINT32_MAX;
	volatile uint8_t x384 = 20U;
	static int32_t t85 = 234048820;

	t85 = ((x381<=(x382|x383))-x384);

	if (t85 != -19) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MIN;
	uint64_t x388 = 210LLU;
	static volatile uint64_t t86 = 7338LLU;

	t86 = ((x385<=(x386|x387))-x388);

	if (t86 != 18446744073709551406LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x389 = INT16_MAX;
	static int64_t x390 = 1115217132LL;
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MAX;
	int64_t t87 = -15200797LL;

	t87 = ((x389<=(x390|x391))-x392);

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x393 = INT16_MAX;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 11U;
	static uint32_t x396 = UINT32_MAX;
	volatile uint32_t t88 = 18320U;

	t88 = ((x393<=(x394|x395))-x396);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x398 = INT8_MAX;
	static int64_t x399 = 3401LL;
	volatile uint64_t x400 = 4260LLU;
	uint64_t t89 = 6LLU;

	t89 = ((x397<=(x398|x399))-x400);

	if (t89 != 18446744073709547357LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = INT32_MIN;
	int32_t x402 = -23937069;
	uint32_t x404 = 5U;
	volatile uint32_t t90 = 125373U;

	t90 = ((x401<=(x402|x403))-x404);

	if (t90 != 4294967292U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x405 = 50701671958LLU;
	uint8_t x406 = UINT8_MAX;
	int8_t x407 = INT8_MIN;
	uint16_t x408 = UINT16_MAX;
	static volatile int32_t t91 = -3642380;

	t91 = ((x405<=(x406|x407))-x408);

	if (t91 != -65534) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x409 = 0U;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 912U;
	int64_t x412 = 1LL;
	volatile int64_t t92 = -11033133LL;

	t92 = ((x409<=(x410|x411))-x412);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = -1;
	volatile uint8_t x414 = UINT8_MAX;
	int8_t x416 = INT8_MAX;

	t93 = ((x413<=(x414|x415))-x416);

	if (t93 != -126) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x417 = 178818576;
	static int32_t x418 = INT32_MAX;
	int16_t x419 = INT16_MIN;
	volatile uint16_t x420 = 1U;
	int32_t t94 = 5658;

	t94 = ((x417<=(x418|x419))-x420);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MIN;
	int8_t x423 = -1;
	volatile int16_t x424 = 9846;
	volatile int32_t t95 = -240223796;

	t95 = ((x421<=(x422|x423))-x424);

	if (t95 != -9845) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x427 = UINT64_MAX;
	volatile uint16_t x428 = UINT16_MAX;
	volatile int32_t t96 = 0;

	t96 = ((x425<=(x426|x427))-x428);

	if (t96 != -65534) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = 1971U;
	uint8_t x430 = 82U;
	static uint64_t x432 = 469699LLU;
	static uint64_t t97 = 4LLU;

	t97 = ((x429<=(x430|x431))-x432);

	if (t97 != 18446744073709081917LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = INT32_MIN;
	uint64_t x435 = UINT64_MAX;
	volatile int64_t t98 = -82755LL;

	t98 = ((x433<=(x434|x435))-x436);

	if (t98 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = INT16_MIN;
	volatile int8_t x439 = INT8_MIN;
	static volatile uint16_t x440 = UINT16_MAX;
	int32_t t99 = 90;

	t99 = ((x437<=(x438|x439))-x440);

	if (t99 != -65534) { NG(); } else { ; }
	
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

