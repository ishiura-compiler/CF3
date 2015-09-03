#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x6 = 0LL;
volatile uint32_t x7 = 192327938U;
int64_t x23 = 4736368329LL;
int32_t x25 = -20;
uint64_t x30 = 22023404698954688LLU;
static uint64_t x33 = 15082475531423LLU;
volatile uint16_t x38 = 1154U;
uint64_t x45 = UINT64_MAX;
static volatile int32_t x50 = -13;
static volatile uint64_t t10 = 547829532314284085LLU;
int16_t x54 = -1;
static int32_t t11 = 102;
int16_t x58 = INT16_MIN;
int8_t x64 = 5;
volatile uint64_t t13 = 1913793LLU;
int64_t t14 = 89947842400LL;
uint64_t x76 = UINT64_MAX;
int32_t x83 = INT32_MIN;
volatile int64_t t16 = -933587922096873118LL;
static uint8_t x85 = UINT8_MAX;
uint16_t x102 = UINT16_MAX;
uint32_t x103 = 1380125847U;
int64_t x109 = INT64_MAX;
int16_t x113 = 27;
volatile uint32_t x114 = 4946322U;
static uint8_t x117 = 3U;
volatile uint64_t x118 = 1989LLU;
static uint64_t x120 = 115884187676LLU;
int32_t x130 = INT32_MIN;
static uint64_t t28 = 0LLU;
volatile int16_t x137 = -1;
static volatile int64_t x144 = -8LL;
volatile uint64_t t30 = 1536502676824154635LLU;
volatile uint64_t t32 = 6744274953260473LLU;
int64_t t33 = -88LL;
int32_t x159 = INT32_MIN;
uint64_t x169 = UINT64_MAX;
uint64_t t37 = 17974LLU;
uint32_t x178 = 7956006U;
volatile int64_t x180 = INT64_MIN;
static volatile int64_t t38 = 56LL;
int64_t x183 = INT64_MIN;
int64_t x190 = -60269599551462LL;
volatile int64_t t41 = -112441912445LL;
volatile uint8_t x200 = 7U;
static uint32_t t45 = 455280595U;
int8_t x213 = INT8_MIN;
int64_t x216 = INT64_MAX;
uint8_t x223 = UINT8_MAX;
static int8_t x228 = -1;
int64_t x233 = INT64_MIN;
int8_t x241 = -22;
volatile uint64_t t53 = 83822LLU;
uint64_t x251 = 2LLU;
int32_t x254 = -1;
uint8_t x256 = 0U;
volatile int16_t x260 = INT16_MIN;
uint64_t x262 = 961448264LLU;
int64_t x263 = -2708427071214138938LL;
uint32_t t58 = 7539U;
int64_t x269 = 10221176LL;
volatile int64_t x270 = INT64_MAX;
int32_t x273 = 1;
int8_t x277 = -2;
volatile int16_t x279 = INT16_MIN;
int32_t x287 = INT32_MAX;
volatile int32_t x288 = INT32_MIN;
volatile int32_t t63 = INT32_MIN;
int32_t x293 = INT32_MAX;
static uint32_t x300 = 39882U;
uint64_t x303 = UINT64_MAX;
uint64_t t67 = 4009719286349036LLU;
int8_t x305 = 60;
int8_t x308 = INT8_MIN;
static int32_t t68 = 1420;
int32_t x311 = -1;
int64_t x315 = -1LL;
int8_t x316 = -1;
uint16_t x327 = 14U;
volatile uint32_t x331 = UINT32_MAX;
volatile int64_t x344 = 14479841862936LL;
volatile int64_t t77 = -9854894LL;
int16_t x349 = INT16_MAX;
static volatile uint8_t x351 = 80U;
volatile uint64_t x357 = UINT64_MAX;
int16_t x358 = 514;
uint64_t t81 = 363LLU;
int32_t t83 = -47;
static uint16_t x378 = 23U;
uint32_t x385 = 179720U;
uint16_t x396 = 22U;
uint64_t x400 = 100608LLU;
int8_t x401 = INT8_MIN;
static volatile int8_t x403 = INT8_MIN;
int64_t x407 = INT64_MAX;
int64_t x410 = INT64_MAX;
int64_t t92 = -6249488269790LL;
static int8_t x423 = -3;
int64_t x426 = 1832LL;
int64_t t96 = INT64_MIN;


