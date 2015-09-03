#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -1LL;
volatile int32_t x3 = INT32_MIN;
static uint8_t x5 = 85U;
volatile int8_t x14 = -1;
static int32_t t4 = 59184628;
uint64_t x22 = UINT64_MAX;
int16_t x28 = 1895;
uint64_t x35 = 12721LLU;
static volatile uint64_t t8 = 1350896LLU;
static int16_t x44 = INT16_MIN;
static int64_t x47 = INT64_MIN;
volatile int64_t x52 = -1LL;
volatile uint32_t x58 = 2U;
int16_t x74 = -20;
static uint16_t x75 = 1426U;
static volatile int8_t x77 = -1;
static uint64_t x89 = 34405583LLU;
volatile uint64_t t16 = 82705049976347415LLU;
static volatile uint32_t x93 = 16393610U;
uint8_t x94 = UINT8_MAX;
volatile uint64_t t17 = 1794271558LLU;
int8_t x98 = INT8_MAX;
int8_t x99 = INT8_MIN;
int32_t t18 = -10910643;
int8_t x118 = -1;
static uint16_t x121 = 7831U;
int64_t x123 = 614451939158LL;
volatile uint32_t x125 = 23587U;
uint64_t t26 = 135114LLU;
int16_t x134 = -499;
volatile int64_t x137 = INT64_MIN;
int64_t t28 = -163873831LL;
uint64_t x141 = 5978165797LLU;
volatile uint64_t t31 = 249117548240LLU;
static int8_t x166 = INT8_MIN;
int64_t x169 = -1LL;
uint16_t x171 = 2176U;
static int64_t x183 = -1LL;
volatile uint64_t t41 = 743199098LLU;
static int32_t x205 = INT32_MIN;
uint16_t x220 = 8126U;
int16_t x227 = -3777;
static volatile uint32_t t46 = 213680680U;
int64_t x229 = -1LL;
int64_t x232 = -89374LL;
int32_t x250 = 7728;
uint32_t t51 = 15U;
int8_t x258 = INT8_MIN;
int64_t t53 = -3076996097965119391LL;
static volatile int32_t x268 = INT32_MIN;
int64_t t55 = -1750397773LL;
int32_t x276 = INT32_MIN;
volatile int32_t x278 = INT32_MIN;
static int64_t t57 = 487851130LL;
int8_t x293 = 0;
uint64_t x302 = UINT64_MAX;
uint16_t x303 = 1705U;
static volatile int32_t x304 = INT32_MIN;
volatile uint64_t t62 = 481504LLU;
uint64_t x307 = 374950524075757LLU;
int8_t x311 = 1;
uint32_t x314 = UINT32_MAX;
int16_t x326 = -2;
uint8_t x330 = 3U;
static int64_t x332 = INT64_MIN;
volatile int16_t x344 = INT16_MIN;
uint32_t x345 = 385956U;
static int16_t x348 = -1;
int8_t x349 = INT8_MIN;
uint32_t x358 = 779268U;
int32_t x364 = -1;
volatile uint32_t t72 = 13U;
volatile uint16_t x380 = UINT16_MAX;
volatile uint64_t t74 = 1772265LLU;
int64_t x384 = -1LL;
int8_t x389 = INT8_MIN;
uint32_t x401 = 11297U;
int16_t x403 = -873;
static volatile uint64_t t79 = 473LLU;
volatile uint16_t x428 = UINT16_MAX;
volatile uint64_t t82 = 619464053809488LLU;
volatile uint8_t x436 = UINT8_MAX;
static int8_t x444 = INT8_MIN;
int16_t x449 = INT16_MIN;
volatile int16_t x453 = 26;
uint64_t x502 = 10871400380798LLU;
int16_t x504 = 569;
static volatile int32_t x509 = -1;
int8_t x511 = INT8_MIN;
int16_t x513 = INT16_MIN;
static int16_t x515 = -527;
uint32_t t98 = 984039737U;
int64_t x530 = INT64_MIN;
int32_t x532 = 2;


