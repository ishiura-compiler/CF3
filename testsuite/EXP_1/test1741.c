#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int64_t t0 = 293587937466033921LL;
int32_t x5 = INT32_MIN;
static int8_t x7 = -1;
volatile int64_t x8 = -450609443880174LL;
volatile int32_t x12 = INT32_MIN;
int32_t x13 = INT32_MIN;
uint64_t x19 = 207181496765LLU;
static uint32_t x22 = 1978721068U;
static volatile int16_t x28 = INT16_MIN;
uint32_t x30 = 5094436U;
uint16_t x37 = 8U;
volatile int64_t x42 = INT64_MAX;
volatile int16_t x43 = INT16_MAX;
volatile int64_t t12 = -623364LL;
int64_t t13 = -52417545LL;
int16_t x72 = -1;
int8_t x79 = INT8_MAX;
uint16_t x91 = UINT16_MAX;
int32_t x108 = -2059415;
static volatile uint64_t x110 = 7119050223965264LLU;
static int64_t x113 = 3LL;
int8_t x116 = 52;
int16_t x124 = 6603;
int64_t t30 = -255403LL;
uint16_t x127 = 3068U;
uint32_t t31 = 402938U;
int16_t x143 = INT16_MIN;
static int64_t t38 = -218757863289561LL;
static int8_t x163 = 19;
uint32_t x164 = UINT32_MAX;
int64_t x176 = INT64_MAX;
int64_t t43 = 66015529841220675LL;
volatile int8_t x180 = -1;
volatile int8_t x181 = INT8_MIN;
uint16_t x182 = 157U;
uint16_t x190 = 41U;
volatile uint64_t t46 = 1060041LLU;
int16_t x196 = INT16_MAX;
int8_t x200 = 11;
uint64_t x203 = UINT64_MAX;
int32_t x205 = INT32_MIN;
static int8_t x207 = 3;
static int32_t t50 = -346493161;
int8_t x210 = INT8_MIN;
int64_t x227 = INT64_MIN;
volatile int8_t x230 = INT8_MAX;
uint64_t x232 = 67610300514LLU;
static uint64_t t56 = 393440936781LLU;
int32_t x233 = -1;
int8_t x235 = -1;
volatile int64_t x240 = INT64_MAX;
uint64_t t58 = 53409779119983175LLU;
static volatile uint16_t x246 = 3210U;
int64_t x258 = INT64_MIN;
static int32_t t63 = 2088;
static uint16_t x276 = UINT16_MAX;
int64_t x278 = INT64_MIN;
static int16_t x279 = INT16_MAX;
static uint8_t x281 = 116U;
int16_t x282 = INT16_MIN;
volatile int64_t t68 = 31392921657LL;
volatile int8_t x290 = INT8_MIN;
volatile uint8_t x294 = 77U;
int32_t x309 = INT32_MIN;
volatile int64_t t74 = 13067716LL;
int16_t x320 = INT16_MIN;
static int8_t x324 = INT8_MIN;
static int64_t x325 = INT64_MIN;
int64_t x334 = -1LL;
int32_t x336 = -1;
uint16_t x338 = 3283U;
int64_t t81 = 128356947LL;
uint32_t t82 = 93U;
static int8_t x346 = INT8_MIN;
volatile int32_t t83 = 351431;
static int32_t x349 = INT32_MIN;
int8_t x360 = -20;
uint64_t t86 = 2246672LLU;
static volatile int8_t x361 = -11;
int16_t x372 = -10934;
volatile int32_t x378 = -1;
uint64_t x379 = UINT64_MAX;
volatile int8_t x380 = -1;
uint64_t t91 = UINT64_MAX;
int8_t x382 = 1;
uint64_t t92 = 237988434511869952LLU;
static uint8_t x389 = UINT8_MAX;
int64_t x393 = INT64_MAX;
static int8_t x396 = INT8_MIN;
volatile int32_t x401 = -1;
static volatile uint16_t x402 = 13267U;
uint64_t t99 = 65935037LLU;