void f0(void) {
	static int64_t x5 = 1LL;
	int8_t x8 = INT8_MIN;
	volatile int64_t t0 = 175716160679285677LL;

	t0 = ((x5^(x6-x7))&x8);

	if (t0 != -192328064LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MAX;
	static uint16_t x14 = UINT16_MAX;
	volatile uint16_t x15 = UINT16_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t1 = 2;

	t1 = ((x13^(x14-x15))&x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	uint64_t x18 = 120395LLU;
	int32_t x19 = -1;
	int8_t x20 = 13;
	uint64_t t2 = 796571228023430LLU;

	t2 = ((x17^(x18-x19))&x20);

	if (t2 != 12LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	static uint64_t x22 = UINT64_MAX;
	int16_t x24 = 11428;
	static volatile uint64_t t3 = 1570883422LLU;

	t3 = ((x21^(x22-x23))&x24);

	if (t3 != 36LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x26 = 0;
	static uint8_t x27 = UINT8_MAX;
	int32_t x28 = INT32_MAX;
	int32_t t4 = 0;

	t4 = ((x25^(x26-x27))&x28);

	if (t4 != 237) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x29 = 3933825565236LLU;
	volatile uint8_t x31 = 53U;
	uint8_t x32 = 7U;
	uint64_t t5 = 70246483636829615LLU;

	t5 = ((x29^(x30-x31))&x32);

	if (t5 != 7LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x34 = -6012347;
	int64_t x35 = 6LL;
	int32_t x36 = -1;
	volatile uint64_t t6 = 33049211775LLU;

	t6 = ((x33^(x34-x35))&x36);

	if (t6 != 18446728991231241888LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x37 = 652405U;
	uint64_t x39 = 1410662LLU;
	uint8_t x40 = UINT8_MAX;
	static uint64_t t7 = 20337846996045LLU;

	t7 = ((x37^(x38-x39))&x40);

	if (t7 != 105LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = INT8_MIN;
	int16_t x42 = -1;
	uint8_t x43 = 10U;
	int16_t x44 = INT16_MAX;
	int32_t t8 = 28;

	t8 = ((x41^(x42-x43))&x44);

	if (t8 != 117) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x46 = 0;
	int16_t x47 = INT16_MIN;
	int64_t x48 = -1LL;
	volatile uint64_t t9 = 220655655LLU;

	t9 = ((x45^(x46-x47))&x48);

	if (t9 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	static int16_t x51 = INT16_MAX;
	int32_t x52 = 1;

	t10 = ((x49^(x50-x51))&x52);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	int32_t x55 = INT32_MAX;
	static int32_t x56 = INT32_MIN;

	t11 = ((x53^(x54-x55))&x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = -3;
	static uint32_t x59 = UINT32_MAX;
	uint64_t x60 = 6188477738781LLU;
	static volatile uint64_t t12 = 904011LLU;

	t12 = ((x57^(x58-x59))&x60);

	if (t12 != 28444LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	volatile int32_t x63 = 60;

	t13 = ((x61^(x62-x63))&x64);

	if (t13 != 4LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = -1LL;
	static int16_t x66 = INT16_MIN;
	static uint16_t x67 = UINT16_MAX;
	volatile int64_t x68 = INT64_MIN;

	t14 = ((x65^(x66-x67))&x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	int64_t x74 = INT64_MIN;
	int64_t x75 = -1LL;
	uint64_t t15 = 815733LLU;

	t15 = ((x73^(x74-x75))&x76);

	if (t15 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = 13564U;
	int64_t x82 = -6742128081LL;
	uint16_t x84 = UINT16_MAX;

	t16 = ((x81^(x82-x83))&x84);

	if (t16 != 32467LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x86 = 1U;
	volatile int64_t x87 = -2731537532938633LL;
	uint8_t x88 = 47U;
	volatile int64_t t17 = 733457766285890419LL;

	t17 = ((x85^(x86-x87))&x88);

	if (t17 != 37LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MIN;
	int8_t x91 = -1;
	uint32_t x92 = 3U;
	uint64_t t18 = 3629LLU;

	t18 = ((x89^(x90-x91))&x92);

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = -1;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MIN;
	static volatile int64_t x96 = -88LL;
	int64_t t19 = 3490374530LL;

	t19 = ((x93^(x94-x95))&x96);

	if (t19 != -65664LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = 2;
	uint16_t x98 = 0U;
	static int16_t x99 = 1514;
	uint64_t x100 = UINT64_MAX;
	uint64_t t20 = 8LLU;

	t20 = ((x97^(x98-x99))&x100);

	if (t20 != 18446744073709550100LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 0U;
	volatile uint8_t x104 = 23U;
	uint32_t t21 = 0U;

	t21 = ((x101^(x102-x103))&x104);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x110 = -19;
	uint8_t x111 = UINT8_MAX;
	volatile int8_t x112 = INT8_MIN;
	int64_t t22 = -23766LL;

	t22 = ((x109^(x110-x111))&x112);

	if (t22 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x115 = 0;
	static int32_t x116 = INT32_MIN;
	uint32_t t23 = 437U;

	t23 = ((x113^(x114-x115))&x116);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x119 = INT16_MIN;
	static uint64_t t24 = 16656548911LLU;

	t24 = ((x117^(x118-x119))&x120);

	if (t24 != 4LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MAX;
	volatile int64_t t25 = -327225136LL;

	t25 = ((x121^(x122-x123))&x124);

	if (t25 != 32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x125 = -297;
	int32_t x126 = -1;
	volatile int32_t x127 = -7;
	static int32_t x128 = INT32_MIN;
	static int32_t t26 = INT32_MIN;

	t26 = ((x125^(x126-x127))&x128);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x129 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	volatile int64_t t27 = -5313489542742978LL;

	t27 = ((x129^(x130-x131))&x132);

	if (t27 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = 215968924996LLU;
	static int64_t x134 = 17698913LL;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = UINT64_MAX;

	t28 = ((x133^(x134-x135))&x136);

	if (t28 != 215986656549LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x138 = -1;
	int64_t x139 = 238233475988LL;
	int64_t x140 = INT64_MIN;
	int64_t t29 = 117LL;

	t29 = ((x137^(x138-x139))&x140);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = 208565400339644306LLU;
	int64_t x142 = -1LL;
	int16_t x143 = INT16_MAX;

	t30 = ((x141^(x142-x143))&x144);

	if (t30 != 18238178673369939856LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = 3212411584044LL;
	static int16_t x147 = INT16_MAX;
	uint16_t x148 = 2976U;
	static int64_t t31 = 1760333093689780440LL;

	t31 = ((x145^(x146-x147))&x148);

	if (t31 != 2592LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x149 = 3U;
	int8_t x150 = 14;
	uint64_t x151 = 220LLU;
	int32_t x152 = INT32_MIN;

	t32 = ((x149^(x150-x151))&x152);

	if (t32 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = INT64_MIN;
	volatile uint8_t x154 = 12U;
	uint32_t x155 = 212789054U;
	int32_t x156 = INT32_MIN;

	t33 = ((x153^(x154-x155))&x156);

	if (t33 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MIN;
	static int8_t x160 = -51;
	int32_t t34 = INT32_MIN;

	t34 = ((x157^(x158-x159))&x160);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = -1;
	int8_t x162 = INT8_MIN;
	int32_t x163 = 17260284;
	volatile int16_t x164 = INT16_MAX;
	volatile int32_t t35 = 651276;

	t35 = ((x161^(x162-x163))&x164);

	if (t35 != 24443) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x165 = 18585210691LLU;
	int8_t x166 = 2;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = INT64_MIN;
	static uint64_t t36 = 225751876314138LLU;

	t36 = ((x165^(x166-x167))&x168);

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x170 = -1;
	volatile int16_t x171 = INT16_MIN;
	uint8_t x172 = UINT8_MAX;

	t37 = ((x169^(x170-x171))&x172);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = INT8_MAX;
	int16_t x179 = 1;

	t38 = ((x177^(x178-x179))&x180);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = 22;
	int64_t x182 = -16179159333499LL;
	uint16_t x184 = UINT16_MAX;
	volatile int64_t t39 = 94907346LL;

	t39 = ((x181^(x182-x183))&x184);

	if (t39 != 34195LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x185 = 11U;
	static uint8_t x186 = UINT8_MAX;
	volatile int8_t x187 = INT8_MIN;
	uint8_t x188 = 45U;
	static uint32_t t40 = 14384U;

	t40 = ((x185^(x186-x187))&x188);

	if (t40 != 36U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = UINT8_MAX;
	static int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MAX;

	t41 = ((x189^(x190-x191))&x192);

	if (t41 != 4197LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MIN;
	static volatile int8_t x194 = 0;
	int32_t x195 = 63257;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t42 = 9485791U;

	t42 = ((x193^(x194-x195))&x196);

	if (t42 != 35047U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = 30;
	volatile int32_t x198 = INT32_MIN;
	volatile int64_t x199 = INT64_MIN;
	volatile int64_t t43 = 1950407972501LL;

	t43 = ((x197^(x198-x199))&x200);

	if (t43 != 6LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = INT64_MAX;
	int32_t x202 = 6087;
	static uint8_t x203 = 51U;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t44 = 71490965541LLU;

	t44 = ((x201^(x202-x203))&x204);

	if (t44 != 9223372036854769771LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = UINT32_MAX;
	uint16_t x210 = 102U;
	int32_t x211 = -1;
	uint32_t x212 = 4U;

	t45 = ((x209^(x210-x211))&x212);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x214 = 111047514119952388LLU;
	static uint32_t x215 = 8U;
	uint64_t t46 = 194LLU;

	t46 = ((x213^(x214-x215))&x216);

	if (t46 != 9112324522734823548LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x217 = 1U;
	uint32_t x218 = 1666125U;
	static int8_t x219 = -1;
	uint16_t x220 = 391U;
	uint32_t t47 = 14U;

	t47 = ((x217^(x218-x219))&x220);

	if (t47 != 7U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x221 = 18LLU;
	int16_t x222 = 6991;
	volatile int32_t x224 = -1;
	uint64_t t48 = 760496656LLU;

	t48 = ((x221^(x222-x223))&x224);

	if (t48 != 6722LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = 1U;
	static int8_t x226 = -1;
	int32_t x227 = INT32_MAX;
	int32_t t49 = 0;

	t49 = ((x225^(x226-x227))&x228);

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x234 = 1;
	int32_t x235 = 21920680;
	int32_t x236 = -237;
	int64_t t50 = 21504317227886LL;

	t50 = ((x233^(x234-x235))&x236);

	if (t50 != 9223372036832855057LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = -24415LL;
	static uint64_t x239 = 44903947470LLU;
	uint64_t x240 = 855901LLU;
	static volatile uint64_t t51 = 215607LLU;

	t51 = ((x237^(x238-x239))&x240);

	if (t51 != 66385LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x242 = 1287125558258944LL;
	uint8_t x243 = 0U;
	int16_t x244 = INT16_MIN;
	static int64_t t52 = -192748126890LL;

	t52 = ((x241^(x242-x243))&x244);

	if (t52 != -1287125558263808LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = -1;
	int64_t x246 = INT64_MIN;
	static uint64_t x247 = 114447LLU;
	static volatile int16_t x248 = INT16_MAX;

	t53 = ((x245^(x246-x247))&x248);

	if (t53 != 16142LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = -1569455;
	int16_t x250 = INT16_MIN;
	int8_t x252 = -1;
	uint64_t t54 = 195160315LLU;

	t54 = ((x249^(x250-x251))&x252);

	if (t54 != 1536687LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x253 = 13867U;
	static volatile int16_t x255 = 2;
	volatile uint32_t t55 = 4036U;

	t55 = ((x253^(x254-x255))&x256);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x257 = UINT16_MAX;
	volatile uint16_t x258 = 31U;
	volatile int64_t x259 = 28LL;
	int64_t t56 = 14973234576561LL;

	t56 = ((x257^(x258-x259))&x260);

	if (t56 != 32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = -23;
	uint64_t x264 = UINT64_MAX;
	static volatile uint64_t t57 = 2LLU;

	t57 = ((x261^(x262-x263))&x264);

	if (t57 != 15738317001533964395LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x265 = 0U;
	int32_t x266 = INT32_MIN;
	uint32_t x267 = 1U;
	int8_t x268 = 14;

	t58 = ((x265^(x266-x267))&x268);

	if (t58 != 14U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x271 = 16200303LLU;
	int64_t x272 = -1LL;
	uint64_t t59 = 266227203218LLU;

	t59 = ((x269^(x270-x271))&x272);

	if (t59 != 9223372036847647720LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x274 = 73U;
	static int32_t x275 = -169284;
	int64_t x276 = INT64_MIN;
	int64_t t60 = -260646LL;

	t60 = ((x273^(x274-x275))&x276);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x278 = -1;
	int16_t x280 = -2159;
	volatile int32_t t61 = -4;

	t61 = ((x277^(x278-x279))&x280);

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x281 = -1;
	int64_t x282 = -1LL;
	static int64_t x283 = INT64_MAX;
	int8_t x284 = INT8_MIN;
	volatile int64_t t62 = -65204575992473LL;

	t62 = ((x281^(x282-x283))&x284);

	if (t62 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = 0;
	volatile uint16_t x286 = UINT16_MAX;

	t63 = ((x285^(x286-x287))&x288);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = -7155434147LL;
	uint16_t x290 = UINT16_MAX;
	volatile uint64_t x291 = 271701070118675LLU;
	int32_t x292 = -381296429;
	uint64_t t64 = 11441985110680LLU;

	t64 = ((x289^(x290-x291))&x292);

	if (t64 != 271707835506833LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x294 = INT32_MIN;
	volatile int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t65 = -1355329;

	t65 = ((x293^(x294-x295))&x296);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = INT32_MAX;
	int32_t x298 = 280652059;
	static volatile int64_t x299 = -3987697448438635141LL;
	int64_t t66 = -74811668395051LL;

	t66 = ((x297^(x298-x299))&x300);

	if (t66 != 38986LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x301 = -1;
	static int8_t x302 = 14;
	int64_t x304 = INT64_MIN;

	t67 = ((x301^(x302-x303))&x304);

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x306 = UINT16_MAX;
	volatile int8_t x307 = INT8_MAX;

	t68 = ((x305^(x306-x307))&x308);

	if (t68 != 65408) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = INT64_MAX;
	static int64_t x310 = INT64_MIN;
	static int32_t x312 = INT32_MIN;
	int64_t t69 = 2145529670578591044LL;

	t69 = ((x309^(x310-x311))&x312);

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x313 = 7654LLU;
	int8_t x314 = INT8_MAX;
	static volatile uint64_t t70 = 24596483LLU;

	t70 = ((x313^(x314-x315))&x316);

	if (t70 != 7526LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x317 = -3950;
	uint32_t x318 = 5U;
	int32_t x319 = INT32_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile uint32_t t71 = 18010634U;

	t71 = ((x317^(x318-x319))&x320);

	if (t71 != 148U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MAX;
	volatile int32_t x323 = INT32_MAX;
	int64_t x324 = INT64_MIN;
	volatile int64_t t72 = INT64_MIN;

	t72 = ((x321^(x322-x323))&x324);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MAX;
	volatile int8_t x328 = INT8_MIN;
	int64_t t73 = INT64_MIN;

	t73 = ((x325^(x326-x327))&x328);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = -13;
	volatile int16_t x330 = 2;
	static int32_t x332 = INT32_MIN;
	volatile uint32_t t74 = 51020U;

	t74 = ((x329^(x330-x331))&x332);

	if (t74 != 2147483648U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = 24;
	int8_t x334 = -55;
	volatile int64_t x335 = -1LL;
	int8_t x336 = 56;
	static int64_t t75 = -72LL;

	t75 = ((x333^(x334-x335))&x336);

	if (t75 != 16LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MIN;
	volatile int16_t x339 = -11;
	int32_t x340 = 14356;
	static int32_t t76 = -2338;

	t76 = ((x337^(x338-x339))&x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x341 = 0U;
	static int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;

	t77 = ((x341^(x342-x343))&x344);

	if (t77 != 14479841853440LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = -6;
	static uint64_t x346 = 32386144315351474LLU;
	uint32_t x347 = 33225034U;
	uint32_t x348 = 2102889U;
	uint64_t t78 = 23LLU;

	t78 = ((x345^(x346-x347))&x348);

	if (t78 != 2102784LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x350 = UINT64_MAX;
	volatile uint8_t x352 = 49U;
	volatile uint64_t t79 = 5LLU;

	t79 = ((x349^(x350-x351))&x352);

	if (t79 != 16LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x353 = 0U;
	static int16_t x354 = -1;
	int16_t x355 = -9646;
	int16_t x356 = -1;
	static volatile int32_t t80 = -13479909;

	t80 = ((x353^(x354-x355))&x356);

	if (t80 != 9645) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x359 = 6697923064002LL;
	int8_t x360 = 1;

	t81 = ((x357^(x358-x359))&x360);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x361 = 0;
	static uint64_t x362 = 7994039033LLU;
	int32_t x363 = INT32_MIN;
	uint8_t x364 = UINT8_MAX;
	static uint64_t t82 = 73176387LLU;

	t82 = ((x361^(x362-x363))&x364);

	if (t82 != 249LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = -93819;
	int8_t x370 = INT8_MIN;
	int8_t x371 = -44;
	volatile int32_t x372 = 10452055;

	t83 = ((x369^(x370-x371))&x372);

	if (t83 != 93185) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x373 = UINT64_MAX;
	volatile int32_t x374 = INT32_MIN;
	volatile int64_t x375 = INT64_MIN;
	int32_t x376 = -1;
	volatile uint64_t t84 = 976136LLU;

	t84 = ((x373^(x374-x375))&x376);

	if (t84 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x377 = -1;
	int32_t x379 = -1;
	int16_t x380 = -1;
	int32_t t85 = -3946;

	t85 = ((x377^(x378-x379))&x380);

	if (t85 != -25) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x386 = -1;
	int16_t x387 = 132;
	static volatile uint16_t x388 = UINT16_MAX;
	volatile uint32_t t86 = 89950U;

	t86 = ((x385^(x386-x387))&x388);

	if (t86 != 16755U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x389 = 90904456878721LLU;
	int8_t x390 = 46;
	int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MAX;
	uint64_t t87 = 1285192608009LLU;

	t87 = ((x389^(x390-x391))&x392);

	if (t87 != 1474058799LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x393 = INT32_MIN;
	int32_t x394 = -1;
	uint8_t x395 = 4U;
	int32_t t88 = -14557114;

	t88 = ((x393^(x394-x395))&x396);

	if (t88 != 18) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x397 = -1LL;
	int8_t x398 = INT8_MIN;
	volatile uint8_t x399 = UINT8_MAX;
	static volatile uint64_t t89 = 245076549LLU;

	t89 = ((x397^(x398-x399))&x400);

	if (t89 != 256LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x402 = 131112178LLU;
	int16_t x404 = -1;
	volatile uint64_t t90 = 6927055596717987LLU;

	t90 = ((x401^(x402-x403))&x404);

	if (t90 != 18446744073578439410LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = INT8_MIN;
	uint64_t x406 = 10964LLU;
	static uint32_t x408 = UINT32_MAX;
	volatile uint64_t t91 = 92LLU;

	t91 = ((x405^(x406-x407))&x408);

	if (t91 != 4294956373LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = -3721778;
	static int64_t x411 = INT64_MAX;
	uint8_t x412 = 84U;

	t92 = ((x409^(x410-x411))&x412);

	if (t92 != 68LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = INT32_MIN;
	volatile int16_t x414 = INT16_MIN;
	static int32_t x415 = INT32_MIN;
	int32_t x416 = -1;
	volatile int32_t t93 = -1147207;

	t93 = ((x413^(x414-x415))&x416);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MAX;
	uint16_t x419 = 2U;
	static uint16_t x420 = 3629U;
	volatile int64_t t94 = -3934994821440LL;

	t94 = ((x417^(x418-x419))&x420);

	if (t94 != 3629LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x421 = 465395;
	uint8_t x422 = UINT8_MAX;
	volatile uint64_t x424 = UINT64_MAX;
	uint64_t t95 = 0LLU;

	t95 = ((x421^(x422-x423))&x424);

	if (t95 != 465137LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = INT64_MIN;
	int16_t x427 = INT16_MIN;
	int64_t x428 = INT64_MIN;

	t96 = ((x425^(x426-x427))&x428);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x429 = 0U;
	int8_t x430 = -1;
	int8_t x431 = INT8_MIN;
	volatile int8_t x432 = INT8_MAX;
	volatile int32_t t97 = 14;

	t97 = ((x429^(x430-x431))&x432);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x433 = UINT16_MAX;
	static uint32_t x434 = UINT32_MAX;
	volatile int32_t x435 = INT32_MIN;
	volatile uint8_t x436 = 120U;
	volatile uint32_t t98 = 243597U;

	t98 = ((x433^(x434-x435))&x436);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x437 = 15058LLU;
	int8_t x438 = -2;
	int32_t x439 = 53774;
	volatile int8_t x440 = INT8_MIN;
	volatile uint64_t t99 = 5627551379235396LLU;

	t99 = ((x437^(x438-x439))&x440);

	if (t99 != 18446744073709491968LLU) { NG(); } else { ; }
	
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

