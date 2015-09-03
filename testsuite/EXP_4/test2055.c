#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = -1LL;
volatile uint32_t t1 = 176602790U;
uint64_t x13 = UINT64_MAX;
volatile uint64_t t2 = 1LLU;
int64_t x29 = -1LL;
volatile int32_t x34 = INT32_MAX;
static volatile uint32_t t5 = 1921U;
static volatile int8_t x39 = INT8_MIN;
int64_t t9 = -4917138133202402LL;
volatile uint64_t t10 = 119422219LLU;
int8_t x62 = -35;
static volatile int8_t x68 = INT8_MAX;
volatile int64_t x74 = -1LL;
int64_t x76 = -13268LL;
static int64_t t15 = -68401358589174086LL;
uint64_t x90 = UINT64_MAX;
int64_t x91 = -1LL;
static uint16_t x99 = 15988U;
int64_t x100 = -77162LL;
int8_t x102 = 0;
volatile uint8_t x104 = 0U;
int32_t x108 = INT32_MAX;
int8_t x110 = INT8_MIN;
uint64_t x121 = 266055833131LLU;
volatile uint64_t x126 = 444451792LLU;
static volatile int8_t x131 = INT8_MIN;
volatile uint32_t x133 = UINT32_MAX;
static uint64_t x141 = 161189171145562LLU;
int32_t x146 = 96959;
uint32_t x151 = UINT32_MAX;
static volatile uint64_t t31 = 7480835935994LLU;
static int64_t x161 = -168298811751437LL;
int64_t x165 = -105LL;
static volatile int8_t x172 = -1;
int64_t x173 = -31425LL;
static int8_t x178 = INT8_MIN;
int8_t x179 = 5;
int8_t x183 = 54;
static int32_t t39 = -24734975;
static int32_t x192 = -1;
uint8_t x196 = 34U;
int16_t x197 = INT16_MIN;
int64_t x198 = -1LL;
int32_t x199 = -1;
int64_t x202 = -3LL;
volatile uint32_t x209 = UINT32_MAX;
int64_t x213 = 77742LL;
volatile uint32_t x215 = 130601174U;
int64_t t47 = -533540LL;
volatile int32_t x217 = INT32_MIN;
volatile int32_t x218 = -1;
int8_t x229 = INT8_MIN;
int16_t x230 = -1;
uint8_t x232 = UINT8_MAX;
uint64_t x239 = 28530612012442159LLU;
static int8_t x250 = INT8_MIN;
uint32_t x251 = UINT32_MAX;
static uint64_t x254 = 2190824761206LLU;
volatile uint64_t t55 = 91043LLU;
int32_t x259 = INT32_MIN;
static int64_t x284 = -2092743626643726LL;
volatile int64_t t60 = 535609495682520LL;
int8_t x285 = INT8_MIN;
int32_t x286 = -1;
int32_t x287 = 226703;
static volatile uint64_t t62 = 991053207246LLU;
int64_t x295 = -3474582LL;
int64_t x309 = INT64_MAX;
static int8_t x311 = INT8_MIN;
int64_t x314 = 640846051252LL;
uint64_t t66 = 63LLU;
uint32_t x323 = UINT32_MAX;
uint8_t x343 = UINT8_MAX;
int64_t t69 = -4294LL;
int16_t x351 = INT16_MIN;
int16_t x352 = -2;
int8_t x371 = INT8_MIN;
volatile int64_t x379 = -1LL;
int32_t x389 = 1165745;
volatile int64_t t77 = -68925519327LL;
int8_t x405 = 0;
int32_t x407 = -1;
int8_t x408 = -31;
uint32_t x419 = 1U;
volatile uint64_t t83 = 64744753969005LLU;
volatile int16_t x421 = INT16_MIN;
int8_t x430 = 1;
int8_t x435 = -1;
uint64_t x464 = 64LLU;
volatile uint16_t x470 = 810U;
volatile int32_t x472 = 12047;
volatile uint8_t x486 = 0U;
int32_t x493 = INT32_MIN;
volatile int8_t x501 = -1;
int64_t x504 = INT64_MIN;