void f0(void) {
	uint64_t x2 = 23280336LLU;
	int16_t x4 = -59;
	uint64_t t0 = 0LLU;

	t0 = ((x1-x2)*(x3|x4));

	if (t0 != 1373539883LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	uint64_t x7 = UINT64_MAX;
	uint64_t x8 = 368728875208LLU;
	uint64_t t1 = 766435868LLU;

	t1 = ((x5-x6)*(x7|x8));

	if (t1 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	volatile int32_t x10 = -1;
	uint8_t x11 = UINT8_MAX;
	static uint8_t x12 = 109U;
	int32_t t2 = -725;

	t2 = ((x9-x10)*(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -3;
	int64_t x15 = INT64_MIN;
	volatile uint64_t x16 = 1878977LLU;
	volatile uint64_t t3 = 1LLU;

	t3 = ((x13-x14)*(x15|x16));

	if (t3 != 18446744073705793662LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -19;
	uint16_t x18 = 1465U;
	static int8_t x19 = -1;
	volatile int8_t x20 = INT8_MIN;

	t4 = ((x17-x18)*(x19|x20));

	if (t4 != 1484) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int16_t x23 = 6;
	volatile int8_t x24 = -8;
	static volatile uint64_t t5 = 62LLU;

	t5 = ((x21-x22)*(x23|x24));

	if (t5 != 254LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	uint64_t x26 = UINT64_MAX;
	uint16_t x27 = UINT16_MAX;
	uint64_t t6 = 703677141365LLU;

	t6 = ((x25-x26)*(x27|x28));

	if (t6 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1032U;
	int16_t x30 = 1;
	static int8_t x31 = 0;
	static int8_t x32 = 11;
	uint32_t t7 = 1915590431U;

	t7 = ((x29-x30)*(x31|x32));

	if (t7 != 11341U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int16_t x34 = -1;
	static uint16_t x36 = 91U;

	t8 = ((x33-x34)*(x35|x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MAX;
	static uint64_t x42 = 6974998132LLU;
	static volatile int16_t x43 = -2;
	uint64_t t9 = 1496LLU;

	t9 = ((x41-x42)*(x43|x44));

	if (t9 != 13949996266LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 30U;
	int16_t x46 = INT16_MAX;
	int32_t x48 = INT32_MIN;
	int64_t t10 = 1LL;

	t10 = ((x45-x46)*(x47|x48));

	if (t10 != 70302172184576LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	static uint8_t x50 = 4U;
	volatile int8_t x51 = INT8_MAX;
	static volatile int64_t t11 = -13LL;

	t11 = ((x49-x50)*(x51|x52));

	if (t11 != 32772LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x53 = INT8_MAX;
	uint32_t x54 = 2593U;
	static int64_t x55 = 18404LL;
	uint64_t x56 = 6LLU;
	volatile uint64_t t12 = 15231305LLU;

	t12 = ((x53-x54)*(x55|x56));

	if (t12 != 79053122660980LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -1;
	int8_t x59 = -15;
	int64_t x60 = -1LL;
	static volatile int64_t t13 = -369567LL;

	t13 = ((x57-x58)*(x59|x60));

	if (t13 != -4294967293LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = -1;
	volatile uint32_t x76 = 13302055U;
	uint32_t t14 = 9541U;

	t14 = ((x73-x74)*(x75|x76));

	if (t14 != 252761237U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x78 = 0;
	int64_t x79 = -7704LL;
	uint16_t x80 = 1441U;
	volatile int64_t t15 = 1LL;

	t15 = ((x77-x78)*(x79|x80));

	if (t15 != 6679LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x90 = INT16_MAX;
	int64_t x91 = INT64_MIN;
	static int32_t x92 = INT32_MIN;

	t16 = ((x89-x90)*(x91|x92));

	if (t16 != 18372929013413838848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = -95600083LL;

	t17 = ((x93-x94)*(x95|x96));

	if (t17 != 18446744073693158261LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x97 = 286304;
	uint8_t x100 = 6U;

	t18 = ((x97-x98)*(x99|x100));

	if (t18 != -34913594) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x101 = UINT64_MAX;
	static volatile int16_t x102 = -1;
	static volatile int16_t x103 = -1;
	int8_t x104 = INT8_MIN;
	volatile uint64_t t19 = 511468LLU;

	t19 = ((x101-x102)*(x103|x104));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 19LLU;
	volatile int64_t x106 = 40045458170927LL;
	int8_t x107 = 1;
	int64_t x108 = -1LL;
	volatile uint64_t t20 = 45054156304487LLU;

	t20 = ((x105-x106)*(x107|x108));

	if (t20 != 40045458170908LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = 26U;
	int32_t x110 = 62;
	volatile uint8_t x111 = 1U;
	int64_t x112 = -112540LL;
	int64_t t21 = -4LL;

	t21 = ((x109-x110)*(x111|x112));

	if (t21 != -483351320473140LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x113 = UINT32_MAX;
	int32_t x114 = -539;
	int16_t x115 = 727;
	volatile int16_t x116 = INT16_MIN;
	volatile uint32_t t22 = 1869601U;

	t22 = ((x113-x114)*(x115|x116));

	if (t22 != 4277729238U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = -3418702542438592LL;
	volatile int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;
	int64_t t23 = 383477526766274479LL;

	t23 = ((x117-x118)*(x119|x120));

	if (t23 != 3418702542438591LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x122 = 12186U;
	volatile int16_t x124 = INT16_MIN;
	int64_t t24 = -263163LL;

	t24 = ((x121-x122)*(x123|x124));

	if (t24 != 134525950LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x126 = 812841937U;
	volatile int16_t x127 = -45;
	volatile uint8_t x128 = UINT8_MAX;
	volatile uint32_t t25 = 309U;

	t25 = ((x125-x126)*(x127|x128));

	if (t25 != 812818350U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = 0;
	uint16_t x130 = UINT16_MAX;
	uint8_t x131 = 6U;
	volatile uint64_t x132 = UINT64_MAX;

	t26 = ((x129-x130)*(x131|x132));

	if (t26 != 65535LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x133 = 1297121LLU;
	volatile int8_t x135 = -1;
	volatile int32_t x136 = -615593745;
	volatile uint64_t t27 = 11LLU;

	t27 = ((x133-x134)*(x135|x136));

	if (t27 != 18446744073708253996LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MAX;
	uint32_t x140 = 9971U;

	t28 = ((x137-x138)*(x139|x140));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x142 = 21U;
	uint64_t x143 = 43745277272304LLU;
	volatile int16_t x144 = -1;
	volatile uint64_t t29 = 15654LLU;

	t29 = ((x141-x142)*(x143|x144));

	if (t29 != 18446744067731385840LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = 8086032522LL;
	static int16_t x154 = 1652;
	volatile uint16_t x155 = UINT16_MAX;
	volatile uint64_t x156 = 22570718689115LLU;
	volatile uint64_t t30 = 622088881508LLU;

	t30 = ((x153-x154)*(x155|x156));

	if (t30 != 13889239910588675562LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = -205190;
	int16_t x158 = INT16_MAX;
	static uint16_t x159 = 11175U;
	uint64_t x160 = 120LLU;

	t31 = ((x157-x158)*(x159|x160));

	if (t31 != 18446744071029441925LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = 0;
	static uint8_t x163 = 59U;
	uint64_t x164 = 5LLU;
	volatile uint64_t t32 = 27832107085813976LLU;

	t32 = ((x161-x162)*(x163|x164));

	if (t32 != 18446743938418081792LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x167 = 1316093LLU;
	int32_t x168 = INT32_MAX;
	static uint64_t t33 = 920LLU;

	t33 = ((x165-x166)*(x167|x168));

	if (t33 != 18446673979843313536LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x170 = 3237LL;
	uint64_t x172 = 10307591LLU;
	volatile uint64_t t34 = 47277524254053LLU;

	t34 = ((x169-x170)*(x171|x172));

	if (t34 != 18446744040333157494LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x173 = 1;
	uint8_t x174 = 49U;
	uint64_t x175 = 17536033815652LLU;
	int16_t x176 = 5552;
	uint64_t t35 = 80747LLU;

	t35 = ((x173-x174)*(x175|x176));

	if (t35 != 18445902344086381120LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x177 = 4952081LLU;
	volatile int64_t x178 = INT64_MIN;
	volatile uint32_t x179 = 28402995U;
	int16_t x180 = -1;
	uint64_t t36 = 31037LLU;

	t36 = ((x177-x178)*(x179|x180));

	if (t36 != 9244641062791966703LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = 15288LLU;
	static uint8_t x182 = 6U;
	uint64_t x184 = 3130397588954LLU;
	uint64_t t37 = 825841661LLU;

	t37 = ((x181-x182)*(x183|x184));

	if (t37 != 18446744073709536334LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x185 = INT32_MIN;
	int32_t x186 = -24199897;
	int64_t x187 = -1LL;
	int16_t x188 = -8;
	static volatile int64_t t38 = -33146602960145839LL;

	t38 = ((x185-x186)*(x187|x188));

	if (t38 != 2123283751LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x189 = 1587411733801122172LL;
	int16_t x190 = INT16_MAX;
	static int16_t x191 = INT16_MAX;
	volatile int16_t x192 = INT16_MIN;
	static int64_t t39 = 8079978927916LL;

	t39 = ((x189-x190)*(x191|x192));

	if (t39 != -1587411733801089405LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = INT16_MIN;
	int8_t x195 = -1;
	static volatile int8_t x196 = -1;
	volatile uint32_t t40 = 37539U;

	t40 = ((x193-x194)*(x195|x196));

	if (t40 != 4294934529U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 223964LLU;
	uint64_t x198 = 1374227563196LLU;
	static volatile uint64_t x199 = UINT64_MAX;
	static volatile int64_t x200 = -1LL;

	t41 = ((x197-x198)*(x199|x200));

	if (t41 != 1374227339232LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x206 = -7730566LL;
	uint32_t x207 = 4U;
	int16_t x208 = -42;
	int64_t t42 = 0LL;

	t42 = ((x205-x206)*(x207|x208));

	if (t42 != -9190169418835576828LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = INT64_MAX;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = 274451434;
	int64_t x212 = 15045013089LL;
	uint64_t t43 = 120924909328645154LLU;

	t43 = ((x209-x210)*(x211|x212));

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x217 = 28U;
	volatile int32_t x218 = -1;
	int16_t x219 = 5;
	static volatile int32_t t44 = -3;

	t44 = ((x217-x218)*(x219|x220));

	if (t44 != 235683) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x221 = -1LL;
	uint32_t x222 = 0U;
	uint16_t x223 = UINT16_MAX;
	int32_t x224 = INT32_MAX;
	static int64_t t45 = 13809615LL;

	t45 = ((x221-x222)*(x223|x224));

	if (t45 != -2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x225 = 118869U;
	uint32_t x226 = UINT32_MAX;
	static volatile uint16_t x228 = 20U;

	t46 = ((x225-x226)*(x227|x228));

	if (t46 != 3845995306U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x230 = 145;
	int64_t x231 = INT64_MIN;
	volatile int64_t t47 = 1575877762181531LL;

	t47 = ((x229-x230)*(x231|x232));

	if (t47 != 13048604LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t x234 = 1;
	uint64_t x235 = UINT64_MAX;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t48 = 29LLU;

	t48 = ((x233-x234)*(x235|x236));

	if (t48 != 32769LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = 391653449;
	volatile int32_t x238 = INT32_MAX;
	static volatile int64_t x239 = INT64_MAX;
	int8_t x240 = -1;
	static int64_t t49 = 17308582746LL;

	t49 = ((x237-x238)*(x239|x240));

	if (t49 != 1755830198LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = -6;
	int64_t x247 = INT64_MIN;
	volatile int32_t x248 = INT32_MIN;
	int64_t t50 = -357LL;

	t50 = ((x245-x246)*(x247|x248));

	if (t50 != -140748225773568LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x249 = 564U;
	int32_t x251 = 582;
	volatile int8_t x252 = 55;

	t51 = ((x249-x250)*(x251|x252));

	if (t51 != 4290446812U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = 0;
	int16_t x254 = -1;
	static uint64_t x255 = 1841290296334LLU;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = ((x253-x254)*(x255|x256));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x257 = 362U;
	int8_t x259 = INT8_MAX;
	int64_t x260 = 133LL;

	t53 = ((x257-x258)*(x259|x260));

	if (t53 != 124950LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = -1;
	int32_t x263 = 13320;
	uint8_t x264 = 34U;
	volatile int32_t t54 = 1050;

	t54 = ((x261-x262)*(x263|x264));

	if (t54 != -437570518) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x265 = 9515U;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = -1LL;

	t55 = ((x265-x266)*(x267|x268));

	if (t55 != -9516LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	volatile int32_t t56 = 11;

	t56 = ((x273-x274)*(x275|x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x277 = -4334;
	int32_t x279 = -1;
	static int64_t x280 = INT64_MIN;

	t57 = ((x277-x278)*(x279|x280));

	if (t57 != -2147479314LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x281 = 227330U;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = -1;
	int64_t x284 = INT64_MIN;
	volatile uint64_t t58 = 6295883LLU;

	t58 = ((x281-x282)*(x283|x284));

	if (t58 != 18446744073709324285LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x289 = 620163U;
	int16_t x290 = INT16_MAX;
	volatile int32_t x291 = INT32_MAX;
	int32_t x292 = INT32_MAX;
	volatile uint32_t t59 = 3399644U;

	t59 = ((x289-x290)*(x291|x292));

	if (t59 != 4294379900U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x294 = -1LL;
	static volatile int16_t x295 = -1085;
	int16_t x296 = INT16_MIN;
	static int64_t t60 = 36062591247LL;

	t60 = ((x293-x294)*(x295|x296));

	if (t60 != -1085LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x297 = 37337755;
	uint32_t x298 = 942370001U;
	int16_t x299 = INT16_MAX;
	uint64_t x300 = UINT64_MAX;
	uint64_t t61 = 135726939451934455LLU;

	t61 = ((x297-x298)*(x299|x300));

	if (t61 != 18446744070319616566LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x301 = INT64_MIN;

	t62 = ((x301-x302)*(x303|x304));

	if (t62 != 9223372034707293865LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x305 = INT64_MIN;
	uint64_t x306 = 54LLU;
	uint8_t x308 = UINT8_MAX;
	uint64_t t63 = 141736525546274LLU;

	t63 = ((x305-x306)*(x307|x308));

	if (t63 != 9203124708554683958LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = -1;
	volatile uint32_t x310 = 11825134U;
	int8_t x312 = INT8_MIN;
	volatile uint32_t t64 = 34485U;

	t64 = ((x309-x310)*(x311|x312));

	if (t64 != 1501792145U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = 1;
	int8_t x315 = 3;
	volatile uint16_t x316 = 1787U;
	volatile uint32_t t65 = 22126U;

	t65 = ((x313-x314)*(x315|x316));

	if (t65 != 3574U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x325 = INT8_MAX;
	int8_t x327 = INT8_MAX;
	int8_t x328 = -2;
	volatile int32_t t66 = -51501;

	t66 = ((x325-x326)*(x327|x328));

	if (t66 != -129) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x329 = INT16_MIN;
	int32_t x331 = -1;
	int64_t t67 = 1625198686616LL;

	t67 = ((x329-x330)*(x331|x332));

	if (t67 != 32771LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x341 = 6459993010237251352LLU;
	static int32_t x342 = INT32_MIN;
	static uint64_t x343 = 26181193753LLU;
	uint64_t t68 = 27462190731743903LLU;

	t68 = ((x341-x342)*(x343|x344));

	if (t68 != 9871485708518885720LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x346 = INT8_MAX;
	uint32_t x347 = 359747907U;
	volatile uint32_t t69 = 1U;

	t69 = ((x345-x346)*(x347|x348));

	if (t69 != 4294581467U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x350 = 2U;
	volatile int16_t x351 = INT16_MIN;
	static int16_t x352 = 566;
	static uint32_t t70 = 2925U;

	t70 = ((x349-x350)*(x351|x352));

	if (t70 != 4186260U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x357 = 135427863581346282LLU;
	uint8_t x359 = UINT8_MAX;
	volatile uint16_t x360 = 2023U;
	static volatile uint64_t t71 = 115804505LLU;

	t71 = ((x357-x358)*(x359|x360));

	if (t71 != 519675643777403418LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x361 = 34U;
	int8_t x362 = -1;
	int16_t x363 = INT16_MIN;

	t72 = ((x361-x362)*(x363|x364));

	if (t72 != 4294967261U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x365 = UINT32_MAX;
	volatile int8_t x366 = 0;
	uint32_t x367 = 5002483U;
	static int32_t x368 = INT32_MAX;
	uint32_t t73 = 88U;

	t73 = ((x365-x366)*(x367|x368));

	if (t73 != 2147483649U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x377 = 127LLU;
	int32_t x378 = 694594;
	volatile int64_t x379 = INT64_MIN;

	t74 = ((x377-x378)*(x379|x380));

	if (t74 != 9223371991342880963LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x381 = UINT64_MAX;
	static int64_t x382 = -1LL;
	static int32_t x383 = INT32_MAX;
	volatile uint64_t t75 = 49326962564LLU;

	t75 = ((x381-x382)*(x383|x384));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x385 = -1;
	uint16_t x386 = 7822U;
	int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t76 = 27;

	t76 = ((x385-x386)*(x387|x388));

	if (t76 != 256344064) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x390 = -1;
	volatile uint16_t x391 = UINT16_MAX;
	uint32_t x392 = UINT32_MAX;
	uint32_t t77 = 178324U;

	t77 = ((x389-x390)*(x391|x392));

	if (t77 != 127U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x397 = INT16_MIN;
	static uint32_t x398 = 1556U;
	uint8_t x399 = 4U;
	int64_t x400 = 66722491LL;
	static volatile int64_t t78 = -147587951407904LL;

	t78 = ((x397-x398)*(x399|x400));

	if (t78 != 286568643749605140LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x402 = 152765LLU;
	uint64_t x404 = UINT64_MAX;

	t79 = ((x401-x402)*(x403|x404));

	if (t79 != 141468LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x409 = INT32_MIN;
	int64_t x410 = -1LL;
	uint8_t x411 = 0U;
	static uint8_t x412 = 2U;
	static volatile int64_t t80 = 138456051113858271LL;

	t80 = ((x409-x410)*(x411|x412));

	if (t80 != -4294967294LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x417 = 1724LLU;
	static volatile int8_t x418 = -60;
	int32_t x419 = 827;
	int16_t x420 = -1;
	static volatile uint64_t t81 = 136160020256LLU;

	t81 = ((x417-x418)*(x419|x420));

	if (t81 != 18446744073709549832LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x425 = INT64_MIN;
	uint64_t x426 = 7566824101LLU;
	static volatile uint16_t x427 = 9084U;

	t82 = ((x425-x426)*(x427|x428));

	if (t82 != 9222876145037316773LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x429 = UINT64_MAX;
	static int16_t x430 = -664;
	uint32_t x431 = 0U;
	uint64_t x432 = 422972106479079LLU;
	static uint64_t t83 = 5647767833LLU;

	t83 = ((x429-x430)*(x431|x432));

	if (t83 != 280430506595629377LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x433 = UINT16_MAX;
	static uint16_t x434 = UINT16_MAX;
	static int32_t x435 = -1;
	int32_t t84 = -1687;

	t84 = ((x433-x434)*(x435|x436));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x441 = -1;
	int8_t x442 = INT8_MAX;
	uint64_t x443 = 4441614395940168792LLU;
	static uint64_t t85 = 3LLU;

	t85 = ((x441-x442)*(x443|x444));

	if (t85 != 5120LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x450 = UINT32_MAX;
	int16_t x451 = 12936;
	static uint32_t x452 = 1280223U;
	uint32_t t86 = 231395557U;

	t86 = ((x449-x450)*(x451|x452));

	if (t86 != 581188319U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x454 = 0;
	uint64_t x455 = 265848313344947759LLU;
	uint64_t x456 = 265796540064554441LLU;
	uint64_t t87 = 0LLU;

	t87 = ((x453-x454)*(x455|x456));

	if (t87 != 6912171612896755270LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x457 = -1;
	static uint32_t x458 = 205U;
	static uint16_t x459 = 9578U;
	uint64_t x460 = 8433746875591875LLU;
	uint64_t t88 = 22304929610764LLU;

	t88 = ((x457-x458)*(x459|x460));

	if (t88 != 11423624117028719846LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x465 = UINT16_MAX;
	int8_t x466 = INT8_MIN;
	uint16_t x467 = UINT16_MAX;
	uint64_t x468 = UINT64_MAX;
	uint64_t t89 = 6077395069013066670LLU;

	t89 = ((x465-x466)*(x467|x468));

	if (t89 != 18446744073709485953LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x473 = UINT64_MAX;
	static uint16_t x474 = 1854U;
	int32_t x475 = INT32_MIN;
	int32_t x476 = -1023;
	uint64_t t90 = 1597723741847LLU;

	t90 = ((x473-x474)*(x475|x476));

	if (t90 != 1897665LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x481 = 0U;
	uint8_t x482 = 5U;
	static int32_t x483 = INT32_MAX;
	volatile int32_t x484 = INT32_MIN;
	volatile int32_t t91 = -612;

	t91 = ((x481-x482)*(x483|x484));

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x489 = INT16_MIN;
	int16_t x490 = INT16_MIN;
	uint64_t x491 = 4378LLU;
	int8_t x492 = INT8_MAX;
	uint64_t t92 = 527010824LLU;

	t92 = ((x489-x490)*(x491|x492));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x501 = -1;
	int8_t x503 = INT8_MIN;
	static volatile uint64_t t93 = 365529242787LLU;

	t93 = ((x501-x502)*(x503|x504));

	if (t93 != 771869427036729LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x505 = UINT64_MAX;
	static int16_t x506 = -1;
	volatile int32_t x507 = INT32_MAX;
	int64_t x508 = INT64_MIN;
	static volatile uint64_t t94 = 2LLU;

	t94 = ((x505-x506)*(x507|x508));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x510 = 38U;
	uint64_t x512 = 2609317817141403LLU;
	volatile uint64_t t95 = 1LLU;

	t95 = ((x509-x510)*(x511|x512));

	if (t95 != 3939LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x514 = -1LL;
	volatile int16_t x516 = -1;
	static int64_t t96 = 2783051158LL;

	t96 = ((x513-x514)*(x515|x516));

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x517 = INT32_MIN;
	uint32_t x518 = 1113923U;
	uint16_t x519 = 453U;
	int64_t x520 = -1LL;
	int64_t t97 = -951922LL;

	t97 = ((x517-x518)*(x519|x520));

	if (t97 != -2146369725LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x521 = 119296;
	uint32_t x522 = UINT32_MAX;
	int16_t x523 = -1;
	static int32_t x524 = -6409995;

	t98 = ((x521-x522)*(x523|x524));

	if (t98 != 4294847999U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x529 = INT64_MIN;
	int32_t x531 = -1;
	volatile int64_t t99 = 107309741LL;

	t99 = ((x529-x530)*(x531|x532));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

