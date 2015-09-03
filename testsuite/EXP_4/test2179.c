#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x2 = 241U;
uint64_t x8 = UINT64_MAX;
volatile int32_t t1 = -130113;
uint16_t x16 = 2026U;
volatile uint16_t x17 = 20533U;
int32_t x21 = -1;
int64_t x27 = 3008012752242552LL;
volatile int32_t t6 = -52;
static int32_t x31 = INT32_MIN;
volatile int32_t t7 = -1;
static int32_t t8 = -33466918;
int16_t x39 = INT16_MIN;
int32_t x43 = INT32_MAX;
static int32_t x45 = INT32_MIN;
int64_t x48 = -1LL;
volatile int8_t x56 = INT8_MIN;
static uint16_t x75 = 2U;
uint64_t x76 = UINT64_MAX;
uint8_t x78 = 3U;
static int64_t x86 = 33738954558244LL;
int16_t x91 = -1;
uint32_t x93 = UINT32_MAX;
int16_t x94 = 1;
static int8_t x96 = INT8_MIN;
int16_t x98 = 18;
volatile int16_t x106 = -5505;
int64_t x109 = INT64_MIN;
int16_t x121 = 1;
static int8_t x129 = INT8_MAX;
int8_t x132 = INT8_MIN;
static int8_t x136 = INT8_MIN;
volatile int32_t x143 = INT32_MIN;
int8_t x148 = 2;
static int32_t x151 = INT32_MIN;
volatile int32_t t37 = 49802922;
int32_t x160 = INT32_MAX;
int32_t t39 = 91808839;
volatile uint32_t x161 = UINT32_MAX;
int32_t x165 = -5408;
int64_t x171 = 956890811624LL;
int32_t x176 = INT32_MAX;
static int64_t x178 = 103235980568962LL;
volatile int32_t t45 = 2036182;
int16_t x188 = -1;
int32_t t47 = 4669;
volatile int32_t t49 = 284834994;
int16_t x210 = -1;
uint16_t x211 = 1U;
int8_t x212 = 0;
volatile int32_t x213 = INT32_MIN;
int32_t x215 = INT32_MIN;
volatile int32_t t53 = -220;
volatile int32_t t56 = -259;
uint16_t x233 = 18U;
volatile int8_t x234 = 1;
uint8_t x239 = 0U;
int32_t t59 = -283085;
int8_t x245 = INT8_MIN;
static volatile uint64_t x253 = 59018616LLU;
static int32_t x259 = INT32_MIN;
int32_t x260 = -19027;
int64_t x262 = INT64_MIN;
volatile int32_t t66 = -56;
volatile int32_t t68 = 489;
int8_t x281 = -1;
static int16_t x289 = INT16_MIN;
volatile int32_t t73 = -5592;
uint8_t x299 = 4U;
uint32_t x309 = 97952U;
int32_t t77 = -1671590;
volatile int32_t x315 = INT32_MIN;
int64_t x316 = -1LL;
static uint16_t x318 = 866U;
int8_t x323 = INT8_MIN;
int64_t x332 = -1LL;
volatile int32_t t82 = -5;
int8_t x333 = INT8_MIN;
int32_t t84 = 0;
int64_t x344 = -4231883085794LL;
static volatile int32_t t85 = -3029960;
int32_t x346 = -46;
int64_t x347 = INT64_MAX;
int32_t t88 = 62;
volatile uint64_t x358 = 66244359485380302LLU;
uint8_t x366 = 34U;
int16_t x370 = -1;
uint64_t x380 = UINT64_MAX;
int32_t t97 = -615058672;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static volatile uint16_t x3 = 1U;
	int32_t x4 = 1251;
	int32_t t0 = -48722103;

	t0 = (x1==(x2|(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -2LL;
	int32_t x6 = INT32_MIN;
	static uint8_t x7 = 61U;

	t1 = (x5==(x6|(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint8_t x10 = UINT8_MAX;
	int16_t x11 = -1;
	volatile uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -1998209;

	t2 = (x9==(x10|(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile uint8_t x14 = 3U;
	int64_t x15 = 4379809228243536LL;
	static volatile int32_t t3 = -10171;

	t3 = (x13==(x14|(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 0U;
	volatile int32_t x19 = 10;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = 246960384;

	t4 = (x17==(x18|(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 1659042;
	uint8_t x23 = UINT8_MAX;
	volatile uint16_t x24 = 27U;
	static int32_t t5 = 7;

	t5 = (x21==(x22|(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MIN;
	volatile int32_t x28 = -2726;

	t6 = (x25==(x26|(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 7U;
	int64_t x30 = -1LL;
	uint64_t x32 = 2520488722LLU;

	t7 = (x29==(x30|(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 0U;
	int8_t x34 = 8;
	static int16_t x35 = INT16_MAX;
	volatile int16_t x36 = -2;

	t8 = (x33==(x34|(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	static uint32_t x38 = UINT32_MAX;
	volatile int64_t x40 = 833290LL;
	volatile int32_t t9 = -1648460;

	t9 = (x37==(x38|(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -31;
	volatile uint64_t x42 = 95LLU;
	volatile uint8_t x44 = UINT8_MAX;
	int32_t t10 = 170717;

	t10 = (x41==(x42|(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = UINT64_MAX;
	int32_t x47 = INT32_MIN;
	int32_t t11 = 185501;

	t11 = (x45==(x46|(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = -1;
	static int16_t x51 = INT16_MAX;
	volatile int64_t x52 = -4623LL;
	volatile int32_t t12 = -11364;

	t12 = (x49==(x50|(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -73109;
	volatile int32_t x54 = INT32_MAX;
	int64_t x55 = -27762091LL;
	volatile int32_t t13 = -5940228;

	t13 = (x53==(x54|(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 24U;
	int64_t x58 = -1LL;
	uint8_t x59 = 36U;
	uint8_t x60 = 22U;
	volatile int32_t t14 = 7132243;

	t14 = (x57==(x58|(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	static int32_t x62 = INT32_MIN;
	static uint8_t x63 = UINT8_MAX;
	int16_t x64 = -1;
	static volatile int32_t t15 = -152;

	t15 = (x61==(x62|(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int8_t x66 = INT8_MIN;
	int64_t x67 = -53113707675139LL;
	static volatile int16_t x68 = -1;
	static volatile int32_t t16 = 19598553;

	t16 = (x65==(x66|(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = 0;
	uint32_t x70 = UINT32_MAX;
	static volatile int64_t x71 = -14845156570290308LL;
	static uint64_t x72 = 7426333454706089LLU;
	int32_t t17 = 2399;

	t17 = (x69==(x70|(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	static int32_t x74 = INT32_MIN;
	volatile int32_t t18 = -1;

	t18 = (x73==(x74|(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	uint8_t x79 = UINT8_MAX;
	int64_t x80 = INT64_MAX;
	volatile int32_t t19 = -2793296;

	t19 = (x77==(x78|(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x82 = -1;
	int16_t x83 = -1;
	volatile int64_t x84 = -1LL;
	volatile int32_t t20 = -33354;

	t20 = (x81==(x82|(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	uint8_t x87 = 3U;
	int8_t x88 = -1;
	volatile int32_t t21 = -36;

	t21 = (x85==(x86|(x87^x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 38U;
	uint16_t x90 = 42U;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 1445;

	t22 = (x89==(x90|(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x95 = 2U;
	int32_t t23 = 1;

	t23 = (x93==(x94|(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 54U;
	int32_t x99 = 848626;
	int32_t x100 = 475;
	int32_t t24 = 238;

	t24 = (x97==(x98|(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 25U;
	uint64_t x102 = 5094200624754LLU;
	static volatile int64_t x103 = 18384579774394334LL;
	static int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -33173905;

	t25 = (x101==(x102|(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 652298748U;
	volatile uint8_t x107 = UINT8_MAX;
	int32_t x108 = -1;
	int32_t t26 = -2;

	t26 = (x105==(x106|(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 259932;
	volatile int16_t x111 = -8354;
	int64_t x112 = 9581LL;
	volatile int32_t t27 = -105189;

	t27 = (x109==(x110|(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 118U;
	static uint16_t x114 = UINT16_MAX;
	uint32_t x115 = UINT32_MAX;
	int64_t x116 = INT64_MIN;
	int32_t t28 = 37;

	t28 = (x113==(x114|(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = 1527692090U;
	uint8_t x118 = 11U;
	static int8_t x119 = INT8_MIN;
	uint64_t x120 = 6233182383552157LLU;
	int32_t t29 = 7;

	t29 = (x117==(x118|(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x122 = 2;
	static int8_t x123 = 3;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = 2;

	t30 = (x121==(x122|(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MAX;
	int8_t x126 = 24;
	uint8_t x127 = 15U;
	static int16_t x128 = 214;
	static int32_t t31 = 360;

	t31 = (x125==(x126|(x127^x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x130 = 0;
	uint16_t x131 = 20U;
	int32_t t32 = 449;

	t32 = (x129==(x130|(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 20089228U;
	uint64_t x134 = UINT64_MAX;
	static uint8_t x135 = UINT8_MAX;
	int32_t t33 = 117;

	t33 = (x133==(x134|(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 6519967237842341LL;
	int64_t x138 = INT64_MAX;
	int32_t x139 = -1164;
	int32_t x140 = INT32_MAX;
	static int32_t t34 = 38266;

	t34 = (x137==(x138|(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	static int16_t x142 = INT16_MIN;
	volatile int16_t x144 = INT16_MAX;
	int32_t t35 = 1;

	t35 = (x141==(x142|(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 1U;
	int32_t x146 = -696808961;
	static int16_t x147 = -3;
	static volatile int32_t t36 = -1;

	t36 = (x145==(x146|(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -84;
	volatile int16_t x150 = -1;
	int8_t x152 = INT8_MIN;

	t37 = (x149==(x150|(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 882547809247LLU;
	int8_t x154 = INT8_MAX;
	int32_t x155 = -330;
	uint32_t x156 = 422458U;
	int32_t t38 = 20964;

	t38 = (x153==(x154|(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = -3;
	int64_t x158 = -1LL;
	int16_t x159 = -92;

	t39 = (x157==(x158|(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MIN;
	uint8_t x163 = 11U;
	int16_t x164 = INT16_MAX;
	static int32_t t40 = 15;

	t40 = (x161==(x162|(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = -1;
	uint64_t x167 = UINT64_MAX;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = 26425;

	t41 = (x165==(x166|(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = UINT16_MAX;
	uint64_t x170 = 4304178397310606618LLU;
	int16_t x172 = 29;
	volatile int32_t t42 = -8;

	t42 = (x169==(x170|(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 5409LL;
	int16_t x174 = -1;
	int32_t x175 = -80;
	int32_t t43 = 218;

	t43 = (x173==(x174|(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int16_t x179 = 3;
	static volatile int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 21357;

	t44 = (x177==(x178|(x179^x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -66;
	int64_t x182 = INT64_MAX;
	int16_t x183 = INT16_MIN;
	static uint64_t x184 = UINT64_MAX;

	t45 = (x181==(x182|(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	static uint64_t x186 = 3841LLU;
	int16_t x187 = INT16_MIN;
	int32_t t46 = 2;

	t46 = (x185==(x186|(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	uint16_t x190 = 2160U;
	volatile int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;

	t47 = (x189==(x190|(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	static int8_t x194 = INT8_MAX;
	uint16_t x195 = 49U;
	uint64_t x196 = UINT64_MAX;
	int32_t t48 = 1008963468;

	t48 = (x193==(x194|(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -16;
	uint64_t x198 = UINT64_MAX;
	static int8_t x199 = 5;
	int32_t x200 = 16155;

	t49 = (x197==(x198|(x199^x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = 1LL;
	static uint8_t x202 = 1U;
	int32_t x203 = INT32_MIN;
	uint8_t x204 = 92U;
	static volatile int32_t t50 = -2058;

	t50 = (x201==(x202|(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 3691613521667LLU;
	int16_t x206 = INT16_MIN;
	static int16_t x207 = INT16_MIN;
	int32_t x208 = 19859961;
	static volatile int32_t t51 = -5064;

	t51 = (x205==(x206|(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 58U;
	int32_t t52 = -246252;

	t52 = (x209==(x210|(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x214 = INT32_MIN;
	int64_t x216 = 995LL;

	t53 = (x213==(x214|(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MIN;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = INT64_MAX;
	volatile int16_t x220 = INT16_MIN;
	int32_t t54 = 110424;

	t54 = (x217==(x218|(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 117U;
	int64_t x222 = INT64_MAX;
	int32_t x223 = -6;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = -706488;

	t55 = (x221==(x222|(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MAX;
	int32_t x226 = -1545;
	static uint64_t x227 = 112026LLU;
	static int64_t x228 = INT64_MIN;

	t56 = (x225==(x226|(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = 0;
	int32_t x230 = -1;
	static uint64_t x231 = 12904050LLU;
	uint32_t x232 = 4U;
	volatile int32_t t57 = 0;

	t57 = (x229==(x230|(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x235 = INT32_MIN;
	static int64_t x236 = -1LL;
	int32_t t58 = -1664;

	t58 = (x233==(x234|(x235^x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	static volatile uint8_t x238 = 9U;
	uint64_t x240 = UINT64_MAX;

	t59 = (x237==(x238|(x239^x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	volatile int64_t x242 = INT64_MAX;
	static volatile int32_t x243 = INT32_MIN;
	uint64_t x244 = 223291118069569137LLU;
	int32_t t60 = 61276;

	t60 = (x241==(x242|(x243^x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x246 = 2U;
	int32_t x247 = -57;
	int8_t x248 = -2;
	int32_t t61 = 781153469;

	t61 = (x245==(x246|(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x249 = 962U;
	int8_t x250 = INT8_MIN;
	static uint8_t x251 = UINT8_MAX;
	static uint8_t x252 = 57U;
	volatile int32_t t62 = -110885;

	t62 = (x249==(x250|(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = UINT64_MAX;
	uint64_t x255 = 7961327387864423369LLU;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t63 = 769916440;

	t63 = (x253==(x254|(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	volatile int16_t x258 = -1;
	int32_t t64 = -6724;

	t64 = (x257==(x258|(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	static int8_t x263 = INT8_MAX;
	int16_t x264 = 1;
	static int32_t t65 = -1889;

	t65 = (x261==(x262|(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x265 = 1357U;
	int32_t x266 = 195585;
	uint8_t x267 = 4U;
	int32_t x268 = -1;

	t66 = (x265==(x266|(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	volatile int32_t x270 = INT32_MIN;
	int8_t x271 = -1;
	uint64_t x272 = 5244091865114002LLU;
	int32_t t67 = -120;

	t67 = (x269==(x270|(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = INT8_MAX;
	uint32_t x276 = 340122U;

	t68 = (x273==(x274|(x275^x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int32_t x278 = INT32_MIN;
	volatile int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -1;

	t69 = (x277==(x278|(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x282 = 57U;
	uint16_t x283 = 11U;
	static uint8_t x284 = 27U;
	volatile int32_t t70 = -6;

	t70 = (x281==(x282|(x283^x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 1;
	static uint64_t x286 = 5860398970LLU;
	volatile int8_t x287 = -1;
	int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 1439751;

	t71 = (x285==(x286|(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x290 = -1LL;
	int64_t x291 = 4762759518LL;
	int8_t x292 = -1;
	volatile int32_t t72 = -14;

	t72 = (x289==(x290|(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 120;
	volatile int8_t x294 = INT8_MIN;
	int32_t x295 = -1;
	static volatile uint16_t x296 = 805U;

	t73 = (x293==(x294|(x295^x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	int64_t x300 = INT64_MAX;
	int32_t t74 = 615;

	t74 = (x297==(x298|(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x301 = 214U;
	int8_t x302 = 0;
	int8_t x303 = INT8_MAX;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 4;

	t75 = (x301==(x302|(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	static uint8_t x306 = 40U;
	uint8_t x307 = 6U;
	uint64_t x308 = UINT64_MAX;
	static int32_t t76 = 29743;

	t76 = (x305==(x306|(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x310 = INT16_MIN;
	int8_t x311 = INT8_MAX;
	volatile int64_t x312 = -27610143611LL;

	t77 = (x309==(x310|(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 703888625205850773LL;
	int16_t x314 = -1;
	int32_t t78 = 856095;

	t78 = (x313==(x314|(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -1290;
	static int32_t x319 = -3693;
	volatile uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = 1045292;

	t79 = (x317==(x318|(x319^x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x321 = INT16_MAX;
	int8_t x322 = INT8_MAX;
	uint64_t x324 = 1796LLU;
	volatile int32_t t80 = 99;

	t80 = (x321==(x322|(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 1;
	int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	uint16_t x328 = 2003U;
	volatile int32_t t81 = 532;

	t81 = (x325==(x326|(x327^x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int16_t x330 = INT16_MIN;
	volatile int16_t x331 = 123;

	t82 = (x329==(x330|(x331^x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MAX;
	int8_t x336 = INT8_MAX;
	int32_t t83 = -22308;

	t83 = (x333==(x334|(x335^x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	static uint8_t x338 = 3U;
	static int32_t x339 = INT32_MIN;
	int64_t x340 = -10001170969LL;

	t84 = (x337==(x338|(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = 30870445;
	int16_t x343 = -1;

	t85 = (x341==(x342|(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -272913536440606399LL;
	static volatile int32_t x348 = INT32_MAX;
	volatile int32_t t86 = 218950812;

	t86 = (x345==(x346|(x347^x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = -51;
	uint32_t x350 = 4012266U;
	int16_t x351 = INT16_MIN;
	volatile int64_t x352 = -1LL;
	int32_t t87 = 27730;

	t87 = (x349==(x350|(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 90377U;
	volatile uint8_t x354 = 5U;
	int32_t x355 = 1255236;
	int8_t x356 = -9;

	t88 = (x353==(x354|(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 3249334LLU;
	volatile uint64_t x359 = UINT64_MAX;
	static int8_t x360 = -49;
	int32_t t89 = -60104255;

	t89 = (x357==(x358|(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -1LL;
	int64_t x362 = INT64_MAX;
	uint64_t x363 = 288140569063132855LLU;
	volatile int8_t x364 = 14;
	int32_t t90 = -12935722;

	t90 = (x361==(x362|(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = 0;
	int32_t x367 = 1;
	int8_t x368 = -1;
	volatile int32_t t91 = 1869;

	t91 = (x365==(x366|(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	volatile int64_t x371 = INT64_MAX;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = 91;

	t92 = (x369==(x370|(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 30U;
	int16_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	volatile uint16_t x376 = 732U;
	volatile int32_t t93 = -1223872;

	t93 = (x373==(x374|(x375^x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int32_t x379 = -1;
	volatile int32_t t94 = 157198551;

	t94 = (x377==(x378|(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	static uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 9023474;

	t95 = (x381==(x382|(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x385 = -1216383;
	int32_t x386 = INT32_MIN;
	int32_t x387 = -71187;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -2509289;

	t96 = (x385==(x386|(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -142;
	int64_t x390 = INT64_MIN;
	int64_t x391 = -40462938537LL;
	int16_t x392 = -1;

	t97 = (x389==(x390|(x391^x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = UINT16_MAX;
	int8_t x394 = INT8_MIN;
	uint16_t x395 = 6U;
	uint32_t x396 = UINT32_MAX;
	int32_t t98 = 242509;

	t98 = (x393==(x394|(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = 0;
	int32_t x398 = INT32_MIN;
	uint16_t x399 = 0U;
	static int8_t x400 = -28;
	volatile int32_t t99 = 1762;

	t99 = (x397==(x398|(x399^x400)));

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

