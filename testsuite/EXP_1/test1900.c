#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
volatile uint8_t x12 = UINT8_MAX;
static int8_t x17 = -1;
volatile int64_t x20 = -476088908148607528LL;
volatile uint32_t x24 = 28775U;
int64_t x42 = -486659747779652469LL;
static int8_t x44 = INT8_MIN;
int64_t t8 = -4300992005780224LL;
volatile uint8_t x46 = UINT8_MAX;
volatile int16_t x48 = INT16_MIN;
int64_t x51 = INT64_MIN;
uint32_t x53 = 7394243U;
int8_t x59 = -45;
volatile int32_t t15 = -52294254;
volatile uint64_t t17 = 19703142572LLU;
int64_t x82 = INT64_MAX;
int32_t x84 = INT32_MAX;
volatile int64_t t19 = 175736560LL;
uint8_t x93 = 14U;
uint32_t x94 = 24248412U;
uint64_t x99 = UINT64_MAX;
int32_t x101 = -1;
volatile int64_t t22 = -967410784LL;
int16_t x108 = 2;
int32_t x109 = INT32_MAX;
int16_t x111 = INT16_MAX;
volatile int16_t x114 = INT16_MIN;
int8_t x118 = -37;
volatile uint8_t x120 = UINT8_MAX;
static uint32_t t26 = 77705327U;
volatile int64_t x121 = -96006715LL;
int64_t x130 = -18779040LL;
static int32_t x139 = INT32_MIN;
int32_t x145 = 42287;
int16_t x151 = INT16_MIN;
uint64_t x166 = UINT64_MAX;
static volatile uint64_t x169 = UINT64_MAX;
static int64_t t38 = -76914641264387LL;
int8_t x197 = INT8_MIN;
int64_t x200 = 58279043LL;
static int32_t x213 = INT32_MAX;
volatile uint8_t x225 = UINT8_MAX;
volatile uint64_t x230 = 19121600LLU;
int16_t x234 = -668;
static uint8_t x235 = 1U;
volatile int64_t x236 = INT64_MIN;
int8_t x241 = -20;
int8_t x251 = INT8_MIN;
volatile int64_t t53 = -52934088108062358LL;
uint8_t x255 = 72U;
static int16_t x260 = INT16_MIN;
int16_t x266 = INT16_MIN;
uint8_t x267 = UINT8_MAX;
int8_t x273 = INT8_MIN;
static int16_t x282 = INT16_MIN;
static int32_t x285 = -39790;
int16_t x294 = INT16_MIN;
static int32_t x308 = INT32_MAX;
volatile int32_t t65 = -604;
int64_t x315 = -35594433891LL;
int64_t x334 = -1406281159LL;
static int32_t x340 = INT32_MAX;
int64_t x341 = 4294494LL;
volatile int8_t x345 = -1;
static volatile int32_t t74 = 31302;
uint64_t x351 = UINT64_MAX;
int8_t x358 = INT8_MIN;
static volatile int8_t x360 = 1;
volatile int32_t t77 = -98355;
volatile int64_t x362 = INT64_MIN;
uint64_t t78 = 20888342391200071LLU;
int32_t t79 = 11611118;
int64_t x371 = 1618942793178715LL;
uint32_t x383 = 1521824U;
uint32_t x385 = 19048U;
int8_t x391 = INT8_MIN;
static volatile int8_t x392 = INT8_MAX;
uint64_t x394 = 29110652LLU;
int8_t x399 = -1;
static int32_t x406 = INT32_MIN;
uint8_t x407 = UINT8_MAX;
volatile int32_t t89 = -1357;
int32_t x415 = -1;
uint64_t x416 = 55992LLU;
int16_t x429 = INT16_MAX;
uint64_t t95 = 1320541719624LLU;
int32_t x438 = -6721616;
volatile uint64_t t98 = 1655LLU;
static int8_t x456 = INT8_MIN;
volatile uint64_t t99 = 6976382877989LLU;


