#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x13 = 10536;
uint32_t x20 = UINT32_MAX;
static int8_t x21 = INT8_MIN;
int8_t x24 = INT8_MIN;
int64_t x25 = 10260276937086LL;
int16_t x27 = INT16_MIN;
int64_t x28 = INT64_MAX;
int64_t t5 = 720LL;
uint64_t t7 = 80141293213340348LLU;
int16_t x41 = 1142;
int32_t x44 = INT32_MIN;
uint8_t x51 = 0U;
uint16_t x62 = 3393U;
static int16_t x66 = INT16_MIN;
volatile int32_t t13 = -14315296;
int64_t x70 = -1LL;
int16_t x72 = INT16_MIN;
static uint16_t x73 = 0U;
static volatile uint64_t t15 = 17891LLU;
uint64_t t17 = 5396983970076290574LLU;
int64_t x85 = INT64_MAX;
int16_t x86 = INT16_MIN;
int32_t x87 = -1;
int8_t x88 = INT8_MIN;
volatile int64_t x93 = INT64_MAX;
static volatile uint32_t x97 = UINT32_MAX;
int16_t x103 = INT16_MIN;
int16_t x106 = INT16_MIN;
int8_t x112 = -1;
int64_t x113 = INT64_MIN;
int64_t t25 = 494898LL;
static int8_t x118 = -1;
int8_t x120 = INT8_MIN;
uint16_t x132 = 12U;
int8_t x137 = 0;
int64_t x145 = -325621069219947421LL;
int8_t x148 = 0;
uint32_t x150 = 25U;
static int32_t x152 = INT32_MIN;
uint64_t x159 = UINT64_MAX;
volatile int8_t x168 = -1;
int32_t x169 = INT32_MIN;
static uint64_t t37 = 50692219LLU;
volatile int8_t x179 = INT8_MIN;
uint64_t x180 = UINT64_MAX;
static volatile uint32_t x186 = 1405797U;
static int32_t x198 = INT32_MIN;
static volatile uint64_t t41 = 5890993915293LLU;
uint64_t x203 = 441317882928799LLU;
volatile uint64_t t42 = 3326824515248536214LLU;
static int32_t x207 = -6177913;
static int32_t t43 = -1504260;
static int16_t x211 = 0;
int8_t x223 = INT8_MIN;
int64_t t47 = 1629585047365941342LL;
int32_t x227 = 187;
static int32_t x228 = -1;
int8_t x240 = -1;
volatile uint64_t t51 = 5819LLU;
uint8_t x248 = 17U;
int16_t x253 = -1;
uint8_t x254 = UINT8_MAX;
uint64_t x255 = 586LLU;
volatile uint64_t t60 = 913576LLU;
int16_t x283 = INT16_MAX;
int64_t x284 = INT64_MIN;
uint64_t x286 = 681752LLU;
uint64_t x294 = UINT64_MAX;
int8_t x296 = INT8_MIN;
uint64_t t63 = 1LLU;
int32_t x299 = 323;
volatile int64_t t64 = 531595700938LL;
static uint8_t x302 = 2U;
volatile uint8_t x303 = 22U;
uint16_t x304 = 18037U;
int64_t t66 = 862094651755LL;
uint16_t x309 = 14U;
int64_t x312 = -1LL;
volatile int64_t t67 = 2LL;
uint32_t t69 = 14U;
static uint32_t x337 = 3690406U;
static int64_t t72 = 13243791257024LL;
static int32_t t73 = -20168;
volatile int64_t x353 = -1LL;
volatile uint64_t t76 = 2129189793148362986LLU;
volatile uint64_t t77 = 238052901213318402LLU;
volatile uint8_t x370 = 6U;
int64_t x380 = 469750222897343577LL;
volatile int64_t t80 = -2975LL;
int16_t x382 = -23;
int32_t x385 = -1;
volatile int16_t x386 = INT16_MAX;
static int16_t x388 = INT16_MAX;
static volatile int32_t t83 = -48744;
int8_t x393 = INT8_MIN;
int64_t t85 = 6877576LL;
uint16_t x402 = UINT16_MAX;
uint32_t x416 = 4674U;
int64_t t89 = 393442LL;
volatile int8_t x425 = INT8_MAX;
int16_t x428 = INT16_MAX;
int16_t x453 = INT16_MAX;
volatile uint16_t x456 = 241U;
int16_t x466 = -219;
int32_t x474 = 301112;
int16_t x475 = -1;
volatile int8_t x478 = -1;
int32_t t99 = -3892;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int8_t x2 = INT8_MIN;
	int32_t x3 = -1;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 106;

	t0 = ((x1^(x2-x3))-x4);

	if (t0 != -32894) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 116U;
	int32_t x10 = INT32_MIN;
	int64_t x11 = -5622LL;
	int32_t x12 = -1;
	volatile int64_t t1 = 1068LL;

	t1 = ((x9^(x10-x11))-x12);

	if (t1 != -2147478141LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x14 = INT16_MIN;
	int32_t x15 = 185360012;
	int8_t x16 = -44;
	static volatile int32_t t2 = -8;

	t2 = ((x13^(x14-x15))-x16);

	if (t2 != -185399160) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = -56;
	static uint32_t x18 = UINT32_MAX;
	int16_t x19 = 1201;
	uint32_t t3 = 1853844228U;

	t3 = ((x17^(x18-x19))-x20);

	if (t3 != 1159U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = INT32_MAX;
	int16_t x23 = INT16_MAX;
	int32_t t4 = 62475;

	t4 = ((x21^(x22-x23))-x24);

	if (t4 != -2147450880) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x26 = UINT16_MAX;

	t5 = ((x25^(x26-x27))-x28);

	if (t5 != -9223361776577872254LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = 1;
	volatile int32_t x31 = -1;
	int8_t x32 = -1;
	volatile uint64_t t6 = 13LLU;

	t6 = ((x29^(x30-x31))-x32);

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 27269834LLU;
	int16_t x34 = -505;
	static uint64_t x35 = 5LLU;
	int32_t x36 = 41432163;

	t7 = ((x33^(x34-x35))-x36);

	if (t7 != 18446744073640849509LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 2266248010634LLU;
	static int8_t x38 = INT8_MIN;
	volatile uint64_t x39 = 693407093LLU;
	uint8_t x40 = UINT8_MAX;
	volatile uint64_t t8 = 8340145LLU;

	t8 = ((x37^(x38-x39))-x40);

	if (t8 != 18446741807850268802LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x42 = -3;
	uint64_t x43 = UINT64_MAX;
	uint64_t t9 = 548764372899474292LLU;

	t9 = ((x41^(x42-x43))-x44);

	if (t9 != 2147482504LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x49 = UINT64_MAX;
	uint64_t x50 = UINT64_MAX;
	uint64_t x52 = 6LLU;
	uint64_t t10 = 1629163061591175LLU;

	t10 = ((x49^(x50-x51))-x52);

	if (t10 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = INT32_MAX;
	uint8_t x58 = UINT8_MAX;
	int32_t x59 = -1;
	int64_t x60 = INT64_MAX;
	volatile int64_t t11 = -129473809604229LL;

	t11 = ((x57^(x58-x59))-x60);

	if (t11 != -9223372034707292416LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = 1;
	uint32_t x63 = 2035U;
	volatile int16_t x64 = -328;
	uint32_t t12 = 3U;

	t12 = ((x61^(x62-x63))-x64);

	if (t12 != 1687U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x65 = -1;
	int16_t x67 = -1;
	volatile int8_t x68 = INT8_MIN;

	t13 = ((x65^(x66-x67))-x68);

	if (t13 != 32894) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = 2U;
	int16_t x71 = INT16_MIN;
	volatile int64_t t14 = 225477714LL;

	t14 = ((x69^(x70-x71))-x72);

	if (t14 != 65533LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x74 = 1748U;
	uint64_t x75 = 33956049088LLU;
	int32_t x76 = INT32_MIN;

	t15 = ((x73^(x74-x75))-x76);

	if (t15 != 18446744041900987924LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MAX;
	int8_t x79 = -1;
	uint32_t x80 = 3043908U;
	volatile uint32_t t16 = 265706563U;

	t16 = ((x77^(x78-x79))-x80);

	if (t16 != 2144472508U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int16_t x82 = INT16_MIN;
	uint64_t x83 = 48919372258577538LLU;
	volatile uint64_t x84 = 25581163425LLU;

	t17 = ((x81^(x82-x83))-x84);

	if (t17 != 48919345130266589LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t t18 = 8917481871530107LL;

	t18 = ((x85^(x86-x87))-x88);

	if (t18 != -9223372036854742914LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = -44;
	int64_t x90 = INT64_MAX;
	uint64_t x91 = 1118340LLU;
	int32_t x92 = -1;
	volatile uint64_t t19 = 787605LLU;

	t19 = ((x89^(x90-x91))-x92);

	if (t19 != 9223372036855894192LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x94 = 17U;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;
	volatile int64_t t20 = -10491LL;

	t20 = ((x93^(x94-x95))-x96);

	if (t20 != 9223372036854775790LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x98 = 1000134LLU;
	uint64_t x99 = 82LLU;
	static int32_t x100 = INT32_MAX;
	uint64_t t21 = 913209247250845394LLU;

	t21 = ((x97^(x98-x99))-x100);

	if (t21 != 2146483596LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MAX;
	int8_t x102 = -1;
	int32_t x104 = -24332;
	volatile int32_t t22 = -5;

	t22 = ((x101^(x102-x103))-x104);

	if (t22 != 2147475212) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	volatile int16_t x107 = 1;
	int16_t x108 = INT16_MAX;
	static int32_t t23 = -3249155;

	t23 = ((x105^(x106-x107))-x108);

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = UINT32_MAX;
	int16_t x110 = -1;
	static int64_t x111 = -446380LL;
	volatile int64_t t24 = -41119964642LL;

	t24 = ((x109^(x110-x111))-x112);

	if (t24 != 4294520917LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x114 = 58515U;
	volatile int64_t x115 = INT64_MAX;
	int32_t x116 = 29103;

	t25 = ((x113^(x114-x115))-x116);

	if (t25 != 29413LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 16158289607625LLU;
	static int32_t x119 = INT32_MIN;
	uint64_t t26 = 82853993767747LLU;

	t26 = ((x117^(x118-x119))-x120);

	if (t26 != 16159191811254LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x125 = INT8_MIN;
	volatile int32_t x126 = -383796;
	static int16_t x127 = 86;
	int8_t x128 = INT8_MIN;
	volatile int32_t t27 = 7;

	t27 = ((x125^(x126-x127))-x128);

	if (t27 != 384118) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 8;
	uint32_t x130 = UINT32_MAX;
	volatile int64_t x131 = -778339371151257LL;
	int64_t t28 = 138153295578293930LL;

	t28 = ((x129^(x130-x131))-x132);

	if (t28 != 778343666118532LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = -26674049489149LL;
	volatile int16_t x134 = -1;
	volatile int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MAX;
	volatile int64_t t29 = -4697LL;

	t29 = ((x133^(x134-x135))-x136);

	if (t29 != -26678034261763LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x138 = -1;
	uint64_t x139 = 171630LLU;
	int32_t x140 = INT32_MIN;
	volatile uint64_t t30 = 1LLU;

	t30 = ((x137^(x138-x139))-x140);

	if (t30 != 2147312017LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = 1LL;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	static int32_t x144 = -129748;
	int64_t t31 = 21435130LL;

	t31 = ((x141^(x142-x143))-x144);

	if (t31 != 129749LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x146 = 3U;
	int8_t x147 = INT8_MAX;
	int64_t t32 = 702118412594800019LL;

	t32 = ((x145^(x146-x147))-x148);

	if (t32 != 325621069219947495LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 795LLU;
	static uint16_t x151 = 916U;
	volatile uint64_t t33 = 524381LLU;

	t33 = ((x149^(x150-x151))-x152);

	if (t33 != 6442450846LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x157 = -1;
	volatile uint8_t x158 = UINT8_MAX;
	static uint8_t x160 = 24U;
	volatile uint64_t t34 = 1310265694668LLU;

	t34 = ((x157^(x158-x159))-x160);

	if (t34 != 18446744073709551335LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = 6921799614083612LL;
	static uint64_t x162 = 2055077243040359LLU;
	static int16_t x163 = INT16_MAX;
	volatile int64_t x164 = -34485590LL;
	uint64_t t35 = 182771943147979LLU;

	t35 = ((x161^(x162-x163))-x164);

	if (t35 != 8965709808285130LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = INT8_MIN;
	uint16_t x166 = 15U;
	int8_t x167 = -1;
	volatile int32_t t36 = 67;

	t36 = ((x165^(x166-x167))-x168);

	if (t36 != -111) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x170 = 514;
	volatile uint32_t x171 = 74775714U;
	uint64_t x172 = UINT64_MAX;

	t37 = ((x169^(x170-x171))-x172);

	if (t37 != 2072708449LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x173 = INT16_MIN;
	int32_t x174 = 746844129;
	volatile int16_t x175 = 6244;
	int16_t x176 = INT16_MIN;
	volatile int32_t t38 = 62684327;

	t38 = ((x173^(x174-x175))-x176);

	if (t38 != -746793091) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MAX;
	volatile uint64_t t39 = 25877590667LLU;

	t39 = ((x177^(x178-x179))-x180);

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x185 = INT32_MIN;
	int32_t x187 = -1;
	uint32_t x188 = 906656707U;
	uint32_t t40 = 130971U;

	t40 = ((x185^(x186-x187))-x188);

	if (t40 != 1242232739U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = 42489317995814118LLU;

	t41 = ((x197^(x198-x199))-x200);

	if (t41 != 18404254753566253850LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x201 = 47963U;
	int8_t x202 = -1;
	int64_t x204 = INT64_MIN;

	t42 = ((x201^(x202-x203))-x204);

	if (t42 != 9222930718971812411LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	static int16_t x208 = -1;

	t43 = ((x205^(x206-x207))-x208);

	if (t43 != -6243448) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x210 = UINT32_MAX;
	uint64_t x212 = 286935297407021357LLU;
	volatile uint64_t t44 = 85274LLU;

	t44 = ((x209^(x210-x211))-x212);

	if (t44 != 18159808776302530386LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MIN;
	static uint8_t x215 = UINT8_MAX;
	volatile int8_t x216 = INT8_MIN;
	static int64_t t45 = 472018195820LL;

	t45 = ((x213^(x214-x215))-x216);

	if (t45 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x217 = UINT64_MAX;
	int64_t x218 = -24368351676979LL;
	int16_t x219 = INT16_MIN;
	int64_t x220 = -702124067417936LL;
	volatile uint64_t t46 = 56349689062LLU;

	t46 = ((x217^(x218-x219))-x220);

	if (t46 != 726492419062146LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = -1LL;
	static volatile uint8_t x222 = 13U;
	uint32_t x224 = 29147U;

	t47 = ((x221^(x222-x223))-x224);

	if (t47 != -29289LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x225 = UINT32_MAX;
	uint16_t x226 = 31055U;
	static volatile uint32_t t48 = 352774482U;

	t48 = ((x225^(x226-x227))-x228);

	if (t48 != 4294936428U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	volatile int8_t x230 = -1;
	uint64_t x231 = 2230382400351LLU;
	static volatile int8_t x232 = 1;
	volatile uint64_t t49 = 1981LLU;

	t49 = ((x229^(x230-x231))-x232);

	if (t49 != 18446741843768415070LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = -183;
	int8_t x234 = -1;
	static int64_t x235 = -3LL;
	int8_t x236 = INT8_MIN;
	volatile int64_t t50 = -1LL;

	t50 = ((x233^(x234-x235))-x236);

	if (t50 != -53LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = -55;
	int16_t x238 = INT16_MIN;
	uint64_t x239 = UINT64_MAX;

	t51 = ((x237^(x238-x239))-x240);

	if (t51 != 32713LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = -41;
	int16_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	static int64_t x244 = -1LL;
	int64_t t52 = -3349866208LL;

	t52 = ((x241^(x242-x243))-x244);

	if (t52 != 4294967256LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = INT32_MIN;
	static volatile uint16_t x246 = 1467U;
	int8_t x247 = INT8_MIN;
	int32_t t53 = 1;

	t53 = ((x245^(x246-x247))-x248);

	if (t53 != -2147482070) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = -981164426962137805LL;
	volatile int16_t x250 = -1;
	uint16_t x251 = 1U;
	uint16_t x252 = 1U;
	volatile int64_t t54 = 7181537080538LL;

	t54 = ((x249^(x250-x251))-x252);

	if (t54 != 981164426962137804LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x256 = INT64_MAX;
	static uint64_t t55 = 4729006141LLU;

	t55 = ((x253^(x254-x255))-x256);

	if (t55 != 9223372036854776139LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = -1LL;
	int16_t x258 = INT16_MAX;
	static volatile int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	int64_t t56 = 15786LL;

	t56 = ((x257^(x258-x259))-x260);

	if (t56 != 9223372036854742912LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = INT8_MAX;
	static volatile int8_t x262 = 5;
	uint32_t x263 = 10267666U;
	int64_t x264 = -1LL;
	volatile int64_t t57 = -48044948407354789LL;

	t57 = ((x261^(x262-x263))-x264);

	if (t57 != 4284699533LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x265 = UINT64_MAX;
	uint32_t x266 = 54U;
	static int64_t x267 = 48761192LL;
	int16_t x268 = INT16_MIN;
	static volatile uint64_t t58 = 441LLU;

	t58 = ((x265^(x266-x267))-x268);

	if (t58 != 48793905LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x269 = 9116720992LLU;
	uint8_t x270 = 31U;
	int64_t x271 = -1LL;
	int64_t x272 = -1LL;
	volatile uint64_t t59 = 40267910LLU;

	t59 = ((x269^(x270-x271))-x272);

	if (t59 != 9116720961LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = 4;
	int64_t x278 = 7LL;
	uint64_t x279 = 1912429628603000LLU;
	static uint64_t x280 = 413LLU;

	t60 = ((x277^(x278-x279))-x280);

	if (t60 != 18444831644080948206LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = INT64_MIN;
	uint64_t x282 = UINT64_MAX;
	volatile uint64_t t61 = 80577667142809812LLU;

	t61 = ((x281^(x282-x283))-x284);

	if (t61 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = INT16_MIN;
	int32_t x287 = -1;
	static int64_t x288 = 67472791136746LL;
	uint64_t t62 = 24LLU;

	t62 = ((x285^(x286-x287))-x288);

	if (t62 != 18446676600917753135LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x293 = 8658483478265462573LLU;
	static volatile uint16_t x295 = UINT16_MAX;

	t63 = ((x293^(x294-x295))-x296);

	if (t63 != 9788260595444154285LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x297 = -1;
	int64_t x298 = -6863LL;
	static int8_t x300 = INT8_MAX;

	t64 = ((x297^(x298-x299))-x300);

	if (t64 != 7058LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x301 = -268530479LL;
	volatile int64_t t65 = 250496703LL;

	t65 = ((x301^(x302-x303))-x304);

	if (t65 != 268512456LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x305 = 12088007800495522LL;
	int16_t x306 = INT16_MAX;
	volatile int8_t x307 = 1;
	static volatile uint32_t x308 = UINT32_MAX;

	t66 = ((x305^(x306-x307))-x308);

	if (t66 != 12088003505545821LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x310 = -1;
	uint32_t x311 = UINT32_MAX;

	t67 = ((x309^(x310-x311))-x312);

	if (t67 != 15LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = -1LL;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = INT8_MAX;
	volatile uint64_t t68 = 3LLU;

	t68 = ((x317^(x318-x319))-x320);

	if (t68 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = INT32_MAX;
	static uint16_t x326 = 10214U;
	uint32_t x327 = 597261U;
	volatile int16_t x328 = -1;

	t69 = ((x325^(x326-x327))-x328);

	if (t69 != 2148070695U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x329 = INT16_MAX;
	static volatile int8_t x330 = INT8_MAX;
	static volatile int16_t x331 = -1;
	int16_t x332 = INT16_MIN;
	int32_t t70 = -166466272;

	t70 = ((x329^(x330-x331))-x332);

	if (t70 != 65407) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x333 = 105704001930635014LL;
	static uint32_t x334 = 1413079U;
	int32_t x335 = INT32_MAX;
	static int16_t x336 = 107;
	static volatile int64_t t71 = -906246458552431220LL;

	t71 = ((x333^(x334-x335))-x336);

	if (t71 != 105703999784364147LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x338 = INT16_MIN;
	int32_t x339 = 3;
	int64_t x340 = -1LL;

	t72 = ((x337^(x338-x339))-x340);

	if (t72 != 4291244124LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = INT16_MIN;
	uint8_t x342 = 47U;
	static int32_t x343 = -1;
	int8_t x344 = -1;

	t73 = ((x341^(x342-x343))-x344);

	if (t73 != -32719) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = -99288710LL;
	int64_t x350 = INT64_MIN;
	static int16_t x351 = INT16_MIN;
	int64_t x352 = 80LL;
	volatile int64_t t74 = -6461225LL;

	t74 = ((x349^(x350-x351))-x352);

	if (t74 != 9223372036755454250LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x354 = UINT8_MAX;
	int8_t x355 = -1;
	static int64_t x356 = -1LL;
	int64_t t75 = 493LL;

	t75 = ((x353^(x354-x355))-x356);

	if (t75 != -256LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x357 = 4121713LLU;
	int32_t x358 = INT32_MAX;
	int8_t x359 = 33;
	static uint16_t x360 = 19U;

	t76 = ((x357^(x358-x359))-x360);

	if (t76 != 2143361948LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = -1;
	volatile int8_t x362 = INT8_MIN;
	int16_t x363 = -2;
	uint64_t x364 = 2853928816280LLU;

	t77 = ((x361^(x362-x363))-x364);

	if (t77 != 18446741219780735461LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x369 = 124585308802706LLU;
	uint16_t x371 = 24881U;
	int32_t x372 = 2492;
	volatile uint64_t t78 = 310042212328624061LLU;

	t78 = ((x369^(x370-x371))-x372);

	if (t78 != 18446619488400754315LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = INT16_MAX;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = -22118723;
	static uint64_t x376 = 7923375244712759LLU;
	volatile uint64_t t79 = 4754LLU;

	t79 = ((x373^(x374-x375))-x376);

	if (t79 != 18438820698486989702LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = -1;
	int32_t x379 = INT32_MIN;

	t80 = ((x377^(x378-x379))-x380);

	if (t80 != -469750225044827098LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x381 = 1653;
	uint8_t x383 = 3U;
	int8_t x384 = 43;
	static int32_t t81 = 87724715;

	t81 = ((x381^(x382-x383))-x384);

	if (t81 != -1688) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x387 = INT64_MAX;
	volatile int64_t t82 = 4738LL;

	t82 = ((x385^(x386-x387))-x388);

	if (t82 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MIN;
	volatile uint8_t x391 = 4U;
	int16_t x392 = 11089;

	t83 = ((x389^(x390-x391))-x392);

	if (t83 != 21803) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x394 = 0;
	int16_t x395 = -1;
	static int16_t x396 = -1;
	static volatile int32_t t84 = -1;

	t84 = ((x393^(x394-x395))-x396);

	if (t84 != -126) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x397 = INT64_MAX;
	int64_t x398 = 1694LL;
	int8_t x399 = -1;
	uint32_t x400 = UINT32_MAX;

	t85 = ((x397^(x398-x399))-x400);

	if (t85 != 9223372032559806817LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = 27U;
	static uint16_t x403 = 38U;
	uint8_t x404 = 13U;
	static int32_t t86 = -15939;

	t86 = ((x401^(x402-x403))-x404);

	if (t86 != 65461) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = UINT32_MAX;
	int8_t x410 = INT8_MAX;
	volatile int64_t x411 = 1315719555731077462LL;
	static volatile int64_t x412 = -3050614728434774LL;
	volatile int64_t t87 = -31360055524352LL;

	t87 = ((x409^(x410-x411))-x412);

	if (t87 != -1312668945049789140LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = 3;
	static int16_t x414 = -1;
	int16_t x415 = 354;
	uint32_t t88 = 41U;

	t88 = ((x413^(x414-x415))-x416);

	if (t88 != 4294962268U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = 5644400LL;
	static uint16_t x418 = UINT16_MAX;
	int8_t x419 = INT8_MAX;
	static int8_t x420 = INT8_MIN;

	t89 = ((x417^(x418-x419))-x420);

	if (t89 != 5693552LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x426 = INT8_MIN;
	int16_t x427 = INT16_MIN;
	int32_t t90 = 5252962;

	t90 = ((x425^(x426-x427))-x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = INT8_MIN;
	int16_t x430 = 1604;
	int16_t x431 = 274;
	uint64_t x432 = UINT64_MAX;
	uint64_t t91 = 178LLU;

	t91 = ((x429^(x430-x431))-x432);

	if (t91 != 18446744073709550259LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x433 = INT64_MIN;
	uint8_t x434 = 105U;
	int16_t x435 = 10999;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t92 = 7LLU;

	t92 = ((x433^(x434-x435))-x436);

	if (t92 != 9223372036854764915LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x441 = UINT64_MAX;
	static int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	int8_t x444 = INT8_MIN;
	static uint64_t t93 = 39567545007680LLU;

	t93 = ((x441^(x442-x443))-x444);

	if (t93 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = -1;
	int64_t x450 = INT64_MIN;
	int8_t x451 = -2;
	volatile int64_t x452 = -1LL;
	int64_t t94 = 147LL;

	t94 = ((x449^(x450-x451))-x452);

	if (t94 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x454 = 0;
	int16_t x455 = INT16_MIN;
	volatile int32_t t95 = -256;

	t95 = ((x453^(x454-x455))-x456);

	if (t95 != 65294) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x457 = INT32_MIN;
	int16_t x458 = -1;
	static volatile uint32_t x459 = 112898982U;
	uint32_t x460 = 7846349U;
	static uint32_t t96 = 235316U;

	t96 = ((x457^(x458-x459))-x460);

	if (t96 != 2026738316U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x465 = INT16_MAX;
	uint16_t x467 = 443U;
	uint16_t x468 = UINT16_MAX;
	static volatile int32_t t97 = -26;

	t97 = ((x465^(x466-x467))-x468);

	if (t97 != -97642) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x473 = 6U;
	int64_t x476 = -238981LL;
	int64_t t98 = -1LL;

	t98 = ((x473^(x474-x475))-x476);

	if (t98 != 540100LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x477 = 1312;
	int32_t x479 = INT32_MAX;
	int8_t x480 = INT8_MIN;

	t99 = ((x477^(x478-x479))-x480);

	if (t99 != -2147482208) { NG(); } else { ; }
	
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

