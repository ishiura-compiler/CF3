#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x7 = 5314U;
int8_t x19 = -1;
int32_t x31 = 64761626;
volatile int32_t x39 = -1;
int64_t x40 = -1LL;
volatile int32_t t10 = 567913;
volatile int8_t x50 = -1;
int8_t x51 = INT8_MAX;
static int32_t t12 = -17;
int64_t x54 = INT64_MAX;
int8_t x58 = INT8_MIN;
static volatile int32_t x62 = 25;
volatile int8_t x65 = 18;
uint32_t x66 = UINT32_MAX;
int64_t x68 = -1051827130LL;
int16_t x81 = 0;
volatile int32_t t19 = 7004529;
int8_t x96 = -1;
volatile int32_t t22 = 6121;
int32_t x100 = INT32_MIN;
volatile uint8_t x104 = UINT8_MAX;
static int32_t x106 = INT32_MIN;
int16_t x107 = INT16_MIN;
uint64_t x111 = 1126LLU;
int8_t x112 = INT8_MIN;
int64_t x114 = INT64_MIN;
volatile int32_t t27 = -3242;
int8_t x123 = -1;
volatile int32_t t29 = 6148130;
volatile int32_t t30 = 240630;
int8_t x131 = INT8_MIN;
uint64_t x133 = 5118LLU;
int32_t t33 = 956;
volatile int16_t x141 = INT16_MIN;
int32_t x145 = -61758;
static uint64_t x146 = 728680695118158555LLU;
static uint64_t x159 = UINT64_MAX;
int32_t x164 = INT32_MAX;
volatile int32_t t41 = 1;
static int64_t x174 = -172LL;
int16_t x179 = INT16_MIN;
int8_t x184 = INT8_MIN;
uint64_t x186 = UINT64_MAX;
volatile int32_t x193 = INT32_MAX;
static int8_t x197 = INT8_MAX;
volatile uint32_t x211 = 104329394U;
int8_t x213 = INT8_MIN;
int8_t x214 = -1;
int32_t x215 = INT32_MIN;
static volatile int64_t x216 = 1038493851513112LL;
int32_t t52 = -32391;
int32_t x218 = -1;
int32_t x220 = -1;
volatile int16_t x222 = INT16_MIN;
static int32_t t54 = 9710283;
int8_t x226 = INT8_MAX;
static int32_t t56 = 38209;
int64_t x236 = INT64_MIN;
int8_t x238 = INT8_MIN;
int64_t x243 = INT64_MAX;
int32_t t60 = -18080918;
static volatile int32_t x252 = INT32_MAX;
static int8_t x255 = INT8_MIN;
uint8_t x256 = 72U;
volatile uint8_t x259 = 5U;
uint32_t x264 = UINT32_MAX;
volatile int64_t x266 = 86821191LL;
volatile int32_t t65 = -1126456;
volatile int16_t x270 = INT16_MIN;
int32_t t66 = 23512;
int32_t t68 = 821818;
volatile uint64_t x294 = 2002945403LLU;
static volatile int32_t t73 = 0;
static uint64_t x306 = UINT64_MAX;
static volatile int16_t x313 = -1;
static int32_t t77 = 141532;
uint64_t x317 = UINT64_MAX;
volatile uint32_t x319 = 30671045U;
volatile uint32_t x321 = UINT32_MAX;
static volatile uint8_t x324 = 2U;
uint8_t x325 = UINT8_MAX;
volatile int16_t x330 = -1;
int64_t x336 = 10762157LL;
int64_t x337 = 108796565618526LL;
int32_t x339 = 107;
uint64_t x342 = 4570946634082307LLU;
int16_t x347 = 16;
static volatile int32_t t85 = -2120197;
volatile uint64_t x354 = UINT64_MAX;
volatile int8_t x356 = INT8_MIN;
uint64_t x359 = 41223301304491LLU;
static volatile int32_t t88 = -7709051;
int16_t x362 = 1;
static int64_t x371 = INT64_MAX;
volatile int32_t t92 = -1989403;
int64_t x378 = INT64_MIN;
uint32_t x382 = 1025921U;
int64_t x387 = INT64_MIN;
int16_t x401 = -1;
uint8_t x402 = 12U;
int32_t x404 = INT32_MAX;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	static uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MIN;
	static uint16_t x4 = 11282U;
	static volatile int32_t t0 = 761745421;

	t0 = (x1==(x2+(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile int32_t x6 = INT32_MIN;
	int8_t x8 = -1;
	int32_t t1 = 237022756;

	t1 = (x5==(x6+(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	static volatile int8_t x10 = 60;
	int16_t x11 = INT16_MIN;
	int64_t x12 = -237LL;
	volatile int32_t t2 = -3404193;

	t2 = (x9==(x10+(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint16_t x14 = UINT16_MAX;
	volatile int16_t x15 = INT16_MIN;
	static volatile int64_t x16 = INT64_MIN;
	int32_t t3 = -144;

	t3 = (x13==(x14+(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = -16574463;
	volatile int64_t x20 = -270702559443LL;
	volatile int32_t t4 = -182;

	t4 = (x17==(x18+(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	static uint16_t x22 = 3650U;
	int8_t x23 = INT8_MIN;
	int32_t x24 = -14126;
	int32_t t5 = 0;

	t5 = (x21==(x22+(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	volatile int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	int8_t x28 = 0;
	int32_t t6 = 404679118;

	t6 = (x25==(x26+(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MAX;
	int32_t x30 = -930199302;
	static int16_t x32 = INT16_MIN;
	int32_t t7 = 209;

	t7 = (x29==(x30+(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 12U;
	uint32_t x34 = 2624880U;
	static uint16_t x35 = 39U;
	volatile int8_t x36 = -1;
	volatile int32_t t8 = 267;

	t8 = (x33==(x34+(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x37 = 8U;
	int16_t x38 = 13913;
	volatile int32_t t9 = -55;

	t9 = (x37==(x38+(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	int64_t x44 = -1LL;

	t10 = (x41==(x42+(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint64_t x46 = 744282486591LLU;
	int8_t x47 = -1;
	volatile int8_t x48 = 29;
	volatile int32_t t11 = 11211216;

	t11 = (x45==(x46+(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -27LL;
	uint8_t x52 = 0U;

	t12 = (x49==(x50+(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	volatile uint64_t x55 = 1066272906LLU;
	static uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = -40;

	t13 = (x53==(x54+(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 1;
	static int16_t x59 = INT16_MIN;
	static int16_t x60 = 1;
	volatile int32_t t14 = -30056201;

	t14 = (x57==(x58+(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	static int32_t x63 = -1;
	int16_t x64 = INT16_MAX;
	int32_t t15 = 11;

	t15 = (x61==(x62+(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x67 = -1;
	int32_t t16 = -1;

	t16 = (x65==(x66+(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -31;
	static int32_t x70 = -1025669;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 83825165;

	t17 = (x69==(x70+(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	int64_t x78 = -1LL;
	uint64_t x79 = UINT64_MAX;
	uint8_t x80 = 3U;
	int32_t t18 = 31878517;

	t18 = (x77==(x78+(x79<x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x82 = -27;
	int16_t x83 = INT16_MAX;
	static uint8_t x84 = 1U;

	t19 = (x81==(x82+(x83<x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	static volatile uint32_t x86 = UINT32_MAX;
	uint8_t x87 = UINT8_MAX;
	uint8_t x88 = 113U;
	volatile int32_t t20 = 846;

	t20 = (x85==(x86+(x87<x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MIN;
	static uint32_t x91 = 3564U;
	static int8_t x92 = INT8_MIN;
	int32_t t21 = 3362176;

	t21 = (x89==(x90+(x91<x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -3LL;
	int16_t x94 = INT16_MIN;
	volatile int32_t x95 = INT32_MAX;

	t22 = (x93==(x94+(x95<x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	uint32_t x98 = 1U;
	int64_t x99 = -1593050271914722358LL;
	static volatile int32_t t23 = -26747345;

	t23 = (x97==(x98+(x99<x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 8663381U;
	volatile uint8_t x102 = 3U;
	int16_t x103 = 122;
	int32_t t24 = -206;

	t24 = (x101==(x102+(x103<x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x105 = 1731693U;
	static int32_t x108 = -228785748;
	int32_t t25 = -104389704;

	t25 = (x105==(x106+(x107<x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = UINT64_MAX;
	volatile int32_t x110 = 3551;
	static volatile int32_t t26 = -24251732;

	t26 = (x109==(x110+(x111<x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 1703834363LL;
	uint8_t x115 = UINT8_MAX;
	static int64_t x116 = INT64_MAX;

	t27 = (x113==(x114+(x115<x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = -1;
	volatile uint16_t x118 = 268U;
	int8_t x119 = INT8_MAX;
	int64_t x120 = INT64_MIN;
	int32_t t28 = 11598334;

	t28 = (x117==(x118+(x119<x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	uint8_t x122 = 0U;
	int8_t x124 = INT8_MIN;

	t29 = (x121==(x122+(x123<x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	int32_t x126 = -8;
	int16_t x127 = 107;
	static int64_t x128 = -1LL;

	t30 = (x125==(x126+(x127<x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = UINT64_MAX;
	volatile uint32_t x130 = 1092413U;
	int16_t x132 = -1;
	static volatile int32_t t31 = -66116;

	t31 = (x129==(x130+(x131<x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MAX;
	volatile int16_t x136 = INT16_MAX;
	int32_t t32 = 29525301;

	t32 = (x133==(x134+(x135<x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = UINT8_MAX;
	static int8_t x138 = INT8_MIN;
	uint32_t x139 = UINT32_MAX;
	static int16_t x140 = -366;

	t33 = (x137==(x138+(x139<x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x142 = INT32_MIN;
	int32_t x143 = -34;
	static int32_t x144 = INT32_MIN;
	int32_t t34 = -23581;

	t34 = (x141==(x142+(x143<x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x147 = -2097320262LL;
	uint64_t x148 = 3235800LLU;
	int32_t t35 = 94619349;

	t35 = (x145==(x146+(x147<x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	volatile int32_t x150 = -1;
	uint8_t x151 = 1U;
	volatile int64_t x152 = INT64_MIN;
	int32_t t36 = -89665371;

	t36 = (x149==(x150+(x151<x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = -1;
	static int16_t x154 = INT16_MIN;
	uint8_t x155 = UINT8_MAX;
	static volatile int16_t x156 = INT16_MAX;
	int32_t t37 = 3;

	t37 = (x153==(x154+(x155<x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	uint64_t x160 = 15723592240085145LLU;
	static volatile int32_t t38 = -178252771;

	t38 = (x157==(x158+(x159<x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x161 = 0U;
	uint32_t x162 = 1233U;
	volatile int32_t x163 = 496616362;
	int32_t t39 = 205;

	t39 = (x161==(x162+(x163<x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 16U;
	static uint64_t x166 = 37919568601244LLU;
	int8_t x167 = INT8_MAX;
	static uint64_t x168 = UINT64_MAX;
	volatile int32_t t40 = 406173648;

	t40 = (x165==(x166+(x167<x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int16_t x170 = INT16_MAX;
	static int64_t x171 = INT64_MAX;
	static int64_t x172 = INT64_MIN;

	t41 = (x169==(x170+(x171<x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = 317459U;
	uint64_t x175 = 75559647LLU;
	uint16_t x176 = 43U;
	int32_t t42 = -1135654;

	t42 = (x173==(x174+(x175<x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x177 = 120U;
	static volatile int8_t x178 = INT8_MIN;
	static volatile int8_t x180 = -6;
	volatile int32_t t43 = 14398201;

	t43 = (x177==(x178+(x179<x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	uint64_t x182 = 69098771811025LLU;
	int64_t x183 = -3944336886306LL;
	int32_t t44 = -33556;

	t44 = (x181==(x182+(x183<x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = -1LL;
	int8_t x187 = -31;
	volatile int64_t x188 = -11098723616LL;
	volatile int32_t t45 = -2;

	t45 = (x185==(x186+(x187<x188)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = 825LLU;
	int8_t x190 = 0;
	volatile int64_t x191 = INT64_MIN;
	static uint64_t x192 = UINT64_MAX;
	volatile int32_t t46 = 1832;

	t46 = (x189==(x190+(x191<x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x194 = 115;
	static volatile int16_t x195 = INT16_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t47 = 316875;

	t47 = (x193==(x194+(x195<x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x198 = 1030033810929377LLU;
	int64_t x199 = -51073954200330567LL;
	volatile uint32_t x200 = 7U;
	int32_t t48 = 1307314;

	t48 = (x197==(x198+(x199<x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = INT64_MAX;
	int16_t x202 = 11;
	int8_t x203 = -8;
	static uint32_t x204 = 64847U;
	int32_t t49 = 104459;

	t49 = (x201==(x202+(x203<x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MAX;
	int8_t x207 = -35;
	int64_t x208 = INT64_MIN;
	int32_t t50 = -1;

	t50 = (x205==(x206+(x207<x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x209 = -3068658;
	int64_t x210 = -19760072629LL;
	int32_t x212 = INT32_MIN;
	int32_t t51 = -17104;

	t51 = (x209==(x210+(x211<x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {


	t52 = (x213==(x214+(x215<x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MIN;
	static uint32_t x219 = 1110062541U;
	volatile int32_t t53 = -10;

	t53 = (x217==(x218+(x219<x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MAX;
	int8_t x223 = INT8_MIN;
	volatile uint16_t x224 = 1U;

	t54 = (x221==(x222+(x223<x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = 3788LL;
	int32_t x227 = -10837657;
	int16_t x228 = INT16_MIN;
	int32_t t55 = 638;

	t55 = (x225==(x226+(x227<x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -1;
	uint16_t x230 = UINT16_MAX;
	uint64_t x231 = 10305670587035LLU;
	int16_t x232 = INT16_MIN;

	t56 = (x229==(x230+(x231<x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x233 = 2;
	uint32_t x234 = 4U;
	int64_t x235 = INT64_MAX;
	volatile int32_t t57 = 0;

	t57 = (x233==(x234+(x235<x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -6767294207531LL;
	volatile uint64_t x239 = 47829747LLU;
	int8_t x240 = INT8_MIN;
	volatile int32_t t58 = 20620;

	t58 = (x237==(x238+(x239<x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MAX;
	int64_t x242 = INT64_MIN;
	static int16_t x244 = -3;
	volatile int32_t t59 = -10209;

	t59 = (x241==(x242+(x243<x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 49U;
	int16_t x246 = -3;
	volatile int64_t x247 = -1LL;
	uint16_t x248 = 508U;

	t60 = (x245==(x246+(x247<x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = INT16_MAX;
	int64_t x250 = -59966393747836254LL;
	uint8_t x251 = 3U;
	static int32_t t61 = 1;

	t61 = (x249==(x250+(x251<x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 268361698LLU;
	volatile int8_t x254 = 0;
	int32_t t62 = -456589;

	t62 = (x253==(x254+(x255<x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 616U;
	uint16_t x258 = UINT16_MAX;
	int8_t x260 = 8;
	volatile int32_t t63 = -170273623;

	t63 = (x257==(x258+(x259<x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = 0;
	volatile int8_t x262 = INT8_MAX;
	int16_t x263 = -6811;
	volatile int32_t t64 = -3;

	t64 = (x261==(x262+(x263<x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = INT64_MIN;
	static int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MIN;

	t65 = (x265==(x266+(x267<x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x269 = UINT8_MAX;
	int64_t x271 = -1LL;
	volatile int16_t x272 = INT16_MIN;

	t66 = (x269==(x270+(x271<x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MIN;
	static uint32_t x275 = UINT32_MAX;
	int32_t x276 = -2;
	volatile int32_t t67 = -282361;

	t67 = (x273==(x274+(x275<x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -1;
	int16_t x278 = -1;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = 608299606171LLU;

	t68 = (x277==(x278+(x279<x280)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x281 = UINT32_MAX;
	uint16_t x282 = 17252U;
	static uint64_t x283 = UINT64_MAX;
	static int8_t x284 = INT8_MIN;
	static int32_t t69 = -126319;

	t69 = (x281==(x282+(x283<x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x285 = UINT16_MAX;
	static int64_t x286 = -10856988461LL;
	int64_t x287 = INT64_MAX;
	int8_t x288 = 2;
	volatile int32_t t70 = 65228492;

	t70 = (x285==(x286+(x287<x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x289 = UINT8_MAX;
	volatile int32_t x290 = INT32_MIN;
	static volatile int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t71 = 199461;

	t71 = (x289==(x290+(x291<x292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x293 = 10U;
	int8_t x295 = -1;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t72 = 9619706;

	t72 = (x293==(x294+(x295<x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x297 = INT64_MIN;
	static volatile int8_t x298 = 15;
	int64_t x299 = 27188939564082191LL;
	uint32_t x300 = UINT32_MAX;

	t73 = (x297==(x298+(x299<x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = -1;
	int32_t x303 = 73066211;
	int32_t x304 = 118963;
	static int32_t t74 = -164;

	t74 = (x301==(x302+(x303<x304)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = -1;
	int32_t x307 = INT32_MIN;
	volatile int32_t x308 = -1;
	int32_t t75 = -485528;

	t75 = (x305==(x306+(x307<x308)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x309 = UINT16_MAX;
	uint64_t x310 = 90LLU;
	uint8_t x311 = 0U;
	uint16_t x312 = UINT16_MAX;
	int32_t t76 = 101043580;

	t76 = (x309==(x310+(x311<x312)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x314 = 4572219076687633LL;
	volatile int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;

	t77 = (x313==(x314+(x315<x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x318 = INT32_MIN;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t78 = -132664365;

	t78 = (x317==(x318+(x319<x320)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x322 = 0U;
	int32_t x323 = 2856972;
	int32_t t79 = -6852;

	t79 = (x321==(x322+(x323<x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x326 = INT32_MIN;
	static volatile uint64_t x327 = 298560435LLU;
	int64_t x328 = -1590136LL;
	volatile int32_t t80 = 32183791;

	t80 = (x325==(x326+(x327<x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = -1;
	uint64_t x331 = 3307121LLU;
	static uint8_t x332 = 6U;
	static volatile int32_t t81 = 98434;

	t81 = (x329==(x330+(x331<x332)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x333 = UINT8_MAX;
	int8_t x334 = -1;
	static uint16_t x335 = 417U;
	int32_t t82 = 1755804;

	t82 = (x333==(x334+(x335<x336)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x338 = 274273860745759284LL;
	uint8_t x340 = 3U;
	static int32_t t83 = 164769;

	t83 = (x337==(x338+(x339<x340)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x341 = INT32_MAX;
	int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MIN;
	int32_t t84 = 6250;

	t84 = (x341==(x342+(x343<x344)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = -5;
	int16_t x346 = 3578;
	static int8_t x348 = 0;

	t85 = (x345==(x346+(x347<x348)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = -1LL;
	int16_t x350 = 10;
	uint16_t x351 = 5U;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t86 = 652227615;

	t86 = (x349==(x350+(x351<x352)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x353 = 990056355719631LLU;
	int32_t x355 = INT32_MAX;
	volatile int32_t t87 = -12482674;

	t87 = (x353==(x354+(x355<x356)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x357 = UINT64_MAX;
	static volatile uint8_t x358 = 16U;
	uint64_t x360 = UINT64_MAX;

	t88 = (x357==(x358+(x359<x360)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = -9084;
	volatile int8_t x363 = -1;
	static int64_t x364 = 62292053789LL;
	volatile int32_t t89 = 4569;

	t89 = (x361==(x362+(x363<x364)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = 29457U;
	int16_t x366 = 3072;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = -1LL;
	int32_t t90 = 14022;

	t90 = (x365==(x366+(x367<x368)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x369 = 262LLU;
	int8_t x370 = -17;
	volatile int32_t x372 = -1;
	volatile int32_t t91 = -355284;

	t91 = (x369==(x370+(x371<x372)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x373 = INT8_MIN;
	uint64_t x374 = UINT64_MAX;
	int16_t x375 = INT16_MAX;
	int32_t x376 = -1;

	t92 = (x373==(x374+(x375<x376)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x377 = 163U;
	uint8_t x379 = 13U;
	static volatile int16_t x380 = 22;
	int32_t t93 = 28092497;

	t93 = (x377==(x378+(x379<x380)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = UINT16_MAX;
	uint8_t x383 = 3U;
	static int64_t x384 = -432613LL;
	volatile int32_t t94 = -54;

	t94 = (x381==(x382+(x383<x384)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x385 = 55452U;
	int64_t x386 = -24245LL;
	volatile int32_t x388 = -2;
	static volatile int32_t t95 = -617920;

	t95 = (x385==(x386+(x387<x388)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x389 = UINT16_MAX;
	static volatile int64_t x390 = 0LL;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = 941317023270LLU;
	static volatile int32_t t96 = 809652;

	t96 = (x389==(x390+(x391<x392)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = -114667LL;
	int8_t x394 = INT8_MAX;
	int8_t x395 = -1;
	int32_t x396 = INT32_MIN;
	int32_t t97 = 27;

	t97 = (x393==(x394+(x395<x396)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x397 = UINT64_MAX;
	static uint8_t x398 = 4U;
	int32_t x399 = -1016;
	static uint8_t x400 = 15U;
	volatile int32_t t98 = -15431;

	t98 = (x397==(x398+(x399<x400)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x403 = INT16_MIN;
	volatile int32_t t99 = -15139298;

	t99 = (x401==(x402+(x403<x404)));

	if (t99 != 0) { NG(); } else { ; }
	
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

