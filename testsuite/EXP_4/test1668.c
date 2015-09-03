#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -4233915717443241759LL;
int16_t x10 = -1529;
uint8_t x21 = 56U;
int8_t x22 = INT8_MAX;
uint16_t x28 = 12U;
int8_t x31 = 3;
int32_t t7 = -768985673;
volatile int64_t t8 = 1LL;
static int8_t x37 = 7;
int16_t x46 = -3693;
uint64_t x50 = 1553222448339795LLU;
uint8_t x58 = UINT8_MAX;
int16_t x59 = INT16_MIN;
int64_t x60 = INT64_MIN;
int8_t x63 = 55;
int32_t x65 = -16843;
static uint32_t x67 = 96860736U;
volatile int16_t x69 = -1;
volatile int32_t x71 = INT32_MIN;
volatile int32_t t17 = -55349532;
volatile uint8_t x74 = 89U;
int32_t t18 = -103158;
static int64_t x78 = -16707724475824134LL;
volatile int32_t t23 = -2;
int8_t x103 = INT8_MIN;
volatile uint64_t t28 = 20999666LLU;
int32_t x117 = -1;
int64_t x123 = INT64_MAX;
volatile int32_t t30 = -2019972;
volatile int32_t x136 = INT32_MAX;
static int32_t x142 = INT32_MAX;
volatile int64_t t33 = -137LL;
volatile int64_t t34 = 11034083602LL;
int64_t x151 = INT64_MIN;
static int32_t t35 = -1;
int16_t x153 = -15;
int64_t x154 = -7206LL;
uint32_t x156 = UINT32_MAX;
volatile int64_t x159 = INT64_MAX;
static volatile int8_t x166 = -5;
int64_t x173 = INT64_MIN;
int16_t x178 = -3;
int8_t x181 = -2;
static volatile int32_t x188 = -16782128;
int8_t x194 = INT8_MIN;
volatile int32_t x195 = INT32_MIN;
int8_t x198 = 39;
int16_t x200 = -565;
int8_t x202 = INT8_MIN;
uint32_t x212 = 179799159U;
int8_t x223 = -1;
uint32_t x228 = UINT32_MAX;
uint8_t x235 = 3U;
int16_t x237 = INT16_MIN;
int16_t x240 = -1;
volatile int32_t t58 = -3;
int64_t x245 = -1LL;
int32_t x247 = INT32_MAX;
volatile int64_t x253 = -1LL;
int64_t x256 = 327131826LL;
volatile int8_t x258 = 12;
uint16_t x260 = UINT16_MAX;
volatile int64_t x262 = -1LL;
static int16_t x265 = INT16_MIN;
static int64_t x269 = 22457894877567LL;
volatile int64_t t65 = -923929LL;
int64_t x276 = INT64_MIN;
static int64_t x278 = INT64_MIN;
uint64_t t68 = 1LLU;
volatile int32_t x287 = -65428641;
static int16_t x289 = -1;
int8_t x290 = INT8_MIN;
static uint32_t x291 = 1774757U;
static uint8_t x295 = UINT8_MAX;
int64_t x303 = INT64_MIN;
int8_t x305 = INT8_MIN;
uint8_t x307 = 104U;
int8_t x309 = INT8_MIN;
static volatile int64_t t75 = -15628703592902LL;
int32_t x315 = INT32_MIN;
uint8_t x318 = 1U;
static int16_t x323 = INT16_MIN;
uint32_t t79 = UINT32_MAX;
int8_t x331 = -1;
int8_t x346 = INT8_MIN;
int64_t x348 = INT64_MIN;
uint64_t x350 = 3607094LLU;
static volatile uint64_t t84 = 836319338894928558LLU;
uint32_t x357 = 169454U;
int8_t x361 = INT8_MAX;
int8_t x364 = INT8_MIN;
static uint16_t x366 = UINT16_MAX;
int8_t x367 = INT8_MAX;
static uint8_t x370 = UINT8_MAX;
int8_t x376 = -1;
uint32_t x381 = UINT32_MAX;
volatile uint32_t t93 = 133881779U;
int16_t x391 = -1;
static int32_t x392 = INT32_MIN;
uint64_t x394 = UINT64_MAX;
uint64_t t95 = 501247675579841LLU;
volatile int8_t x401 = -8;
static uint16_t x410 = 1U;
int64_t x412 = INT64_MAX;
uint64_t t99 = 0LLU;


