#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
uint32_t x12 = 7U;
uint8_t x13 = 1U;
uint64_t x18 = 35809175680657LLU;
uint16_t x22 = 49U;
int64_t t4 = INT64_MAX;
int8_t x28 = -1;
int16_t x31 = INT16_MIN;
int32_t t7 = 505474622;
volatile int8_t x37 = -1;
static volatile int16_t x38 = INT16_MIN;
int8_t x39 = INT8_MIN;
static int32_t x44 = 219;
static int64_t x53 = INT64_MAX;
static int16_t x59 = 4;
uint16_t x68 = 16205U;
uint64_t t15 = 109656915814668467LLU;
int8_t x74 = INT8_MIN;
int32_t t16 = -1;
uint64_t x85 = UINT64_MAX;
int8_t x89 = -1;
static int16_t x92 = 9;
uint32_t x97 = 1694793U;
int64_t x110 = -1LL;
volatile int8_t x111 = 1;
int16_t x115 = INT16_MAX;
volatile int16_t x130 = INT16_MIN;
volatile uint16_t x131 = 0U;
int32_t x140 = INT32_MIN;
uint64_t t29 = 150077724900496LLU;
int64_t t31 = -54713867321105592LL;
uint8_t x156 = 2U;
int64_t x163 = -1LL;
int8_t x164 = 1;
int64_t t35 = -1251696407649754LL;
uint64_t x168 = 241147183963060LLU;
int32_t x171 = -357076238;
volatile int32_t t38 = -125939;
volatile uint32_t t39 = 13105U;
static int16_t x186 = 126;
static int32_t x193 = INT32_MIN;
uint32_t t42 = 1705603U;
int64_t t43 = 11442828290587414LL;
volatile int8_t x206 = INT8_MIN;
uint8_t x213 = UINT8_MAX;
uint32_t x215 = 201531U;
uint32_t x221 = 1U;
volatile uint16_t x224 = UINT16_MAX;
int64_t x229 = -1LL;
static int32_t t50 = 24205512;
int64_t x239 = INT64_MIN;
int16_t x240 = INT16_MIN;
volatile int16_t x246 = 0;
static int8_t x250 = INT8_MIN;
int8_t x252 = INT8_MIN;
int64_t x256 = 1LL;
uint64_t t59 = 10108928897654478LLU;
uint8_t x278 = 13U;
static int32_t x279 = -1;
volatile uint32_t x281 = UINT32_MAX;
int32_t x284 = INT32_MIN;
int8_t x286 = 1;
uint8_t x287 = UINT8_MAX;
uint32_t x290 = 1660568210U;
static uint32_t t65 = 9119U;
uint64_t x303 = 4638906972787LLU;
int16_t x304 = 162;
uint64_t t66 = 1520496LLU;
uint8_t x305 = UINT8_MAX;
uint16_t x327 = 3U;
uint64_t t70 = 155566638194LLU;
uint8_t x329 = UINT8_MAX;
int16_t x336 = INT16_MIN;
int16_t x345 = INT16_MIN;
uint8_t x347 = UINT8_MAX;
static volatile int64_t x357 = 189219347706709195LL;
static int8_t x358 = -1;
static int64_t x359 = INT64_MIN;
volatile int64_t t77 = 1LL;
static volatile int8_t x364 = -1;
uint32_t x373 = UINT32_MAX;
int64_t x378 = -7LL;
int32_t x381 = 268883;
volatile uint32_t t83 = 3U;
int32_t x392 = INT32_MAX;
int8_t x402 = INT8_MIN;
int64_t x406 = INT64_MIN;
uint64_t x415 = 300388779861372LLU;
uint64_t x421 = 3048793874008396LLU;
volatile uint16_t x424 = UINT16_MAX;
int8_t x434 = -1;
static volatile int32_t x440 = 13325604;
int32_t x450 = -1;
volatile int8_t x451 = -12;
int64_t x457 = 68319536523LL;
int64_t x460 = INT64_MAX;
int8_t x462 = -1;


