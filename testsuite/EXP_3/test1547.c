#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x11 = 340LLU;
int64_t t2 = -2LL;
static volatile int64_t x28 = -225009311LL;
uint32_t x32 = UINT32_MAX;
int32_t t7 = 314983660;
int32_t x46 = INT32_MIN;
int8_t x48 = INT8_MIN;
volatile int64_t t9 = 97097986991LL;
static int16_t x60 = -1;
int32_t x62 = 14179544;
int8_t x63 = -25;
int16_t x64 = -1;
volatile uint64_t t14 = 5166830LLU;
volatile int16_t x72 = INT16_MIN;
int8_t x76 = INT8_MAX;
uint64_t x77 = 7143669LLU;
static volatile uint16_t x84 = UINT16_MAX;
int32_t t18 = 284031853;
int32_t x86 = INT32_MIN;
int32_t t20 = -8;
volatile int8_t x94 = INT8_MIN;
volatile int32_t x95 = -106539;
static int16_t x96 = INT16_MAX;
int32_t x99 = INT32_MIN;
static int64_t x102 = 1302LL;
int32_t x103 = -1018;
static volatile int16_t x104 = -126;
uint64_t t23 = 191917LLU;
uint32_t x108 = UINT32_MAX;
int64_t x113 = INT64_MIN;
int8_t x118 = INT8_MIN;
int32_t x119 = INT32_MAX;
static volatile int16_t x120 = 2;
volatile int64_t t27 = -12416277151LL;
uint32_t x129 = 111188U;
static int16_t x131 = INT16_MIN;
int64_t x139 = 277656307938854821LL;
uint32_t t29 = 20604U;
uint64_t x144 = UINT64_MAX;
uint64_t x150 = 9534LLU;
uint16_t x151 = 0U;
uint8_t x166 = 51U;
uint16_t x170 = 61U;
uint16_t x183 = 18U;
int16_t x186 = -1;
static int32_t t39 = 30885;
volatile int16_t x216 = INT16_MIN;
volatile int32_t t45 = 6498;
int64_t x220 = INT64_MIN;
volatile int32_t t46 = -275782470;
static int32_t t48 = 13;
volatile uint64_t t49 = 1570028LLU;
uint64_t t50 = 402643LLU;
int16_t x239 = INT16_MAX;
static volatile int32_t t51 = 41791;
static uint8_t x251 = 3U;
static int64_t x252 = INT64_MAX;
static int64_t t54 = INT64_MIN;
volatile uint64_t t57 = 4239867410LLU;
uint16_t x284 = 106U;
int32_t t61 = -4513435;
volatile int32_t t62 = -11;
uint64_t x297 = UINT64_MAX;
static uint64_t x305 = 27916831464LLU;
int64_t t66 = -56547428396232LL;
static int32_t x322 = INT32_MIN;
int16_t x331 = -1;
int32_t t75 = -1;
int8_t x357 = 0;
uint32_t x365 = 0U;
volatile uint32_t t78 = 121768U;
static uint64_t x375 = 181771235507LLU;
uint16_t x379 = 16U;
volatile int8_t x386 = -1;
volatile int16_t x388 = -1;
static volatile int32_t t83 = 0;
static volatile int64_t t85 = 9839144554597509LL;
int16_t x409 = INT16_MAX;
uint64_t x410 = UINT64_MAX;
int64_t x436 = INT64_MIN;
static uint32_t t94 = 5U;
int16_t x449 = 1;
int32_t x451 = -850335641;
static int8_t x454 = -1;
static volatile int8_t x456 = INT8_MAX;
static volatile int64_t t96 = 862923291182LL;
uint16_t x459 = 1090U;
int64_t t99 = 1483960116445881627LL;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static int16_t x2 = INT16_MAX;
	static volatile int64_t x3 = INT64_MIN;
	static int32_t x4 = INT32_MIN;
	static volatile int64_t t0 = 950LL;

	t0 = ((x1-x2)^(x3<=x4));

	if (t0 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	int64_t x7 = -1LL;
	volatile int64_t x8 = INT64_MIN;
	int32_t t1 = 55957071;

	t1 = ((x5-x6)^(x7<=x8));

	if (t1 != 32640) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 2086U;
	volatile int64_t x10 = 256998376996LL;
	uint64_t x12 = 3652619333382236LLU;

	t2 = ((x9-x10)^(x11<=x12));

	if (t2 != -256998374909LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 340U;
	int8_t x14 = -1;
	volatile int32_t x15 = -1;
	int8_t x16 = -36;
	static volatile uint32_t t3 = 573669U;

	t3 = ((x13-x14)^(x15<=x16));

	if (t3 != 341U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 38653990LLU;
	int64_t x18 = INT64_MIN;
	uint16_t x19 = 7468U;
	static uint32_t x20 = 125U;
	volatile uint64_t t4 = 780035958497284LLU;

	t4 = ((x17-x18)^(x19<=x20));

	if (t4 != 9223372036893429798LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = -124388113;
	int16_t x27 = -3;
	int64_t t5 = -7823758025760LL;

	t5 = ((x25-x26)^(x27<=x28));

	if (t5 != -9223372036730387695LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	static int64_t x30 = INT64_MIN;
	uint16_t x31 = UINT16_MAX;
	int64_t t6 = -4692810344LL;

	t6 = ((x29-x30)^(x31<=x32));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 77U;
	static volatile int32_t x34 = 1063;
	volatile uint64_t x35 = 38456773761987LLU;
	static int32_t x36 = INT32_MIN;

	t7 = ((x33-x34)^(x35<=x36));

	if (t7 != -985) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = -1;
	static int16_t x42 = -1;
	static uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MAX;
	static int32_t t8 = 798147;

	t8 = ((x41-x42)^(x43<=x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	volatile int8_t x47 = INT8_MIN;

	t9 = ((x45-x46)^(x47<=x48));

	if (t9 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = INT16_MIN;
	uint64_t x50 = 108368970966LLU;
	uint32_t x51 = UINT32_MAX;
	static volatile int32_t x52 = 742;
	volatile uint64_t t10 = 16858LLU;

	t10 = ((x49-x50)^(x51<=x52));

	if (t10 != 18446743965340547882LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 456764U;
	uint16_t x55 = 7U;
	int64_t x56 = INT64_MAX;
	volatile uint32_t t11 = 3U;

	t11 = ((x53-x54)^(x55<=x56));

	if (t11 != 4294510786U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 951LLU;
	int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MAX;
	static uint64_t t12 = 66967666512LLU;

	t12 = ((x57-x58)^(x59<=x60));

	if (t12 != 2147484599LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	int32_t t13 = 11203;

	t13 = ((x61-x62)^(x63<=x64));

	if (t13 != -14179671) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	static volatile int64_t x66 = -1LL;
	int64_t x67 = -8475888152LL;
	int16_t x68 = -1;

	t14 = ((x65-x66)^(x67<=x68));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	volatile uint16_t x70 = 63U;
	int64_t x71 = INT64_MAX;
	int32_t t15 = -2399059;

	t15 = ((x69-x70)^(x71<=x72));

	if (t15 != -191) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	volatile int16_t x74 = -15566;
	int8_t x75 = -9;
	volatile int32_t t16 = 5785441;

	t16 = ((x73-x74)^(x75<=x76));

	if (t16 != 15439) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = 4;
	static int64_t x79 = INT64_MAX;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t17 = 3024483256703028071LLU;

	t17 = ((x77-x78)^(x79<=x80));

	if (t17 != 7143665LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = -1;
	uint32_t x83 = 60U;

	t18 = ((x81-x82)^(x83<=x84));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	volatile int16_t x87 = INT16_MIN;
	volatile int16_t x88 = 733;
	volatile int32_t t19 = 0;

	t19 = ((x85-x86)^(x87<=x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = -5366915;
	static uint16_t x90 = UINT16_MAX;
	int32_t x91 = -44397558;
	int64_t x92 = INT64_MIN;

	t20 = ((x89-x90)^(x91<=x92));

	if (t20 != -5432450) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = -1;
	static int32_t t21 = 71;

	t21 = ((x93-x94)^(x95<=x96));

	if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x97 = 1150017477LLU;
	int64_t x98 = INT64_MAX;
	int16_t x100 = INT16_MAX;
	volatile uint64_t t22 = 94179LLU;

	t22 = ((x97-x98)^(x99<=x100));

	if (t22 != 9223372038004793287LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = UINT64_MAX;

	t23 = ((x101-x102)^(x103<=x104));

	if (t23 != 18446744073709550312LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	volatile int32_t x107 = 1050678386;
	int32_t t24 = 0;

	t24 = ((x105-x106)^(x107<=x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x114 = -1;
	uint8_t x115 = 28U;
	static volatile int64_t x116 = 19467532LL;
	static int64_t t25 = INT64_MIN;

	t25 = ((x113-x114)^(x115<=x116));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 818LLU;
	uint64_t t26 = 578979LLU;

	t26 = ((x117-x118)^(x119<=x120));

	if (t26 != 946LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = 6LL;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = UINT8_MAX;

	t27 = ((x121-x122)^(x123<=x124));

	if (t27 != -2147483653LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x130 = 748U;
	int64_t x132 = -56848812LL;
	static volatile uint32_t t28 = 3734U;

	t28 = ((x129-x130)^(x131<=x132));

	if (t28 != 110440U) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x137 = -1;
	uint32_t x138 = 114U;
	int32_t x140 = -1;

	t29 = ((x137-x138)^(x139<=x140));

	if (t29 != 4294967181U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	uint64_t x143 = UINT64_MAX;
	static volatile int32_t t30 = -36724;

	t30 = ((x141-x142)^(x143<=x144));

	if (t30 != 2147450881) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MAX;
	volatile int8_t x152 = 0;
	static uint64_t t31 = 157213382560227LLU;

	t31 = ((x149-x150)^(x151<=x152));

	if (t31 != 18446744073709542208LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = UINT8_MAX;
	uint64_t x154 = 1993LLU;
	volatile int32_t x155 = 175;
	uint8_t x156 = UINT8_MAX;
	uint64_t t32 = 206489928LLU;

	t32 = ((x153-x154)^(x155<=x156));

	if (t32 != 18446744073709549879LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -27021;
	uint64_t x158 = 886076253105555LLU;
	int16_t x159 = -9390;
	int16_t x160 = -15;
	uint64_t t33 = 453188754618679LLU;

	t33 = ((x157-x158)^(x159<=x160));

	if (t33 != 18445857997456419041LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = 6641;
	volatile int64_t x162 = -66236952833LL;
	uint16_t x163 = 32U;
	int64_t x164 = 5LL;
	int64_t t34 = 40677757518LL;

	t34 = ((x161-x162)^(x163<=x164));

	if (t34 != 66236959474LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 6U;
	uint32_t x167 = 1642966U;
	int64_t x168 = -1LL;
	volatile int32_t t35 = 8779;

	t35 = ((x165-x166)^(x167<=x168));

	if (t35 != -45) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -1;
	int16_t x171 = 539;
	int8_t x172 = INT8_MAX;
	volatile int32_t t36 = -608;

	t36 = ((x169-x170)^(x171<=x172));

	if (t36 != -62) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	uint64_t x175 = UINT64_MAX;
	static int16_t x176 = INT16_MIN;
	volatile uint64_t t37 = 224637872353532159LLU;

	t37 = ((x173-x174)^(x175<=x176));

	if (t37 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x181 = -1LL;
	int8_t x182 = INT8_MAX;
	int8_t x184 = -55;
	int64_t t38 = 577504854LL;

	t38 = ((x181-x182)^(x183<=x184));

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = -1;
	int64_t x187 = -256503480441LL;
	int16_t x188 = -14;

	t39 = ((x185-x186)^(x187<=x188));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = -1;
	volatile int8_t x194 = INT8_MAX;
	uint16_t x195 = UINT16_MAX;
	static int16_t x196 = INT16_MIN;
	int32_t t40 = 13;

	t40 = ((x193-x194)^(x195<=x196));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x197 = UINT32_MAX;
	volatile uint64_t x198 = 13405595225LLU;
	int64_t x199 = -30LL;
	static uint64_t x200 = UINT64_MAX;
	uint64_t t41 = 664024228143384653LLU;

	t41 = ((x197-x198)^(x199<=x200));

	if (t41 != 18446744064598923687LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x202 = UINT64_MAX;
	int64_t x203 = INT64_MIN;
	int8_t x204 = 14;
	static uint64_t t42 = 16912490LLU;

	t42 = ((x201-x202)^(x203<=x204));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x205 = 415;
	int8_t x206 = INT8_MIN;
	static uint64_t x207 = 88LLU;
	volatile int8_t x208 = 1;
	int32_t t43 = 154;

	t43 = ((x205-x206)^(x207<=x208));

	if (t43 != 543) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x209 = -1;
	int16_t x210 = INT16_MAX;
	uint64_t x211 = 1330069LLU;
	int32_t x212 = INT32_MIN;
	volatile int32_t t44 = 21;

	t44 = ((x209-x210)^(x211<=x212));

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x213 = 88U;
	uint16_t x214 = 381U;
	int8_t x215 = INT8_MIN;

	t45 = ((x213-x214)^(x215<=x216));

	if (t45 != -293) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x217 = 1940U;
	volatile uint8_t x218 = 1U;
	int8_t x219 = 3;

	t46 = ((x217-x218)^(x219<=x220));

	if (t46 != 1939) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x221 = 16U;
	uint16_t x222 = 14U;
	int64_t x223 = -34593LL;
	int16_t x224 = 5;
	int32_t t47 = 6721027;

	t47 = ((x221-x222)^(x223<=x224));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x225 = INT8_MIN;
	static volatile int8_t x226 = -1;
	int8_t x227 = 1;
	int16_t x228 = INT16_MAX;

	t48 = ((x225-x226)^(x227<=x228));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x229 = INT8_MIN;
	uint64_t x230 = 3329094366LLU;
	volatile int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;

	t49 = ((x229-x230)^(x231<=x232));

	if (t49 != 18446744070380457123LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = INT16_MAX;
	static uint64_t x234 = UINT64_MAX;
	int16_t x235 = -1;
	volatile uint64_t x236 = 59358163968781687LLU;

	t50 = ((x233-x234)^(x235<=x236));

	if (t50 != 32768LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = -22;
	int8_t x238 = INT8_MIN;
	static int8_t x240 = INT8_MIN;

	t51 = ((x237-x238)^(x239<=x240));

	if (t51 != 106) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x241 = 162362267252900LLU;
	int8_t x242 = INT8_MIN;
	int32_t x243 = INT32_MAX;
	volatile uint8_t x244 = 20U;
	static uint64_t t52 = 188011246LLU;

	t52 = ((x241-x242)^(x243<=x244));

	if (t52 != 162362267253028LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x245 = UINT8_MAX;
	volatile uint16_t x246 = 4U;
	volatile uint64_t x247 = 239158105287LLU;
	int32_t x248 = INT32_MAX;
	volatile int32_t t53 = -2;

	t53 = ((x245-x246)^(x247<=x248));

	if (t53 != 251) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = 0LL;
	int64_t x250 = INT64_MAX;

	t54 = ((x249-x250)^(x251<=x252));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x253 = -3634;
	int16_t x254 = INT16_MAX;
	volatile uint64_t x255 = 108219699LLU;
	int64_t x256 = INT64_MAX;
	int32_t t55 = -479075523;

	t55 = ((x253-x254)^(x255<=x256));

	if (t55 != -36402) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = INT16_MIN;
	int16_t x258 = -1;
	int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MIN;
	volatile int32_t t56 = 0;

	t56 = ((x257-x258)^(x259<=x260));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = -678109;
	uint64_t x262 = 68812465492LLU;
	int32_t x263 = INT32_MIN;
	uint16_t x264 = UINT16_MAX;

	t57 = ((x261-x262)^(x263<=x264));

	if (t57 != 18446744004896408014LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = INT32_MIN;
	static uint32_t x266 = 115U;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = 3990933925LL;
	static volatile uint32_t t58 = 33U;

	t58 = ((x265-x266)^(x267<=x268));

	if (t58 != 2147483533U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x277 = -1;
	uint8_t x278 = UINT8_MAX;
	static volatile uint16_t x279 = UINT16_MAX;
	static int8_t x280 = -18;
	int32_t t59 = -275487376;

	t59 = ((x277-x278)^(x279<=x280));

	if (t59 != -256) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x281 = -1;
	int8_t x282 = INT8_MAX;
	int64_t x283 = INT64_MAX;
	volatile int32_t t60 = 1;

	t60 = ((x281-x282)^(x283<=x284));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = INT8_MIN;
	static uint16_t x286 = 0U;
	uint32_t x287 = 762U;
	static uint16_t x288 = 4U;

	t61 = ((x285-x286)^(x287<=x288));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x289 = INT8_MIN;
	static int32_t x290 = INT32_MIN;
	volatile uint64_t x291 = 634LLU;
	static uint64_t x292 = 12686654726579LLU;

	t62 = ((x289-x290)^(x291<=x292));

	if (t62 != 2147483521) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x298 = INT64_MAX;
	int8_t x299 = 39;
	static int8_t x300 = -1;
	volatile uint64_t t63 = 211208406122765625LLU;

	t63 = ((x297-x298)^(x299<=x300));

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int8_t x302 = INT8_MIN;
	int16_t x303 = -1;
	static int64_t x304 = INT64_MAX;
	volatile uint32_t t64 = 1432U;

	t64 = ((x301-x302)^(x303<=x304));

	if (t64 != 126U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x306 = INT8_MIN;
	int8_t x307 = -1;
	static int16_t x308 = 3192;
	uint64_t t65 = 686571LLU;

	t65 = ((x305-x306)^(x307<=x308));

	if (t65 != 27916831593LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	uint32_t x312 = 5607812U;

	t66 = ((x309-x310)^(x311<=x312));

	if (t66 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = INT8_MIN;
	volatile int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -241634861;
	static volatile int32_t t67 = -1;

	t67 = ((x313-x314)^(x315<=x316));

	if (t67 != 32640) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int64_t x318 = INT64_MIN;
	int8_t x319 = -15;
	int8_t x320 = INT8_MIN;
	volatile int64_t t68 = -3LL;

	t68 = ((x317-x318)^(x319<=x320));

	if (t68 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x321 = 949075976658104LLU;
	int8_t x323 = -1;
	int64_t x324 = INT64_MIN;
	uint64_t t69 = 1225535905679LLU;

	t69 = ((x321-x322)^(x323<=x324));

	if (t69 != 949078124141752LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x329 = 96112073893389LLU;
	uint32_t x330 = UINT32_MAX;
	volatile int8_t x332 = 0;
	volatile uint64_t t70 = 656440964LLU;

	t70 = ((x329-x330)^(x331<=x332));

	if (t70 != 96107778926095LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x333 = 14818331U;
	volatile int8_t x334 = -3;
	volatile int16_t x335 = INT16_MAX;
	int16_t x336 = 63;
	static uint32_t t71 = 0U;

	t71 = ((x333-x334)^(x335<=x336));

	if (t71 != 14818334U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x337 = 0;
	static int64_t x338 = -19696290245834LL;
	uint64_t x339 = 834442718249LLU;
	int64_t x340 = -122LL;
	volatile int64_t t72 = 1391496LL;

	t72 = ((x337-x338)^(x339<=x340));

	if (t72 != 19696290245835LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x341 = INT16_MIN;
	uint32_t x342 = 7U;
	int16_t x343 = INT16_MIN;
	static volatile uint32_t x344 = 0U;
	uint32_t t73 = 13636150U;

	t73 = ((x341-x342)^(x343<=x344));

	if (t73 != 4294934521U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = INT32_MIN;
	static int8_t x346 = -1;
	int64_t x347 = INT64_MAX;
	static int16_t x348 = -113;
	volatile int32_t t74 = -17875;

	t74 = ((x345-x346)^(x347<=x348));

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x349 = -1;
	uint16_t x350 = 1635U;
	static uint8_t x351 = UINT8_MAX;
	volatile uint16_t x352 = UINT16_MAX;

	t75 = ((x349-x350)^(x351<=x352));

	if (t75 != -1635) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x353 = -2;
	static uint64_t x354 = 7796066437994LLU;
	volatile int64_t x355 = 3662304440411471LL;
	int32_t x356 = -84194256;
	volatile uint64_t t76 = 225526728131LLU;

	t76 = ((x353-x354)^(x355<=x356));

	if (t76 != 18446736277643113620LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x358 = 7828U;
	int32_t x359 = 103;
	int64_t x360 = -6LL;
	static volatile uint32_t t77 = 642391U;

	t77 = ((x357-x358)^(x359<=x360));

	if (t77 != 4294959468U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x366 = INT8_MIN;
	int32_t x367 = 161;
	volatile uint32_t x368 = UINT32_MAX;

	t78 = ((x365-x366)^(x367<=x368));

	if (t78 != 129U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x369 = INT32_MAX;
	static uint32_t x370 = UINT32_MAX;
	int32_t x371 = -8107;
	static int64_t x372 = INT64_MIN;
	uint32_t t79 = 4U;

	t79 = ((x369-x370)^(x371<=x372));

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x373 = 2696980U;
	static int8_t x374 = -1;
	int32_t x376 = -1;
	volatile uint32_t t80 = 20U;

	t80 = ((x373-x374)^(x375<=x376));

	if (t80 != 2696980U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MIN;
	uint8_t x380 = 2U;
	volatile int64_t t81 = -15839058115LL;

	t81 = ((x377-x378)^(x379<=x380));

	if (t81 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x381 = UINT64_MAX;
	uint8_t x382 = 0U;
	static int8_t x383 = -1;
	static int32_t x384 = 30521;
	static uint64_t t82 = 4498866297890729LLU;

	t82 = ((x381-x382)^(x383<=x384));

	if (t82 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x385 = 27U;
	static uint32_t x387 = 1475614U;

	t83 = ((x385-x386)^(x387<=x388));

	if (t83 != 29) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x393 = 28204627LLU;
	volatile int64_t x394 = INT64_MIN;
	uint16_t x395 = 14U;
	int8_t x396 = INT8_MIN;
	uint64_t t84 = 285264077088592LLU;

	t84 = ((x393-x394)^(x395<=x396));

	if (t84 != 9223372036882980435LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = INT32_MIN;
	int64_t x398 = -10468LL;
	int64_t x399 = -25264LL;
	uint64_t x400 = 334469275449304173LLU;

	t85 = ((x397-x398)^(x399<=x400));

	if (t85 != -2147473180LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = INT64_MAX;
	uint32_t x402 = 42896U;
	int64_t x403 = INT64_MIN;
	uint16_t x404 = UINT16_MAX;
	volatile int64_t t86 = -56325255855915LL;

	t86 = ((x401-x402)^(x403<=x404));

	if (t86 != 9223372036854732910LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x411 = INT32_MAX;
	static int16_t x412 = INT16_MIN;
	uint64_t t87 = 78LLU;

	t87 = ((x409-x410)^(x411<=x412));

	if (t87 != 32768LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x413 = 12U;
	uint8_t x414 = 5U;
	volatile int16_t x415 = INT16_MIN;
	int64_t x416 = 271LL;
	volatile int32_t t88 = -189450969;

	t88 = ((x413-x414)^(x415<=x416));

	if (t88 != 6) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = 17102LL;
	int8_t x418 = INT8_MIN;
	volatile int16_t x419 = -1;
	int64_t x420 = INT64_MIN;
	int64_t t89 = 94868568383LL;

	t89 = ((x417-x418)^(x419<=x420));

	if (t89 != 17230LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x421 = 5U;
	uint32_t x422 = UINT32_MAX;
	volatile uint8_t x423 = 0U;
	uint8_t x424 = UINT8_MAX;
	static uint32_t t90 = 9942U;

	t90 = ((x421-x422)^(x423<=x424));

	if (t90 != 7U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x425 = -56;
	uint32_t x426 = UINT32_MAX;
	int16_t x427 = 3450;
	uint8_t x428 = UINT8_MAX;
	volatile uint32_t t91 = 69491396U;

	t91 = ((x425-x426)^(x427<=x428));

	if (t91 != 4294967241U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x429 = -1;
	static volatile uint8_t x430 = UINT8_MAX;
	static volatile int64_t x431 = INT64_MAX;
	uint64_t x432 = 15441943926LLU;
	int32_t t92 = -6870;

	t92 = ((x429-x430)^(x431<=x432));

	if (t92 != -256) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = -19511699561492553LL;
	uint8_t x434 = 77U;
	uint64_t x435 = 1771461368435LLU;
	volatile int64_t t93 = 2983LL;

	t93 = ((x433-x434)^(x435<=x436));

	if (t93 != -19511699561492629LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x445 = 1254348849U;
	int8_t x446 = 1;
	int16_t x447 = 24;
	volatile int16_t x448 = INT16_MIN;

	t94 = ((x445-x446)^(x447<=x448));

	if (t94 != 1254348848U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x450 = 4329U;
	static volatile int8_t x452 = -1;
	volatile uint32_t t95 = 3U;

	t95 = ((x449-x450)^(x451<=x452));

	if (t95 != 4294962969U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x453 = INT64_MIN;
	volatile int16_t x455 = 1206;

	t96 = ((x453-x454)^(x455<=x456));

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = INT16_MIN;
	volatile int32_t x458 = 1;
	int16_t x460 = INT16_MAX;
	volatile int32_t t97 = -14937643;

	t97 = ((x457-x458)^(x459<=x460));

	if (t97 != -32770) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x461 = 148071455U;
	static int16_t x462 = 981;
	int8_t x463 = INT8_MIN;
	static int16_t x464 = INT16_MAX;
	uint32_t t98 = 2U;

	t98 = ((x461-x462)^(x463<=x464));

	if (t98 != 148070475U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = -1;
	int64_t x466 = -53129806LL;
	uint64_t x467 = UINT64_MAX;
	uint16_t x468 = 1558U;

	t99 = ((x465-x466)^(x467<=x468));

	if (t99 != 53129805LL) { NG(); } else { ; }
	
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

