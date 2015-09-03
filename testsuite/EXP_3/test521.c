#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
volatile int8_t x5 = -1;
uint64_t x10 = UINT64_MAX;
volatile uint32_t t3 = 3891U;
volatile uint64_t x21 = 246863662635LLU;
uint32_t x29 = UINT32_MAX;
static uint64_t x46 = UINT64_MAX;
int8_t x47 = INT8_MIN;
int16_t x51 = 627;
uint8_t x62 = UINT8_MAX;
volatile uint16_t x65 = 7U;
int64_t x67 = INT64_MIN;
uint32_t x69 = UINT32_MAX;
int64_t x71 = INT64_MAX;
int32_t x77 = -1;
int32_t x78 = INT32_MIN;
uint16_t x80 = 3907U;
int32_t t15 = INT32_MAX;
static uint16_t x81 = 119U;
static int64_t x90 = 28797365804LL;
int16_t x91 = 1;
static volatile uint32_t x96 = 50U;
int8_t x105 = INT8_MIN;
volatile uint32_t x112 = 110285U;
volatile int8_t x118 = INT8_MIN;
volatile int8_t x122 = 1;
int32_t x125 = INT32_MIN;
uint64_t t24 = 392921120190LLU;
int8_t x137 = -1;
static int16_t x138 = 376;
uint16_t x144 = UINT16_MAX;
static volatile uint64_t t27 = 15411420212661LLU;
static int8_t x145 = -1;
static uint64_t x152 = 64LLU;
int32_t t30 = -88;
uint32_t x174 = UINT32_MAX;
uint32_t t33 = 2737853U;
uint16_t x186 = 3U;
volatile uint64_t x187 = 125863LLU;
static uint32_t x189 = UINT32_MAX;
int64_t t36 = 11905234828936282LL;
int8_t x195 = INT8_MAX;
static uint8_t x196 = 1U;
static int8_t x197 = -7;
static int16_t x198 = INT16_MIN;
uint64_t t38 = 764LLU;
static int8_t x206 = -1;
uint8_t x208 = 7U;
volatile uint32_t x210 = 267511U;
uint64_t t40 = 8253LLU;
uint32_t x216 = UINT32_MAX;
int64_t x217 = -834434LL;
static int64_t x223 = -23247244LL;
static volatile int32_t x224 = INT32_MIN;
int16_t x226 = -837;
static int8_t x232 = -5;
volatile uint64_t t45 = 1025709LLU;
volatile uint8_t x234 = 0U;
int32_t x238 = -3842;
uint64_t x239 = 748310917LLU;
static int8_t x250 = -1;
volatile int16_t x254 = 2834;
static uint16_t x257 = 121U;
volatile int16_t x259 = -1;
int64_t x267 = INT64_MAX;
volatile int8_t x268 = INT8_MIN;
int64_t x271 = -1458LL;
static int8_t x282 = INT8_MAX;
int8_t x297 = INT8_MAX;
int64_t x299 = INT64_MIN;
static int8_t x302 = INT8_MIN;
int32_t x309 = -7579;
volatile int32_t x311 = INT32_MIN;
int32_t t61 = 0;
static volatile uint16_t x313 = UINT16_MAX;
static int32_t x317 = -2427;
int8_t x325 = -1;
int8_t x327 = INT8_MIN;
uint64_t x328 = 112889544932887LLU;
static int16_t x331 = INT16_MIN;
int64_t t68 = -3844LL;
int8_t x346 = INT8_MIN;
uint8_t x357 = UINT8_MAX;
int8_t x363 = INT8_MIN;
int8_t x364 = 4;
uint8_t x371 = 35U;
int8_t x380 = 1;
uint64_t t78 = 221580273521LLU;
static uint32_t t79 = 8825635U;
uint16_t x403 = 0U;
int32_t x411 = INT32_MIN;
uint64_t t82 = 9782544LLU;
volatile int32_t t83 = INT32_MAX;
int32_t t84 = -667801;
int32_t x427 = INT32_MAX;
int32_t x429 = INT32_MAX;
int64_t x433 = INT64_MIN;
volatile uint64_t t89 = 10LLU;
int64_t x444 = INT64_MAX;
volatile int64_t t90 = 828LL;
volatile int8_t x445 = -1;
uint64_t t92 = 785206989LLU;
volatile int64_t x455 = INT64_MIN;
int64_t x456 = 8837396826LL;
int32_t x463 = INT32_MAX;
volatile int64_t x475 = INT64_MAX;
uint64_t x486 = 7088272066523234LLU;