void f0(void) {
	int32_t x1 = -1;
	static uint64_t x2 = 1LLU;
	int16_t x3 = 19;
	volatile int64_t x4 = INT64_MIN;
	volatile uint64_t t0 = 1782450130147803LLU;

	t0 = (x1-((x2-x3)&x4));

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = 2;
	uint32_t t1 = 39332026U;

	t1 = (x9-((x10-x11)&x12));

	if (t1 != 4294967163U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MAX;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t2 = 8156;

	t2 = (x13-((x14-x15)&x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 95682447U;
	int64_t x19 = -1105692625684003LL;
	int64_t x20 = INT64_MIN;
	uint64_t t3 = 109579924766327LLU;

	t3 = (x17-((x18-x19)&x20));

	if (t3 != 95682447LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int8_t x23 = INT8_MAX;
	int8_t x24 = 0;

	t4 = (x21-((x22-x23)&x24));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = 683505166167134LL;
	uint64_t x26 = 28LLU;
	int32_t x27 = INT32_MIN;
	static uint64_t t5 = 57455053468897LLU;

	t5 = (x25-((x26-x27)&x28));

	if (t5 != 683503018683458LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -17236158812509LL;
	static uint16_t x30 = 6U;
	int8_t x32 = 1;
	static int64_t t6 = -335824423900630LL;

	t6 = (x29-((x30-x31)&x32));

	if (t6 != -17236158812509LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MAX;
	volatile int16_t x35 = INT16_MIN;
	int32_t x36 = 15;

	t7 = (x33-((x34-x35)&x36));

	if (t7 != -32783) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x40 = -68;
	static int32_t t8 = 55256;

	t8 = (x37-((x38-x39)&x40));

	if (t8 != 32639) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int8_t x42 = INT8_MIN;
	int8_t x43 = -53;
	int32_t t9 = -967;

	t9 = (x41-((x42-x43)&x44));

	if (t9 != 110) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = -1LL;
	uint32_t x46 = 430U;
	uint64_t x47 = 3448037LLU;
	int16_t x48 = -1;
	uint64_t t10 = 7722052704756446116LLU;

	t10 = (x45-((x46-x47)&x48));

	if (t10 != 3447606LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = -357576165153274LL;
	volatile int8_t x50 = INT8_MIN;
	volatile uint64_t x51 = 46674983444332LLU;
	int16_t x52 = -1593;
	volatile uint64_t t11 = 203995LLU;

	t11 = (x49-((x50-x51)&x52));

	if (t11 != 18446433172527842818LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = 98066229LLU;
	static int32_t x55 = INT32_MIN;
	static int32_t x56 = -1;
	static volatile uint64_t t12 = 757143484499LLU;

	t12 = (x53-((x54-x55)&x56));

	if (t12 != 9223372034609225930LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x57 = 258659997LLU;
	int8_t x58 = INT8_MIN;
	static int16_t x60 = INT16_MAX;
	static uint64_t t13 = 0LLU;

	t13 = (x57-((x58-x59)&x60));

	if (t13 != 258627361LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	static int8_t x62 = 0;
	uint32_t x63 = 205U;
	uint32_t x64 = 1823U;
	static volatile uint32_t t14 = 76U;

	t14 = (x61-((x62-x63)&x64));

	if (t14 != 63724U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x65 = 7540532LLU;
	int32_t x66 = -59750;
	int32_t x67 = 977099201;

	t15 = (x65-((x66-x67)&x68));

	if (t15 != 7525099LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	int32_t x75 = -1;
	int16_t x76 = INT16_MIN;

	t16 = (x73-((x74-x75)&x76));

	if (t16 != -2147450880) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 2LLU;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = -1;
	int64_t x84 = -26547LL;
	uint64_t t17 = 18LLU;

	t17 = (x81-((x82-x83)&x84));

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = INT32_MIN;
	uint8_t x88 = UINT8_MAX;
	volatile uint64_t t18 = 12LLU;

	t18 = (x85-((x86-x87)&x88));

	if (t18 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x90 = 0U;
	static volatile int8_t x91 = 10;
	static uint32_t t19 = UINT32_MAX;

	t19 = (x89-((x90-x91)&x92));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 1050U;
	volatile int64_t x94 = -881662016LL;
	int8_t x95 = INT8_MIN;
	static volatile int16_t x96 = INT16_MIN;
	volatile int64_t t20 = -35014024261765299LL;

	t20 = (x93-((x94-x95)&x96));

	if (t20 != 881689626LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x98 = INT8_MIN;
	int16_t x99 = -1;
	int8_t x100 = INT8_MAX;
	uint32_t t21 = 123687847U;

	t21 = (x97-((x98-x99)&x100));

	if (t21 != 1694792U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = INT32_MIN;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -1;
	static volatile int64_t x104 = -1LL;
	static int64_t t22 = 11172719LL;

	t22 = (x101-((x102-x103)&x104));

	if (t22 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	volatile int64_t t23 = 272518LL;

	t23 = (x109-((x110-x111)&x112));

	if (t23 != -32640LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 11U;
	static int32_t x114 = -6342671;
	static int8_t x116 = -1;
	static int32_t t24 = 122183958;

	t24 = (x113-((x114-x115)&x116));

	if (t24 != 6375449) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = 45U;
	volatile int8_t x118 = INT8_MIN;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = 56;
	volatile int32_t t25 = -15;

	t25 = (x117-((x118-x119)&x120));

	if (t25 != 45) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x121 = INT8_MIN;
	uint16_t x122 = UINT16_MAX;
	int64_t x123 = INT64_MAX;
	uint8_t x124 = 63U;
	volatile int64_t t26 = -448LL;

	t26 = (x121-((x122-x123)&x124));

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -412;
	static uint16_t x126 = 982U;
	int8_t x127 = -1;
	static int32_t x128 = -1;
	int32_t t27 = -363294;

	t27 = (x125-((x126-x127)&x128));

	if (t27 != -1395) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 346U;
	int64_t x132 = -1129839LL;
	static int64_t t28 = 339919997393355895LL;

	t28 = (x129-((x130-x131)&x132));

	if (t28 != 1147226LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = -1960;
	static uint8_t x138 = UINT8_MAX;
	uint64_t x139 = 1LLU;

	t29 = (x137-((x138-x139)&x140));

	if (t29 != 18446744073709549656LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = 1;
	uint64_t x142 = 7562LLU;
	int32_t x143 = 1510223;
	static uint16_t x144 = 53U;
	uint64_t t30 = 456200LLU;

	t30 = (x141-((x142-x143)&x144));

	if (t30 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MAX;
	int64_t x146 = -350LL;
	static int64_t x147 = 29050LL;
	int16_t x148 = INT16_MAX;

	t31 = (x145-((x146-x147)&x148));

	if (t31 != 9223372036854772439LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x149 = -1LL;
	volatile int16_t x150 = -1;
	int64_t x151 = INT64_MIN;
	uint16_t x152 = 7U;
	int64_t t32 = -33836LL;

	t32 = (x149-((x150-x151)&x152));

	if (t32 != -8LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x153 = INT8_MIN;
	int8_t x154 = 7;
	uint16_t x155 = 20083U;
	int32_t t33 = -4605109;

	t33 = (x153-((x154-x155)&x156));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = -1LL;
	int16_t x158 = INT16_MAX;
	static uint16_t x159 = 29254U;
	int16_t x160 = INT16_MAX;
	volatile int64_t t34 = 103997353LL;

	t34 = (x157-((x158-x159)&x160));

	if (t34 != -3514LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 1334U;
	static int8_t x162 = 0;

	t35 = (x161-((x162-x163)&x164));

	if (t35 != 1333LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 6U;
	int16_t x166 = -1;
	static int32_t x167 = INT32_MIN;
	volatile uint64_t t36 = 136588481LLU;

	t36 = (x165-((x166-x167)&x168));

	if (t36 != 18446744071759389778LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x169 = -11880;
	int16_t x170 = INT16_MIN;
	static int8_t x172 = INT8_MIN;
	int32_t t37 = 47962520;

	t37 = (x169-((x170-x171)&x172));

	if (t37 != -357055336) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -7173;
	volatile uint8_t x174 = 38U;
	int16_t x175 = INT16_MIN;
	int16_t x176 = -1774;

	t38 = (x173-((x174-x175)&x176));

	if (t38 != -39943) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = -11609583;
	static uint32_t x178 = UINT32_MAX;
	volatile int8_t x179 = INT8_MAX;
	uint32_t x180 = UINT32_MAX;

	t39 = (x177-((x178-x179)&x180));

	if (t39 != 4283357841U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MAX;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = -66593633688LL;
	static int64_t t40 = -5183434LL;

	t40 = (x185-((x186-x187)&x188));

	if (t40 != 68741169047LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x194 = 112551;
	static int8_t x195 = -44;
	static int64_t x196 = 17LL;
	int64_t t41 = -4302769785486LL;

	t41 = (x193-((x194-x195)&x196));

	if (t41 != -2147483665LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MIN;
	volatile uint16_t x198 = 1040U;
	static uint32_t x199 = 3U;
	static uint32_t x200 = 527U;

	t42 = (x197-((x198-x199)&x200));

	if (t42 != 4294934515U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x201 = INT64_MIN;
	static int16_t x202 = -12777;
	static volatile int8_t x203 = 0;
	static volatile int8_t x204 = -1;

	t43 = (x201-((x202-x203)&x204));

	if (t43 != -9223372036854763031LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = INT32_MIN;
	volatile uint8_t x207 = UINT8_MAX;
	int64_t x208 = -1LL;
	static volatile int64_t t44 = -56LL;

	t44 = (x205-((x206-x207)&x208));

	if (t44 != -2147483265LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x209 = INT16_MAX;
	int32_t x210 = -925;
	volatile int64_t x211 = 162611023LL;
	int16_t x212 = 6158;
	int64_t t45 = 91378097LL;

	t45 = (x209-((x210-x211)&x212));

	if (t45 != 26619LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x214 = UINT64_MAX;
	int32_t x216 = INT32_MAX;
	uint64_t t46 = 59614610844913LLU;

	t46 = (x213-((x214-x215)&x216));

	if (t46 != 18446744071562269755LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x222 = -1;
	static volatile uint32_t x223 = 1714739U;
	volatile uint32_t t47 = 4U;

	t47 = (x221-((x222-x223)&x224));

	if (t47 != 4294912565U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x225 = UINT32_MAX;
	volatile int8_t x226 = -42;
	uint8_t x227 = 0U;
	uint32_t x228 = 59U;
	volatile uint32_t t48 = 9326U;

	t48 = (x225-((x226-x227)&x228));

	if (t48 != 4294967277U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x230 = -1LL;
	static int32_t x231 = INT32_MAX;
	int16_t x232 = INT16_MAX;
	int64_t t49 = -32238LL;

	t49 = (x229-((x230-x231)&x232));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = -1;
	int16_t x234 = 55;
	int8_t x235 = INT8_MAX;
	static uint16_t x236 = UINT16_MAX;

	t50 = (x233-((x234-x235)&x236));

	if (t50 != -65465) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = 148LL;
	uint64_t x238 = UINT64_MAX;
	uint64_t t51 = 260703LLU;

	t51 = (x237-((x238-x239)&x240));

	if (t51 != 9223372036854808724LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x241 = 225U;
	volatile int8_t x242 = INT8_MIN;
	volatile int64_t x243 = -32605953086765541LL;
	uint32_t x244 = 4317004U;
	int64_t t52 = -72113091347786474LL;

	t52 = (x241-((x242-x243)&x244));

	if (t52 != -4233315LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MIN;
	int32_t x247 = -229545847;
	uint32_t x248 = 8697042U;
	static volatile uint32_t t53 = 26218209U;

	t53 = (x245-((x246-x247)&x248));

	if (t53 != 4286245806U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x249 = INT16_MAX;
	volatile int8_t x251 = INT8_MIN;
	volatile int32_t t54 = 22;

	t54 = (x249-((x250-x251)&x252));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x253 = INT32_MIN;
	uint8_t x254 = 1U;
	int64_t x255 = -456590566568260LL;
	static int64_t t55 = 679013840380065544LL;

	t55 = (x253-((x254-x255)&x256));

	if (t55 != -2147483649LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x257 = 6515438740335706LLU;
	static int16_t x258 = -1;
	static volatile int64_t x259 = INT64_MIN;
	int16_t x260 = 1;
	uint64_t t56 = 91541924LLU;

	t56 = (x257-((x258-x259)&x260));

	if (t56 != 6515438740335705LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x261 = 1165110341287239LLU;
	volatile uint8_t x262 = 54U;
	static int8_t x263 = -1;
	int64_t x264 = INT64_MAX;
	volatile uint64_t t57 = 15479LLU;

	t57 = (x261-((x262-x263)&x264));

	if (t57 != 1165110341287184LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = 1;
	int64_t x266 = INT64_MAX;
	static int16_t x267 = 6355;
	int16_t x268 = -1;
	volatile int64_t t58 = 0LL;

	t58 = (x265-((x266-x267)&x268));

	if (t58 != -9223372036854769451LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x269 = 123U;
	uint64_t x270 = 212LLU;
	uint8_t x271 = 27U;
	int32_t x272 = -1;

	t59 = (x269-((x270-x271)&x272));

	if (t59 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MIN;
	int64_t x275 = 36210995176451LL;
	uint16_t x276 = 652U;
	volatile int64_t t60 = -741440334329189LL;

	t60 = (x273-((x274-x275)&x276));

	if (t60 != -780LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = 3U;
	int8_t x280 = INT8_MAX;
	volatile uint32_t t61 = 763277U;

	t61 = (x277-((x278-x279)&x280));

	if (t61 != 4294967285U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x282 = -1LL;
	int32_t x283 = -1;
	volatile int64_t t62 = 100LL;

	t62 = (x281-((x282-x283)&x284));

	if (t62 != 4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x285 = 4U;
	int8_t x288 = INT8_MIN;
	static int32_t t63 = 129;

	t63 = (x285-((x286-x287)&x288));

	if (t63 != 260) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x289 = UINT32_MAX;
	uint64_t x291 = 247346849429988864LLU;
	uint8_t x292 = UINT8_MAX;
	volatile uint64_t t64 = 3520LLU;

	t64 = (x289-((x290-x291)&x292));

	if (t64 != 4294967149LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MAX;
	uint32_t x299 = 14080095U;
	int8_t x300 = -2;

	t65 = (x297-((x298-x299)&x300));

	if (t65 != 14047455U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x301 = 3307U;
	int32_t x302 = INT32_MAX;

	t66 = (x301-((x302-x303)&x304));

	if (t66 != 3179LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MIN;
	int16_t x308 = -1;
	int64_t t67 = -11LL;

	t67 = (x305-((x306-x307)&x308));

	if (t67 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 0U;
	int64_t x314 = INT64_MIN;
	int32_t x315 = -34785;
	static uint64_t x316 = 337LLU;
	uint64_t t68 = 3451732770615434629LLU;

	t68 = (x313-((x314-x315)&x316));

	if (t68 != 18446744073709551295LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = -981;
	int8_t x318 = INT8_MIN;
	static uint64_t x319 = 432674467LLU;
	int8_t x320 = -1;
	static uint64_t t69 = 35634056152956330LLU;

	t69 = (x317-((x318-x319)&x320));

	if (t69 != 432673614LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -1;
	int64_t x326 = 50330408LL;
	static uint64_t x328 = 90025LLU;

	t70 = (x325-((x326-x327)&x328));

	if (t70 != 18446744073709462750LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x330 = 6U;
	int8_t x331 = INT8_MAX;
	int32_t x332 = -1;
	int32_t t71 = -169;

	t71 = (x329-((x330-x331)&x332));

	if (t71 != 376) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = -1;
	static int16_t x334 = 1132;
	volatile int16_t x335 = 1793;
	volatile int32_t t72 = -49;

	t72 = (x333-((x334-x335)&x336));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MIN;
	uint64_t t73 = 534LLU;

	t73 = (x337-((x338-x339)&x340));

	if (t73 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x341 = INT8_MIN;
	static int16_t x342 = -1;
	static uint64_t x343 = 349720020LLU;
	int8_t x344 = -1;
	volatile uint64_t t74 = 5717708373179185LLU;

	t74 = (x341-((x342-x343)&x344));

	if (t74 != 349719893LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x346 = 613LLU;
	volatile uint8_t x348 = 50U;
	uint64_t t75 = 136560893143746LLU;

	t75 = (x345-((x346-x347)&x348));

	if (t75 != 18446744073709518814LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = -1;
	int64_t x354 = 6790248249307235LL;
	volatile uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 2U;
	int64_t t76 = -2551347258LL;

	t76 = (x353-((x354-x355)&x356));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x360 = 21U;

	t77 = (x357-((x358-x359)&x360));

	if (t77 != 189219347706709174LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = -172823578;
	int32_t x363 = INT32_MIN;
	int32_t t78 = -26541;

	t78 = (x361-((x362-x363)&x364));

	if (t78 != -1974692838) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = 0LLU;
	int64_t x366 = -307582829020LL;
	static int32_t x367 = 1664;
	int16_t x368 = -1;
	static uint64_t t79 = 23282154191689394LLU;

	t79 = (x365-((x366-x367)&x368));

	if (t79 != 307582830684LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x374 = 76U;
	int8_t x375 = INT8_MIN;
	int16_t x376 = INT16_MAX;
	static uint32_t t80 = 7907603U;

	t80 = (x373-((x374-x375)&x376));

	if (t80 != 4294967091U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x377 = 14U;
	static int32_t x379 = INT32_MAX;
	static int8_t x380 = INT8_MIN;
	volatile int64_t t81 = 157485244LL;

	t81 = (x377-((x378-x379)&x380));

	if (t81 != 2147483790LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x382 = 131192400140945LLU;
	int32_t x383 = 24265042;
	int8_t x384 = INT8_MAX;
	volatile uint64_t t82 = 39373064955LLU;

	t82 = (x381-((x382-x383)&x384));

	if (t82 != 268820LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x385 = 0;
	uint16_t x386 = 7U;
	volatile uint32_t x387 = UINT32_MAX;
	int8_t x388 = -1;

	t83 = (x385-((x386-x387)&x388));

	if (t83 != 4294967288U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	static int32_t t84 = INT32_MIN;

	t84 = (x389-((x390-x391)&x392));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x401 = 1U;
	int16_t x403 = -1;
	int8_t x404 = INT8_MIN;
	volatile int32_t t85 = 14;

	t85 = (x401-((x402-x403)&x404));

	if (t85 != 129) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x405 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	static int32_t x408 = INT32_MIN;
	volatile int64_t t86 = -536306491756608LL;

	t86 = (x405-((x406-x407)&x408));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x409 = INT8_MAX;
	int8_t x410 = INT8_MIN;
	uint64_t x411 = 19065014065375LLU;
	uint16_t x412 = 705U;
	volatile uint64_t t87 = 35LLU;

	t87 = (x409-((x410-x411)&x412));

	if (t87 != 18446744073709551102LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = -67;
	int64_t x414 = INT64_MIN;
	uint8_t x416 = UINT8_MAX;
	static uint64_t t88 = 65635902720378408LLU;

	t88 = (x413-((x414-x415)&x416));

	if (t88 != 18446744073709551417LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x417 = INT16_MAX;
	int32_t x418 = 1091;
	int8_t x419 = INT8_MAX;
	int64_t x420 = -86645499824LL;
	volatile int64_t t89 = 2624867592742255531LL;

	t89 = (x417-((x418-x419)&x420));

	if (t89 != 32703LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x422 = 4U;
	int64_t x423 = INT64_MAX;
	uint64_t t90 = 4354821700003LLU;

	t90 = (x421-((x422-x423)&x424));

	if (t90 != 3048793874008391LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = 1;
	int16_t x430 = -1;
	int8_t x431 = -1;
	int8_t x432 = INT8_MIN;
	static volatile int32_t t91 = -131;

	t91 = (x429-((x430-x431)&x432));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x433 = INT64_MAX;
	uint64_t x435 = 51856154674003095LLU;
	int32_t x436 = 252;
	volatile uint64_t t92 = 60925630422LLU;

	t92 = (x433-((x434-x435)&x436));

	if (t92 != 9223372036854775703LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x437 = INT32_MAX;
	uint64_t x438 = UINT64_MAX;
	uint16_t x439 = 7U;
	volatile uint64_t t93 = 4LLU;

	t93 = (x437-((x438-x439)&x440));

	if (t93 != 2134158047LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = 7;
	static int16_t x446 = INT16_MAX;
	int32_t x447 = -1;
	uint16_t x448 = 11559U;
	volatile int32_t t94 = -838191900;

	t94 = (x445-((x446-x447)&x448));

	if (t94 != 7) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x449 = 15867LLU;
	int32_t x452 = INT32_MIN;
	volatile uint64_t t95 = 1749660LLU;

	t95 = (x449-((x450-x451)&x452));

	if (t95 != 15867LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x453 = INT8_MAX;
	static uint32_t x454 = UINT32_MAX;
	int8_t x455 = -3;
	uint16_t x456 = 32U;
	volatile uint32_t t96 = 1190204U;

	t96 = (x453-((x454-x455)&x456));

	if (t96 != 127U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x458 = INT16_MIN;
	int64_t x459 = -15597878148282LL;
	int64_t t97 = -111025829742LL;

	t97 = (x457-((x458-x459)&x460));

	if (t97 != -15529558578991LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = INT32_MAX;
	volatile uint64_t x463 = 3LLU;
	int64_t x464 = INT64_MIN;
	volatile uint64_t t98 = 1993457742202579LLU;

	t98 = (x461-((x462-x463)&x464));

	if (t98 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x465 = 10492U;
	int16_t x466 = INT16_MIN;
	uint8_t x467 = 2U;
	uint16_t x468 = UINT16_MAX;
	int32_t t99 = 1;

	t99 = (x465-((x466-x467)&x468));

	if (t99 != -22274) { NG(); } else { ; }
	
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

