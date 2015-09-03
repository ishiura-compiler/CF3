#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = -1;
int64_t t0 = -78952162515LL;
static uint32_t x7 = UINT32_MAX;
uint32_t x20 = 2U;
int64_t x24 = 7850673552LL;
int32_t t6 = -431334;
int64_t t7 = 132240981806943LL;
static uint8_t x43 = 32U;
uint8_t x53 = UINT8_MAX;
uint32_t x54 = 1211535569U;
int8_t x57 = -1;
int8_t x60 = INT8_MIN;
volatile int32_t t14 = 1437;
volatile int8_t x73 = INT8_MIN;
volatile uint32_t t18 = 6752U;
static int64_t x83 = INT64_MIN;
static uint16_t x86 = 6060U;
volatile int16_t x94 = -954;
int8_t x100 = INT8_MIN;
volatile int32_t x105 = INT32_MIN;
int32_t x112 = INT32_MIN;
volatile int8_t x114 = INT8_MIN;
int32_t x116 = INT32_MIN;
static volatile uint16_t x120 = 3U;
volatile uint16_t x124 = 31U;
static int8_t x129 = INT8_MIN;
volatile uint32_t x132 = 26385651U;
int64_t t31 = -14577702LL;
static int64_t x137 = 252072LL;
static volatile int8_t x139 = INT8_MIN;
static volatile uint64_t t33 = 1LLU;
int8_t x144 = -4;
uint64_t t34 = 60419649606LLU;
int16_t x147 = INT16_MIN;
int64_t x153 = INT64_MAX;
static uint32_t x156 = 187786U;
int64_t t37 = -3234291494798384163LL;
volatile int64_t x161 = -7986266835LL;
int16_t x163 = INT16_MAX;
int8_t x164 = INT8_MIN;
static int64_t x172 = INT64_MAX;
int64_t x175 = INT64_MAX;
int64_t t42 = -543LL;
int64_t t45 = -630LL;
uint64_t x190 = 2LLU;
static int8_t x192 = INT8_MIN;
volatile int64_t t47 = -539287035395726887LL;
uint8_t x202 = 8U;
volatile int16_t x207 = INT16_MAX;
uint32_t x212 = 23989304U;
volatile uint64_t x216 = 7080LLU;
int16_t x226 = -51;
uint16_t x227 = 1875U;
int64_t x228 = INT64_MAX;
int64_t t54 = 4LL;
volatile uint16_t x229 = 15017U;
int8_t x235 = INT8_MIN;
static volatile int64_t t56 = 12332577LL;
volatile uint64_t t60 = 2133LLU;
static int8_t x256 = -1;
uint16_t x259 = 7U;
volatile uint16_t x260 = 1740U;
static volatile uint32_t x263 = 49U;
volatile uint16_t x265 = 98U;
static uint8_t x270 = 5U;
uint32_t t65 = 17658481U;
static uint32_t x282 = 131044166U;
volatile uint64_t x288 = UINT64_MAX;
volatile int8_t x302 = INT8_MAX;
volatile uint64_t t73 = 1001161322169612968LLU;
volatile uint64_t t76 = 27LLU;
int16_t x322 = INT16_MAX;
volatile uint8_t x328 = 5U;
static volatile int32_t t78 = -1;
uint64_t x334 = 140695652857715180LLU;
volatile int16_t x341 = -1;
uint64_t x342 = UINT64_MAX;
volatile uint64_t t82 = 1974226712811LLU;
volatile int64_t x364 = -1LL;
volatile int64_t t88 = -601LL;
static int16_t x370 = 3314;
int16_t x376 = -1;
volatile uint64_t x380 = UINT64_MAX;
uint64_t t91 = 2840287830675LLU;
int64_t x381 = 7851793193451404LL;
int64_t x386 = INT64_MAX;
int64_t x392 = 151049363941913LL;
int64_t t94 = 174775747898925959LL;
static int64_t x394 = -304065LL;
volatile uint8_t x402 = 23U;
uint64_t x406 = UINT64_MAX;
int32_t x409 = -1;
int32_t x411 = INT32_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int64_t x2 = INT64_MIN;
	int16_t x3 = INT16_MAX;

	t0 = (((x1|x2)^x3)%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static uint16_t x6 = UINT16_MAX;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 399841U;

	t1 = (((x5|x6)^x7)%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 107U;
	static int32_t x10 = -76;
	static uint32_t x11 = 64882307U;
	uint8_t x12 = UINT8_MAX;
	static uint32_t t2 = 5U;

	t2 = (((x9|x10)^x11)%x12);

	if (t2 != 148U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static uint64_t x14 = 51893125130554LLU;
	int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MIN;
	uint64_t t3 = 24449LLU;

	t3 = (((x13|x14)^x15)%x16);

	if (t3 != 51892612093440LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	int32_t x19 = 951838;
	volatile uint32_t t4 = 199999U;

	t4 = (((x17|x18)^x19)%x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 97U;
	int32_t x22 = INT32_MIN;
	int32_t x23 = -1;
	int64_t t5 = -1034786LL;

	t5 = (((x21|x22)^x23)%x24);

	if (t5 != 2147483550LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = 5;
	int16_t x27 = -453;
	int16_t x28 = -1;

	t6 = (((x25|x26)^x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	volatile uint8_t x30 = 6U;
	static int16_t x31 = INT16_MAX;
	int64_t x32 = 59081LL;

	t7 = (((x29|x30)^x31)%x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 312693U;
	uint64_t x34 = UINT64_MAX;
	static uint16_t x35 = UINT16_MAX;
	volatile int8_t x36 = INT8_MIN;
	uint64_t t8 = 680477LLU;

	t8 = (((x33|x34)^x35)%x36);

	if (t8 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int32_t x38 = INT32_MAX;
	int64_t x39 = INT64_MIN;
	static volatile int8_t x40 = INT8_MAX;
	int64_t t9 = -94314LL;

	t9 = (((x37|x38)^x39)%x40);

	if (t9 != -121LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint16_t x42 = 272U;
	volatile uint32_t x44 = UINT32_MAX;
	uint32_t t10 = 57523922U;

	t10 = (((x41|x42)^x43)%x44);

	if (t10 != 65503U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 13254;
	static int64_t x46 = 84LL;
	volatile uint16_t x47 = 3U;
	int16_t x48 = INT16_MAX;
	int64_t t11 = 14LL;

	t11 = (((x45|x46)^x47)%x48);

	if (t11 != 13269LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x55 = UINT16_MAX;
	int16_t x56 = INT16_MIN;
	static uint32_t t12 = 412927640U;

	t12 = (((x53|x54)^x55)%x56);

	if (t12 != 1211526912U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x58 = 19U;
	int8_t x59 = 1;
	int32_t t13 = -9680;

	t13 = (((x57|x58)^x59)%x60);

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int8_t x62 = INT8_MIN;
	int32_t x63 = 3128;
	static int32_t x64 = INT32_MAX;

	t14 = (((x61|x62)^x63)%x64);

	if (t14 != -3144) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = 525272289861625041LLU;
	int64_t x68 = -281738LL;
	volatile uint64_t t15 = 400LLU;

	t15 = (((x65|x66)^x67)%x68);

	if (t15 != 17921471783847926574LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 8U;
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = INT8_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t16 = -301580;

	t16 = (((x69|x70)^x71)%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = 353949;
	int8_t x75 = -1;
	static uint32_t x76 = UINT32_MAX;
	volatile uint32_t t17 = 1967412U;

	t17 = (((x73|x74)^x75)%x76);

	if (t17 != 98U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	volatile uint32_t x78 = 20117171U;
	int8_t x79 = -1;
	volatile uint8_t x80 = UINT8_MAX;

	t18 = (((x77|x78)^x79)%x80);

	if (t18 != 204U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MIN;
	int8_t x84 = -41;
	static volatile int64_t t19 = 0LL;

	t19 = (((x81|x82)^x83)%x84);

	if (t19 != 3LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	int32_t x87 = 9;
	uint8_t x88 = UINT8_MAX;
	int32_t t20 = 2310359;

	t20 = (((x85|x86)^x87)%x88);

	if (t20 != -10) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 1;
	uint32_t x90 = 16U;
	volatile int16_t x91 = 1;
	uint8_t x92 = 83U;
	uint32_t t21 = 4458902U;

	t21 = (((x89|x90)^x91)%x92);

	if (t21 != 16U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x95 = UINT8_MAX;
	int64_t x96 = 18817706029LL;
	int64_t t22 = -1385361987866619575LL;

	t22 = (((x93|x94)^x95)%x96);

	if (t22 != -839LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	volatile int16_t x98 = INT16_MIN;
	static uint64_t x99 = UINT64_MAX;
	uint64_t t23 = 2224288260566LLU;

	t23 = (((x97|x98)^x99)%x100);

	if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 5044U;
	int16_t x102 = INT16_MIN;
	static int8_t x103 = -1;
	int32_t x104 = INT32_MIN;
	volatile int32_t t24 = 192;

	t24 = (((x101|x102)^x103)%x104);

	if (t24 != 27723) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x106 = 122U;
	volatile int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MAX;
	int32_t t25 = -5;

	t25 = (((x105|x106)^x107)%x108);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 224881U;
	static int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	uint32_t t26 = 51268U;

	t26 = (((x109|x110)^x111)%x112);

	if (t26 != 113U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x113 = INT32_MIN;
	uint64_t x115 = 13039LLU;
	static volatile uint64_t t27 = 1976804115097LLU;

	t27 = (((x113|x114)^x115)%x116);

	if (t27 != 2147470703LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MAX;
	int32_t x118 = -1;
	volatile int16_t x119 = -2778;
	volatile int32_t t28 = -3;

	t28 = (((x117|x118)^x119)%x120);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	static int16_t x122 = -1;
	static volatile int32_t x123 = INT32_MIN;
	volatile int32_t t29 = 17980091;

	t29 = (((x121|x122)^x123)%x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x125 = 1109U;
	int64_t x126 = INT64_MAX;
	int64_t x127 = -1LL;
	volatile uint16_t x128 = 13U;
	volatile int64_t t30 = -960419878038LL;

	t30 = (((x125|x126)^x127)%x128);

	if (t30 != -8LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x130 = 8;
	int64_t x131 = -2006951704014353996LL;

	t31 = (((x129|x130)^x131)%x132);

	if (t31 != 4006795LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = INT64_MAX;
	static uint16_t x135 = 1U;
	static uint16_t x136 = UINT16_MAX;
	volatile int64_t t32 = 59327932753LL;

	t32 = (((x133|x134)^x135)%x136);

	if (t32 != 32766LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x138 = 1744633LLU;
	int8_t x140 = 56;

	t33 = (((x137|x138)^x139)%x140);

	if (t33 != 17LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = UINT64_MAX;
	uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MAX;

	t34 = (((x141|x142)^x143)%x144);

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = UINT64_MAX;
	int8_t x146 = INT8_MAX;
	volatile uint32_t x148 = UINT32_MAX;
	volatile uint64_t t35 = 2996LLU;

	t35 = (((x145|x146)^x147)%x148);

	if (t35 != 32767LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = INT8_MIN;
	uint64_t x150 = 7300641455LLU;
	uint64_t x151 = 3955647891LLU;
	static volatile int8_t x152 = -1;
	uint64_t t36 = 18839520LLU;

	t36 = (((x149|x150)^x151)%x152);

	if (t36 != 18446744069753903676LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = -2883;
	int8_t x155 = -1;

	t37 = (((x153|x154)^x155)%x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	static int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	uint32_t x160 = 695U;
	int64_t t38 = 1LL;

	t38 = (((x157|x158)^x159)%x160);

	if (t38 != 492LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x162 = UINT8_MAX;
	int64_t t39 = 1214451359691LL;

	t39 = (((x161|x162)^x163)%x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 23655U;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MIN;
	int32_t x168 = -43259;
	volatile int64_t t40 = -114519543981303960LL;

	t40 = (((x165|x166)^x167)%x168);

	if (t40 != 27290LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 1281750U;
	volatile int8_t x170 = -1;
	int16_t x171 = INT16_MIN;
	volatile int64_t t41 = 52143LL;

	t41 = (((x169|x170)^x171)%x172);

	if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MAX;
	uint32_t x174 = 11U;
	int8_t x176 = -1;

	t42 = (((x173|x174)^x175)%x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	int64_t x178 = INT64_MIN;
	uint8_t x179 = UINT8_MAX;
	volatile uint64_t x180 = 1783212913061275LLU;
	uint64_t t43 = 9950969849647508LLU;

	t43 = (((x177|x178)^x179)%x180);

	if (t43 != 1189701003722760LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = 7177057299LL;
	int16_t x182 = 5317;
	int32_t x183 = -48;
	uint8_t x184 = 2U;
	static volatile int64_t t44 = -5791205LL;

	t44 = (((x181|x182)^x183)%x184);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x185 = 27U;
	int8_t x186 = INT8_MIN;
	int16_t x187 = -1;
	int64_t x188 = -8227076LL;

	t45 = (((x185|x186)^x187)%x188);

	if (t45 != 100LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x189 = 530U;
	int16_t x191 = INT16_MIN;
	volatile uint64_t t46 = 1253735843830135LLU;

	t46 = (((x189|x190)^x191)%x192);

	if (t46 != 18446744073709519378LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	static int32_t x198 = 7489;
	int32_t x199 = -1501;
	int64_t x200 = -11076462814131LL;

	t47 = (((x197|x198)^x199)%x200);

	if (t47 != 1451527885806LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MAX;
	int8_t x203 = 22;
	uint64_t x204 = 8268224545190LLU;
	volatile uint64_t t48 = 412631LLU;

	t48 = (((x201|x202)^x203)%x204);

	if (t48 != 2147483625LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x205 = UINT8_MAX;
	volatile int32_t x206 = INT32_MIN;
	int64_t x208 = -1LL;
	volatile int64_t t49 = -10252209LL;

	t49 = (((x205|x206)^x207)%x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x209 = 259604LL;
	volatile int16_t x210 = -864;
	int32_t x211 = INT32_MIN;
	static int64_t t50 = -5784223LL;

	t50 = (((x209|x210)^x211)%x212);

	if (t50 != 12435260LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = 8140LLU;
	static volatile int16_t x215 = 1;
	uint64_t t51 = 1706997497LLU;

	t51 = (((x213|x214)^x215)%x216);

	if (t51 != 2894LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -1;
	static uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 1369U;
	int8_t x220 = INT8_MIN;
	uint32_t t52 = 1U;

	t52 = (((x217|x218)^x219)%x220);

	if (t52 != 4294965926U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x221 = 55U;
	static int32_t x222 = INT32_MAX;
	int32_t x223 = -1;
	int8_t x224 = INT8_MIN;
	volatile int32_t t53 = 4469197;

	t53 = (((x221|x222)^x223)%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;

	t54 = (((x225|x226)^x227)%x228);

	if (t54 != -1890LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x230 = -252;
	uint32_t x231 = 36210U;
	volatile int16_t x232 = -1;
	static volatile uint32_t t55 = 1445237U;

	t55 = (((x229|x230)^x231)%x232);

	if (t55 != 4294931167U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x233 = INT64_MIN;
	static int8_t x234 = INT8_MAX;
	int8_t x236 = -1;

	t56 = (((x233|x234)^x235)%x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = 564520780U;
	volatile uint64_t x238 = 37073340484LLU;
	static int8_t x239 = -5;
	int8_t x240 = -1;
	volatile uint64_t t57 = 11LLU;

	t57 = (((x237|x238)^x239)%x240);

	if (t57 != 18446744036636102839LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x241 = 131302576174LLU;
	int64_t x242 = INT64_MIN;
	int16_t x243 = -5054;
	static int16_t x244 = INT16_MIN;
	static volatile uint64_t t58 = 399799905801LLU;

	t58 = (((x241|x242)^x243)%x244);

	if (t58 != 9223371905552202860LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = -1;
	int16_t x246 = -2836;
	uint8_t x247 = UINT8_MAX;
	volatile int32_t x248 = INT32_MIN;
	int32_t t59 = 0;

	t59 = (((x245|x246)^x247)%x248);

	if (t59 != -256) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -1;
	volatile int64_t x250 = INT64_MIN;
	volatile uint64_t x251 = 401232670457LLU;
	int64_t x252 = INT64_MAX;

	t60 = (((x249|x250)^x251)%x252);

	if (t60 != 9223371635622105351LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = UINT8_MAX;
	static volatile uint32_t x254 = 1U;
	int16_t x255 = INT16_MAX;
	volatile uint32_t t61 = 55U;

	t61 = (((x253|x254)^x255)%x256);

	if (t61 != 32512U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	volatile int16_t x258 = -1;
	static volatile int32_t t62 = -7626;

	t62 = (((x257|x258)^x259)%x260);

	if (t62 != -8) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = -1;
	int32_t x262 = -1;
	int8_t x264 = -14;
	volatile uint32_t t63 = 21U;

	t63 = (((x261|x262)^x263)%x264);

	if (t63 != 4294967246U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x266 = INT8_MIN;
	static int32_t x267 = INT32_MIN;
	volatile uint32_t x268 = 6790U;
	uint32_t t64 = 263188763U;

	t64 = (((x265|x266)^x267)%x268);

	if (t64 != 3528U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x269 = 471U;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = UINT32_MAX;

	t65 = (((x269|x270)^x271)%x272);

	if (t65 != 4294934999U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = -13012125345LL;
	volatile int16_t x274 = 10;
	uint32_t x275 = 4U;
	int16_t x276 = INT16_MAX;
	int64_t t66 = -18974594254693929LL;

	t66 = (((x273|x274)^x275)%x276);

	if (t66 != -21979LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x277 = UINT64_MAX;
	int64_t x278 = -135895076735597011LL;
	int32_t x279 = 122120121;
	volatile int16_t x280 = -1;
	volatile uint64_t t67 = 124792436418LLU;

	t67 = (((x277|x278)^x279)%x280);

	if (t67 != 18446744073587431494LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x281 = 62U;
	uint32_t x283 = 8074473U;
	volatile uint16_t x284 = 1152U;
	volatile uint32_t t68 = 38210437U;

	t68 = (((x281|x282)^x283)%x284);

	if (t68 != 151U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 2866LLU;
	volatile int8_t x286 = -47;
	int64_t x287 = INT64_MIN;
	uint64_t t69 = 69141379009LLU;

	t69 = (((x285|x286)^x287)%x288);

	if (t69 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -1;
	uint16_t x290 = 108U;
	static int8_t x291 = INT8_MAX;
	uint16_t x292 = 680U;
	static int32_t t70 = -735441;

	t70 = (((x289|x290)^x291)%x292);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = 27604660LL;
	int16_t x296 = INT16_MIN;
	static int64_t t71 = -445LL;

	t71 = (((x293|x294)^x295)%x296);

	if (t71 != -14005LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = -1;
	static int16_t x298 = -1;
	volatile int32_t x299 = -510224;
	uint64_t x300 = 2LLU;
	volatile uint64_t t72 = 9596LLU;

	t72 = (((x297|x298)^x299)%x300);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x301 = 985387636458LLU;
	static int8_t x303 = -8;
	uint8_t x304 = UINT8_MAX;

	t73 = (((x301|x302)^x303)%x304);

	if (t73 != 238LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MIN;
	static uint64_t x310 = 129903970023374LLU;
	int8_t x311 = 6;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t74 = 34244LLU;

	t74 = (((x309|x310)^x311)%x312);

	if (t74 != 9223501940824799176LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	static uint8_t x314 = 9U;
	int8_t x315 = 49;
	uint64_t x316 = UINT64_MAX;
	uint64_t t75 = 478328268888648597LLU;

	t75 = (((x313|x314)^x315)%x316);

	if (t75 != 18446744073709518904LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x317 = 22496U;
	volatile int64_t x318 = -1LL;
	uint64_t x319 = 20135202LLU;
	volatile int32_t x320 = INT32_MIN;

	t76 = (((x317|x318)^x319)%x320);

	if (t76 != 2127348445LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = -1;
	volatile uint64_t x323 = 8278163168335LLU;
	volatile uint32_t x324 = UINT32_MAX;
	uint64_t t77 = 3996052387580053175LLU;

	t77 = (((x321|x322)^x323)%x324);

	if (t77 != 2533776425LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x325 = UINT16_MAX;
	int8_t x326 = INT8_MIN;
	int32_t x327 = 125;

	t78 = (((x325|x326)^x327)%x328);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = 31U;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = UINT32_MAX;
	volatile int8_t x332 = INT8_MIN;
	uint32_t t79 = 16528047U;

	t79 = (((x329|x330)^x331)%x332);

	if (t79 != 96U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = 1356557268168LL;
	uint64_t x335 = UINT64_MAX;
	int16_t x336 = INT16_MIN;
	uint64_t t80 = 534LLU;

	t80 = (((x333|x334)^x335)%x336);

	if (t80 != 18306048384057754131LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x337 = UINT16_MAX;
	volatile uint64_t x338 = 25318698237LLU;
	uint8_t x339 = 24U;
	uint16_t x340 = UINT16_MAX;
	static volatile uint64_t t81 = 34668654LLU;

	t81 = (((x337|x338)^x339)%x340);

	if (t81 != 58633LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x343 = 1;
	volatile int16_t x344 = -3076;

	t82 = (((x341|x342)^x343)%x344);

	if (t82 != 3074LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = 5391U;
	int8_t x346 = INT8_MIN;
	volatile int8_t x347 = INT8_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t83 = 7515748LLU;

	t83 = (((x345|x346)^x347)%x348);

	if (t83 != 15LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = 1143872081LLU;
	uint64_t x350 = 35710253291LLU;
	int16_t x351 = -4;
	int64_t x352 = 892671944397523422LL;
	static uint64_t t84 = 140945552LLU;

	t84 = (((x349|x350)^x351)%x352);

	if (t84 != 593305149981720495LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -1LL;
	int8_t x354 = -1;
	int8_t x355 = INT8_MIN;
	volatile int8_t x356 = INT8_MIN;
	int64_t t85 = 1952LL;

	t85 = (((x353|x354)^x355)%x356);

	if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x357 = -1;
	uint8_t x358 = 7U;
	uint64_t x359 = 1907507266058LLU;
	volatile uint32_t x360 = 8U;
	static volatile uint64_t t86 = 17133706287LLU;

	t86 = (((x357|x358)^x359)%x360);

	if (t86 != 5LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = -26;
	static uint64_t x362 = 1856225765LLU;
	uint8_t x363 = UINT8_MAX;
	uint64_t t87 = 909332200038564LLU;

	t87 = (((x361|x362)^x363)%x364);

	if (t87 != 18446744073709551384LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x365 = 743207U;
	uint32_t x366 = 48716U;
	uint32_t x367 = 0U;
	static volatile int64_t x368 = INT64_MAX;

	t88 = (((x365|x366)^x367)%x368);

	if (t88 != 786287LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	uint64_t x371 = 4752048773167LLU;
	static int16_t x372 = INT16_MIN;
	uint64_t t89 = 3LLU;

	t89 = (((x369|x370)^x371)%x372);

	if (t89 != 4752713852880LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MAX;
	volatile int8_t x375 = -1;
	int32_t t90 = 118668;

	t90 = (((x373|x374)^x375)%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MAX;
	uint8_t x378 = 95U;
	int8_t x379 = -12;

	t91 = (((x377|x378)^x379)%x380);

	if (t91 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x382 = INT8_MIN;
	int64_t x383 = -1LL;
	int32_t x384 = INT32_MAX;
	static volatile int64_t t92 = 141252419342634456LL;

	t92 = (((x381|x382)^x383)%x384);

	if (t92 != 115LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x387 = 161393593;
	volatile int32_t x388 = INT32_MIN;
	int64_t t93 = -3190354LL;

	t93 = (((x385|x386)^x387)%x388);

	if (t93 != 1986090054LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = INT32_MIN;
	int32_t x390 = -1;
	int32_t x391 = -5535;

	t94 = (((x389|x390)^x391)%x392);

	if (t94 != 5534LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x393 = INT8_MIN;
	volatile int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MIN;
	int64_t t95 = 113565LL;

	t95 = (((x393|x394)^x395)%x396);

	if (t95 != 32703LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	static int64_t x400 = INT64_MAX;
	volatile int64_t t96 = 226500099007LL;

	t96 = (((x397|x398)^x399)%x400);

	if (t96 != 2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 100721LLU;
	volatile int64_t x403 = -1LL;
	int16_t x404 = -1;
	static volatile uint64_t t97 = 252760174245069LLU;

	t97 = (((x401|x402)^x403)%x404);

	if (t97 != 18446744073709450888LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	uint64_t x407 = 4493LLU;
	volatile int8_t x408 = -1;
	volatile uint64_t t98 = 201LLU;

	t98 = (((x405|x406)^x407)%x408);

	if (t98 != 18446744073709547122LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x410 = INT8_MAX;
	volatile int16_t x412 = INT16_MIN;
	int32_t t99 = 1;

	t99 = (((x409|x410)^x411)%x412);

	if (t99 != 32767) { NG(); } else { ; }
	
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