void f0(void) {
	static volatile int16_t x1 = INT16_MAX;
	uint16_t x2 = UINT16_MAX;
	uint64_t x4 = 1757LLU;
	volatile uint64_t t0 = 5LLU;

	t0 = (x1+(x2*(x3^x4)));

	if (t0 != 18446744073594373853LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MIN;
	int32_t x10 = -1;
	uint8_t x11 = 23U;
	uint32_t x12 = 66121834U;

	t1 = (x9+(x10*(x11^x12)));

	if (t1 != 4228812675U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = INT8_MAX;
	uint8_t x16 = UINT8_MAX;

	t2 = (x13+(x14*(x15^x16)));

	if (t2 != 32639LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x25 = UINT8_MAX;
	uint32_t x26 = UINT32_MAX;
	volatile uint8_t x27 = 0U;
	volatile uint8_t x28 = UINT8_MAX;
	uint32_t t3 = 501214094U;

	t3 = (x25+(x26*(x27^x28)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x30 = INT32_MIN;
	int8_t x31 = -1;
	int32_t x32 = -1;
	volatile int64_t t4 = -1005LL;

	t4 = (x29+(x30*(x31^x32)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x33 = INT8_MAX;
	volatile uint8_t x35 = 109U;
	volatile uint32_t x36 = UINT32_MAX;

	t5 = (x33+(x34*(x35^x36)));

	if (t5 != 237U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -466;
	static int32_t x38 = -1;
	volatile int16_t x40 = INT16_MIN;
	int32_t t6 = 11;

	t6 = (x37+(x38*(x39^x40)));

	if (t6 != -33106) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x41 = INT8_MIN;
	uint16_t x42 = 431U;
	volatile uint64_t x43 = 3936865043209313LLU;
	int64_t x44 = -3100092LL;
	volatile uint64_t t7 = 61776633309340LLU;

	t7 = (x41+(x42*(x43^x44)));

	if (t7 != 16749955241309138891LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int16_t x46 = -1;
	int64_t x47 = INT64_MAX;
	int8_t x48 = INT8_MAX;
	volatile uint64_t t8 = 26148LLU;

	t8 = (x45+(x46*(x47^x48)));

	if (t8 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x53 = INT8_MAX;
	int16_t x54 = -37;
	static volatile int64_t x55 = -1LL;
	int8_t x56 = INT8_MIN;

	t9 = (x53+(x54*(x55^x56)));

	if (t9 != -4572LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x57 = INT16_MIN;
	static uint8_t x58 = 4U;
	uint64_t x59 = 3132LLU;
	static volatile int16_t x60 = -129;

	t10 = (x57+(x58*(x59^x60)));

	if (t10 != 18446744073709505804LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x61 = 0U;
	int32_t x63 = -1;
	static uint64_t x64 = 51557LLU;
	uint64_t t11 = 1012459LLU;

	t11 = (x61+(x62*(x63^x64)));

	if (t11 != 1804530LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = UINT64_MAX;
	int8_t x66 = -1;
	static int8_t x67 = INT8_MIN;
	uint64_t t12 = 3412LLU;

	t12 = (x65+(x66*(x67^x68)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x69 = UINT16_MAX;
	uint64_t x70 = 1LLU;
	uint8_t x71 = 56U;
	int8_t x72 = INT8_MAX;
	volatile uint64_t t13 = 153193150114196866LLU;

	t13 = (x69+(x70*(x71^x72)));

	if (t13 != 65606LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = UINT16_MAX;
	int64_t x75 = 276838429979866LL;
	int64_t t14 = -4182708150588678770LL;

	t14 = (x73+(x74*(x75^x76)));

	if (t14 != 276838430033673LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x81 = INT8_MIN;
	volatile int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MIN;

	t15 = (x81+(x82*(x83^x84)));

	if (t15 != -32895LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x89 = INT32_MIN;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t16 = 32115822408778644LLU;

	t16 = (x89+(x90*(x91^x92)));

	if (t16 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x93 = UINT32_MAX;
	int8_t x94 = INT8_MAX;
	volatile int32_t x95 = -7233115;
	volatile int16_t x96 = INT16_MIN;
	volatile uint32_t t17 = 5U;

	t17 = (x93+(x94*(x95^x96)));

	if (t17 != 916631770U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x97 = INT8_MAX;
	static uint32_t x98 = UINT32_MAX;
	int64_t t18 = -122872123331226LL;

	t18 = (x97+(x98*(x99^x100)));

	if (t18 != -302494546586723LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x101 = INT64_MIN;
	static volatile int8_t x103 = INT8_MIN;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x101+(x102*(x103^x104)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x105 = INT64_MIN;
	int8_t x106 = INT8_MIN;
	int32_t x107 = INT32_MIN;
	int64_t t20 = 1768LL;

	t20 = (x105+(x106*(x107^x108)));

	if (t20 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x109 = 56U;
	volatile int32_t x111 = INT32_MIN;
	int64_t x112 = -21224560414655513LL;
	static int64_t t21 = -1446794102906265089LL;

	t21 = (x109+(x110*(x111^x112)));

	if (t21 != -2716743939108238152LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = INT32_MIN;
	int8_t x114 = -1;
	int64_t x115 = -160LL;
	volatile int64_t x116 = INT64_MAX;
	int64_t t22 = -3627073962LL;

	t22 = (x113+(x114*(x115^x116)));

	if (t22 != 9223372034707292001LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x117 = 276098LL;
	uint16_t x118 = 12U;
	uint16_t x119 = 0U;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t23 = -49678854827581119LL;

	t23 = (x117+(x118*(x119^x120)));

	if (t23 != 279158LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x122 = UINT64_MAX;
	static volatile int64_t x123 = -401452363502LL;
	int32_t x124 = -1;
	uint64_t t24 = 7511LLU;

	t24 = (x121+(x122*(x123^x124)));

	if (t24 != 18446743938313021246LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x125 = INT8_MAX;
	int8_t x127 = -1;
	uint8_t x128 = UINT8_MAX;
	volatile uint64_t t25 = 127445694LLU;

	t25 = (x125+(x126*(x127^x128)));

	if (t25 != 18446743959929892991LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = 109869;
	static uint8_t x130 = 0U;
	int16_t x132 = -10;
	int32_t t26 = 13720688;

	t26 = (x129+(x130*(x131^x132)));

	if (t26 != 109869) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x134 = 139;
	uint64_t x135 = UINT64_MAX;
	static int8_t x136 = 40;
	uint64_t t27 = 383900014768443757LLU;

	t27 = (x133+(x134*(x135^x136)));

	if (t27 != 4294961596LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x137 = INT8_MAX;
	int16_t x138 = -1;
	uint64_t x139 = 24105227863648046LLU;
	static uint32_t x140 = 48U;
	static uint64_t t28 = 29527520874605LLU;

	t28 = (x137+(x138*(x139^x140)));

	if (t28 != 18422638845845903713LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x142 = 0LL;
	int64_t x143 = 1073403066479884053LL;
	int64_t x144 = INT64_MAX;
	volatile uint64_t t29 = 496857880639092LLU;

	t29 = (x141+(x142*(x143^x144)));

	if (t29 != 161189171145562LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x145 = 3;
	int32_t x147 = INT32_MAX;
	static volatile int32_t x148 = INT32_MIN;
	volatile int32_t t30 = -452895048;

	t30 = (x145+(x146*(x147^x148)));

	if (t30 != -96956) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = -1;
	uint64_t x150 = UINT64_MAX;
	volatile int32_t x152 = INT32_MIN;

	t31 = (x149+(x150*(x151^x152)));

	if (t31 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = -1LL;
	volatile uint8_t x154 = 22U;
	uint64_t x155 = UINT64_MAX;
	uint16_t x156 = 501U;
	uint64_t t32 = 2284008768279208726LLU;

	t32 = (x153+(x154*(x155^x156)));

	if (t32 != 18446744073709540571LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x157 = -1;
	int8_t x158 = INT8_MAX;
	int8_t x159 = 0;
	volatile int16_t x160 = -1;
	int32_t t33 = 4544;

	t33 = (x157+(x158*(x159^x160)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x162 = -1;
	int16_t x163 = INT16_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile int64_t t34 = 13168724141460LL;

	t34 = (x161+(x162*(x163^x164)));

	if (t34 != -168294516816908LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x166 = 1;
	int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	volatile int64_t t35 = 264980264483994172LL;

	t35 = (x165+(x166*(x167^x168)));

	if (t35 != -105LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = -1;
	uint64_t x170 = 103773870LLU;
	uint8_t x171 = 45U;
	volatile uint64_t t36 = 33846005353LLU;

	t36 = (x169+(x170*(x171^x172)));

	if (t36 != 18446744068935953595LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x174 = 1;
	int16_t x175 = INT16_MAX;
	int32_t x176 = -961135;
	volatile int64_t t37 = 16LL;

	t37 = (x173+(x174*(x175^x176)));

	if (t37 != -1003603LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x180 = 133LLU;
	uint64_t t38 = 364323LLU;

	t38 = (x177+(x178*(x179^x180)));

	if (t38 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = 2;
	int16_t x182 = 64;
	uint16_t x184 = 93U;

	t39 = (x181+(x182*(x183^x184)));

	if (t39 != 6850) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x185 = INT32_MIN;
	int8_t x186 = 0;
	int32_t x187 = INT32_MAX;
	volatile int32_t x188 = INT32_MIN;
	int32_t t40 = INT32_MIN;

	t40 = (x185+(x186*(x187^x188)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MAX;
	static uint64_t x191 = 685251753718LLU;
	volatile uint64_t t41 = 609632809197580LLU;

	t41 = (x189+(x190*(x191^x192)));

	if (t41 != 685251753719LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = INT8_MAX;
	int16_t x194 = INT16_MIN;
	static int8_t x195 = -1;
	int32_t t42 = 95452;

	t42 = (x193+(x194*(x195^x196)));

	if (t42 != 1147007) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x200 = -263937;
	volatile int64_t t43 = -7218LL;

	t43 = (x197+(x198*(x199^x200)));

	if (t43 != -296704LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x201 = -6029;
	volatile uint32_t x203 = 14U;
	static int64_t x204 = -1LL;
	volatile int64_t t44 = -1519152638920245907LL;

	t44 = (x201+(x202*(x203^x204)));

	if (t44 != -5984LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MIN;
	uint32_t x206 = 47U;
	int64_t x207 = -45718999391115393LL;
	static uint32_t x208 = 7663U;
	int64_t t45 = -99047654LL;

	t45 = (x205+(x206*(x207^x208)));

	if (t45 != -2148792973529677712LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x210 = INT16_MIN;
	static volatile uint64_t x211 = UINT64_MAX;
	int8_t x212 = 1;
	uint64_t t46 = 64LLU;

	t46 = (x209+(x210*(x211^x212)));

	if (t46 != 4295032831LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x214 = INT32_MIN;
	uint16_t x216 = UINT16_MAX;

	t47 = (x213+(x214*(x215^x216)));

	if (t47 != 2147561390LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x219 = UINT16_MAX;
	int32_t x220 = -1;
	volatile int32_t t48 = 450941;

	t48 = (x217+(x218*(x219^x220)));

	if (t48 != -2147418112) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = 12;
	volatile uint32_t x227 = 150364U;
	int8_t x228 = -63;
	uint32_t t49 = 16405619U;

	t49 = (x225+(x226*(x227^x228)));

	if (t49 != 4293162716U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x231 = INT32_MIN;
	int32_t t50 = 1;

	t50 = (x229+(x230*(x231^x232)));

	if (t50 != 2147483265) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x233 = 1;
	volatile uint64_t x234 = 1086675283451LLU;
	uint32_t x235 = 100701U;
	volatile int8_t x236 = -1;
	uint64_t t51 = 14019573896LLU;

	t51 = (x233+(x234*(x235^x236)));

	if (t51 != 99122770664377047LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MIN;
	volatile int8_t x238 = INT8_MAX;
	volatile uint8_t x240 = UINT8_MAX;
	uint64_t t52 = 6LLU;

	t52 = (x237+(x238*(x239^x240)));

	if (t52 != 3623387723432690992LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = INT16_MIN;
	static int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	static int16_t x244 = INT16_MIN;
	static int32_t t53 = 141046096;

	t53 = (x241+(x242*(x243^x244)));

	if (t53 != -4210688) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x249 = -1;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t54 = 8965587510254196243LLU;

	t54 = (x249+(x250*(x251^x252)));

	if (t54 != 549755813887LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x253 = 1780048744U;
	int32_t x255 = INT32_MAX;
	int16_t x256 = INT16_MIN;

	t55 = (x253+(x254*(x255^x256)));

	if (t55 != 17677919302985939954LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x257 = INT32_MAX;
	static int32_t x258 = 334;
	int64_t x260 = -1098009093281705LL;
	int64_t t56 = -148672568LL;

	t56 = (x257+(x258*(x259^x260)));

	if (t56 != 366735286251495809LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x269 = INT8_MIN;
	uint32_t x270 = 16024U;
	int16_t x271 = INT16_MAX;
	int16_t x272 = INT16_MAX;
	volatile uint32_t t57 = 36975U;

	t57 = (x269+(x270*(x271^x272)));

	if (t57 != 4294967168U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x273 = 0;
	static uint8_t x274 = 105U;
	volatile uint64_t x275 = UINT64_MAX;
	uint64_t x276 = UINT64_MAX;
	static uint64_t t58 = 61905321311LLU;

	t58 = (x273+(x274*(x275^x276)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = INT32_MIN;
	volatile uint16_t x278 = 1831U;
	volatile uint16_t x279 = 1U;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t59 = 20732410;

	t59 = (x277+(x278*(x279^x280)));

	if (t59 != -2087489102) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x281 = INT16_MAX;
	uint8_t x282 = 4U;
	uint8_t x283 = UINT8_MAX;

	t60 = (x281+(x282*(x283^x284)));

	if (t60 != -8370974506543053LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x288 = INT32_MIN;
	static volatile int32_t t61 = 1;

	t61 = (x285+(x286*(x287^x288)));

	if (t61 != 2147256817) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x289 = INT8_MAX;
	int32_t x290 = INT32_MIN;
	uint64_t x291 = 393LLU;
	volatile int32_t x292 = INT32_MIN;

	t62 = (x289+(x290*(x291^x292)));

	if (t62 != 4611685174466314367LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x293 = -171LL;
	volatile uint8_t x294 = UINT8_MAX;
	int8_t x296 = INT8_MAX;
	volatile int64_t t63 = 814477250341LL;

	t63 = (x293+(x294*(x295^x296)));

	if (t63 != -886040256LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = -7;
	uint8_t x302 = 51U;
	uint32_t x303 = UINT32_MAX;
	uint32_t x304 = 192976200U;
	uint32_t t64 = 1766529615U;

	t64 = (x301+(x302*(x303^x304)));

	if (t64 != 3043115630U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x310 = 7U;
	volatile int8_t x312 = INT8_MIN;
	volatile int64_t t65 = INT64_MAX;

	t65 = (x309+(x310*(x311^x312)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = 81548578LLU;
	int8_t x315 = -3;
	uint16_t x316 = 24U;

	t66 = (x313+(x314*(x315^x316)));

	if (t66 != 18446726770947716390LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x321 = -1LL;
	int16_t x322 = INT16_MAX;
	static int32_t x324 = -1;
	int64_t t67 = 169719373881624190LL;

	t67 = (x321+(x322*(x323^x324)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x329 = INT16_MAX;
	uint32_t x330 = UINT32_MAX;
	int32_t x331 = INT32_MAX;
	int16_t x332 = -29;
	uint32_t t68 = 2626029U;

	t68 = (x329+(x330*(x331^x332)));

	if (t68 != 2147516387U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x341 = INT64_MIN;
	int16_t x342 = -1;
	volatile int16_t x344 = -7;

	t69 = (x341+(x342*(x343^x344)));

	if (t69 != -9223372036854775558LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x345 = INT16_MIN;
	uint8_t x346 = 44U;
	static volatile int8_t x347 = 39;
	static volatile uint8_t x348 = UINT8_MAX;
	static volatile int32_t t70 = -3494;

	t70 = (x345+(x346*(x347^x348)));

	if (t70 != -23264) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x349 = 1U;
	static int8_t x350 = -7;
	volatile int32_t t71 = -138388;

	t71 = (x349+(x350*(x351^x352)));

	if (t71 != -229361) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = INT64_MIN;
	static volatile int16_t x354 = INT16_MAX;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = 2U;
	static volatile int64_t t72 = 0LL;

	t72 = (x353+(x354*(x355^x356)));

	if (t72 != -9223372033633452034LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x357 = INT64_MIN;
	uint8_t x358 = UINT8_MAX;
	int32_t x359 = INT32_MIN;
	volatile int64_t x360 = -1LL;
	int64_t t73 = 1527847597700LL;

	t73 = (x357+(x358*(x359^x360)));

	if (t73 != -9223371489246445823LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x369 = -1;
	uint16_t x370 = 307U;
	int16_t x372 = INT16_MAX;
	static int32_t t74 = 123573;

	t74 = (x369+(x370*(x371^x372)));

	if (t74 != -10020788) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x377 = 23U;
	int16_t x378 = INT16_MIN;
	volatile uint32_t x380 = 31306330U;
	volatile int64_t t75 = -152780386135221LL;

	t75 = (x377+(x378*(x379^x380)));

	if (t75 != 1025845854231LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x381 = 24;
	uint32_t x382 = 113157700U;
	int16_t x383 = -3;
	volatile uint32_t x384 = UINT32_MAX;
	uint32_t t76 = 7874U;

	t76 = (x381+(x382*(x383^x384)));

	if (t76 != 226315424U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x390 = -1;
	volatile int64_t x391 = 101065431732LL;
	int32_t x392 = -1;

	t77 = (x389+(x390*(x391^x392)));

	if (t77 != 101066597478LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x393 = INT64_MIN;
	static int16_t x394 = INT16_MIN;
	uint8_t x395 = 0U;
	uint32_t x396 = UINT32_MAX;
	volatile int64_t t78 = 34800092613LL;

	t78 = (x393+(x394*(x395^x396)));

	if (t78 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x397 = UINT8_MAX;
	static uint64_t x398 = 24607945929LLU;
	int64_t x399 = -1LL;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t79 = 11672016LLU;

	t79 = (x397+(x398*(x399^x400)));

	if (t79 != 255LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x406 = 1;
	volatile int32_t t80 = 38337949;

	t80 = (x405+(x406*(x407^x408)));

	if (t80 != 30) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x409 = INT16_MIN;
	uint8_t x410 = 1U;
	int8_t x411 = INT8_MIN;
	uint64_t x412 = 55956LLU;
	volatile uint64_t t81 = 9LLU;

	t81 = (x409+(x410*(x411^x412)));

	if (t81 != 18446744073709462804LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x413 = INT16_MAX;
	int32_t x414 = -6458068;
	int8_t x415 = -1;
	uint8_t x416 = 1U;
	volatile int32_t t82 = -17445208;

	t82 = (x413+(x414*(x415^x416)));

	if (t82 != 12948903) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x417 = INT8_MAX;
	uint32_t x418 = 6445U;
	static uint64_t x420 = 113745045803520LLU;

	t83 = (x417+(x418*(x419^x420)));

	if (t83 != 733086820203692972LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x422 = 42;
	int64_t x423 = -1LL;
	int64_t x424 = -35153777690201269LL;
	static int64_t t84 = 28137664LL;

	t84 = (x421+(x422*(x423^x424)));

	if (t84 != 1476458662988420488LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x425 = 4U;
	int64_t x426 = 28097164LL;
	static volatile uint8_t x427 = 19U;
	volatile int8_t x428 = 1;
	volatile int64_t t85 = -48080686115658LL;

	t85 = (x425+(x426*(x427^x428)));

	if (t85 != 505748956LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x429 = INT16_MIN;
	static volatile int64_t x431 = 4067840278LL;
	int8_t x432 = -31;
	static int64_t t86 = 1869487783738LL;

	t86 = (x429+(x430*(x431^x432)));

	if (t86 != -4067873033LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x433 = 20;
	int8_t x434 = 0;
	int32_t x436 = INT32_MIN;
	int32_t t87 = -27982;

	t87 = (x433+(x434*(x435^x436)));

	if (t87 != 20) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x437 = UINT8_MAX;
	int8_t x438 = INT8_MIN;
	int64_t x439 = -1LL;
	volatile uint64_t x440 = 1326038291179LLU;
	uint64_t t88 = 666LLU;

	t88 = (x437+(x438*(x439^x440)));

	if (t88 != 169732901271295LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x441 = 1;
	int8_t x442 = -1;
	uint64_t x443 = UINT64_MAX;
	volatile int8_t x444 = 0;
	uint64_t t89 = 35400906116433079LLU;

	t89 = (x441+(x442*(x443^x444)));

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x445 = 1270U;
	uint16_t x446 = 1045U;
	static uint64_t x447 = UINT64_MAX;
	uint32_t x448 = 5888942U;
	volatile uint64_t t90 = 219926342509LLU;

	t90 = (x445+(x446*(x447^x448)));

	if (t90 != 18446744067555607451LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x453 = INT16_MAX;
	static int32_t x454 = 0;
	int32_t x455 = -1;
	int8_t x456 = -1;
	volatile int32_t t91 = 39501;

	t91 = (x453+(x454*(x455^x456)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x461 = 15438381U;
	int32_t x462 = INT32_MIN;
	volatile int8_t x463 = INT8_MIN;
	static volatile uint64_t t92 = 2836356317665965LLU;

	t92 = (x461+(x462*(x463^x464)));

	if (t92 != 137454391853LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = -1;
	static int8_t x471 = INT8_MIN;
	int32_t t93 = -21930;

	t93 = (x469+(x470*(x471^x472)));

	if (t93 != -9837451) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x473 = -870063303182LL;
	int32_t x474 = INT32_MIN;
	volatile int8_t x475 = -1;
	static int16_t x476 = -1;
	int64_t t94 = -223757929872193LL;

	t94 = (x473+(x474*(x475^x476)));

	if (t94 != -870063303182LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x481 = INT32_MIN;
	uint8_t x482 = UINT8_MAX;
	int8_t x483 = INT8_MAX;
	uint64_t x484 = UINT64_MAX;
	uint64_t t95 = 423975LLU;

	t95 = (x481+(x482*(x483^x484)));

	if (t95 != 18446744071562035328LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x485 = INT64_MAX;
	int32_t x487 = 25;
	static int8_t x488 = 9;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x485+(x486*(x487^x488)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x489 = 1U;
	volatile uint32_t x490 = 10420U;
	int32_t x491 = INT32_MIN;
	uint8_t x492 = 53U;
	volatile uint32_t t97 = 18U;

	t97 = (x489+(x490*(x491^x492)));

	if (t97 != 552261U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x494 = 3886665026743460LLU;
	static int64_t x495 = INT64_MIN;
	int8_t x496 = INT8_MIN;
	static uint64_t t98 = 1174646893700297330LLU;

	t98 = (x493+(x494*(x495^x496)));

	if (t98 != 17949250948138905088LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x502 = 3292;
	int64_t x503 = INT64_MAX;
	volatile int64_t t99 = 66385497710914642LL;

	t99 = (x501+(x502*(x503^x504)));

	if (t99 != -3293LL) { NG(); } else { ; }
	
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