void f0(void) {
	int16_t x1 = -1;
	static volatile int16_t x2 = INT16_MIN;
	int32_t x4 = -26964;
	volatile int32_t t0 = 3;

	t0 = (((x1|x2)/x3)-x4);

	if (t0 != 26964) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 7394185453321LLU;
	static volatile int64_t x10 = INT64_MAX;
	uint32_t x11 = 263U;
	volatile uint64_t t1 = 30739LLU;

	t1 = (((x9|x10)/x11)-x12);

	if (t1 != 35069855653439957LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	int8_t x14 = 5;
	static int32_t x15 = -1;
	uint32_t x16 = UINT32_MAX;
	uint32_t t2 = 1U;

	t2 = (((x13|x14)/x15)-x16);

	if (t2 != 2147483650U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x18 = -5;
	uint16_t x19 = UINT16_MAX;
	volatile int64_t t3 = -11001629LL;

	t3 = (((x17|x18)/x19)-x20);

	if (t3 != 476088908148607528LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	static uint8_t x22 = UINT8_MAX;
	uint16_t x23 = UINT16_MAX;
	int64_t t4 = 234339575853223782LL;

	t4 = (((x21|x22)/x23)-x24);

	if (t4 != -28775LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 0;
	uint8_t x26 = 63U;
	int64_t x27 = INT64_MIN;
	volatile int8_t x28 = -2;
	volatile int64_t t5 = 45136363LL;

	t5 = (((x25|x26)/x27)-x28);

	if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x29 = INT16_MAX;
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MIN;
	int8_t x32 = -3;
	int32_t t6 = 363995264;

	t6 = (((x29|x30)/x31)-x32);

	if (t6 != 16776963) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	uint8_t x34 = UINT8_MAX;
	static int32_t x35 = INT32_MAX;
	static uint8_t x36 = 0U;
	int32_t t7 = -3;

	t7 = (((x33|x34)/x35)-x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = INT16_MIN;
	int8_t x43 = INT8_MIN;

	t8 = (((x41|x42)/x43)-x44);

	if (t8 != 214LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -198;
	int8_t x47 = INT8_MIN;
	static int32_t t9 = 16037768;

	t9 = (((x45|x46)/x47)-x48);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x49 = INT32_MIN;
	static volatile uint16_t x50 = 481U;
	int32_t x52 = INT32_MAX;
	static int64_t t10 = 1094621587849671LL;

	t10 = (((x49|x50)/x51)-x52);

	if (t10 != -2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = INT8_MAX;
	int64_t x55 = 7733490LL;
	static int32_t x56 = -10580896;
	volatile int64_t t11 = -5738785039LL;

	t11 = (((x53|x54)/x55)-x56);

	if (t11 != 10580896LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 0U;
	uint32_t x58 = 0U;
	volatile int64_t x60 = -1LL;
	volatile int64_t t12 = -409725252LL;

	t12 = (((x57|x58)/x59)-x60);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 46799U;
	int64_t x62 = INT64_MIN;
	static int16_t x63 = INT16_MAX;
	int32_t x64 = -17;
	int64_t t13 = -4863721696050LL;

	t13 = (((x61|x62)/x63)-x64);

	if (t13 != -281483566907381LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = 2488198187674586946LL;
	uint16_t x66 = UINT16_MAX;
	static uint16_t x67 = UINT16_MAX;
	int16_t x68 = INT16_MIN;
	static int64_t t14 = 313678312LL;

	t14 = (((x65|x66)/x67)-x68);

	if (t14 != 37967470661815LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x69 = 222U;
	int32_t x70 = INT32_MAX;
	int16_t x71 = -9;
	static uint16_t x72 = UINT16_MAX;

	t15 = (((x69|x70)/x71)-x72);

	if (t15 != -238674829) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = INT64_MIN;
	static int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MAX;
	volatile int8_t x76 = INT8_MAX;
	volatile int64_t t16 = 55991310LL;

	t16 = (((x73|x74)/x75)-x76);

	if (t16 != -281483566907527LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	uint64_t x78 = 4048382LLU;
	int8_t x79 = -4;
	static int16_t x80 = INT16_MIN;

	t17 = (((x77|x78)/x79)-x80);

	if (t17 != 32768LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	int16_t x83 = INT16_MAX;
	volatile int64_t t18 = 2083LL;

	t18 = (((x81|x82)/x83)-x84);

	if (t18 != -2147483647LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	uint32_t x86 = 31647143U;
	volatile int64_t x87 = 205098LL;
	int8_t x88 = -27;

	t19 = (((x85|x86)/x87)-x88);

	if (t19 != 20968LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x95 = 55U;
	uint16_t x96 = 178U;
	volatile uint32_t t20 = 119072U;

	t20 = (((x93|x94)/x95)-x96);

	if (t20 != 440702U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 5U;
	volatile int16_t x98 = INT16_MIN;
	volatile int8_t x100 = -1;
	volatile uint64_t t21 = 20602175772057LLU;

	t21 = (((x97|x98)/x99)-x100);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x102 = INT64_MAX;
	static uint32_t x103 = 163157U;
	volatile int64_t x104 = -1LL;

	t22 = (((x101|x102)/x103)-x104);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = UINT8_MAX;
	int8_t x106 = INT8_MAX;
	uint8_t x107 = UINT8_MAX;
	static volatile int32_t t23 = -80826330;

	t23 = (((x105|x106)/x107)-x108);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x110 = INT64_MIN;
	uint64_t x112 = 7621114114503927344LLU;
	uint64_t t24 = 36LLU;

	t24 = (((x109|x110)/x111)-x112);

	if (t24 != 10825348475638782410LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = -226172LL;
	int64_t x115 = -1074953870LL;
	volatile int32_t x116 = INT32_MAX;
	static int64_t t25 = 26478LL;

	t25 = (((x113|x114)/x115)-x116);

	if (t25 != -2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = 942308;
	uint32_t x119 = 2494U;

	t26 = (((x117|x118)/x119)-x120);

	if (t26 != 1721865U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x122 = 1;
	volatile int32_t x123 = -1;
	int8_t x124 = 1;
	volatile int64_t t27 = -4913745408071544LL;

	t27 = (((x121|x122)/x123)-x124);

	if (t27 != 96006714LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MIN;
	volatile uint64_t x126 = 1267869146LLU;
	static uint8_t x127 = 2U;
	int32_t x128 = INT32_MAX;
	uint64_t t28 = 20278375719681729LLU;

	t28 = (((x125|x126)/x127)-x128);

	if (t28 != 9223372034707280622LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x129 = -1;
	int64_t x131 = -2713425708LL;
	uint8_t x132 = UINT8_MAX;
	int64_t t29 = -1769667598111LL;

	t29 = (((x129|x130)/x131)-x132);

	if (t29 != -255LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = UINT64_MAX;
	static int64_t x138 = 8566285970LL;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t30 = 250725315249290LLU;

	t30 = (((x137|x138)/x139)-x140);

	if (t30 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x146 = -1;
	int32_t x147 = INT32_MAX;
	static uint8_t x148 = 7U;
	volatile int32_t t31 = 13;

	t31 = (((x145|x146)/x147)-x148);

	if (t31 != -7) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 181526444042634LLU;
	volatile int32_t x150 = -1;
	int32_t x152 = -1;
	volatile uint64_t t32 = 57LLU;

	t32 = (((x149|x150)/x151)-x152);

	if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -610813077455233LL;
	int64_t x154 = INT64_MAX;
	static int8_t x155 = INT8_MIN;
	static int32_t x156 = INT32_MIN;
	volatile int64_t t33 = -195LL;

	t33 = (((x153|x154)/x155)-x156);

	if (t33 != 2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = 1696U;
	int16_t x158 = -6;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = INT8_MAX;
	volatile uint64_t t34 = 27143431469200039LLU;

	t34 = (((x157|x158)/x159)-x160);

	if (t34 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MAX;
	uint8_t x162 = 4U;
	uint32_t x163 = UINT32_MAX;
	int32_t x164 = 317027361;
	volatile uint32_t t35 = 11U;

	t35 = (((x161|x162)/x163)-x164);

	if (t35 != 3977939935U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x165 = 10453U;
	static volatile int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	static uint64_t t36 = 11685431561225050LLU;

	t36 = (((x165|x166)/x167)-x168);

	if (t36 != 32769LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x170 = 210LLU;
	volatile int8_t x171 = 2;
	uint16_t x172 = UINT16_MAX;
	volatile uint64_t t37 = 3458290411LLU;

	t37 = (((x169|x170)/x171)-x172);

	if (t37 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = -5493;
	static uint8_t x174 = 0U;
	uint32_t x175 = 1709966U;
	volatile int64_t x176 = -54401699517631LL;

	t38 = (((x173|x174)/x175)-x176);

	if (t38 != 54401699520142LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = -1;
	uint8_t x178 = 28U;
	volatile int16_t x179 = 5561;
	uint32_t x180 = 816U;
	uint32_t t39 = 33294815U;

	t39 = (((x177|x178)/x179)-x180);

	if (t39 != 4294966480U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x189 = -1;
	volatile int32_t x190 = INT32_MAX;
	int32_t x191 = INT32_MIN;
	static volatile int64_t x192 = INT64_MAX;
	int64_t t40 = 23773337194622LL;

	t40 = (((x189|x190)/x191)-x192);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x198 = -1;
	static volatile int16_t x199 = -1;
	volatile int64_t t41 = 6618289148LL;

	t41 = (((x197|x198)/x199)-x200);

	if (t41 != -58279042LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x201 = 2542;
	int8_t x202 = INT8_MAX;
	uint8_t x203 = UINT8_MAX;
	uint32_t x204 = UINT32_MAX;
	volatile uint32_t t42 = 0U;

	t42 = (((x201|x202)/x203)-x204);

	if (t42 != 11U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	static int16_t x207 = 1;
	int32_t x208 = INT32_MIN;
	volatile int32_t t43 = INT32_MAX;

	t43 = (((x205|x206)/x207)-x208);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = -13042;
	volatile uint8_t x210 = 38U;
	int32_t x211 = -1;
	int8_t x212 = 46;
	int32_t t44 = -288;

	t44 = (((x209|x210)/x211)-x212);

	if (t44 != 12964) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x214 = 1U;
	volatile uint8_t x215 = 100U;
	static uint8_t x216 = UINT8_MAX;
	int32_t t45 = -39168;

	t45 = (((x213|x214)/x215)-x216);

	if (t45 != 21474581) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x217 = 713421335U;
	int64_t x218 = INT64_MAX;
	int32_t x219 = INT32_MIN;
	volatile int8_t x220 = -1;
	static int64_t t46 = 280557589930LL;

	t46 = (((x217|x218)/x219)-x220);

	if (t46 != -4294967294LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = -23387;
	int16_t x222 = INT16_MIN;
	static uint16_t x223 = UINT16_MAX;
	uint16_t x224 = 14855U;
	int32_t t47 = -577083;

	t47 = (((x221|x222)/x223)-x224);

	if (t47 != -14855) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x226 = -1;
	uint8_t x227 = 5U;
	int32_t x228 = -18840;
	volatile int32_t t48 = -25739;

	t48 = (((x225|x226)/x227)-x228);

	if (t48 != 18840) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = 2U;
	static int16_t x231 = -235;
	volatile uint8_t x232 = UINT8_MAX;
	uint64_t t49 = 6LLU;

	t49 = (((x229|x230)/x231)-x232);

	if (t49 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x233 = 0U;
	volatile int64_t t50 = -1211211450825LL;

	t50 = (((x233|x234)/x235)-x236);

	if (t50 != 9223372036854775140LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = INT32_MIN;
	uint32_t x238 = 9486U;
	static int64_t x239 = INT64_MIN;
	static uint8_t x240 = UINT8_MAX;
	volatile int64_t t51 = 5168846LL;

	t51 = (((x237|x238)/x239)-x240);

	if (t51 != -255LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x242 = INT64_MIN;
	int32_t x243 = 143938;
	int64_t x244 = 3951331035LL;
	static int64_t t52 = -4414352484458LL;

	t52 = (((x241|x242)/x243)-x244);

	if (t52 != -3951331035LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x249 = INT64_MIN;
	int16_t x250 = -3;
	uint32_t x252 = 584759U;

	t53 = (((x249|x250)/x251)-x252);

	if (t53 != -584759LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = 54028U;
	uint8_t x254 = 19U;
	volatile int16_t x256 = -1;
	static volatile uint32_t t54 = 252U;

	t54 = (((x253|x254)/x255)-x256);

	if (t54 != 751U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x257 = 0LLU;
	int32_t x258 = -1;
	static int8_t x259 = INT8_MIN;
	uint64_t t55 = 2039304069LLU;

	t55 = (((x257|x258)/x259)-x260);

	if (t55 != 32769LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x265 = INT16_MAX;
	uint64_t x268 = 1310LLU;
	static volatile uint64_t t56 = 114LLU;

	t56 = (((x265|x266)/x267)-x268);

	if (t56 != 18446744073709550306LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x269 = 28U;
	int16_t x270 = -1;
	uint16_t x271 = 95U;
	int16_t x272 = INT16_MAX;
	volatile uint32_t t57 = 51875357U;

	t57 = (((x269|x270)/x271)-x272);

	if (t57 != 45177415U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x274 = -1;
	int64_t x275 = -1LL;
	int64_t x276 = -19153930140766999LL;
	volatile int64_t t58 = 190809535733675016LL;

	t58 = (((x273|x274)/x275)-x276);

	if (t58 != 19153930140767000LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x277 = -66766973LL;
	int8_t x278 = -1;
	volatile int32_t x279 = -1;
	int8_t x280 = -46;
	int64_t t59 = 1677544436LL;

	t59 = (((x277|x278)/x279)-x280);

	if (t59 != 47LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x281 = UINT32_MAX;
	volatile int64_t x283 = -1468681LL;
	static uint16_t x284 = UINT16_MAX;
	volatile int64_t t60 = -1330151407LL;

	t60 = (((x281|x282)/x283)-x284);

	if (t60 != -68459LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x286 = INT16_MIN;
	volatile uint64_t x287 = 15902704986LLU;
	int8_t x288 = 5;
	static uint64_t t61 = 120447301590948LLU;

	t61 = (((x285|x286)/x287)-x288);

	if (t61 != 1159975237LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = 10LL;
	static uint32_t x290 = 43915418U;
	int16_t x291 = 136;
	volatile int8_t x292 = INT8_MIN;
	int64_t t62 = -8686848381819LL;

	t62 = (((x289|x290)/x291)-x292);

	if (t62 != 323035LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = -3177;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = 38LLU;
	volatile uint64_t t63 = 71822528LLU;

	t63 = (((x293|x294)/x295)-x296);

	if (t63 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x301 = UINT64_MAX;
	volatile uint8_t x302 = 0U;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	uint64_t t64 = 3356944751998660LLU;

	t64 = (((x301|x302)/x303)-x304);

	if (t64 != 129LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x305 = 75U;
	volatile uint8_t x306 = 3U;
	volatile int32_t x307 = INT32_MIN;

	t65 = (((x305|x306)/x307)-x308);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = 23646;
	int32_t x310 = -9;
	int8_t x311 = -1;
	int8_t x312 = INT8_MIN;
	volatile int32_t t66 = 7;

	t66 = (((x309|x310)/x311)-x312);

	if (t66 != 129) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MIN;
	int32_t x316 = -264;
	volatile int64_t t67 = -73945609LL;

	t67 = (((x313|x314)/x315)-x316);

	if (t67 != 264LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x317 = UINT8_MAX;
	int16_t x318 = 30;
	int8_t x319 = INT8_MIN;
	static int64_t x320 = 1894900634227008969LL;
	int64_t t68 = -100065731901761479LL;

	t68 = (((x317|x318)/x319)-x320);

	if (t68 != -1894900634227008970LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = INT64_MIN;
	volatile uint32_t x322 = 1176418U;
	int8_t x323 = -6;
	int16_t x324 = INT16_MIN;
	volatile int64_t t69 = 10647551567179LL;

	t69 = (((x321|x322)/x323)-x324);

	if (t69 != 1537228672808965999LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MIN;
	int32_t x331 = -3734;
	uint8_t x332 = 11U;
	int64_t t70 = -5616597LL;

	t70 = (((x329|x330)/x331)-x332);

	if (t70 != 2470104991123380LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x333 = 17668007;
	volatile int32_t x335 = INT32_MIN;
	static uint8_t x336 = UINT8_MAX;
	int64_t t71 = 392474151494LL;

	t71 = (((x333|x334)/x335)-x336);

	if (t71 != -255LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x337 = 99802181098882745LLU;
	int64_t x338 = INT64_MIN;
	volatile int16_t x339 = -503;
	volatile uint64_t t72 = 105LLU;

	t72 = (((x337|x338)/x339)-x340);

	if (t72 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x342 = 1672204;
	int16_t x343 = -1;
	int8_t x344 = INT8_MAX;
	int64_t t73 = 7LL;

	t73 = (((x341|x342)/x343)-x344);

	if (t73 != -5867485LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x346 = INT32_MIN;
	int8_t x347 = -1;
	static volatile uint8_t x348 = UINT8_MAX;

	t74 = (((x345|x346)/x347)-x348);

	if (t74 != -254) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x349 = INT16_MAX;
	volatile int8_t x350 = -15;
	int16_t x352 = INT16_MIN;
	static uint64_t t75 = 4161822LLU;

	t75 = (((x349|x350)/x351)-x352);

	if (t75 != 32769LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x353 = 4U;
	int64_t x354 = INT64_MAX;
	int8_t x355 = -31;
	static volatile uint64_t x356 = UINT64_MAX;
	volatile uint64_t t76 = 260701700743696577LLU;

	t76 = (((x353|x354)/x355)-x356);

	if (t76 != 18149215943488429817LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x357 = 301100258;
	volatile int32_t x359 = 3;

	t77 = (((x357|x358)/x359)-x360);

	if (t77 != -11) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x361 = 444912474962429663LLU;
	static uint32_t x363 = 7340024U;
	uint8_t x364 = 84U;

	t78 = (((x361|x362)/x363)-x364);

	if (t78 != 1317200667354LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = -1;
	int32_t x366 = INT32_MIN;
	int16_t x367 = 14256;
	uint16_t x368 = 14U;

	t79 = (((x365|x366)/x367)-x368);

	if (t79 != -14) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x369 = UINT16_MAX;
	static uint32_t x370 = 4U;
	uint32_t x372 = 464995844U;
	volatile int64_t t80 = 254169776916033LL;

	t80 = (((x369|x370)/x371)-x372);

	if (t80 != -464995844LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = -1;
	static int64_t x374 = 89LL;
	int8_t x375 = -1;
	volatile int64_t x376 = INT64_MAX;
	volatile int64_t t81 = 41193713LL;

	t81 = (((x373|x374)/x375)-x376);

	if (t81 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = 1;
	uint16_t x378 = 24932U;
	int64_t x379 = INT64_MIN;
	volatile uint64_t x380 = 3553580594LLU;
	uint64_t t82 = 5LLU;

	t82 = (((x377|x378)/x379)-x380);

	if (t82 != 18446744070155971022LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = -1LL;
	volatile int64_t x384 = -881387570412233245LL;
	int64_t t83 = -219513588443LL;

	t83 = (((x381|x382)/x383)-x384);

	if (t83 != 881387570412233245LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x386 = 2;
	int16_t x387 = 2;
	int8_t x388 = -1;
	volatile uint32_t t84 = 11U;

	t84 = (((x385|x386)/x387)-x388);

	if (t84 != 9526U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = -946427862342021286LL;
	static uint8_t x390 = 2U;
	static int64_t t85 = 18022576859782LL;

	t85 = (((x389|x390)/x391)-x392);

	if (t85 != 7393967674546914LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x393 = -29;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	volatile uint64_t t86 = 97099551LLU;

	t86 = (((x393|x394)/x395)-x396);

	if (t86 != 2147483649LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x397 = UINT16_MAX;
	volatile int64_t x398 = INT64_MIN;
	uint64_t x400 = UINT64_MAX;
	uint64_t t87 = 31368758752531LLU;

	t87 = (((x397|x398)/x399)-x400);

	if (t87 != 9223372036854710274LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = -1;
	uint16_t x402 = 483U;
	volatile uint8_t x403 = 6U;
	volatile int32_t x404 = 515255;
	volatile int32_t t88 = -122;

	t88 = (((x401|x402)/x403)-x404);

	if (t88 != -515255) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = -3219;
	uint16_t x408 = UINT16_MAX;

	t89 = (((x405|x406)/x407)-x408);

	if (t89 != -65547) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x409 = 1554886715LLU;
	int16_t x410 = -1;
	uint64_t x411 = 3257905616879003LLU;
	int32_t x412 = -31237;
	uint64_t t90 = 11893LLU;

	t90 = (((x409|x410)/x411)-x412);

	if (t90 != 36899LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = 34569368570LLU;
	uint32_t x414 = UINT32_MAX;
	static volatile uint64_t t91 = 12LLU;

	t91 = (((x413|x414)/x415)-x416);

	if (t91 != 18446744073709495624LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x421 = UINT64_MAX;
	uint8_t x422 = 4U;
	static uint32_t x423 = 1039818U;
	static volatile int64_t x424 = -824655554910414993LL;
	uint64_t t92 = 1459458LLU;

	t92 = (((x421|x422)/x423)-x424);

	if (t92 != 824673295268894755LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = 498;
	int64_t x426 = INT64_MIN;
	int64_t x427 = INT64_MIN;
	int8_t x428 = INT8_MIN;
	static volatile int64_t t93 = 6277097LL;

	t93 = (((x425|x426)/x427)-x428);

	if (t93 != 128LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x430 = 3;
	int32_t x431 = INT32_MAX;
	volatile uint64_t x432 = UINT64_MAX;
	uint64_t t94 = 1617061278563LLU;

	t94 = (((x429|x430)/x431)-x432);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x433 = -1;
	uint64_t x434 = UINT64_MAX;
	uint16_t x435 = 2199U;
	int16_t x436 = INT16_MIN;

	t95 = (((x433|x434)/x435)-x436);

	if (t95 != 8388696713861577LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x437 = UINT64_MAX;
	volatile int8_t x439 = INT8_MAX;
	uint64_t x440 = UINT64_MAX;
	uint64_t t96 = 3LLU;

	t96 = (((x437|x438)/x439)-x440);

	if (t96 != 145249953336295683LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = INT32_MAX;
	uint64_t x442 = UINT64_MAX;
	uint8_t x443 = 38U;
	volatile int32_t x444 = 44390;
	volatile uint64_t t97 = 0LLU;

	t97 = (((x441|x442)/x443)-x444);

	if (t97 != 485440633518628020LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = -656441;
	uint64_t x450 = UINT64_MAX;
	int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MIN;

	t98 = (((x449|x450)/x451)-x452);

	if (t98 != 2147483649LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x453 = UINT64_MAX;
	uint8_t x454 = 1U;
	int64_t x455 = -2628LL;

	t99 = (((x453|x454)/x455)-x456);

	if (t99 != 129LLU) { NG(); } else { ; }
	
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