void f0(void) {
	volatile int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MIN;
	int64_t x4 = -116LL;

	t0 = (((x1&x2)/x3)|x4);

	if (t0 != -115LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MAX;
	static int64_t t1 = -3621063LL;

	t1 = (((x5&x6)/x7)|x8);

	if (t1 != -450607296396526LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MAX;
	uint64_t x10 = 254916937321LLU;
	volatile int8_t x11 = INT8_MIN;
	uint64_t t2 = 305LLU;

	t2 = (((x9&x10)/x11)|x12);

	if (t2 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint8_t x16 = 15U;
	int64_t t3 = -266861476LL;

	t3 = (((x13&x14)/x15)|x16);

	if (t3 != -72057594021150705LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = INT32_MAX;
	int32_t x20 = -1;
	uint64_t t4 = UINT64_MAX;

	t4 = (((x17&x18)/x19)|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	static int8_t x23 = -7;
	volatile int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = INT64_MIN;

	t5 = (((x21&x22)/x23)|x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	volatile int64_t x26 = 378867543LL;
	static volatile int16_t x27 = INT16_MIN;
	int64_t t6 = 615LL;

	t6 = (((x25&x26)/x27)|x28);

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 7485062493LL;
	int64_t x31 = -1LL;
	static uint64_t x32 = 1286778923LLU;
	static uint64_t t7 = 9470024168302LLU;

	t7 = (((x29&x30)/x31)|x32);

	if (t7 != 18446744073709286399LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	int8_t x34 = INT8_MAX;
	volatile int16_t x35 = -1;
	int64_t x36 = INT64_MAX;
	int64_t t8 = INT64_MAX;

	t8 = (((x33&x34)/x35)|x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 189389109U;
	static int32_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	static uint32_t t9 = 123U;

	t9 = (((x37&x38)/x39)|x40);

	if (t9 != 255U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 17;
	static volatile int64_t x44 = INT64_MIN;
	static int64_t t10 = INT64_MIN;

	t10 = (((x41&x42)/x43)|x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = INT8_MIN;
	static volatile int8_t x47 = INT8_MAX;
	static int64_t x48 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = (((x45&x46)/x47)|x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	int64_t x50 = -603LL;
	volatile uint8_t x51 = 26U;
	volatile int8_t x52 = INT8_MAX;

	t12 = (((x49&x50)/x51)|x52);

	if (t12 != 1279LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 88574006U;
	int64_t x54 = INT64_MIN;
	int64_t x55 = -1LL;
	static int8_t x56 = -1;

	t13 = (((x53&x54)/x55)|x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -240448902412756LL;
	uint32_t x58 = 1778U;
	int16_t x59 = 7618;
	int16_t x60 = INT16_MIN;
	volatile int64_t t14 = -18434LL;

	t14 = (((x57&x58)/x59)|x60);

	if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1088454846623026156LLU;
	int32_t x62 = -1;
	static int8_t x63 = INT8_MIN;
	static int32_t x64 = -1;
	uint64_t t15 = UINT64_MAX;

	t15 = (((x61&x62)/x63)|x64);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	uint64_t x66 = 25992340800548LLU;
	static int8_t x67 = -1;
	int8_t x68 = -1;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (((x65&x66)/x67)|x68);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 25144035778621LL;
	volatile int64_t x70 = INT64_MAX;
	int16_t x71 = -1;
	int64_t t17 = 0LL;

	t17 = (((x69&x70)/x71)|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = UINT32_MAX;
	int8_t x74 = INT8_MAX;
	volatile uint32_t x75 = 157958U;
	uint8_t x76 = 14U;
	volatile uint32_t t18 = 11094U;

	t18 = (((x73&x74)/x75)|x76);

	if (t18 != 14U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int64_t x78 = INT64_MIN;
	volatile int8_t x80 = INT8_MAX;
	volatile int64_t t19 = -65LL;

	t19 = (((x77&x78)/x79)|x80);

	if (t19 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	int32_t x82 = INT32_MAX;
	static uint64_t x83 = 35909LLU;
	volatile int64_t x84 = -1LL;
	uint64_t t20 = UINT64_MAX;

	t20 = (((x81&x82)/x83)|x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 7;
	int64_t x86 = -1LL;
	uint64_t x87 = 36524776827444LLU;
	int32_t x88 = -1;
	static volatile uint64_t t21 = UINT64_MAX;

	t21 = (((x85&x86)/x87)|x88);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	uint8_t x90 = UINT8_MAX;
	int32_t x92 = -1;
	int32_t t22 = 26596955;

	t22 = (((x89&x90)/x91)|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	uint8_t x94 = 15U;
	volatile int8_t x95 = INT8_MIN;
	int16_t x96 = 922;
	volatile int64_t t23 = -9949875937771131LL;

	t23 = (((x93&x94)/x95)|x96);

	if (t23 != 922LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	volatile int8_t x98 = INT8_MIN;
	uint16_t x99 = 13U;
	uint64_t x100 = UINT64_MAX;
	uint64_t t24 = UINT64_MAX;

	t24 = (((x97&x98)/x99)|x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 565016U;
	int64_t x102 = -1LL;
	static int32_t x103 = INT32_MAX;
	static int8_t x104 = INT8_MIN;
	static int64_t t25 = -58256544631LL;

	t25 = (((x101&x102)/x103)|x104);

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	static uint16_t x106 = 2792U;
	volatile int32_t x107 = INT32_MIN;
	static volatile int32_t t26 = 801802032;

	t26 = (((x105&x106)/x107)|x108);

	if (t26 != -2059415) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = UINT32_MAX;
	int8_t x111 = INT8_MIN;
	int16_t x112 = INT16_MIN;
	volatile uint64_t t27 = 4354853863802903LLU;

	t27 = (((x109&x110)/x111)|x112);

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x114 = -1065879135206380207LL;
	volatile int64_t x115 = -1LL;
	int64_t t28 = 1509139348332072LL;

	t28 = (((x113&x114)/x115)|x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 0;
	int8_t x118 = INT8_MIN;
	uint64_t x119 = 48224156515141765LLU;
	uint8_t x120 = 3U;
	uint64_t t29 = 452875LLU;

	t29 = (((x117&x118)/x119)|x120);

	if (t29 != 3LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -73148237;
	int64_t x122 = -1520LL;
	uint8_t x123 = UINT8_MAX;

	t30 = (((x121&x122)/x123)|x124);

	if (t30 != -286725LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 61769U;
	int32_t x126 = -11032460;
	int32_t x128 = 120;

	t31 = (((x125&x126)/x127)|x128);

	if (t31 != 125U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	uint8_t x130 = UINT8_MAX;
	int8_t x131 = INT8_MAX;
	static uint16_t x132 = UINT16_MAX;
	int32_t t32 = -1029816;

	t32 = (((x129&x130)/x131)|x132);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	static volatile int16_t x136 = 447;
	static int32_t t33 = 5204;

	t33 = (((x133&x134)/x135)|x136);

	if (t33 != 447) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int8_t x138 = INT8_MIN;
	uint16_t x139 = 6U;
	uint8_t x140 = UINT8_MAX;
	uint32_t t34 = 66353694U;

	t34 = (((x137&x138)/x139)|x140);

	if (t34 != 715827967U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 545;
	int16_t x142 = -19;
	uint8_t x144 = 52U;
	int32_t t35 = 0;

	t35 = (((x141&x142)/x143)|x144);

	if (t35 != 52) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 2U;
	int16_t x146 = 1941;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	volatile uint32_t t36 = 338U;

	t36 = (((x145&x146)/x147)|x148);

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	volatile uint16_t x150 = 863U;
	uint64_t x151 = 1395094960552LLU;
	int16_t x152 = INT16_MIN;
	static volatile uint64_t t37 = 12161LLU;

	t37 = (((x149&x150)/x151)|x152);

	if (t37 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 38U;
	int64_t x154 = -129290969LL;
	volatile int64_t x155 = -1LL;
	uint32_t x156 = 350796123U;

	t38 = (((x153&x154)/x155)|x156);

	if (t38 != -37LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	uint16_t x158 = 9U;
	volatile uint8_t x159 = 2U;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -650422989451LL;

	t39 = (((x157&x158)/x159)|x160);

	if (t39 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = 2;
	int16_t x162 = 18;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (((x161&x162)/x163)|x164);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -1LL;
	volatile int64_t x166 = INT64_MIN;
	static uint8_t x167 = 30U;
	int8_t x168 = INT8_MIN;
	volatile int64_t t41 = -128583204888LL;

	t41 = (((x165&x166)/x167)|x168);

	if (t41 != -68LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	uint8_t x170 = 48U;
	uint8_t x171 = 1U;
	static uint32_t x172 = 450119U;
	uint32_t t42 = 193115337U;

	t42 = (((x169&x170)/x171)|x172);

	if (t42 != 450119U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = -3049;
	static int64_t x174 = INT64_MIN;
	int32_t x175 = 201364422;

	t43 = (((x173&x174)/x175)|x176);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 130773899687491LL;
	int64_t x178 = -26355992665LL;
	uint16_t x179 = UINT16_MAX;
	int64_t t44 = -185LL;

	t44 = (((x177&x178)/x179)|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x183 = -4820405LL;
	volatile int64_t x184 = -1LL;
	int64_t t45 = 334379532255552010LL;

	t45 = (((x181&x182)/x183)|x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x189 = INT32_MIN;
	volatile uint64_t x191 = UINT64_MAX;
	uint32_t x192 = UINT32_MAX;

	t46 = (((x189&x190)/x191)|x192);

	if (t46 != 4294967295LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MAX;
	static int8_t x194 = -1;
	volatile int16_t x195 = -604;
	static volatile int64_t t47 = -1LL;

	t47 = (((x193&x194)/x195)|x196);

	if (t47 != -15270483504726017LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = -1;
	uint8_t x198 = 30U;
	uint32_t x199 = 2796U;
	uint32_t t48 = 3U;

	t48 = (((x197&x198)/x199)|x200);

	if (t48 != 11U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = -489;
	int8_t x202 = 56;
	int8_t x204 = 56;
	uint64_t t49 = 33792276LLU;

	t49 = (((x201&x202)/x203)|x204);

	if (t49 != 56LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x206 = UINT8_MAX;
	volatile int16_t x208 = 273;

	t50 = (((x205&x206)/x207)|x208);

	if (t50 != 273) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -620LL;
	volatile uint16_t x211 = 3864U;
	volatile int32_t x212 = INT32_MIN;
	int64_t t51 = 8817713LL;

	t51 = (((x209&x210)/x211)|x212);

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x213 = 439374465LLU;
	int64_t x214 = INT64_MIN;
	int8_t x215 = -1;
	int32_t x216 = INT32_MAX;
	static volatile uint64_t t52 = 11469717728LLU;

	t52 = (((x213&x214)/x215)|x216);

	if (t52 != 2147483647LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x217 = 0U;
	uint32_t x218 = 228U;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t53 = 475194U;

	t53 = (((x217&x218)/x219)|x220);

	if (t53 != 4294934528U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	int32_t x222 = INT32_MIN;
	static int32_t x223 = 63766;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t54 = -441;

	t54 = (((x221&x222)/x223)|x224);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = 19;
	static int32_t x226 = 27;
	int64_t x228 = -1LL;
	static volatile int64_t t55 = 13428833758451LL;

	t55 = (((x225&x226)/x227)|x228);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = 974LLU;
	static int64_t x231 = INT64_MAX;

	t56 = (((x229&x230)/x231)|x232);

	if (t56 != 67610300514LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x234 = 3915U;
	int8_t x236 = -2;
	uint32_t t57 = 203332131U;

	t57 = (((x233&x234)/x235)|x236);

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x237 = 71U;
	volatile uint64_t x238 = 4064879766053253LLU;
	int64_t x239 = INT64_MIN;

	t58 = (((x237&x238)/x239)|x240);

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MIN;
	uint64_t x247 = 5LLU;
	uint8_t x248 = 1U;
	static volatile uint64_t t59 = 4583821298074392LLU;

	t59 = (((x245&x246)/x247)|x248);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x249 = INT16_MIN;
	uint8_t x250 = UINT8_MAX;
	int32_t x251 = INT32_MIN;
	uint8_t x252 = 1U;
	int32_t t60 = -19708;

	t60 = (((x249&x250)/x251)|x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = UINT32_MAX;
	uint16_t x254 = 4608U;
	uint64_t x255 = 289LLU;
	uint16_t x256 = 125U;
	volatile uint64_t t61 = 173LLU;

	t61 = (((x253&x254)/x255)|x256);

	if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = 0;
	int16_t x259 = INT16_MIN;
	static int64_t x260 = -1LL;
	volatile int64_t t62 = -8534109380209LL;

	t62 = (((x257&x258)/x259)|x260);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MAX;
	int16_t x268 = 0;

	t63 = (((x265&x266)/x267)|x268);

	if (t63 != -16909320) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 0U;
	volatile int64_t t64 = 7712679362106256LL;

	t64 = (((x269&x270)/x271)|x272);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x273 = 1457143243782949LL;
	uint64_t x274 = 24537LLU;
	int16_t x275 = INT16_MIN;
	volatile uint64_t t65 = 15LLU;

	t65 = (((x273&x274)/x275)|x276);

	if (t65 != 65535LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -10;
	volatile int8_t x280 = INT8_MIN;
	int64_t t66 = -2LL;

	t66 = (((x277&x278)/x279)|x280);

	if (t66 != -8LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x283 = -1LL;
	volatile uint8_t x284 = 2U;
	volatile int64_t t67 = 6351750430673051LL;

	t67 = (((x281&x282)/x283)|x284);

	if (t67 != 2LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x285 = INT32_MIN;
	volatile int16_t x286 = 6;
	static int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MIN;

	t68 = (((x285&x286)/x287)|x288);

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x289 = 837U;
	static int8_t x291 = -1;
	volatile int64_t x292 = INT64_MIN;
	volatile int64_t t69 = 2081821LL;

	t69 = (((x289&x290)/x291)|x292);

	if (t69 != -768LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 1063039764393LLU;
	static int32_t x295 = INT32_MAX;
	int64_t x296 = INT64_MAX;
	volatile uint64_t t70 = 1211906796LLU;

	t70 = (((x293&x294)/x295)|x296);

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MAX;
	int32_t x298 = -4675;
	int32_t x299 = -4586979;
	int64_t x300 = INT64_MAX;
	volatile int64_t t71 = INT64_MAX;

	t71 = (((x297&x298)/x299)|x300);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = INT32_MIN;
	static volatile uint16_t x302 = 0U;
	uint64_t x303 = 8403899233485LLU;
	int8_t x304 = INT8_MAX;
	volatile uint64_t t72 = 660994402242LLU;

	t72 = (((x301&x302)/x303)|x304);

	if (t72 != 127LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = 106237;
	volatile int8_t x306 = 0;
	int32_t x307 = -300184604;
	int8_t x308 = -1;
	volatile int32_t t73 = 496;

	t73 = (((x305&x306)/x307)|x308);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x310 = -10;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = INT64_MAX;

	t74 = (((x309&x310)/x311)|x312);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = -11;
	volatile uint16_t x314 = 7091U;
	static volatile int8_t x315 = INT8_MIN;
	static uint8_t x316 = 4U;
	volatile int32_t t75 = 22664;

	t75 = (((x313&x314)/x315)|x316);

	if (t75 != -51) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x317 = -5;
	static uint16_t x318 = UINT16_MAX;
	volatile uint16_t x319 = UINT16_MAX;
	volatile int32_t t76 = -17492;

	t76 = (((x317&x318)/x319)|x320);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MAX;
	static volatile uint32_t x322 = 891148U;
	int8_t x323 = INT8_MIN;
	volatile int64_t t77 = -33291012064LL;

	t77 = (((x321&x322)/x323)|x324);

	if (t77 != -50LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x326 = 14779U;
	int32_t x327 = INT32_MIN;
	uint8_t x328 = 6U;
	volatile int64_t t78 = -6597075LL;

	t78 = (((x325&x326)/x327)|x328);

	if (t78 != 6LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = 15591160U;
	int8_t x331 = INT8_MIN;
	static int8_t x332 = INT8_MIN;
	volatile uint32_t t79 = 42104347U;

	t79 = (((x329&x330)/x331)|x332);

	if (t79 != 4294967168U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x333 = INT16_MIN;
	volatile uint32_t x335 = 26U;
	volatile int64_t t80 = -4LL;

	t80 = (((x333&x334)/x335)|x336);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = 498079533123261LL;
	volatile int8_t x339 = INT8_MIN;
	uint8_t x340 = UINT8_MAX;

	t81 = (((x337&x338)/x339)|x340);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = 10842U;
	uint32_t x342 = 1880863U;
	int8_t x343 = 2;
	static uint16_t x344 = 142U;

	t82 = (((x341&x342)/x343)|x344);

	if (t82 != 4495U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x345 = 1034U;
	volatile int16_t x347 = INT16_MIN;
	static uint16_t x348 = 6U;

	t83 = (((x345&x346)/x347)|x348);

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x350 = 4;
	int16_t x351 = -1;
	int32_t x352 = INT32_MIN;
	static int32_t t84 = INT32_MIN;

	t84 = (((x349&x350)/x351)|x352);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x353 = 4644572LLU;
	int32_t x354 = -50909;
	volatile uint32_t x355 = UINT32_MAX;
	volatile uint64_t x356 = 175727052274LLU;
	volatile uint64_t t85 = 13991LLU;

	t85 = (((x353&x354)/x355)|x356);

	if (t85 != 175727052274LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x357 = 106447961LLU;
	static int8_t x358 = INT8_MIN;
	volatile uint64_t x359 = 30LLU;

	t86 = (((x357&x358)/x359)|x360);

	if (t86 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x362 = 6736173717887916653LLU;
	volatile uint32_t x363 = 285814U;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = (((x361&x362)/x363)|x364);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = UINT64_MAX;
	static int8_t x366 = 1;
	int64_t x367 = -1LL;
	static int64_t x368 = -2718757203LL;
	uint64_t t88 = 10540964310448226LLU;

	t88 = (((x365&x366)/x367)|x368);

	if (t88 != 18446744070990794413LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x369 = 3325U;
	static volatile int32_t x370 = INT32_MIN;
	uint8_t x371 = 2U;
	int32_t t89 = -28572748;

	t89 = (((x369&x370)/x371)|x372);

	if (t89 != -10934) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x373 = UINT8_MAX;
	uint8_t x374 = UINT8_MAX;
	uint16_t x375 = 4311U;
	int16_t x376 = -1;
	volatile int32_t t90 = 75153;

	t90 = (((x373&x374)/x375)|x376);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MIN;

	t91 = (((x377&x378)/x379)|x380);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = 459;
	uint64_t x383 = 87001637522483958LLU;
	int8_t x384 = INT8_MIN;

	t92 = (((x381&x382)/x383)|x384);

	if (t92 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = 1;
	static uint32_t x387 = 2906168U;
	uint8_t x388 = 62U;
	uint32_t t93 = 333U;

	t93 = (((x385&x386)/x387)|x388);

	if (t93 != 62U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x390 = INT16_MIN;
	static int16_t x391 = INT16_MAX;
	static uint8_t x392 = 72U;
	int32_t t94 = -233035;

	t94 = (((x389&x390)/x391)|x392);

	if (t94 != 72) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	volatile int64_t t95 = 2084LL;

	t95 = (((x393&x394)/x395)|x396);

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x397 = UINT32_MAX;
	int64_t x398 = -1LL;
	uint32_t x399 = 17628491U;
	int64_t x400 = -1LL;
	volatile int64_t t96 = 731184557LL;

	t96 = (((x397&x398)/x399)|x400);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x403 = 242U;
	int64_t x404 = -1LL;
	int64_t t97 = 81696823LL;

	t97 = (((x401&x402)/x403)|x404);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x405 = -1LL;
	static volatile int16_t x406 = INT16_MIN;
	static volatile uint64_t x407 = 128189585LLU;
	int8_t x408 = INT8_MAX;
	static volatile uint64_t t98 = 25743157829LLU;

	t98 = (((x405&x406)/x407)|x408);

	if (t98 != 143902050047LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x409 = 3158309960352443LLU;
	volatile uint64_t x410 = 84401577623LLU;
	static uint64_t x411 = 762390472LLU;
	static int32_t x412 = -45217;

	t99 = (((x409&x410)/x411)|x412);

	if (t99 != 18446744073709506431LLU) { NG(); } else { ; }
	
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

