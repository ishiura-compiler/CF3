#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 5915723973123LLU;
int64_t x7 = 1LL;
volatile int16_t x13 = INT16_MAX;
int16_t x22 = 223;
uint64_t x23 = 565027260057089LLU;
volatile uint8_t x24 = 71U;
uint8_t x29 = 1U;
uint64_t x30 = 108027LLU;
volatile int32_t t8 = 0;
volatile uint32_t x39 = 76U;
uint64_t x43 = 1LLU;
int32_t t10 = 803;
volatile uint32_t x57 = 280075393U;
uint32_t x59 = 6U;
int8_t x62 = INT8_MAX;
volatile int32_t x64 = INT32_MAX;
static int8_t x65 = -1;
int16_t x68 = -1;
volatile int32_t t16 = 9982528;
uint16_t x73 = UINT16_MAX;
int32_t t18 = 749;
int16_t x80 = INT16_MIN;
int32_t x81 = 266049274;
uint16_t x85 = UINT16_MAX;
uint64_t x87 = 225759015753987LLU;
int32_t t21 = -56;
static int8_t x89 = -1;
volatile int64_t x90 = 754254062091936LL;
int8_t x94 = INT8_MIN;
uint16_t x95 = UINT16_MAX;
static int64_t x99 = INT64_MIN;
uint8_t x100 = UINT8_MAX;
int32_t x101 = -1670;
int32_t x104 = -1;
volatile int32_t t25 = 46;
int8_t x106 = INT8_MIN;
int64_t x119 = INT64_MIN;
volatile int32_t x120 = -23632888;
static uint16_t x127 = 2U;
static int64_t x130 = -832472917LL;
int16_t x137 = INT16_MAX;
uint32_t x142 = UINT32_MAX;
int32_t x150 = INT32_MIN;
static volatile uint8_t x159 = UINT8_MAX;
static uint64_t x161 = 12159793LLU;
int32_t t40 = 613;
int16_t x165 = INT16_MIN;
int16_t x191 = INT16_MIN;
uint32_t x193 = UINT32_MAX;
int64_t x195 = 1LL;
volatile int8_t x198 = 1;
uint32_t x201 = UINT32_MAX;
int64_t x204 = -1974905061636607LL;
volatile uint64_t x205 = 23700237872523776LLU;
static uint64_t x210 = 2901100LLU;
uint16_t x220 = UINT16_MAX;
static uint64_t x224 = 85LLU;
int64_t x231 = INT64_MAX;
int8_t x232 = INT8_MAX;
int64_t x236 = INT64_MIN;
int64_t x244 = -1LL;
static volatile int16_t x246 = 460;
volatile int8_t x252 = -1;
int32_t t62 = 13670172;
uint32_t x256 = UINT32_MAX;
volatile int32_t x257 = -3224377;
static int64_t x262 = INT64_MIN;
int64_t x264 = INT64_MIN;
int32_t t66 = 2461352;
int8_t x270 = INT8_MAX;
int64_t x293 = 1433013589LL;
static int32_t x294 = 756013532;
volatile int8_t x295 = INT8_MIN;
int32_t x299 = -1;
int32_t x303 = INT32_MIN;
int64_t x323 = INT64_MIN;
static uint64_t x326 = 519100497196639079LLU;
static int32_t x331 = INT32_MAX;
volatile int32_t t82 = -3847806;
volatile uint16_t x334 = 80U;
int32_t t84 = -322;
int32_t x342 = -15124000;
uint8_t x345 = UINT8_MAX;
int32_t t86 = -417;
volatile int32_t t88 = -54812;
uint16_t x366 = 88U;
int8_t x368 = -1;
uint8_t x375 = UINT8_MAX;
static int32_t x377 = INT32_MAX;
int32_t x379 = INT32_MIN;
int32_t x380 = -208634137;
uint64_t x383 = 23625266751LLU;
int32_t t95 = -382;
int32_t t96 = 211;
volatile int64_t x389 = INT64_MAX;
int16_t x393 = INT16_MIN;
int64_t x396 = 4903552671LL;
volatile int32_t t98 = 1;


