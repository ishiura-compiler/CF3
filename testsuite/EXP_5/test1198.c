#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -4;
int64_t x3 = -1LL;
uint64_t x19 = UINT64_MAX;
volatile int8_t x20 = INT8_MIN;
int8_t x22 = -1;
uint64_t x28 = 259431106LLU;
int8_t x33 = -1;
int32_t x38 = INT32_MIN;
volatile int32_t t8 = 7;
int32_t x42 = -187;
static int8_t x45 = -1;
volatile int32_t t10 = 12;
volatile int32_t t11 = -20442160;
int64_t t13 = 127919992LL;
static volatile int32_t x69 = INT32_MAX;
int64_t x78 = INT64_MAX;
static uint8_t x84 = 11U;
int32_t t18 = 6;
static volatile int16_t x100 = INT16_MIN;
int32_t t21 = -3;
int16_t x115 = INT16_MAX;
volatile uint64_t x116 = 634186509641766LLU;
int64_t x121 = 0LL;
volatile int8_t x123 = -18;
volatile int64_t x131 = INT64_MIN;
int32_t t25 = 14;
int32_t x133 = 11;
volatile int8_t x136 = INT8_MAX;
int32_t x145 = -1;
int64_t x152 = -1LL;
uint32_t x155 = 1U;
static volatile int32_t t31 = -1337970;
uint64_t x162 = 4056993368567LLU;
int64_t t33 = -976LL;
static uint32_t x169 = 227U;
uint32_t x170 = 0U;
int16_t x177 = INT16_MIN;
int64_t x179 = -1LL;
volatile int32_t t35 = 14390;
int16_t x184 = 1;
static uint64_t t37 = 113660690340945LLU;
uint64_t x195 = UINT64_MAX;
int64_t x203 = -7851721627646LL;
int32_t x208 = -1;
static int64_t x214 = -1576493698310254823LL;
int32_t x215 = INT32_MIN;
uint32_t x222 = UINT32_MAX;
int32_t x225 = -1;
int16_t x234 = INT16_MIN;
int64_t x236 = -2043495386003871LL;
int64_t x238 = 520130648752LL;
uint64_t x240 = 7699LLU;
uint64_t t49 = 111771014768LLU;
volatile int16_t x241 = 15074;
int32_t x243 = INT32_MAX;
int64_t x247 = -1079826031277829LL;
uint64_t x249 = 3074LLU;
volatile uint64_t t52 = 243936689LLU;
static volatile int16_t x265 = INT16_MIN;
volatile int32_t t56 = 428532867;
int16_t x280 = INT16_MAX;
int8_t x281 = -1;
volatile int64_t x288 = 1456959264881740LL;
volatile int64_t t60 = 167762368670254LL;
static volatile uint64_t t61 = 2LLU;
volatile int32_t x297 = INT32_MIN;
static int16_t x304 = INT16_MIN;
int64_t x307 = INT64_MAX;
static volatile int64_t x314 = -113588645913792LL;
int64_t x316 = 12LL;
volatile int64_t t67 = -333276LL;
static volatile int64_t x319 = INT64_MIN;
int32_t x324 = 166;
uint64_t x332 = UINT64_MAX;
static int16_t x335 = INT16_MIN;
int8_t x341 = INT8_MAX;
static volatile uint32_t x342 = 212520U;
volatile uint16_t x352 = 107U;
int32_t x356 = INT32_MAX;
int64_t x364 = 1800825810739LL;
uint64_t x366 = 76773152LLU;
volatile uint8_t x369 = UINT8_MAX;
int8_t x372 = 11;
int8_t x375 = -1;
volatile uint64_t x385 = UINT64_MAX;
int16_t x388 = -1;
volatile uint64_t t83 = 665701LLU;
int32_t x391 = -1;
static volatile int32_t x392 = -110;
static volatile uint64_t t84 = 2786LLU;
static int64_t x394 = INT64_MIN;
int8_t x399 = 42;
int16_t x401 = INT16_MIN;
uint64_t x410 = 366LLU;
int32_t t88 = -24076941;
int64_t x417 = INT64_MAX;
int32_t t91 = 169193861;
int32_t x427 = INT32_MIN;
int32_t t92 = 27503478;
uint64_t x430 = 2740663LLU;
int16_t x431 = -1;
volatile int32_t t93 = 13;
uint32_t x435 = 299U;
uint8_t x436 = 2U;
uint16_t x444 = 16309U;
uint32_t x447 = 82613254U;
static int32_t x448 = 22063332;
volatile uint64_t t97 = 30463427858382LLU;
int8_t x459 = INT8_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x4 = -1;
	int64_t t0 = 1126030455236964LL;

	t0 = (x1-((x2==x3)-x4));

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MAX;
	int16_t x7 = INT16_MAX;
	uint64_t x8 = 4660173075279LLU;
	volatile uint64_t t1 = 1952656LLU;

	t1 = (x5-((x6==x7)-x8));

	if (t1 != 4660173075151LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	volatile uint16_t x10 = 1U;
	int64_t x11 = 106LL;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 149719;

	t2 = (x9-((x10==x11)-x12));

	if (t2 != -129) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int32_t x14 = 7778;
	volatile int16_t x15 = -1;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 113853805;

	t3 = (x13-((x14==x15)-x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	volatile int64_t x18 = INT64_MIN;
	int32_t t4 = -2;

	t4 = (x17-((x18==x19)-x20));

	if (t4 != -129) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = UINT16_MAX;
	int64_t x23 = 118859LL;
	static uint16_t x24 = UINT16_MAX;
	int32_t t5 = 42335917;

	t5 = (x21-((x22==x23)-x24));

	if (t5 != 131070) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	static volatile uint8_t x26 = 3U;
	int32_t x27 = 306032727;
	uint64_t t6 = 12010839953LLU;

	t6 = (x25-((x26==x27)-x28));

	if (t6 != 259398338LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x34 = 9;
	static volatile uint32_t x35 = 7U;
	uint64_t x36 = 32191027162414LLU;
	static uint64_t t7 = 841255178786170LLU;

	t7 = (x33-((x34==x35)-x36));

	if (t7 != 32191027162413LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 20;
	static uint32_t x39 = 420U;
	static volatile int32_t x40 = -4495;

	t8 = (x37-((x38==x39)-x40));

	if (t8 != -4475) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = -1;
	int8_t x43 = 0;
	uint64_t x44 = UINT64_MAX;
	static volatile uint64_t t9 = 4173000667075625LLU;

	t9 = (x41-((x42==x43)-x44));

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x46 = 31736605U;
	static int64_t x47 = -1LL;
	int8_t x48 = INT8_MIN;

	t10 = (x45-((x46==x47)-x48));

	if (t10 != -129) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = UINT8_MAX;
	int16_t x50 = INT16_MIN;
	int64_t x51 = 2002556930944LL;
	int16_t x52 = -1;

	t11 = (x49-((x50==x51)-x52));

	if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	volatile int32_t x62 = INT32_MAX;
	int8_t x63 = -1;
	int16_t x64 = -1;
	int32_t t12 = -260133180;

	t12 = (x61-((x62==x63)-x64));

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = 11346361U;
	volatile int32_t x67 = INT32_MIN;
	uint16_t x68 = 21U;

	t13 = (x65-((x66==x67)-x68));

	if (t13 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x70 = 53220225U;
	uint16_t x71 = 75U;
	static volatile int16_t x72 = -1;
	volatile int32_t t14 = 27;

	t14 = (x69-((x70==x71)-x72));

	if (t14 != 2147483646) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 1413U;
	int64_t x74 = INT64_MAX;
	static uint32_t x75 = UINT32_MAX;
	static int8_t x76 = INT8_MIN;
	int32_t t15 = -1;

	t15 = (x73-((x74==x75)-x76));

	if (t15 != 1285) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	uint16_t x80 = 4025U;
	volatile int32_t t16 = -2791;

	t16 = (x77-((x78==x79)-x80));

	if (t16 != 3897) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x81 = 6978022U;
	uint32_t x82 = 51021U;
	uint16_t x83 = UINT16_MAX;
	uint32_t t17 = 582370054U;

	t17 = (x81-((x82==x83)-x84));

	if (t17 != 6978033U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = -307161797748LL;
	volatile uint16_t x87 = 1755U;
	int16_t x88 = INT16_MIN;

	t18 = (x85-((x86==x87)-x88));

	if (t18 != -32896) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = 99649443030970LL;
	static int32_t x94 = INT32_MAX;
	int32_t x95 = INT32_MIN;
	int32_t x96 = 91;
	int64_t t19 = -828042543317014LL;

	t19 = (x93-((x94==x95)-x96));

	if (t19 != 99649443031061LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x97 = UINT8_MAX;
	static volatile int32_t x98 = INT32_MIN;
	uint32_t x99 = 11U;
	volatile int32_t t20 = -16311;

	t20 = (x97-((x98==x99)-x100));

	if (t20 != -32513) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x105 = 105U;
	uint8_t x106 = 62U;
	int32_t x107 = -1;
	uint8_t x108 = 1U;

	t21 = (x105-((x106==x107)-x108));

	if (t21 != 106) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = 0;
	static uint64_t x114 = 14151318LLU;
	volatile uint64_t t22 = 409081524LLU;

	t22 = (x113-((x114==x115)-x116));

	if (t22 != 634186509641766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = INT64_MIN;
	int32_t x118 = INT32_MAX;
	volatile int32_t x119 = INT32_MIN;
	uint8_t x120 = UINT8_MAX;
	int64_t t23 = -997291619467LL;

	t23 = (x117-((x118==x119)-x120));

	if (t23 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x122 = 40U;
	int16_t x124 = 36;
	int64_t t24 = 226333LL;

	t24 = (x121-((x122==x123)-x124));

	if (t24 != 36LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x129 = UINT16_MAX;
	int64_t x130 = -23LL;
	int8_t x132 = INT8_MIN;

	t25 = (x129-((x130==x131)-x132));

	if (t25 != 65407) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x134 = UINT32_MAX;
	uint64_t x135 = 2LLU;
	int32_t t26 = -98;

	t26 = (x133-((x134==x135)-x136));

	if (t26 != 138) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = -1LL;
	uint8_t x138 = 0U;
	static uint8_t x139 = 83U;
	uint8_t x140 = 53U;
	volatile int64_t t27 = 21119642852119648LL;

	t27 = (x137-((x138==x139)-x140));

	if (t27 != 52LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = 340;
	int8_t x142 = 19;
	volatile uint32_t x143 = 407541140U;
	volatile int64_t x144 = 1342493492LL;
	static int64_t t28 = -7668LL;

	t28 = (x141-((x142==x143)-x144));

	if (t28 != 1342493832LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x146 = INT32_MIN;
	static volatile int16_t x147 = INT16_MIN;
	int16_t x148 = 16052;
	volatile int32_t t29 = 303139770;

	t29 = (x145-((x146==x147)-x148));

	if (t29 != 16051) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = -1;
	uint32_t x150 = 29438508U;
	int32_t x151 = -1;
	static int64_t t30 = 268126451563169631LL;

	t30 = (x149-((x150==x151)-x152));

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = INT32_MAX;
	int64_t x154 = -105064557442161LL;
	int32_t x156 = -44718540;

	t31 = (x153-((x154==x155)-x156));

	if (t31 != 2102765107) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int16_t x158 = 1;
	uint16_t x159 = 2273U;
	uint16_t x160 = 793U;
	int32_t t32 = -3488564;

	t32 = (x157-((x158==x159)-x160));

	if (t32 != 66328) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = -1LL;
	static uint8_t x163 = 1U;
	int64_t x164 = -1LL;

	t33 = (x161-((x162==x163)-x164));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x171 = INT64_MAX;
	volatile int16_t x172 = INT16_MIN;
	uint32_t t34 = 1539U;

	t34 = (x169-((x170==x171)-x172));

	if (t34 != 4294934755U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x178 = UINT8_MAX;
	int8_t x180 = -1;

	t35 = (x177-((x178==x179)-x180));

	if (t35 != -32769) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x181 = 11303654U;
	int64_t x182 = INT64_MAX;
	volatile int16_t x183 = 1;
	static volatile uint32_t t36 = 641838U;

	t36 = (x181-((x182==x183)-x184));

	if (t36 != 11303655U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x185 = UINT64_MAX;
	uint16_t x186 = UINT16_MAX;
	uint16_t x187 = UINT16_MAX;
	volatile int8_t x188 = INT8_MAX;

	t37 = (x185-((x186==x187)-x188));

	if (t37 != 125LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x189 = -1;
	static int64_t x190 = INT64_MIN;
	static uint64_t x191 = 522287LLU;
	int8_t x192 = -21;
	int32_t t38 = -141;

	t38 = (x189-((x190==x191)-x192));

	if (t38 != -22) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = -1;
	int64_t x194 = 194308LL;
	int32_t x196 = 524;
	static volatile int32_t t39 = -58950;

	t39 = (x193-((x194==x195)-x196));

	if (t39 != 523) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x201 = 7U;
	int64_t x202 = INT64_MIN;
	uint32_t x204 = 4U;
	static volatile uint32_t t40 = 818454408U;

	t40 = (x201-((x202==x203)-x204));

	if (t40 != 11U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x205 = 215U;
	static int64_t x206 = 7119305381181900LL;
	uint8_t x207 = 3U;
	uint32_t t41 = 85U;

	t41 = (x205-((x206==x207)-x208));

	if (t41 != 214U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x209 = 11328016830582LL;
	volatile int8_t x210 = 12;
	int16_t x211 = -1;
	volatile uint32_t x212 = 9U;
	int64_t t42 = -92459LL;

	t42 = (x209-((x210==x211)-x212));

	if (t42 != 11323721863295LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x213 = -28;
	uint8_t x216 = UINT8_MAX;
	static int32_t t43 = -772556;

	t43 = (x213-((x214==x215)-x216));

	if (t43 != 227) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x217 = 807U;
	int16_t x218 = 574;
	uint16_t x219 = 26417U;
	int8_t x220 = 57;
	volatile int32_t t44 = -504;

	t44 = (x217-((x218==x219)-x220));

	if (t44 != 864) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x221 = 162208314163LL;
	int64_t x223 = INT64_MIN;
	static int8_t x224 = 1;
	int64_t t45 = -399664511715919LL;

	t45 = (x221-((x222==x223)-x224));

	if (t45 != 162208314164LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x226 = -19526357147170LL;
	int16_t x227 = INT16_MAX;
	volatile int32_t x228 = -1;
	volatile int32_t t46 = -7431;

	t46 = (x225-((x226==x227)-x228));

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MAX;
	int8_t x231 = -9;
	static volatile uint64_t x232 = 81320LLU;
	uint64_t t47 = 999396613461LLU;

	t47 = (x229-((x230==x231)-x232));

	if (t47 != 81192LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x233 = -1;
	static volatile uint8_t x235 = UINT8_MAX;
	volatile int64_t t48 = 1230295753LL;

	t48 = (x233-((x234==x235)-x236));

	if (t48 != -2043495386003872LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = 11;
	int16_t x239 = INT16_MIN;

	t49 = (x237-((x238==x239)-x240));

	if (t49 != 7710LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x242 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t50 = -251986;

	t50 = (x241-((x242==x243)-x244));

	if (t50 != -17694) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x245 = -227487979235537419LL;
	int16_t x246 = -1;
	uint32_t x248 = UINT32_MAX;
	volatile int64_t t51 = -1232LL;

	t51 = (x245-((x246==x247)-x248));

	if (t51 != -227487979235537420LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x250 = UINT8_MAX;
	volatile int32_t x251 = -1;
	volatile int32_t x252 = 2791;

	t52 = (x249-((x250==x251)-x252));

	if (t52 != 5865LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = -156;
	volatile int8_t x254 = -4;
	volatile int16_t x255 = 49;
	int64_t x256 = -1LL;
	int64_t t53 = -778186452LL;

	t53 = (x253-((x254==x255)-x256));

	if (t53 != -157LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x257 = -1LL;
	uint32_t x258 = 30553681U;
	static uint64_t x259 = 42088428171LLU;
	volatile int8_t x260 = -1;
	volatile int64_t t54 = -1573LL;

	t54 = (x257-((x258==x259)-x260));

	if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x261 = 103U;
	int16_t x262 = 20;
	static uint8_t x263 = 109U;
	int8_t x264 = INT8_MIN;
	int32_t t55 = 25;

	t55 = (x261-((x262==x263)-x264));

	if (t55 != -25) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x266 = 8;
	volatile int32_t x267 = INT32_MIN;
	static int16_t x268 = -30;

	t56 = (x265-((x266==x267)-x268));

	if (t56 != -32798) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x269 = UINT64_MAX;
	static uint64_t x270 = 40917430059917693LLU;
	int8_t x271 = -39;
	int8_t x272 = INT8_MAX;
	uint64_t t57 = 34LLU;

	t57 = (x269-((x270==x271)-x272));

	if (t57 != 126LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = -207165398;
	uint8_t x278 = 2U;
	uint32_t x279 = 8U;
	static int32_t t58 = -111580;

	t58 = (x277-((x278==x279)-x280));

	if (t58 != -207132631) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x282 = 202U;
	int32_t x283 = -1983;
	int32_t x284 = -777903009;
	int32_t t59 = -48;

	t59 = (x281-((x282==x283)-x284));

	if (t59 != -777903010) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x285 = 12613033455365765LL;
	static int8_t x286 = 4;
	uint16_t x287 = UINT16_MAX;

	t60 = (x285-((x286==x287)-x288));

	if (t60 != 14069992720247505LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = -3;
	int32_t x290 = INT32_MIN;
	int16_t x291 = 106;
	static uint64_t x292 = UINT64_MAX;

	t61 = (x289-((x290==x291)-x292));

	if (t61 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x293 = UINT16_MAX;
	volatile int64_t x294 = INT64_MIN;
	static uint16_t x295 = 469U;
	uint16_t x296 = 3542U;
	int32_t t62 = 2043;

	t62 = (x293-((x294==x295)-x296));

	if (t62 != 69077) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x298 = 26U;
	int8_t x299 = -2;
	uint16_t x300 = 392U;
	static volatile int32_t t63 = 25579;

	t63 = (x297-((x298==x299)-x300));

	if (t63 != -2147483256) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	int32_t t64 = -93913259;

	t64 = (x301-((x302==x303)-x304));

	if (t64 != -32642) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x305 = 31U;
	volatile int64_t x306 = INT64_MAX;
	volatile uint16_t x308 = 1U;
	uint32_t t65 = 11U;

	t65 = (x305-((x306==x307)-x308));

	if (t65 != 31U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x309 = 2U;
	int8_t x310 = -10;
	int32_t x311 = INT32_MIN;
	uint16_t x312 = UINT16_MAX;
	int32_t t66 = -23240850;

	t66 = (x309-((x310==x311)-x312));

	if (t66 != 65537) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x313 = -6;
	static int64_t x315 = INT64_MAX;

	t67 = (x313-((x314==x315)-x316));

	if (t67 != 6LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = 0;
	int64_t x318 = INT64_MIN;
	uint8_t x320 = UINT8_MAX;
	static volatile int32_t t68 = 35;

	t68 = (x317-((x318==x319)-x320));

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int16_t x322 = INT16_MAX;
	int16_t x323 = -11412;
	int32_t t69 = -1600614;

	t69 = (x321-((x322==x323)-x324));

	if (t69 != 421) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = 0;
	uint32_t x327 = 580175U;
	static volatile uint32_t x328 = UINT32_MAX;
	uint32_t t70 = 25455U;

	t70 = (x325-((x326==x327)-x328));

	if (t70 != 32766U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = INT16_MIN;
	uint64_t x330 = 137680013833966LLU;
	int8_t x331 = INT8_MIN;
	volatile uint64_t t71 = 5841400607LLU;

	t71 = (x329-((x330==x331)-x332));

	if (t71 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = INT64_MIN;
	int32_t x334 = -9;
	int8_t x336 = 1;
	int64_t t72 = -1231696977261LL;

	t72 = (x333-((x334==x335)-x336));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = 196;
	int8_t x338 = INT8_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile int32_t x340 = -1;
	int32_t t73 = 822996377;

	t73 = (x337-((x338==x339)-x340));

	if (t73 != 195) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x343 = INT32_MAX;
	int8_t x344 = -1;
	int32_t t74 = -125709064;

	t74 = (x341-((x342==x343)-x344));

	if (t74 != 126) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x349 = UINT16_MAX;
	int32_t x350 = INT32_MAX;
	volatile int16_t x351 = -1;
	int32_t t75 = -223;

	t75 = (x349-((x350==x351)-x352));

	if (t75 != 65642) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = -11061;
	int32_t x354 = -1578;
	static uint32_t x355 = UINT32_MAX;
	int32_t t76 = -7;

	t76 = (x353-((x354==x355)-x356));

	if (t76 != 2147472586) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = -1;
	uint32_t x359 = 12470330U;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t77 = 13808418005692LLU;

	t77 = (x357-((x358==x359)-x360));

	if (t77 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x361 = INT32_MAX;
	uint8_t x362 = UINT8_MAX;
	volatile uint16_t x363 = UINT16_MAX;
	volatile int64_t t78 = 0LL;

	t78 = (x361-((x362==x363)-x364));

	if (t78 != 1802973294386LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x365 = -1;
	uint64_t x367 = 743205956LLU;
	int32_t x368 = INT32_MAX;
	int32_t t79 = -44491;

	t79 = (x365-((x366==x367)-x368));

	if (t79 != 2147483646) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x370 = UINT16_MAX;
	static uint64_t x371 = 16312670228449LLU;
	volatile int32_t t80 = -47;

	t80 = (x369-((x370==x371)-x372));

	if (t80 != 266) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = 3;
	int32_t x374 = INT32_MIN;
	volatile uint8_t x376 = 54U;
	volatile int32_t t81 = -14;

	t81 = (x373-((x374==x375)-x376));

	if (t81 != 57) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = -490;
	volatile int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	static uint16_t x380 = 1517U;
	int32_t t82 = -3;

	t82 = (x377-((x378==x379)-x380));

	if (t82 != 1027) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x386 = 0LL;
	int64_t x387 = INT64_MAX;

	t83 = (x385-((x386==x387)-x388));

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x389 = 3395377099659677LLU;
	uint64_t x390 = 0LLU;

	t84 = (x389-((x390==x391)-x392));

	if (t84 != 3395377099659567LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x393 = 249919306LLU;
	int8_t x395 = INT8_MIN;
	int16_t x396 = -1;
	static uint64_t t85 = 52629852LLU;

	t85 = (x393-((x394==x395)-x396));

	if (t85 != 249919305LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x397 = 0U;
	volatile uint32_t x398 = 45151U;
	uint32_t x400 = 64260873U;
	uint32_t t86 = 1U;

	t86 = (x397-((x398==x399)-x400));

	if (t86 != 64260873U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x402 = INT8_MAX;
	int64_t x403 = -124750311986LL;
	int8_t x404 = -52;
	volatile int32_t t87 = 22;

	t87 = (x401-((x402==x403)-x404));

	if (t87 != -32820) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MAX;
	int64_t x411 = -18359278018026919LL;
	int32_t x412 = 0;

	t88 = (x409-((x410==x411)-x412));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	volatile uint64_t x415 = 2772LLU;
	int16_t x416 = INT16_MAX;
	int32_t t89 = -653275084;

	t89 = (x413-((x414==x415)-x416));

	if (t89 != 32639) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x418 = UINT16_MAX;
	volatile int8_t x419 = INT8_MIN;
	static volatile uint32_t x420 = UINT32_MAX;
	volatile int64_t t90 = 608318895970461LL;

	t90 = (x417-((x418==x419)-x420));

	if (t90 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x421 = INT16_MAX;
	volatile int64_t x422 = INT64_MAX;
	int8_t x423 = INT8_MAX;
	volatile int16_t x424 = -1;

	t91 = (x421-((x422==x423)-x424));

	if (t91 != 32766) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x425 = 0U;
	volatile int16_t x426 = 1;
	int16_t x428 = INT16_MAX;

	t92 = (x425-((x426==x427)-x428));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = -1;
	int8_t x432 = INT8_MAX;

	t93 = (x429-((x430==x431)-x432));

	if (t93 != 126) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = INT32_MIN;
	uint16_t x434 = 1U;
	volatile int32_t t94 = 12835;

	t94 = (x433-((x434==x435)-x436));

	if (t94 != -2147483646) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x437 = -1;
	int64_t x438 = INT64_MIN;
	int16_t x439 = -1;
	int16_t x440 = -55;
	volatile int32_t t95 = 0;

	t95 = (x437-((x438==x439)-x440));

	if (t95 != -56) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x441 = UINT64_MAX;
	volatile int8_t x442 = 27;
	volatile int32_t x443 = -1;
	uint64_t t96 = 5105819668LLU;

	t96 = (x441-((x442==x443)-x444));

	if (t96 != 16308LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x445 = 0LLU;
	int32_t x446 = 13421498;

	t97 = (x445-((x446==x447)-x448));

	if (t97 != 22063332LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x453 = 15875U;
	static volatile uint16_t x454 = 4U;
	volatile uint8_t x455 = UINT8_MAX;
	static int8_t x456 = -1;
	static uint32_t t98 = 6U;

	t98 = (x453-((x454==x455)-x456));

	if (t98 != 15874U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x457 = -2;
	int16_t x458 = -18;
	static int8_t x460 = -1;
	int32_t t99 = -13773536;

	t99 = (x457-((x458==x459)-x460));

	if (t99 != -3) { NG(); } else { ; }
	
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