void f0(void) {
	static int64_t x2 = 808562LL;
	int16_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	volatile int64_t t0 = 196LL;

	t0 = ((x1-x2)+(x3/x4));

	if (t0 != 4294158733LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -101985;
	int32_t x7 = -1;
	uint32_t x8 = 110611U;
	uint32_t t1 = 30111U;

	t1 = ((x5-x6)+(x7/x8));

	if (t1 != 140813U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint16_t x11 = UINT16_MAX;
	static int16_t x12 = INT16_MIN;
	volatile uint64_t t2 = 2373383767LLU;

	t2 = ((x9-x10)+(x11/x12));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	volatile uint8_t x14 = 6U;
	int32_t x15 = INT32_MIN;
	uint32_t x16 = 4996299U;

	t3 = ((x13-x14)+(x15/x16));

	if (t3 != 33190U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int32_t x18 = INT32_MAX;
	volatile int32_t x19 = INT32_MAX;
	int64_t x20 = INT64_MIN;
	int64_t t4 = -24581LL;

	t4 = ((x17-x18)+(x19/x20));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 4;
	volatile int16_t x23 = 44;
	static uint8_t x24 = UINT8_MAX;
	uint64_t t5 = 95724335078676LLU;

	t5 = ((x21-x22)+(x23/x24));

	if (t5 != 246863662631LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = -1LL;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = UINT64_MAX;
	uint64_t t6 = 618LLU;

	t6 = ((x29-x30)+(x31/x32));

	if (t6 != 4294967296LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = UINT32_MAX;
	uint8_t x34 = UINT8_MAX;
	int16_t x35 = 9327;
	volatile int32_t x36 = INT32_MIN;
	uint32_t t7 = 30241044U;

	t7 = ((x33-x34)+(x35/x36));

	if (t7 != 4294967040U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = 20U;
	uint8_t x42 = 48U;
	uint64_t x43 = UINT64_MAX;
	int8_t x44 = -1;
	volatile uint64_t t8 = 227LLU;

	t8 = ((x41-x42)+(x43/x44));

	if (t8 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	int64_t x48 = -12LL;
	uint64_t t9 = 235614509LLU;

	t9 = ((x45-x46)+(x47/x48));

	if (t9 != 18446744073709518859LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MAX;
	int32_t x52 = -1;
	uint32_t t10 = 582U;

	t10 = ((x49-x50)+(x51/x52));

	if (t10 != 2147483021U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = INT32_MIN;
	static int64_t x54 = -1LL;
	static volatile uint16_t x55 = 5U;
	int64_t x56 = INT64_MAX;
	static volatile int64_t t11 = 68143056245LL;

	t11 = ((x53-x54)+(x55/x56));

	if (t11 != -2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = -45700944434278774LL;
	static int64_t x63 = INT64_MIN;
	static int16_t x64 = -14;
	static volatile int64_t t12 = -8135991LL;

	t12 = ((x61-x62)+(x63/x64));

	if (t12 != 613111343912490671LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x66 = 112380337182359LLU;
	static uint16_t x68 = 3U;
	uint64_t t13 = 1597946546555737573LLU;

	t13 = ((x65-x66)+(x67/x68));

	if (t13 != 15372174347754110662LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x70 = INT16_MIN;
	volatile int16_t x72 = INT16_MIN;
	int64_t t14 = -2894497214LL;

	t14 = ((x69-x70)+(x71/x72));

	if (t14 != -281474976677888LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x79 = -7;

	t15 = ((x77-x78)+(x79/x80));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x82 = INT8_MIN;
	static int8_t x83 = INT8_MAX;
	static uint32_t x84 = 40018007U;
	static volatile uint32_t t16 = 857U;

	t16 = ((x81-x82)+(x83/x84));

	if (t16 != 247U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x89 = -2;
	int32_t x92 = INT32_MAX;
	volatile int64_t t17 = 33396857LL;

	t17 = ((x89-x90)+(x91/x92));

	if (t17 != -28797365806LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x93 = 953U;
	int8_t x94 = -1;
	static uint16_t x95 = UINT16_MAX;
	volatile uint32_t t18 = 3U;

	t18 = ((x93-x94)+(x95/x96));

	if (t18 != 2264U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 7096U;
	volatile int8_t x102 = INT8_MIN;
	volatile int64_t x103 = -610LL;
	uint32_t x104 = UINT32_MAX;
	static volatile int64_t t19 = -1316262514427LL;

	t19 = ((x101-x102)+(x103/x104));

	if (t19 != 7224LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x106 = 0U;
	uint64_t x107 = 2LLU;
	int32_t x108 = 24876327;
	uint64_t t20 = 5610098455064LLU;

	t20 = ((x105-x106)+(x107/x108));

	if (t20 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = 55;
	int64_t x110 = INT64_MAX;
	volatile int16_t x111 = INT16_MIN;
	static int64_t t21 = 1LL;

	t21 = ((x109-x110)+(x111/x112));

	if (t21 != -9223372036854736809LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = INT16_MAX;
	uint32_t x119 = 38099912U;
	volatile uint32_t x120 = 956202630U;
	uint32_t t22 = 12203U;

	t22 = ((x117-x118)+(x119/x120));

	if (t22 != 32895U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = 593327U;
	int8_t x123 = INT8_MIN;
	int32_t x124 = -1680356;
	volatile uint32_t t23 = 3U;

	t23 = ((x121-x122)+(x123/x124));

	if (t23 != 593326U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x126 = -16379652352169LL;
	int8_t x127 = -1;
	uint64_t x128 = UINT64_MAX;

	t24 = ((x125-x126)+(x127/x128));

	if (t24 != 16377504868522LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	int32_t x130 = -69;
	int8_t x131 = -1;
	int64_t x132 = 1773449806LL;
	volatile int64_t t25 = -31034379895228571LL;

	t25 = ((x129-x130)+(x131/x132));

	if (t25 != -32699LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x139 = INT64_MIN;
	static int16_t x140 = INT16_MAX;
	static volatile int64_t t26 = -2701121405008216LL;

	t26 = ((x137-x138)+(x139/x140));

	if (t26 != -281483566907777LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = -1;
	volatile int32_t x142 = 554379676;
	uint64_t x143 = 4049059965698371LLU;

	t27 = ((x141-x142)+(x143/x144));

	if (t27 != 61230315000LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x146 = -1LL;
	volatile int8_t x147 = -1;
	static int16_t x148 = INT16_MIN;
	int64_t t28 = 640280LL;

	t28 = ((x145-x146)+(x147/x148));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x149 = 114705018123LLU;
	static int64_t x150 = -68648420047710LL;
	volatile int64_t x151 = -1LL;
	volatile uint64_t t29 = 1304LLU;

	t29 = ((x149-x150)+(x151/x152));

	if (t29 != 288299139276777576LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x153 = 14U;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MAX;

	t30 = ((x153-x154)+(x155/x156));

	if (t30 != -499) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = -1LL;
	int8_t x162 = INT8_MIN;
	uint64_t x163 = UINT64_MAX;
	static volatile int16_t x164 = -1;
	static volatile uint64_t t31 = 439978209046LLU;

	t31 = ((x161-x162)+(x163/x164));

	if (t31 != 128LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x169 = 2U;
	uint64_t x170 = 18663678LLU;
	int8_t x171 = 3;
	int32_t x172 = INT32_MIN;
	volatile uint64_t t32 = 813719LLU;

	t32 = ((x169-x170)+(x171/x172));

	if (t32 != 18446744073690887940LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x173 = INT32_MAX;
	uint32_t x175 = 25U;
	uint8_t x176 = 3U;

	t33 = ((x173-x174)+(x175/x176));

	if (t33 != 2147483656U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = INT64_MAX;
	volatile int32_t x182 = INT32_MAX;
	int16_t x183 = 12;
	uint32_t x184 = 10472786U;
	static int64_t t34 = 3674LL;

	t34 = ((x181-x182)+(x183/x184));

	if (t34 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x185 = -1LL;
	int8_t x188 = -3;
	uint64_t t35 = 1098254264132217396LLU;

	t35 = ((x185-x186)+(x187/x188));

	if (t35 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x190 = 1LL;
	volatile uint8_t x191 = 1U;
	int32_t x192 = 1570;

	t36 = ((x189-x190)+(x191/x192));

	if (t36 != 4294967294LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x193 = 3536847786738061231LL;
	volatile int16_t x194 = 1;
	volatile int64_t t37 = 6518LL;

	t37 = ((x193-x194)+(x195/x196));

	if (t37 != 3536847786738061357LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x199 = 0U;
	uint64_t x200 = 40088274LLU;

	t38 = ((x197-x198)+(x199/x200));

	if (t38 != 32761LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x205 = 4122377U;
	int64_t x207 = INT64_MIN;
	static int64_t t39 = 445289404906078453LL;

	t39 = ((x205-x206)+(x207/x208));

	if (t39 != -1317624576689417023LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x209 = INT64_MAX;
	volatile uint16_t x211 = 934U;
	uint64_t x212 = 48061LLU;

	t40 = ((x209-x210)+(x211/x212));

	if (t40 != 9223372036854508296LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x213 = -1;
	volatile int32_t x214 = -756500;
	static int32_t x215 = INT32_MIN;
	static uint32_t t41 = 51900U;

	t41 = ((x213-x214)+(x215/x216));

	if (t41 != 756499U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x218 = INT16_MIN;
	int8_t x219 = -1;
	int64_t x220 = INT64_MIN;
	int64_t t42 = 3161775930LL;

	t42 = ((x217-x218)+(x219/x220));

	if (t42 != -801666LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x221 = 22615597912897111LLU;
	static volatile uint8_t x222 = UINT8_MAX;
	static uint64_t t43 = 3642622475013211445LLU;

	t43 = ((x221-x222)+(x223/x224));

	if (t43 != 22615597912896856LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x225 = 725329305764254LL;
	volatile int8_t x227 = INT8_MAX;
	int8_t x228 = -24;
	static volatile int64_t t44 = -19086641732725LL;

	t44 = ((x225-x226)+(x227/x228));

	if (t44 != 725329305765086LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x229 = -1;
	static uint32_t x230 = 109U;
	uint64_t x231 = 685068798LLU;

	t45 = ((x229-x230)+(x231/x232));

	if (t45 != 4294967186LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x233 = INT64_MIN;
	volatile int16_t x235 = INT16_MIN;
	int64_t x236 = -1LL;
	int64_t t46 = -20880LL;

	t46 = ((x233-x234)+(x235/x236));

	if (t46 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x237 = 111U;
	uint8_t x240 = 99U;
	volatile uint64_t t47 = 883417744111187937LLU;

	t47 = ((x237-x238)+(x239/x240));

	if (t47 != 7562649LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x249 = 121U;
	static int64_t x251 = INT64_MAX;
	uint64_t x252 = 6477983533LLU;
	uint64_t t48 = 621560418387491557LLU;

	t48 = ((x249-x250)+(x251/x252));

	if (t48 != 1423803067LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x253 = 59LL;
	static uint16_t x255 = 2U;
	int32_t x256 = 1007129949;
	volatile int64_t t49 = 92065164LL;

	t49 = ((x253-x254)+(x255/x256));

	if (t49 != -2775LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x258 = -4120LL;
	static volatile uint16_t x260 = UINT16_MAX;
	int64_t t50 = -1389576868LL;

	t50 = ((x257-x258)+(x259/x260));

	if (t50 != 4241LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = 1;
	int64_t x266 = -69157LL;
	volatile int64_t t51 = 211507899338570124LL;

	t51 = ((x265-x266)+(x267/x268));

	if (t51 != -72057594037858777LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x269 = -1;
	static uint64_t x270 = UINT64_MAX;
	volatile uint8_t x272 = 15U;
	volatile uint64_t t52 = 39703LLU;

	t52 = ((x269-x270)+(x271/x272));

	if (t52 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x273 = UINT32_MAX;
	uint8_t x274 = 2U;
	uint16_t x275 = 88U;
	int16_t x276 = INT16_MIN;
	uint32_t t53 = 1763323718U;

	t53 = ((x273-x274)+(x275/x276));

	if (t53 != 4294967293U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x277 = -1;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = 1;
	uint16_t x280 = 1519U;
	static volatile uint32_t t54 = 490632U;

	t54 = ((x277-x278)+(x279/x280));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x281 = INT8_MIN;
	volatile int8_t x283 = -1;
	int8_t x284 = 39;
	int32_t t55 = -12;

	t55 = ((x281-x282)+(x283/x284));

	if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x285 = -124507447;
	volatile int16_t x286 = 314;
	int64_t x287 = 565095LL;
	static volatile uint64_t x288 = 7682372983805842LLU;
	static uint64_t t56 = 5386031726686028059LLU;

	t56 = ((x285-x286)+(x287/x288));

	if (t56 != 18446744073585043855LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x289 = INT16_MIN;
	volatile int64_t x290 = INT64_MIN;
	static volatile int64_t x291 = INT64_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile int64_t t57 = -169377LL;

	t57 = ((x289-x290)+(x291/x292));

	if (t57 != 9187201950435704704LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = 13;
	uint8_t x294 = 6U;
	int64_t x295 = -950839LL;
	uint8_t x296 = 19U;
	int64_t t58 = 13LL;

	t58 = ((x293-x294)+(x295/x296));

	if (t58 != -50037LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x298 = -1LL;
	static int8_t x300 = INT8_MIN;
	int64_t t59 = -1047568448721LL;

	t59 = ((x297-x298)+(x299/x300));

	if (t59 != 72057594037928064LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x301 = 29U;
	int32_t x303 = -1;
	uint32_t x304 = 118764U;
	uint32_t t60 = 1921U;

	t60 = ((x301-x302)+(x303/x304));

	if (t60 != 36320U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x310 = -1;
	int8_t x312 = INT8_MIN;

	t61 = ((x309-x310)+(x311/x312));

	if (t61 != 16769638) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	int8_t x316 = -1;
	int32_t t62 = 1;

	t62 = ((x313-x314)+(x315/x316));

	if (t62 != 98431) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x318 = 35U;
	int64_t x319 = -1LL;
	int8_t x320 = INT8_MAX;
	int64_t t63 = 374LL;

	t63 = ((x317-x318)+(x319/x320));

	if (t63 != -2462LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x326 = 0;
	volatile uint64_t t64 = 33LLU;

	t64 = ((x325-x326)+(x327/x328));

	if (t64 != 163404LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x329 = 27101288U;
	static uint32_t x330 = 695U;
	int16_t x332 = INT16_MIN;
	uint32_t t65 = 1846U;

	t65 = ((x329-x330)+(x331/x332));

	if (t65 != 27100594U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x333 = 2U;
	int16_t x334 = INT16_MAX;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	static int32_t t66 = -3;

	t66 = ((x333-x334)+(x335/x336));

	if (t66 != -32765) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x337 = 69U;
	volatile int64_t x338 = -18795149251LL;
	uint16_t x339 = 161U;
	int64_t x340 = -1LL;
	static volatile int64_t t67 = 17479184177475970LL;

	t67 = ((x337-x338)+(x339/x340));

	if (t67 != 18795149159LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x341 = 29;
	uint8_t x342 = UINT8_MAX;
	uint16_t x343 = UINT16_MAX;
	int64_t x344 = -1LL;

	t68 = ((x341-x342)+(x343/x344));

	if (t68 != -65761LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = 7;
	int64_t x347 = 420072LL;
	int32_t x348 = INT32_MIN;
	int64_t t69 = 50591939LL;

	t69 = ((x345-x346)+(x347/x348));

	if (t69 != 135LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = -1LL;
	int16_t x350 = INT16_MIN;
	int8_t x351 = -1;
	int64_t x352 = INT64_MIN;
	volatile int64_t t70 = 314349605LL;

	t70 = ((x349-x350)+(x351/x352));

	if (t70 != 32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x353 = INT32_MIN;
	uint32_t x354 = 319U;
	volatile int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MAX;
	static int64_t t71 = -18298LL;

	t71 = ((x353-x354)+(x355/x356));

	if (t71 != -2147483969LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x358 = INT16_MIN;
	uint64_t x359 = 5289621255468LLU;
	uint8_t x360 = 49U;
	volatile uint64_t t72 = 3343468967883709LLU;

	t72 = ((x357-x358)+(x359/x360));

	if (t72 != 107951487216LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x361 = UINT8_MAX;
	uint8_t x362 = UINT8_MAX;
	volatile int32_t t73 = -1968451;

	t73 = ((x361-x362)+(x363/x364));

	if (t73 != -32) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x369 = UINT8_MAX;
	volatile uint64_t x370 = 75LLU;
	int8_t x372 = INT8_MIN;
	uint64_t t74 = 61LLU;

	t74 = ((x369-x370)+(x371/x372));

	if (t74 != 180LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x373 = UINT16_MAX;
	int64_t x374 = -8147077682339847LL;
	volatile int8_t x375 = INT8_MAX;
	int16_t x376 = 1129;
	volatile int64_t t75 = 305904702976LL;

	t75 = ((x373-x374)+(x375/x376));

	if (t75 != 8147077682405382LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x377 = INT32_MAX;
	volatile uint16_t x378 = 4703U;
	uint8_t x379 = UINT8_MAX;
	static volatile int32_t t76 = -3927852;

	t76 = ((x377-x378)+(x379/x380));

	if (t76 != 2147479199) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x381 = 1860559102LLU;
	uint8_t x382 = 47U;
	uint16_t x383 = 7U;
	uint8_t x384 = 7U;
	static volatile uint64_t t77 = 27296872100LLU;

	t77 = ((x381-x382)+(x383/x384));

	if (t77 != 1860559056LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x389 = 1;
	static volatile uint64_t x390 = 4391594262843LLU;
	uint32_t x391 = 44U;
	int32_t x392 = -275;

	t78 = ((x389-x390)+(x391/x392));

	if (t78 != 18446739682115288774LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x393 = -167;
	uint32_t x394 = 856131U;
	volatile int16_t x395 = INT16_MIN;
	uint8_t x396 = UINT8_MAX;

	t79 = ((x393-x394)+(x395/x396));

	if (t79 != 4294110870U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x397 = UINT8_MAX;
	uint16_t x398 = 31U;
	volatile int32_t x399 = INT32_MIN;
	static int8_t x400 = INT8_MIN;
	int32_t t80 = 2;

	t80 = ((x397-x398)+(x399/x400));

	if (t80 != 16777440) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x401 = 6U;
	volatile uint64_t x402 = UINT64_MAX;
	uint32_t x404 = 92786627U;
	volatile uint64_t t81 = 784346145342LLU;

	t81 = ((x401-x402)+(x403/x404));

	if (t81 != 7LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x409 = 17965U;
	uint64_t x410 = UINT64_MAX;
	int8_t x412 = 3;

	t82 = ((x409-x410)+(x411/x412));

	if (t82 != 18446744072993741700LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x413 = -1;
	int32_t x414 = INT32_MIN;
	uint16_t x415 = UINT16_MAX;
	volatile int32_t x416 = INT32_MIN;

	t83 = ((x413-x414)+(x415/x416));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x417 = -558496777;
	volatile int16_t x418 = INT16_MAX;
	int16_t x419 = INT16_MIN;
	int32_t x420 = -1;

	t84 = ((x417-x418)+(x419/x420));

	if (t84 != -558496776) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x421 = INT32_MAX;
	uint64_t x422 = 157069677618LLU;
	uint16_t x423 = 2U;
	int64_t x424 = 2658887761185LL;
	volatile uint64_t t85 = 19953441063772LLU;

	t85 = ((x421-x422)+(x423/x424));

	if (t85 != 18446743918787357645LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x425 = UINT16_MAX;
	static int16_t x426 = -56;
	uint16_t x428 = 10U;
	volatile int32_t t86 = 2105;

	t86 = ((x425-x426)+(x427/x428));

	if (t86 != 214813955) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x430 = INT32_MAX;
	uint16_t x431 = UINT16_MAX;
	static int16_t x432 = INT16_MIN;
	int32_t t87 = 30;

	t87 = ((x429-x430)+(x431/x432));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x434 = INT64_MIN;
	volatile int64_t x435 = -3777232LL;
	int32_t x436 = INT32_MAX;
	static volatile int64_t t88 = -462478177978LL;

	t88 = ((x433-x434)+(x435/x436));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x437 = 0;
	volatile int16_t x438 = INT16_MIN;
	uint64_t x439 = 13973LLU;
	uint8_t x440 = UINT8_MAX;

	t89 = ((x437-x438)+(x439/x440));

	if (t89 != 32822LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x441 = 25U;
	volatile int8_t x442 = 0;
	uint16_t x443 = 7U;

	t90 = ((x441-x442)+(x443/x444));

	if (t90 != 25LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x446 = -1;
	int64_t x447 = INT64_MIN;
	uint64_t x448 = 8976901951029079400LLU;
	static uint64_t t91 = 6971862949LLU;

	t91 = ((x445-x446)+(x447/x448));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x449 = -3;
	uint64_t x450 = UINT64_MAX;
	volatile uint32_t x451 = 4139662U;
	volatile int64_t x452 = 32846LL;

	t92 = ((x449-x450)+(x451/x452));

	if (t92 != 124LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x453 = 189142LLU;
	int16_t x454 = INT16_MIN;
	static volatile uint64_t t93 = 6LLU;

	t93 = ((x453-x454)+(x455/x456));

	if (t93 != 18446744072666098311LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x457 = -1LL;
	int16_t x458 = INT16_MIN;
	uint32_t x459 = 347U;
	uint16_t x460 = 2U;
	volatile int64_t t94 = -29235715LL;

	t94 = ((x457-x458)+(x459/x460));

	if (t94 != 32940LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x461 = -11;
	int16_t x462 = -451;
	int64_t x464 = 211011823589LL;
	static volatile int64_t t95 = -548717189356329LL;

	t95 = ((x461-x462)+(x463/x464));

	if (t95 != 440LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x473 = 6U;
	int32_t x474 = INT32_MAX;
	int8_t x476 = -2;
	volatile int64_t t96 = -388745325LL;

	t96 = ((x473-x474)+(x475/x476));

	if (t96 != -4611686020574871544LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x477 = 110960539U;
	uint64_t x478 = 5372357707LLU;
	uint16_t x479 = 2664U;
	uint64_t x480 = 3512LLU;
	volatile uint64_t t97 = 29081LLU;

	t97 = ((x477-x478)+(x479/x480));

	if (t97 != 18446744068448154448LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x481 = -3;
	uint32_t x482 = 1U;
	volatile int8_t x483 = INT8_MIN;
	int8_t x484 = INT8_MIN;
	volatile uint32_t t98 = 773472103U;

	t98 = ((x481-x482)+(x483/x484));

	if (t98 != 4294967293U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x485 = INT16_MIN;
	int8_t x487 = INT8_MAX;
	int64_t x488 = -3LL;
	uint64_t t99 = 463146245LLU;

	t99 = ((x485-x486)+(x487/x488));

	if (t99 != 18439655801642995572LLU) { NG(); } else { ; }
	
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