void f0(void) {
	uint32_t x1 = 236038823U;
	uint64_t x3 = 1875915677597411LLU;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -174167;

	t0 = (x1==(x2<=(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static uint8_t x6 = UINT8_MAX;
	uint8_t x8 = 60U;
	int32_t t1 = -2;

	t1 = (x5==(x6<=(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int16_t x10 = 10;
	int16_t x11 = -1;
	static int8_t x12 = INT8_MIN;
	int32_t t2 = 2132810;

	t2 = (x9==(x10<=(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MAX;
	static int8_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 801420536;

	t3 = (x13==(x14<=(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 4;
	uint16_t x18 = 10613U;
	int32_t x19 = 1;
	volatile uint32_t x20 = 11777U;
	volatile int32_t t4 = -1610;

	t4 = (x17==(x18<=(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static volatile int32_t t5 = 11;

	t5 = (x21==(x22<=(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	int64_t x26 = -363881LL;
	int8_t x27 = -1;
	volatile int32_t x28 = 80040806;
	int32_t t6 = -828691;

	t6 = (x25==(x26<=(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = INT64_MIN;
	uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = -32380;

	t7 = (x29==(x30<=(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	static volatile int16_t x35 = INT16_MIN;
	uint32_t x36 = 88543040U;

	t8 = (x33==(x34<=(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 2516U;
	volatile int32_t x38 = INT32_MIN;
	int64_t x40 = -1095114050149LL;
	volatile int32_t t9 = 91;

	t9 = (x37==(x38<=(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -26;
	int16_t x42 = INT16_MIN;
	static uint32_t x44 = 804911242U;

	t10 = (x41==(x42<=(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 1;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = 1U;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = 14;

	t11 = (x45==(x46<=(x47<=x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	int64_t x50 = -1LL;
	int16_t x51 = INT16_MIN;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = -10096;

	t12 = (x49==(x50<=(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	static int64_t x54 = -12565240054682168LL;
	uint64_t x55 = 2830LLU;
	volatile int8_t x56 = -1;
	volatile int32_t t13 = -1;

	t13 = (x53==(x54<=(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = INT64_MAX;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -108381;

	t14 = (x57==(x58<=(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1448523544393912LLU;
	int16_t x63 = -1;
	volatile int32_t t15 = 1;

	t15 = (x61==(x62<=(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -1;
	int64_t x67 = INT64_MIN;

	t16 = (x65==(x66<=(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 1;
	volatile int8_t x70 = 4;
	uint16_t x71 = 218U;
	int64_t x72 = -1LL;
	int32_t t17 = 620278;

	t17 = (x69==(x70<=(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = -433186;
	volatile uint64_t x75 = 329349302014625LLU;
	uint32_t x76 = 982U;

	t18 = (x73==(x74<=(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	volatile uint16_t x78 = UINT16_MAX;
	static uint8_t x79 = 8U;
	int32_t t19 = -25809219;

	t19 = (x77==(x78<=(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = UINT64_MAX;
	static volatile int16_t x83 = -77;
	int64_t x84 = INT64_MIN;
	int32_t t20 = -754631996;

	t20 = (x81==(x82<=(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	uint8_t x88 = 19U;

	t21 = (x85==(x86<=(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x91 = -1LL;
	uint64_t x92 = 1863LLU;
	int32_t t22 = -1;

	t22 = (x89==(x90<=(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1LL;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = 1;

	t23 = (x93==(x94<=(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	static volatile int32_t x98 = INT32_MIN;
	int32_t t24 = 6174165;

	t24 = (x97==(x98<=(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = 3;
	int32_t x103 = -8808;

	t25 = (x101==(x102<=(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MAX;
	static uint32_t x107 = 47089792U;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 35788;

	t26 = (x105==(x106<=(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MAX;
	int8_t x111 = 0;
	volatile int8_t x112 = -8;
	volatile int32_t t27 = 21;

	t27 = (x109==(x110<=(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MAX;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 71104;

	t28 = (x113==(x114<=(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = -1;
	static int32_t x118 = INT32_MAX;
	int32_t t29 = -2199073;

	t29 = (x117==(x118<=(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = INT64_MAX;
	int32_t x122 = INT32_MIN;
	int64_t x123 = 0LL;
	static int32_t x124 = -1;
	volatile int32_t t30 = 23102;

	t30 = (x121==(x122<=(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 2514255U;
	static int64_t x126 = INT64_MIN;
	uint32_t x128 = 29U;
	static int32_t t31 = -1209;

	t31 = (x125==(x126<=(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	static int64_t x131 = INT64_MAX;
	int64_t x132 = INT64_MIN;
	int32_t t32 = -216655;

	t32 = (x129==(x130<=(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	volatile int64_t x134 = -1LL;
	int8_t x135 = INT8_MIN;
	volatile int64_t x136 = INT64_MAX;
	int32_t t33 = -2;

	t33 = (x133==(x134<=(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = UINT16_MAX;
	int8_t x139 = -2;
	static int64_t x140 = 58823LL;
	int32_t t34 = 969;

	t34 = (x137==(x138<=(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MAX;
	int64_t x143 = 2922181538535896LL;
	static int16_t x144 = -1;
	int32_t t35 = -30389430;

	t35 = (x141==(x142<=(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MAX;
	int32_t x146 = INT32_MIN;
	uint64_t x147 = UINT64_MAX;
	volatile uint64_t x148 = 3362735594542758LLU;
	int32_t t36 = -515066;

	t36 = (x145==(x146<=(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = 13522417795LLU;
	uint64_t x151 = 568352077768LLU;
	volatile int16_t x152 = INT16_MIN;
	int32_t t37 = 60727;

	t37 = (x149==(x150<=(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1583;
	int64_t x154 = INT64_MIN;
	static int8_t x155 = -1;
	uint16_t x156 = 256U;
	volatile int32_t t38 = -29249793;

	t38 = (x153==(x154<=(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -5638921262069699LL;
	int8_t x158 = 2;
	int32_t x160 = 413403;
	static int32_t t39 = -74;

	t39 = (x157==(x158<=(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MAX;
	uint64_t x163 = 19862900201LLU;
	static int8_t x164 = -5;

	t40 = (x161==(x162<=(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = -1;
	int32_t x167 = -407849157;
	int16_t x168 = INT16_MAX;
	volatile int32_t t41 = -369;

	t41 = (x165==(x166<=(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 663;
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MIN;
	int16_t x172 = -24;
	volatile int32_t t42 = -26;

	t42 = (x169==(x170<=(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 15U;
	int8_t x174 = INT8_MIN;
	uint64_t x175 = 39646255484LLU;
	int64_t x176 = 115339482655159LL;
	volatile int32_t t43 = -30;

	t43 = (x173==(x174<=(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 4575;
	static int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	int8_t x180 = -1;
	int32_t t44 = -5398;

	t44 = (x177==(x178<=(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -4938LL;
	uint32_t x182 = UINT32_MAX;
	int64_t x183 = INT64_MAX;
	int16_t x184 = 14426;
	int32_t t45 = -18338;

	t45 = (x181==(x182<=(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	volatile int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MAX;
	static int8_t x188 = -1;
	int32_t t46 = -18739841;

	t46 = (x185==(x186<=(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 29;
	int64_t x190 = INT64_MAX;
	volatile int64_t x192 = 8LL;
	volatile int32_t t47 = -106241;

	t47 = (x189==(x190<=(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = 1U;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = -63574;

	t48 = (x193==(x194<=(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	static uint8_t x199 = UINT8_MAX;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 36947;

	t49 = (x197==(x198<=(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x202 = 27U;
	int32_t x203 = 0;
	volatile int32_t t50 = 89700;

	t50 = (x201==(x202<=(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = 3382630523LL;
	volatile int32_t x207 = INT32_MIN;
	int8_t x208 = 5;
	volatile int32_t t51 = 37;

	t51 = (x205==(x206<=(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 973519093LLU;
	int16_t x211 = -3;
	uint64_t x212 = 7814LLU;
	volatile int32_t t52 = 1;

	t52 = (x209==(x210<=(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	int32_t x214 = -1;
	volatile int64_t x215 = INT64_MIN;
	int32_t x216 = -1404555;
	volatile int32_t t53 = 130539605;

	t53 = (x213==(x214<=(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x217 = 418593668U;
	int64_t x218 = INT64_MAX;
	int64_t x219 = 17824033LL;
	int32_t t54 = 212;

	t54 = (x217==(x218<=(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	static volatile int64_t x222 = 3262LL;
	int8_t x223 = 0;
	static volatile int32_t t55 = 5958471;

	t55 = (x221==(x222<=(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 20246448470629598LLU;
	volatile int32_t x226 = -1;
	volatile int16_t x227 = -1;
	static int16_t x228 = -3;
	volatile int32_t t56 = 1;

	t56 = (x225==(x226<=(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	uint8_t x230 = UINT8_MAX;
	volatile int32_t t57 = 120509;

	t57 = (x229==(x230<=(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 56570LL;
	volatile int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	volatile int32_t t58 = 14039125;

	t58 = (x233==(x234<=(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	int64_t x238 = INT64_MIN;
	int64_t x239 = -1LL;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = 131216;

	t59 = (x237==(x238<=(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int64_t x242 = -28497798LL;
	volatile int16_t x243 = -167;
	static int32_t t60 = 1;

	t60 = (x241==(x242<=(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 104714LL;
	int32_t x247 = 174;
	int16_t x248 = 1;
	volatile int32_t t61 = -1308907;

	t61 = (x245==(x246<=(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	volatile uint8_t x250 = 0U;
	uint64_t x251 = 39LLU;

	t62 = (x249==(x250<=(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MAX;
	int8_t x254 = INT8_MAX;
	static uint16_t x255 = 674U;
	int32_t t63 = 40;

	t63 = (x253==(x254<=(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = 19989972U;
	static int32_t x259 = -1;
	int64_t x260 = INT64_MIN;
	int32_t t64 = 2;

	t64 = (x257==(x258<=(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	int16_t x263 = -1;
	volatile int32_t t65 = 86;

	t65 = (x261==(x262<=(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 3534386998979900152LLU;
	int64_t x266 = INT64_MAX;
	int32_t x267 = -1;
	uint64_t x268 = 32357758LLU;

	t66 = (x265==(x266<=(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	uint16_t x271 = 1121U;
	volatile int64_t x272 = -1LL;
	volatile int32_t t67 = 1;

	t67 = (x269==(x270<=(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 7LLU;
	int32_t x274 = INT32_MIN;
	uint32_t x275 = UINT32_MAX;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 105076;

	t68 = (x273==(x274<=(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MAX;
	static uint16_t x278 = 1410U;
	volatile int32_t x279 = 30891;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = 6337669;

	t69 = (x277==(x278<=(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	volatile int8_t x282 = INT8_MAX;
	int64_t x283 = INT64_MAX;
	static int16_t x284 = INT16_MIN;
	static volatile int32_t t70 = -1;

	t70 = (x281==(x282<=(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 185U;
	int8_t x286 = 8;
	volatile int32_t x287 = -1;
	volatile uint32_t x288 = UINT32_MAX;
	int32_t t71 = -9;

	t71 = (x285==(x286<=(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	static volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = -22264309;

	t72 = (x289==(x290<=(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x296 = -6;
	int32_t t73 = -374;

	t73 = (x293==(x294<=(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = -638;
	int64_t x298 = -1LL;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -12;

	t74 = (x297==(x298<=(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 5368685LLU;
	uint8_t x302 = 3U;
	int8_t x304 = 1;
	int32_t t75 = -54;

	t75 = (x301==(x302<=(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 316;
	int64_t x306 = -1LL;
	int16_t x307 = -243;
	uint64_t x308 = UINT64_MAX;
	int32_t t76 = 212105922;

	t76 = (x305==(x306<=(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = UINT8_MAX;
	static int64_t x310 = INT64_MIN;
	int16_t x311 = 0;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 3426607;

	t77 = (x309==(x310<=(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = UINT16_MAX;
	volatile int64_t x314 = INT64_MAX;
	uint32_t x315 = UINT32_MAX;
	int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 129241343;

	t78 = (x313==(x314<=(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static uint64_t x318 = 6578812314224270LLU;
	int16_t x319 = INT16_MIN;
	int8_t x320 = -1;
	volatile int32_t t79 = -29676;

	t79 = (x317==(x318<=(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -1;
	int16_t x322 = INT16_MIN;
	int8_t x324 = 31;
	int32_t t80 = -400284;

	t80 = (x321==(x322<=(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 1575U;
	uint8_t x327 = 19U;
	uint8_t x328 = 1U;
	int32_t t81 = -73;

	t81 = (x325==(x326<=(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int8_t x330 = INT8_MIN;
	int64_t x332 = 1981079231LL;

	t82 = (x329==(x330<=(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 1767283271LLU;
	int32_t t83 = -66;

	t83 = (x333==(x334<=(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 1656524899465588992LL;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = -1;
	int32_t x340 = INT32_MAX;

	t84 = (x337==(x338<=(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = 5U;
	static int8_t x343 = 16;
	volatile int8_t x344 = 6;
	volatile int32_t t85 = 523436272;

	t85 = (x341==(x342<=(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = INT32_MIN;
	int16_t x347 = -1;
	uint16_t x348 = 243U;

	t86 = (x345==(x346<=(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	static int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	int32_t t87 = -10096789;

	t87 = (x349==(x350<=(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	int16_t x354 = -1;
	int32_t x355 = -213806;
	int64_t x356 = 66029212978501LL;

	t88 = (x353==(x354<=(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	volatile int8_t x358 = INT8_MIN;
	int16_t x359 = -13;
	volatile int64_t x360 = INT64_MIN;
	int32_t t89 = -162863557;

	t89 = (x357==(x358<=(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MIN;
	volatile uint64_t x363 = 922909204640582LLU;
	volatile int32_t x364 = INT32_MIN;
	int32_t t90 = 54135267;

	t90 = (x361==(x362<=(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -12;
	int32_t x367 = 738;
	int32_t t91 = -1;

	t91 = (x365==(x366<=(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	static uint8_t x370 = UINT8_MAX;
	int16_t x371 = INT16_MIN;
	int32_t x372 = -1;
	volatile int32_t t92 = 96;

	t92 = (x369==(x370<=(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	int32_t x374 = 62419;
	volatile int8_t x376 = 7;
	volatile int32_t t93 = -19224549;

	t93 = (x373==(x374<=(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = -11222LL;
	static volatile int32_t t94 = -851473473;

	t94 = (x377==(x378<=(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MIN;
	uint64_t x384 = UINT64_MAX;

	t95 = (x381==(x382<=(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MIN;
	uint8_t x386 = 77U;
	volatile int16_t x387 = -1;
	uint32_t x388 = UINT32_MAX;

	t96 = (x385==(x386<=(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x390 = UINT8_MAX;
	int64_t x391 = INT64_MAX;
	int8_t x392 = -1;
	int32_t t97 = -12;

	t97 = (x389==(x390<=(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 6071563254445LLU;
	int32_t x395 = INT32_MIN;

	t98 = (x393==(x394<=(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	static int64_t x398 = -1LL;
	int64_t x399 = -1LL;
	int64_t x400 = 72490LL;
	volatile int32_t t99 = 0;

	t99 = (x397==(x398<=(x399<=x400)));

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

