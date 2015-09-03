#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 42279936669832LLU;
int64_t x9 = 1758910232628296LL;
uint32_t x15 = UINT32_MAX;
int16_t x16 = 300;
int32_t x21 = INT32_MIN;
int8_t x32 = 18;
uint16_t x42 = 31364U;
int64_t x44 = 1LL;
int8_t x49 = -1;
int64_t x56 = INT64_MAX;
static uint32_t x57 = 244346028U;
int64_t x58 = -1LL;
volatile uint64_t x59 = 574086421817586175LLU;
int8_t x61 = 3;
uint8_t x64 = 60U;
int64_t x72 = INT64_MAX;
uint8_t x73 = UINT8_MAX;
uint64_t x74 = UINT64_MAX;
int32_t x78 = -322;
static int8_t x79 = INT8_MAX;
int16_t x82 = INT16_MAX;
uint16_t x86 = UINT16_MAX;
int16_t x87 = INT16_MIN;
volatile uint64_t t20 = 974963644945667182LLU;
int32_t t21 = 133;
static volatile uint32_t x99 = 30966147U;
static int8_t x107 = -6;
uint32_t x113 = 578445365U;
int8_t x114 = INT8_MIN;
int16_t x117 = 1;
uint8_t x123 = 3U;
uint16_t x126 = 2U;
volatile uint16_t x137 = UINT16_MAX;
int32_t x138 = INT32_MIN;
uint64_t x140 = UINT64_MAX;
volatile int32_t x142 = 0;
int64_t x143 = INT64_MIN;
volatile uint64_t t34 = 4493LLU;
uint16_t x157 = UINT16_MAX;
int8_t x159 = INT8_MAX;
static volatile int64_t x162 = INT64_MIN;
static int64_t x165 = INT64_MAX;
volatile int64_t x173 = 91890916497LL;
int16_t x175 = INT16_MIN;
volatile int8_t x176 = -5;
int8_t x177 = 6;
volatile uint32_t t40 = 63U;
static int8_t x185 = INT8_MAX;
int64_t x201 = 63513LL;
volatile uint8_t x202 = 7U;
volatile int64_t t45 = 6777555LL;
int64_t t46 = 780538899623273934LL;
static uint8_t x213 = 27U;
int16_t x226 = -1;
int8_t x227 = -1;
static int32_t x228 = -810;
static int16_t x230 = 5;
uint16_t x233 = 94U;
int16_t x235 = -1;
int16_t x237 = INT16_MIN;
static uint64_t x238 = UINT64_MAX;
uint8_t x240 = UINT8_MAX;
int32_t x242 = INT32_MIN;
static int64_t x243 = -6LL;
static volatile uint64_t t55 = 3926687LLU;
uint16_t x253 = 0U;
static int64_t x258 = -1LL;
volatile uint32_t x259 = 3U;
uint8_t x261 = 15U;
uint16_t x277 = 2U;
int32_t t62 = 116;
int64_t x282 = INT64_MIN;
static uint64_t t65 = 5328083LLU;
uint32_t x293 = UINT32_MAX;
static int32_t x295 = INT32_MAX;
static volatile uint64_t x305 = UINT64_MAX;
uint32_t x306 = 3361271U;
static uint32_t x307 = UINT32_MAX;
int32_t t69 = 83;
volatile int8_t x317 = -1;
uint32_t t72 = 2387573U;
static uint64_t x338 = 18663298LLU;
static uint16_t x340 = UINT16_MAX;
int32_t x352 = -20396599;
volatile int64_t t77 = -31LL;
static uint64_t t78 = 831126516469677152LLU;
static uint16_t x360 = 809U;
volatile int64_t t80 = 25899773LL;
static int16_t x374 = INT16_MIN;
volatile int32_t t82 = 185938;
volatile int8_t x387 = INT8_MIN;
int32_t x389 = 488287151;
volatile int16_t x396 = 3742;
int32_t x397 = INT32_MAX;
uint64_t t89 = 1615802618LLU;
volatile uint64_t x416 = 663227LLU;
int32_t x421 = 13300;
int64_t x429 = -49LL;
int64_t x441 = -2217019506793977226LL;
int32_t x447 = 78564;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = 1264LLU;
	int8_t x3 = -1;
	volatile int64_t x4 = INT64_MAX;

	t0 = (x1|((x2+x3)/x4));

	if (t0 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	volatile int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MIN;
	uint32_t x8 = 21U;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5|((x6+x7)/x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	uint8_t x11 = 78U;
	int16_t x12 = INT16_MIN;
	int64_t t2 = 62406LL;

	t2 = (x9|((x10+x11)/x12));

	if (t2 != 1758910232628296LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 48U;
	int32_t x14 = -1;
	uint32_t t3 = 0U;

	t3 = (x13|((x14+x15)/x16));

	if (t3 != 14316605U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x22 = -6375348;
	int16_t x23 = 101;
	uint64_t x24 = 1109850390952827919LLU;
	volatile uint64_t t4 = 9158LLU;

	t4 = (x21|((x22+x23)/x24));

	if (t4 != 18446744071562067984LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MAX;
	static int32_t x26 = INT32_MAX;
	uint32_t x27 = 450U;
	volatile int16_t x28 = -19;
	uint32_t t5 = 1645943243U;

	t5 = (x25|((x26+x27)/x28));

	if (t5 != 127U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 15U;
	uint64_t x30 = 8724006331808LLU;
	uint16_t x31 = UINT16_MAX;
	volatile uint64_t t6 = 1929733142LLU;

	t6 = (x29|((x30+x31)/x32));

	if (t6 != 484667022079LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	uint32_t x34 = 2420492U;
	uint16_t x35 = 152U;
	uint64_t x36 = 2269935738288199873LLU;
	uint64_t t7 = 7888LLU;

	t7 = (x33|((x34+x35)/x36));

	if (t7 != 65535LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	uint32_t x38 = UINT32_MAX;
	int8_t x39 = INT8_MAX;
	volatile int64_t x40 = INT64_MAX;
	static int64_t t8 = 2008907479922484178LL;

	t8 = (x37|((x38+x39)/x40));

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	uint32_t x43 = UINT32_MAX;
	static volatile int64_t t9 = 3240891LL;

	t9 = (x41|((x42+x43)/x44));

	if (t9 != -9223372036854744445LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 0;
	int32_t x46 = INT32_MIN;
	volatile uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MAX;
	uint64_t t10 = 1LLU;

	t10 = (x45|((x46+x47)/x48));

	if (t10 != 8589934595LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = INT64_MIN;
	uint8_t x51 = UINT8_MAX;
	static volatile int64_t x52 = -10073LL;
	volatile int64_t t11 = -23LL;

	t11 = (x49|((x50+x51)/x52));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x53 = 1289238U;
	uint64_t x54 = 1677119434435430LLU;
	volatile uint64_t x55 = UINT64_MAX;
	uint64_t t12 = 2678LLU;

	t12 = (x53|((x54+x55)/x56));

	if (t12 != 1289238LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x60 = 7481387118164LLU;
	volatile uint64_t t13 = 108961377655310LLU;

	t13 = (x57|((x58+x59)/x60));

	if (t13 != 244412351LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	static int32_t t14 = -10987568;

	t14 = (x61|((x62+x63)/x64));

	if (t14 != -35791389) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = INT8_MIN;
	uint8_t x66 = UINT8_MAX;
	int8_t x67 = -1;
	static uint64_t x68 = 384LLU;
	uint64_t t15 = 38959LLU;

	t15 = (x65|((x66+x67)/x68));

	if (t15 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	static uint16_t x70 = 52U;
	int16_t x71 = INT16_MIN;
	int64_t t16 = INT64_MIN;

	t16 = (x69|((x70+x71)/x72));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x75 = INT32_MIN;
	uint32_t x76 = UINT32_MAX;
	volatile uint64_t t17 = 82880489765931860LLU;

	t17 = (x73|((x74+x75)/x76));

	if (t17 != 4294967551LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	uint32_t x80 = 609U;
	uint32_t t18 = 60586492U;

	t18 = (x77|((x78+x79)/x80));

	if (t18 != 2154536139U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x81 = 1U;
	static volatile int8_t x83 = 5;
	int8_t x84 = -4;
	volatile int32_t t19 = -74;

	t19 = (x81|((x82+x83)/x84));

	if (t19 != -8193) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x85 = 207LLU;
	int32_t x88 = INT32_MIN;

	t20 = (x85|((x86+x87)/x88));

	if (t20 != 207LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	uint8_t x90 = UINT8_MAX;
	volatile int32_t x91 = -894374;
	static int8_t x92 = -1;

	t21 = (x89|((x90+x91)/x92));

	if (t21 != 894207) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x93 = 5U;
	static uint16_t x94 = 4618U;
	volatile int32_t x95 = INT32_MIN;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t22 = 110541342;

	t22 = (x93|((x94+x95)/x96));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	volatile int64_t x98 = -1LL;
	volatile uint16_t x100 = 1U;
	volatile int64_t t23 = -653147750882309170LL;

	t23 = (x97|((x98+x99)/x100));

	if (t23 != 2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = INT32_MAX;
	int8_t x106 = INT8_MAX;
	int32_t x108 = INT32_MIN;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x105|((x106+x107)/x108));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x115 = 599251598;
	int32_t x116 = INT32_MIN;
	uint32_t t25 = 204U;

	t25 = (x113|((x114+x115)/x116));

	if (t25 != 578445365U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x118 = UINT16_MAX;
	int8_t x119 = -1;
	static int32_t x120 = 9097249;
	volatile int32_t t26 = -91352351;

	t26 = (x117|((x118+x119)/x120));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MAX;
	volatile uint8_t x124 = UINT8_MAX;
	volatile int32_t t27 = INT32_MAX;

	t27 = (x121|((x122+x123)/x124));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MAX;
	int64_t x127 = INT64_MIN;
	uint32_t x128 = 22905035U;
	static int64_t t28 = -25LL;

	t28 = (x125|((x126+x127)/x128));

	if (t28 != -402678775809LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = 5494;
	int8_t x130 = 43;
	static int16_t x131 = 1173;
	uint64_t x132 = 1LLU;
	uint64_t t29 = 1586LLU;

	t29 = (x129|((x130+x131)/x132));

	if (t29 != 5622LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MAX;
	uint64_t x134 = 3498668413796LLU;
	int16_t x135 = -1;
	volatile uint64_t x136 = UINT64_MAX;
	volatile uint64_t t30 = 159LLU;

	t30 = (x133|((x134+x135)/x136));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x139 = UINT64_MAX;
	volatile uint64_t t31 = 1LLU;

	t31 = (x137|((x138+x139)/x140));

	if (t31 != 65535LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x141 = 357418997LLU;
	volatile int64_t x144 = -19164434060588433LL;
	static uint64_t t32 = 175434101134LLU;

	t32 = (x141|((x142+x143)/x144));

	if (t32 != 357418997LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = UINT64_MAX;
	uint64_t x146 = 305574850474262240LLU;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = INT8_MIN;
	static uint64_t t33 = UINT64_MAX;

	t33 = (x145|((x146+x147)/x148));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x153 = 286207LLU;
	int64_t x154 = INT64_MAX;
	int8_t x155 = 0;
	static int16_t x156 = INT16_MIN;

	t34 = (x153|((x154+x155)/x156));

	if (t34 != 18446462598733127167LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x158 = INT8_MIN;
	static volatile int8_t x160 = INT8_MIN;
	int32_t t35 = 0;

	t35 = (x157|((x158+x159)/x160));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 92U;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = INT8_MIN;
	volatile uint64_t t36 = 7397040338597758LLU;

	t36 = (x161|((x162+x163)/x164));

	if (t36 != 92LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x166 = 4U;
	int8_t x167 = 0;
	static int16_t x168 = INT16_MAX;
	volatile int64_t t37 = INT64_MAX;

	t37 = (x165|((x166+x167)/x168));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x169 = INT64_MAX;
	int64_t x170 = 7029980592911LL;
	int16_t x171 = 97;
	int8_t x172 = -1;
	volatile int64_t t38 = -190436435LL;

	t38 = (x169|((x170+x171)/x172));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = 2006LL;
	static volatile int64_t t39 = 15012321843LL;

	t39 = (x173|((x174+x175)/x176));

	if (t39 != 91890916505LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x178 = -19139891;
	int32_t x179 = -1;
	static uint32_t x180 = 2U;

	t40 = (x177|((x178+x179)/x180));

	if (t40 != 2137913702U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x186 = -3;
	uint8_t x187 = 15U;
	volatile uint16_t x188 = 184U;
	volatile int32_t t41 = -163775103;

	t41 = (x185|((x186+x187)/x188));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = -203;
	volatile uint32_t x190 = UINT32_MAX;
	int8_t x191 = INT8_MIN;
	int64_t x192 = 63695641LL;
	volatile int64_t t42 = 1409243974LL;

	t42 = (x189|((x190+x191)/x192));

	if (t42 != -137LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MAX;
	static int32_t x194 = -1;
	static uint64_t x195 = 86282851576LLU;
	int16_t x196 = 9;
	volatile uint64_t t43 = 1065LLU;

	t43 = (x193|((x194+x195)/x196));

	if (t43 != 9586999295LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 15189012242577673LLU;
	uint64_t x198 = UINT64_MAX;
	static int16_t x199 = -1;
	int64_t x200 = INT64_MIN;
	volatile uint64_t t44 = 692214LLU;

	t44 = (x197|((x198+x199)/x200));

	if (t44 != 15189012242577673LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x203 = 94U;
	uint8_t x204 = 9U;

	t45 = (x201|((x202+x203)/x204));

	if (t45 != 63515LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = UINT32_MAX;
	static int64_t x206 = 240100204LL;
	int32_t x207 = INT32_MIN;
	volatile int8_t x208 = INT8_MIN;

	t46 = (x205|((x206+x207)/x208));

	if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x214 = INT8_MIN;
	static int32_t x215 = -230467;
	int8_t x216 = INT8_MIN;
	volatile int32_t t47 = -380;

	t47 = (x213|((x214+x215)/x216));

	if (t47 != 1819) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x217 = -1LL;
	int64_t x218 = 1LL;
	int8_t x219 = INT8_MIN;
	static int32_t x220 = INT32_MIN;
	int64_t t48 = 31425501323LL;

	t48 = (x217|((x218+x219)/x220));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x221 = INT64_MAX;
	volatile int64_t x222 = 172584194219LL;
	static uint16_t x223 = UINT16_MAX;
	int16_t x224 = -21;
	volatile int64_t t49 = 4297257457631876426LL;

	t49 = (x221|((x222+x223)/x224));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = 4489441704104822532LL;
	int64_t t50 = -110319260326652125LL;

	t50 = (x225|((x226+x227)/x228));

	if (t50 != 4489441704104822532LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x229 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	static int64_t x232 = INT64_MAX;
	int64_t t51 = INT64_MIN;

	t51 = (x229|((x230+x231)/x232));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x234 = 145570LLU;
	int64_t x236 = -165LL;
	volatile uint64_t t52 = 40936724591LLU;

	t52 = (x233|((x234+x235)/x236));

	if (t52 != 94LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x239 = -1749602LL;
	uint64_t t53 = 173LLU;

	t53 = (x237|((x238+x239)/x240));

	if (t53 != 18446744073709545011LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x241 = UINT8_MAX;
	static int8_t x244 = INT8_MIN;
	int64_t t54 = 34391LL;

	t54 = (x241|((x242+x243)/x244));

	if (t54 != 16777471LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x245 = INT32_MIN;
	volatile uint64_t x246 = 16717525610998251LLU;
	int64_t x247 = 1942442059680689807LL;
	int64_t x248 = INT64_MAX;

	t55 = (x245|((x246+x247)/x248));

	if (t55 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x254 = INT64_MAX;
	volatile int32_t x255 = -1;
	static int32_t x256 = -1;
	int64_t t56 = 8608782555307185LL;

	t56 = (x253|((x254+x255)/x256));

	if (t56 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 92251443141665661LLU;
	int32_t x260 = 15624;
	uint64_t t57 = 439581844LLU;

	t57 = (x257|((x258+x259)/x260));

	if (t57 != 92251443141665661LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x262 = INT16_MAX;
	uint8_t x263 = 39U;
	static int16_t x264 = -1;
	int32_t t58 = 81254;

	t58 = (x261|((x262+x263)/x264));

	if (t58 != -32801) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MAX;
	uint64_t x267 = 891321095223157424LLU;
	uint32_t x268 = UINT32_MAX;
	volatile uint64_t t59 = 58LLU;

	t59 = (x265|((x266+x267)/x268));

	if (t59 != 2147483647LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x269 = 1298265761037498LLU;
	int64_t x270 = -942366LL;
	volatile int64_t x271 = -1LL;
	int8_t x272 = INT8_MAX;
	uint64_t t60 = 439025792403LLU;

	t60 = (x269|((x270+x271)/x272));

	if (t60 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = 1304;
	uint16_t x274 = 114U;
	int8_t x275 = -27;
	int16_t x276 = -80;
	int32_t t61 = 23101174;

	t61 = (x273|((x274+x275)/x276));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x278 = 1U;
	uint8_t x279 = UINT8_MAX;
	uint16_t x280 = 415U;

	t62 = (x277|((x278+x279)/x280));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x281 = -1;
	static int32_t x283 = 37;
	uint16_t x284 = UINT16_MAX;
	static int64_t t63 = 1871876051LL;

	t63 = (x281|((x282+x283)/x284));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 2U;
	int32_t x286 = 4;
	static volatile uint16_t x287 = UINT16_MAX;
	static int32_t x288 = INT32_MIN;
	volatile int32_t t64 = -15;

	t64 = (x285|((x286+x287)/x288));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = INT32_MIN;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = -1;
	int8_t x292 = 12;

	t65 = (x289|((x290+x291)/x292));

	if (t65 != 18446744072993723733LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x294 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x293|((x294+x295)/x296));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x297 = UINT8_MAX;
	int16_t x298 = -1;
	volatile uint16_t x299 = 3278U;
	int64_t x300 = 27445827496667LL;
	int64_t t67 = 125LL;

	t67 = (x297|((x298+x299)/x300));

	if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x308 = 244LLU;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x305|((x306+x307)/x308));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MIN;
	static int8_t x310 = INT8_MAX;
	uint16_t x311 = UINT16_MAX;
	volatile int8_t x312 = INT8_MIN;

	t69 = (x309|((x310+x311)/x312));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = -1;
	int32_t x314 = INT32_MAX;
	static int16_t x315 = -1;
	uint8_t x316 = 2U;
	volatile int32_t t70 = -205;

	t70 = (x313|((x314+x315)/x316));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x318 = 0U;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MAX;
	uint32_t t71 = UINT32_MAX;

	t71 = (x317|((x318+x319)/x320));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x325 = 31302U;
	uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 1746509U;
	static int16_t x328 = INT16_MAX;

	t72 = (x325|((x326+x327)/x328));

	if (t72 != 31351U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x329 = 3U;
	uint32_t x330 = 952560041U;
	static int8_t x331 = INT8_MAX;
	int16_t x332 = -5403;
	uint32_t t73 = 1612U;

	t73 = (x329|((x330+x331)/x332));

	if (t73 != 3U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x333 = UINT64_MAX;
	static volatile int8_t x334 = INT8_MIN;
	int64_t x335 = 217350721213026982LL;
	volatile int32_t x336 = INT32_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = (x333|((x334+x335)/x336));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x337 = 8233803LL;
	static volatile int64_t x339 = 32435269514406950LL;
	uint64_t t75 = 495147304802LLU;

	t75 = (x337|((x338+x339)/x340));

	if (t75 != 494936255455LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x341 = 9U;
	int16_t x342 = INT16_MIN;
	uint32_t x343 = UINT32_MAX;
	static volatile int64_t x344 = INT64_MIN;
	volatile int64_t t76 = -11098262316335348LL;

	t76 = (x341|((x342+x343)/x344));

	if (t76 != 9LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x349 = -1;
	volatile int64_t x350 = -1LL;
	int16_t x351 = INT16_MIN;

	t77 = (x349|((x350+x351)/x352));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x353 = 0LLU;
	uint64_t x354 = 73LLU;
	volatile uint16_t x355 = UINT16_MAX;
	static uint16_t x356 = 12342U;

	t78 = (x353|((x354+x355)/x356));

	if (t78 != 5LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x357 = 1U;
	uint64_t x358 = 1LLU;
	int8_t x359 = 6;
	static uint64_t t79 = 55975405414LLU;

	t79 = (x357|((x358+x359)/x360));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x365 = 4LL;
	uint8_t x366 = 9U;
	int16_t x367 = -3;
	int32_t x368 = INT32_MAX;

	t80 = (x365|((x366+x367)/x368));

	if (t80 != 4LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = INT8_MAX;
	int8_t x370 = 0;
	int8_t x371 = 15;
	int32_t x372 = -24837091;
	volatile int32_t t81 = -7164;

	t81 = (x369|((x370+x371)/x372));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x373 = INT16_MIN;
	volatile uint16_t x375 = UINT16_MAX;
	int8_t x376 = INT8_MAX;

	t82 = (x373|((x374+x375)/x376));

	if (t82 != -32510) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = 763857LLU;
	int64_t x378 = INT64_MIN;
	int64_t x379 = 449114812603114087LL;
	static uint32_t x380 = 12552U;
	volatile uint64_t t83 = 114595LLU;

	t83 = (x377|((x378+x379)/x380));

	if (t83 != 18446045041107402745LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x381 = 6972312932306317LLU;
	volatile int16_t x382 = INT16_MIN;
	volatile int8_t x383 = INT8_MIN;
	uint32_t x384 = 136540U;
	uint64_t t84 = 14114877400LLU;

	t84 = (x381|((x382+x383)/x384));

	if (t84 != 6972312932319199LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x385 = 1;
	volatile int32_t x386 = 88021926;
	uint32_t x388 = 19062U;
	uint32_t t85 = 1954214817U;

	t85 = (x385|((x386+x387)/x388));

	if (t85 != 4617U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x390 = INT32_MAX;
	uint64_t x391 = 59405539491LLU;
	static int32_t x392 = -1;
	volatile uint64_t t86 = 6418980LLU;

	t86 = (x389|((x390+x391)/x392));

	if (t86 != 488287151LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x393 = -97371LL;
	static int16_t x394 = INT16_MIN;
	volatile int64_t x395 = -470677954158268723LL;
	static volatile int64_t t87 = -376LL;

	t87 = (x393|((x394+x395)/x396));

	if (t87 != -90203LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x398 = INT8_MIN;
	static int8_t x399 = -1;
	int32_t x400 = -43;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x397|((x398+x399)/x400));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x405 = 171561264817LLU;
	uint8_t x406 = UINT8_MAX;
	static volatile uint8_t x407 = 1U;
	volatile int8_t x408 = INT8_MAX;

	t89 = (x405|((x406+x407)/x408));

	if (t89 != 171561264819LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x409 = 1068840LL;
	static uint16_t x410 = 1802U;
	static uint32_t x411 = 21617794U;
	volatile int64_t x412 = INT64_MIN;
	volatile int64_t t90 = -998LL;

	t90 = (x409|((x410+x411)/x412));

	if (t90 != 1068840LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x413 = INT64_MIN;
	volatile uint64_t x414 = 3413134123LLU;
	static int64_t x415 = 98235LL;
	static volatile uint64_t t91 = 994573805LLU;

	t91 = (x413|((x414+x415)/x416));

	if (t91 != 9223372036854780954LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = 0LL;
	int32_t x418 = 250;
	int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MIN;
	volatile int64_t t92 = 1628LL;

	t92 = (x417|((x418+x419)/x420));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x422 = INT16_MIN;
	uint16_t x423 = 2U;
	uint8_t x424 = 2U;
	static int32_t t93 = 15602;

	t93 = (x421|((x422+x423)/x424));

	if (t93 != -3083) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x425 = INT32_MIN;
	static int8_t x426 = INT8_MIN;
	int8_t x427 = -2;
	volatile uint32_t x428 = 28981U;
	volatile uint32_t t94 = 1U;

	t94 = (x425|((x426+x427)/x428));

	if (t94 != 2147631847U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x430 = 1;
	static uint16_t x431 = 82U;
	uint8_t x432 = 64U;
	int64_t t95 = 9420950601LL;

	t95 = (x429|((x430+x431)/x432));

	if (t95 != -49LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x442 = INT32_MIN;
	static uint32_t x443 = UINT32_MAX;
	volatile uint8_t x444 = UINT8_MAX;
	static int64_t t96 = 220666890878463892LL;

	t96 = (x441|((x442+x443)/x444));

	if (t96 != -2217019506785588490LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x445 = -21176115589746LL;
	int64_t x446 = -1LL;
	int64_t x448 = INT64_MIN;
	int64_t t97 = 3LL;

	t97 = (x445|((x446+x447)/x448));

	if (t97 != -21176115589746LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x449 = 3U;
	volatile uint32_t x450 = 118096527U;
	uint32_t x451 = 77U;
	volatile int16_t x452 = -1;
	uint32_t t98 = 38949U;

	t98 = (x449|((x450+x451)/x452));

	if (t98 != 3U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x461 = 21U;
	uint8_t x462 = 50U;
	int32_t x463 = 2;
	uint8_t x464 = 20U;
	volatile int32_t t99 = -448;

	t99 = (x461|((x462+x463)/x464));

	if (t99 != 23) { NG(); } else { ; }
	
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