void f0(void) {
	static volatile int32_t x1 = INT32_MAX;
	static int8_t x2 = INT8_MIN;
	static int8_t x3 = INT8_MIN;
	static int64_t x4 = 8396711872889LL;
	int32_t t0 = -9;

	t0 = (x1/(x2|(x3<=x4)));

	if (t0 != -16909320) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint64_t x7 = 2157356064215LLU;
	int32_t x8 = -1;
	int64_t t1 = 728244996018019LL;

	t1 = (x5/(x6|(x7<=x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	uint16_t x11 = 94U;
	volatile uint32_t x12 = 100U;
	volatile int32_t t2 = 150284;

	t2 = (x9/(x10|(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 243755236LL;
	int32_t x14 = -3423396;
	static uint32_t x15 = 2810U;
	static int8_t x16 = -1;
	static int64_t t3 = -49206LL;

	t3 = (x13/(x14|(x15<=x16)));

	if (t3 != -71LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	static int64_t x18 = -1LL;
	uint64_t x19 = 10058982684LLU;
	static int32_t x20 = 1;
	int64_t t4 = -35607362654398948LL;

	t4 = (x17/(x18|(x19<=x20)));

	if (t4 != 32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x23 = 1;
	static int16_t x24 = INT16_MAX;
	static int32_t t5 = -2914;

	t5 = (x21/(x22|(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 4U;
	int64_t x26 = -1LL;
	int32_t x27 = INT32_MIN;
	volatile int64_t t6 = 428714571129855326LL;

	t6 = (x25/(x26|(x27<=x28)));

	if (t6 != -4LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	volatile int32_t x30 = INT32_MIN;
	static volatile uint8_t x32 = 8U;

	t7 = (x29/(x30|(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 9;
	int64_t x34 = INT64_MIN;
	int32_t x35 = INT32_MAX;
	uint8_t x36 = 13U;

	t8 = (x33/(x34|(x35<=x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = 26;
	uint16_t x39 = UINT16_MAX;
	int64_t x40 = 37945250284750LL;
	volatile int32_t t9 = 94084;

	t9 = (x37/(x38|(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	static int8_t x42 = -10;
	volatile int16_t x43 = INT16_MIN;
	static uint8_t x44 = 0U;
	volatile int32_t t10 = 19;

	t10 = (x41/(x42|(x43<=x44)));

	if (t10 != -3640) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int32_t x47 = INT32_MIN;
	static volatile uint16_t x48 = 0U;
	volatile int32_t t11 = 61509;

	t11 = (x45/(x46|(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int64_t x51 = INT64_MIN;
	volatile int8_t x52 = INT8_MIN;
	uint64_t t12 = 3566408910477274LLU;

	t12 = (x49/(x50|(x51<=x52)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int8_t x54 = 0;
	volatile int8_t x55 = -46;
	static int16_t x56 = 30;
	volatile int32_t t13 = 30579182;

	t13 = (x53/(x54|(x55<=x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = -2;
	int32_t t14 = 21055009;

	t14 = (x57/(x58|(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 487U;
	int32_t x62 = 2085;
	uint32_t x64 = 316690U;
	volatile uint32_t t15 = 78U;

	t15 = (x61/(x62|(x63<=x64)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 1227671252U;
	static uint32_t x68 = 322014U;
	static uint32_t t16 = 22477192U;

	t16 = (x65/(x66|(x67<=x68)));

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = INT16_MAX;
	uint32_t x72 = 708U;

	t17 = (x69/(x70|(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 56U;
	static int8_t x75 = -1;
	int8_t x76 = 2;

	t18 = (x73/(x74|(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int32_t x79 = INT32_MAX;
	int8_t x80 = INT8_MAX;
	int64_t t19 = -358LL;

	t19 = (x77/(x78|(x79<=x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	volatile uint8_t x82 = UINT8_MAX;
	volatile int32_t x83 = INT32_MIN;
	static int64_t x84 = INT64_MAX;
	int32_t t20 = -4;

	t20 = (x81/(x82|(x83<=x84)));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MIN;
	volatile int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MAX;
	static int16_t x88 = -1;
	int32_t t21 = 142977;

	t21 = (x85/(x86|(x87<=x88)));

	if (t21 != 65536) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1710;
	static volatile int64_t x90 = INT64_MAX;
	int16_t x91 = 197;
	uint16_t x92 = 0U;
	static volatile int64_t t22 = -7862595709LL;

	t22 = (x89/(x90|(x91<=x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	int16_t x94 = -2957;
	volatile uint16_t x95 = UINT16_MAX;
	volatile int8_t x96 = -31;

	t23 = (x93/(x94|(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -1894068985761490815LL;
	int16_t x98 = INT16_MIN;
	static int32_t x99 = INT32_MIN;
	volatile int8_t x100 = -18;
	static volatile int64_t t24 = -9443432158612LL;

	t24 = (x97/(x98|(x99<=x100)));

	if (t24 != 57804162290154LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	static int8_t x102 = -1;
	uint16_t x104 = 164U;
	static volatile int32_t t25 = -1669;

	t25 = (x101/(x102|(x103<=x104)));

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	volatile int8_t x106 = INT8_MAX;
	int16_t x107 = INT16_MIN;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = -3406;

	t26 = (x105/(x106|(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 5;
	int64_t x110 = -56557LL;
	int16_t x111 = -1;
	int16_t x112 = INT16_MAX;
	int64_t t27 = -2200086LL;

	t27 = (x109/(x110|(x111<=x112)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	uint32_t x114 = UINT32_MAX;
	uint16_t x115 = 1226U;
	volatile int32_t x116 = -1;

	t28 = (x113/(x114|(x115<=x116)));

	if (t28 != 4294967297LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x118 = 2;
	volatile int8_t x119 = INT8_MIN;
	int32_t x120 = -1;
	int32_t t29 = 589490090;

	t29 = (x117/(x118|(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MAX;
	static int16_t x122 = INT16_MIN;
	int32_t x124 = 7698;

	t30 = (x121/(x122|(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	volatile int64_t x130 = INT64_MAX;
	uint32_t x131 = UINT32_MAX;
	volatile int8_t x132 = -1;
	int64_t t31 = -9806980056LL;

	t31 = (x129/(x130|(x131<=x132)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MIN;
	int64_t x135 = -3304908118LL;
	static int64_t t32 = -105452601748LL;

	t32 = (x133/(x134|(x135<=x136)));

	if (t32 != 4294967298LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	static uint32_t x144 = 526634U;

	t33 = (x141/(x142|(x143<=x144)));

	if (t33 != -4294967298LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = 22520LL;
	int8_t x146 = -4;
	uint8_t x147 = 13U;
	int32_t x148 = -8603294;

	t34 = (x145/(x146|(x147<=x148)));

	if (t34 != -5630LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -21460;
	uint16_t x150 = 2U;
	static int16_t x152 = 1;

	t35 = (x149/(x150|(x151<=x152)));

	if (t35 != -7153) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x155 = INT32_MIN;
	volatile int64_t t36 = -12LL;

	t36 = (x153/(x154|(x155<=x156)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 28;
	static volatile int16_t x158 = -3122;
	int8_t x160 = -1;
	volatile int32_t t37 = 50913822;

	t37 = (x157/(x158|(x159<=x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = 371236339U;
	uint16_t x163 = 128U;
	int8_t x164 = INT8_MIN;
	static volatile uint32_t t38 = 250610605U;

	t38 = (x161/(x162|(x163<=x164)));

	if (t38 != 11U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = -22;
	static int32_t x167 = 5640807;
	uint64_t x168 = UINT64_MAX;
	int32_t t39 = -4;

	t39 = (x165/(x166|(x167<=x168)));

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x169 = UINT64_MAX;
	static volatile int64_t x170 = -1LL;
	uint16_t x171 = 8U;
	static int16_t x172 = -3461;
	volatile uint64_t t40 = 7075227LLU;

	t40 = (x169/(x170|(x171<=x172)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = INT64_MIN;
	static uint64_t x175 = 2134658819438893LLU;
	static volatile int8_t x176 = 0;
	int64_t t41 = 120826321943952655LL;

	t41 = (x173/(x174|(x175<=x176)));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x177 = -33560;
	volatile int16_t x179 = -1;
	int64_t x180 = INT64_MIN;
	int32_t t42 = 3;

	t42 = (x177/(x178|(x179<=x180)));

	if (t42 != 11186) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x182 = 47327908U;
	static uint32_t x183 = UINT32_MAX;
	int8_t x184 = -14;
	uint32_t t43 = 116089U;

	t43 = (x181/(x182|(x183<=x184)));

	if (t43 != 90U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -1;
	static uint64_t x186 = 6568LLU;
	int32_t x187 = INT32_MAX;
	uint64_t t44 = 35815LLU;

	t44 = (x185/(x186|(x187<=x188)));

	if (t44 != 2808578573950906LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 27U;
	volatile uint16_t x190 = 143U;
	int64_t x191 = -1LL;
	int64_t x192 = -755270414LL;
	int32_t t45 = -8698;

	t45 = (x189/(x190|(x191<=x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 0U;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t46 = 57756;

	t46 = (x193/(x194|(x195<=x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	volatile int32_t x199 = -114;
	int32_t t47 = -1014202665;

	t47 = (x197/(x198|(x199<=x200)));

	if (t47 != -55063683) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	int64_t x203 = -1LL;
	uint16_t x204 = 2U;
	volatile int32_t t48 = 40;

	t48 = (x201/(x202|(x203<=x204)));

	if (t48 != 16909320) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = UINT32_MAX;
	volatile int32_t x206 = -448;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = 74U;
	volatile uint32_t t49 = 35U;

	t49 = (x205/(x206|(x207<=x208)));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x209 = -1;
	int32_t x210 = 1209184;
	int64_t x211 = INT64_MIN;
	static int32_t t50 = 1031198;

	t50 = (x209/(x210|(x211<=x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MAX;
	uint16_t x214 = UINT16_MAX;
	volatile uint8_t x215 = 19U;
	int16_t x216 = -240;
	static int32_t t51 = -43948540;

	t51 = (x213/(x214|(x215<=x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -1LL;
	static uint8_t x218 = 3U;
	volatile int8_t x219 = -1;
	int16_t x220 = -1;
	int64_t t52 = 5168483796031917LL;

	t52 = (x217/(x218|(x219<=x220)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x222 = 161817734U;
	int8_t x224 = -1;
	uint32_t t53 = 1567U;

	t53 = (x221/(x222|(x223<=x224)));

	if (t53 != 26U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	volatile int16_t x226 = -87;
	int8_t x227 = INT8_MIN;
	volatile int32_t t54 = -5;

	t54 = (x225/(x226|(x227<=x228)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x229 = 335111LL;
	int32_t x230 = INT32_MIN;
	int16_t x231 = 1355;
	uint64_t x232 = UINT64_MAX;
	volatile int64_t t55 = 0LL;

	t55 = (x229/(x230|(x231<=x232)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t x234 = INT32_MIN;
	uint32_t x236 = 2004U;
	volatile int32_t t56 = 14340231;

	t56 = (x233/(x234|(x235<=x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x238 = INT32_MAX;
	uint8_t x239 = 7U;
	volatile int32_t t57 = -1191581;

	t57 = (x237/(x238|(x239<=x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = UINT8_MAX;
	static int16_t x242 = INT16_MAX;
	int32_t x243 = INT32_MIN;
	static uint64_t x244 = UINT64_MAX;

	t58 = (x241/(x242|(x243<=x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x246 = INT16_MIN;
	int8_t x248 = INT8_MAX;
	volatile int64_t t59 = -157710430971070560LL;

	t59 = (x245/(x246|(x247<=x248)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -11;
	int32_t x250 = -1;
	volatile int16_t x251 = INT16_MIN;
	int8_t x252 = -2;
	int32_t t60 = -1;

	t60 = (x249/(x250|(x251<=x252)));

	if (t60 != 11) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x254 = 14;
	int32_t x255 = INT32_MIN;
	int64_t t61 = 19027646071899LL;

	t61 = (x253/(x254|(x255<=x256)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	int16_t x259 = 490;
	static int64_t t62 = 278970963LL;

	t62 = (x257/(x258|(x259<=x260)));

	if (t62 != -709490156681136600LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MAX;
	uint8_t x263 = 0U;
	int8_t x264 = -1;
	volatile int64_t t63 = 4LL;

	t63 = (x261/(x262|(x263<=x264)));

	if (t63 != -127LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t64 = -319;

	t64 = (x265/(x266|(x267<=x268)));

	if (t64 != 258) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x270 = 20;
	uint32_t x271 = 59U;
	int8_t x272 = INT8_MAX;

	t65 = (x269/(x270|(x271<=x272)));

	if (t65 != 1069423565598LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = 85;
	volatile int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	volatile int64_t t66 = 4261787LL;

	t66 = (x273/(x274|(x275<=x276)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = 80713031;
	volatile int16_t x279 = INT16_MAX;
	uint64_t x280 = 886037493243609470LLU;
	volatile int64_t t67 = 45478690LL;

	t67 = (x277/(x278|(x279<=x280)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = -1;
	uint64_t x282 = 8276798821663LLU;
	int8_t x283 = 0;
	int64_t x284 = 9493LL;

	t68 = (x281/(x282|(x283<=x284)));

	if (t68 != 2228729LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = -52;
	int32_t x286 = 63458;
	static uint16_t x288 = 8U;
	int32_t t69 = 1;

	t69 = (x285/(x286|(x287<=x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x292 = -1;
	volatile int32_t t70 = 434202488;

	t70 = (x289/(x290|(x291<=x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x293 = 27;
	int8_t x294 = -1;
	uint32_t x296 = 854195212U;
	int32_t t71 = -9;

	t71 = (x293/(x294|(x295<=x296)));

	if (t71 != -27) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -1;
	uint8_t x298 = UINT8_MAX;
	uint8_t x299 = 0U;
	int64_t x300 = INT64_MIN;
	int32_t t72 = 56499927;

	t72 = (x297/(x298|(x299<=x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MAX;
	uint32_t x302 = UINT32_MAX;
	int8_t x304 = -32;
	volatile uint32_t t73 = 41450U;

	t73 = (x301/(x302|(x303<=x304)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x306 = -1;
	static uint8_t x308 = UINT8_MAX;
	static volatile int32_t t74 = -45;

	t74 = (x305/(x306|(x307<=x308)));

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x310 = INT64_MIN;
	int8_t x311 = 1;
	int16_t x312 = INT16_MIN;

	t75 = (x309/(x310|(x311<=x312)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = -1;
	volatile int32_t x314 = INT32_MAX;
	static int32_t x316 = INT32_MIN;
	int32_t t76 = 6;

	t76 = (x313/(x314|(x315<=x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x317 = 4;
	static int32_t x319 = -1;
	volatile int64_t x320 = INT64_MIN;
	volatile int32_t t77 = 32660277;

	t77 = (x317/(x318|(x319<=x320)));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x321 = -1;
	volatile int64_t x322 = INT64_MIN;
	int8_t x324 = -1;
	int64_t t78 = 102LL;

	t78 = (x321/(x322|(x323<=x324)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = UINT32_MAX;
	int8_t x326 = 1;
	uint64_t x327 = 89LLU;
	volatile int32_t x328 = -27;

	t79 = (x325/(x326|(x327<=x328)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = UINT8_MAX;
	int16_t x330 = -1;
	uint8_t x332 = 5U;
	int32_t t80 = 1;

	t80 = (x329/(x330|(x331<=x332)));

	if (t80 != -255) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = 26;
	int16_t x338 = -1;
	volatile uint32_t x339 = 201177U;
	static volatile uint64_t x340 = 560425242655934LLU;
	int32_t t81 = -3114;

	t81 = (x337/(x338|(x339<=x340)));

	if (t81 != -26) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = -776LL;
	int16_t x342 = -3372;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	int64_t t82 = -49858LL;

	t82 = (x341/(x342|(x343<=x344)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = UINT64_MAX;
	uint64_t x347 = 1351344028047087LLU;
	uint64_t t83 = 1745145LLU;

	t83 = (x345/(x346|(x347<=x348)));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x349 = -1;
	int16_t x351 = INT16_MAX;
	int16_t x352 = 749;

	t84 = (x349/(x350|(x351<=x352)));

	if (t84 != 5114018119214LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	volatile int32_t x354 = -1;
	int64_t x355 = -2247769LL;
	static uint8_t x356 = UINT8_MAX;
	static int32_t t85 = 8;

	t85 = (x353/(x354|(x355<=x356)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = INT32_MIN;
	int16_t x360 = 7;
	volatile uint32_t t86 = 1019675U;

	t86 = (x357/(x358|(x359<=x360)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x362 = -10;
	volatile int16_t x363 = 9;
	static int32_t t87 = 15;

	t87 = (x361/(x362|(x363<=x364)));

	if (t87 != -12) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = -5166;
	int16_t x368 = 654;
	volatile int32_t t88 = -597374;

	t88 = (x365/(x366|(x367<=x368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = 17U;
	int32_t x371 = INT32_MAX;
	static uint16_t x372 = 349U;
	volatile int32_t t89 = 28023856;

	t89 = (x369/(x370|(x371<=x372)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = 15474U;
	int32_t x374 = INT32_MIN;
	static int8_t x375 = -12;
	volatile int32_t t90 = 0;

	t90 = (x373/(x374|(x375<=x376)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x377 = 0U;
	static int16_t x378 = INT16_MAX;
	int64_t x379 = -315330764420319407LL;
	volatile int16_t x380 = 32;
	int32_t t91 = 8356;

	t91 = (x377/(x378|(x379<=x380)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x382 = UINT16_MAX;
	volatile uint64_t x383 = 119988018LLU;
	uint64_t x384 = 713086341LLU;
	volatile uint32_t t92 = 1374552563U;

	t92 = (x381/(x382|(x383<=x384)));

	if (t92 != 65537U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x385 = 577U;
	volatile uint32_t x386 = UINT32_MAX;
	volatile int8_t x387 = INT8_MIN;
	static volatile int32_t x388 = -36823024;

	t93 = (x385/(x386|(x387<=x388)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x389 = 5195;
	uint16_t x390 = 12909U;
	static int32_t t94 = -310942;

	t94 = (x389/(x390|(x391<=x392)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x393 = INT8_MAX;
	int32_t x395 = -12160639;
	int8_t x396 = -5;

	t95 = (x393/(x394|(x395<=x396)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x397 = 3;
	volatile int32_t x398 = INT32_MIN;
	int32_t x399 = -375009;
	volatile uint32_t x400 = 337U;
	static volatile int32_t t96 = -226;

	t96 = (x397/(x398|(x399<=x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x402 = 6773U;
	static int64_t x403 = -1LL;
	int64_t x404 = -1LL;
	int32_t t97 = -97292;

	t97 = (x401/(x402|(x403<=x404)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = INT8_MAX;
	uint64_t x406 = UINT64_MAX;
	static volatile uint8_t x407 = UINT8_MAX;
	uint64_t x408 = 345251LLU;
	volatile uint64_t t98 = 888706396610287730LLU;

	t98 = (x405/(x406|(x407<=x408)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 310213690151LLU;
	int8_t x411 = INT8_MAX;

	t99 = (x409/(x410|(x411<=x412)));

	if (t99 != 310213690151LLU) { NG(); } else { ; }
	
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

