#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
volatile uint64_t t1 = 365723566711891LLU;
int16_t x10 = INT16_MIN;
uint64_t x14 = 31669495241834846LLU;
static int32_t x31 = 264172952;
int16_t x33 = 7235;
volatile uint32_t t9 = 344735771U;
int32_t x42 = INT32_MIN;
static uint64_t t10 = 662LLU;
int8_t x50 = INT8_MIN;
int8_t x53 = -1;
volatile uint64_t x56 = 36952920934LLU;
int8_t x58 = INT8_MIN;
int16_t x77 = INT16_MIN;
int64_t x89 = INT64_MIN;
static volatile uint64_t t22 = 37017LLU;
volatile uint8_t x94 = UINT8_MAX;
int32_t x95 = INT32_MIN;
int16_t x96 = INT16_MAX;
static int32_t t23 = 21536206;
uint64_t t24 = 85418770190LLU;
uint8_t x108 = 14U;
uint32_t t29 = 5U;
uint8_t x134 = 61U;
static int16_t x138 = INT16_MAX;
static int16_t x139 = -4082;
volatile int32_t x140 = INT32_MAX;
uint64_t x143 = UINT64_MAX;
volatile int8_t x144 = -62;
int8_t x145 = INT8_MIN;
int16_t x149 = -6982;
uint32_t x151 = UINT32_MAX;
int32_t x154 = INT32_MIN;
int8_t x155 = INT8_MAX;
int8_t x157 = -1;
uint8_t x158 = 28U;
volatile uint64_t t38 = 11577060324492038LLU;
int16_t x170 = -4;
uint8_t x172 = 44U;
uint8_t x175 = 1U;
volatile int32_t x180 = 73;
int8_t x182 = 11;
static int32_t x186 = -2;
volatile int32_t x187 = INT32_MIN;
static uint8_t x192 = 1U;
int64_t t46 = -5383518LL;
volatile uint64_t t47 = 6183205095379LLU;
int32_t x202 = 1;
uint32_t x204 = UINT32_MAX;
static uint32_t t49 = 978U;
int16_t x209 = 7856;
volatile uint16_t x213 = 11063U;
int64_t t51 = 19809844686782LL;
uint16_t x223 = UINT16_MAX;
uint32_t x224 = UINT32_MAX;
int16_t x228 = INT16_MIN;
volatile uint64_t t54 = 8088077388LLU;
int8_t x231 = INT8_MIN;
static uint32_t x239 = 2643951U;
int64_t x241 = INT64_MAX;
volatile uint32_t x243 = UINT32_MAX;
int16_t x248 = INT16_MIN;
static int8_t x260 = -1;
int16_t x273 = INT16_MAX;
int64_t x282 = INT64_MIN;
int64_t t68 = 679460LL;
volatile int32_t x285 = INT32_MIN;
volatile int64_t t69 = 728886093380757000LL;
uint64_t x290 = 756490725LLU;
int16_t x291 = 552;
int8_t x301 = 4;
volatile int32_t x304 = INT32_MIN;
uint16_t x324 = 13U;
static int8_t x328 = -19;
static int32_t x333 = INT32_MIN;
static uint32_t x342 = 17699U;
int8_t x345 = INT8_MAX;
uint8_t x347 = UINT8_MAX;
volatile uint64_t t84 = 235LLU;
int64_t x351 = INT64_MIN;
int8_t x352 = -1;
static int16_t x354 = -1;
volatile uint8_t x368 = 13U;
static volatile int32_t x369 = INT32_MIN;
int16_t x370 = INT16_MAX;
int8_t x373 = INT8_MIN;
uint16_t x374 = 2859U;
uint32_t x376 = 1257594U;
int16_t x378 = 220;
static int32_t x379 = -1;
int16_t x384 = -1;
uint16_t x385 = 7U;
static uint32_t x387 = 284U;
uint32_t x390 = 1U;
int64_t x391 = -10LL;
int8_t x407 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static uint16_t x2 = 491U;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -4397739824988797526LL;

	t0 = (x1^(x2&(x3%x4)));

	if (t0 != -32277LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 523U;
	uint64_t x6 = UINT64_MAX;
	volatile uint16_t x7 = UINT16_MAX;
	int8_t x8 = INT8_MAX;

	t1 = (x5^(x6&(x7%x8)));

	if (t1 != 520LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint16_t x11 = 6U;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 114678LLU;

	t2 = (x9^(x10&(x11%x12)));

	if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	uint32_t x15 = 4U;
	int16_t x16 = 14590;
	volatile uint64_t t3 = 12946LLU;

	t3 = (x13^(x14&(x15%x16)));

	if (t3 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile int64_t x18 = -1LL;
	int16_t x19 = INT16_MAX;
	volatile uint16_t x20 = UINT16_MAX;
	static int64_t t4 = 484329LL;

	t4 = (x17^(x18&(x19%x20)));

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	int16_t x22 = 3588;
	int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MAX;
	static volatile int64_t t5 = -116832526LL;

	t5 = (x21^(x22&(x23%x24)));

	if (t5 != 3585LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int16_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int32_t x28 = -256706;
	int32_t t6 = 1257;

	t6 = (x25^(x26&(x27%x28)));

	if (t6 != 156954) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	volatile int32_t x30 = -1;
	volatile int8_t x32 = INT8_MIN;
	static int32_t t7 = 919;

	t7 = (x29^(x30&(x31%x32)));

	if (t7 != 24) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = 31LL;
	uint8_t x35 = 10U;
	uint8_t x36 = 107U;
	volatile int64_t t8 = -43774561145620LL;

	t8 = (x33^(x34&(x35%x36)));

	if (t8 != 7241LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 8354U;
	volatile int8_t x38 = INT8_MAX;
	static uint32_t x39 = UINT32_MAX;
	int8_t x40 = INT8_MIN;

	t9 = (x37^(x38&(x39%x40)));

	if (t9 != 8413U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 2U;
	volatile uint64_t x43 = UINT64_MAX;
	volatile uint64_t x44 = UINT64_MAX;

	t10 = (x41^(x42&(x43%x44)));

	if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	uint64_t x46 = UINT64_MAX;
	volatile uint32_t x47 = 238435U;
	int32_t x48 = -1030;
	volatile uint64_t t11 = 133643998252044965LLU;

	t11 = (x45^(x46&(x47%x48)));

	if (t11 != 9223372036854537372LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 14014U;
	static int32_t x51 = -1;
	int32_t x52 = -3;
	volatile int32_t t12 = 2096391;

	t12 = (x49^(x50&(x51%x52)));

	if (t12 != -14018) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 1U;
	int32_t x55 = -1;
	volatile uint64_t t13 = 9LLU;

	t13 = (x53^(x54&(x55%x56)));

	if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 15047655U;
	int8_t x59 = INT8_MIN;
	volatile int8_t x60 = -1;
	uint32_t t14 = 1565U;

	t14 = (x57^(x58&(x59%x60)));

	if (t14 != 15047655U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = UINT16_MAX;
	int8_t x62 = -1;
	uint32_t x63 = UINT32_MAX;
	uint32_t x64 = UINT32_MAX;
	uint32_t t15 = 137U;

	t15 = (x61^(x62&(x63%x64)));

	if (t15 != 65535U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	static int8_t x66 = INT8_MIN;
	volatile int16_t x67 = -1;
	int8_t x68 = -1;
	volatile int32_t t16 = 1151;

	t16 = (x65^(x66&(x67%x68)));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = UINT8_MAX;
	volatile int8_t x70 = 2;
	static int16_t x71 = -1;
	volatile int32_t x72 = -1;
	int32_t t17 = 53976;

	t17 = (x69^(x70&(x71%x72)));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MIN;
	volatile int16_t x76 = INT16_MIN;
	volatile int64_t t18 = 3528823LL;

	t18 = (x73^(x74&(x75%x76)));

	if (t18 != 32767LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MIN;
	int16_t x79 = 428;
	volatile uint32_t x80 = 821943207U;
	volatile uint32_t t19 = 197582U;

	t19 = (x77^(x78&(x79%x80)));

	if (t19 != 4294934528U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	volatile int8_t x82 = -1;
	int64_t x83 = -1LL;
	int16_t x84 = INT16_MAX;
	static volatile int64_t t20 = -708416734LL;

	t20 = (x81^(x82&(x83%x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static int32_t x86 = -1;
	uint8_t x87 = UINT8_MAX;
	uint64_t x88 = UINT64_MAX;
	static volatile uint64_t t21 = 1414864454824LLU;

	t21 = (x85^(x86&(x87%x88)));

	if (t21 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MAX;
	volatile uint64_t x91 = UINT64_MAX;
	uint16_t x92 = 5U;

	t22 = (x89^(x90&(x91%x92)));

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;

	t23 = (x93^(x94&(x95%x96)));

	if (t23 != -32514) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -1LL;
	uint16_t x98 = UINT16_MAX;
	volatile uint32_t x99 = 12653U;
	uint64_t x100 = 16234049LLU;

	t24 = (x97^(x98&(x99%x100)));

	if (t24 != 18446744073709538962LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	volatile uint32_t x102 = 33502U;
	uint8_t x103 = 42U;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = -384793LL;

	t25 = (x101^(x102&(x103%x104)));

	if (t25 != -32758LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 89U;
	int8_t x106 = -6;
	int64_t x107 = 2952694546779729LL;
	int64_t t26 = 560050406434987647LL;

	t26 = (x105^(x106&(x107%x108)));

	if (t26 != 91LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = 1695LL;
	int64_t x110 = -1LL;
	volatile int16_t x111 = INT16_MIN;
	volatile int8_t x112 = 1;
	static int64_t t27 = 1LL;

	t27 = (x109^(x110&(x111%x112)));

	if (t27 != 1695LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 50U;
	volatile int32_t x114 = INT32_MAX;
	uint64_t x115 = 1706012945LLU;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t28 = 5LLU;

	t28 = (x113^(x114&(x115%x116)));

	if (t28 != 1706012963LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = 150;
	int16_t x122 = INT16_MAX;
	uint16_t x123 = 61U;
	uint32_t x124 = 6499738U;

	t29 = (x121^(x122&(x123%x124)));

	if (t29 != 171U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1LL;
	static int64_t x126 = -1LL;
	int8_t x127 = INT8_MIN;
	volatile uint16_t x128 = 207U;
	volatile int64_t t30 = 1304741903377LL;

	t30 = (x125^(x126&(x127%x128)));

	if (t30 != 127LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = 4011138LL;
	uint32_t x130 = 14091U;
	uint8_t x131 = 2U;
	static uint16_t x132 = 13120U;
	int64_t t31 = -809693362637LL;

	t31 = (x129^(x130&(x131%x132)));

	if (t31 != 4011136LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	static uint64_t t32 = UINT64_MAX;

	t32 = (x133^(x134&(x135%x136)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	int32_t t33 = 4681757;

	t33 = (x137^(x138&(x139%x140)));

	if (t33 != -28687) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 47698372530LLU;
	volatile uint64_t t34 = 430558174LLU;

	t34 = (x141^(x142&(x143%x144)));

	if (t34 != 18446744073709518896LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x146 = UINT64_MAX;
	static uint64_t x147 = 5809428095771053LLU;
	uint16_t x148 = 3U;
	volatile uint64_t t35 = 130820197382LLU;

	t35 = (x145^(x146&(x147%x148)));

	if (t35 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = INT16_MIN;
	static int32_t x152 = -1;
	volatile uint32_t t36 = 157U;

	t36 = (x149^(x150&(x151%x152)));

	if (t36 != 4294960314U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = UINT16_MAX;
	static uint32_t x156 = UINT32_MAX;
	volatile uint32_t t37 = 12293010U;

	t37 = (x153^(x154&(x155%x156)));

	if (t37 != 65535U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x159 = 27858172174670LLU;
	static int32_t x160 = -1;

	t38 = (x157^(x158&(x159%x160)));

	if (t38 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 40U;
	int16_t x162 = INT16_MIN;
	int8_t x163 = 1;
	int32_t x164 = 1862;
	int32_t t39 = -1021699;

	t39 = (x161^(x162&(x163%x164)));

	if (t39 != 40) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x165 = 7U;
	static volatile int64_t x166 = INT64_MAX;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = INT32_MIN;
	static volatile int64_t t40 = -134240628172870LL;

	t40 = (x165^(x166&(x167%x168)));

	if (t40 != 248LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = -1LL;
	int32_t x171 = INT32_MIN;
	static volatile int64_t t41 = 7LL;

	t41 = (x169^(x170&(x171%x172)));

	if (t41 != 23LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x173 = -413;
	int8_t x174 = INT8_MIN;
	int16_t x176 = 43;
	int32_t t42 = 2;

	t42 = (x173^(x174&(x175%x176)));

	if (t42 != -413) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x177 = 3249640206696LLU;
	static uint16_t x178 = 6U;
	volatile uint64_t x179 = 3800466062LLU;
	static uint64_t t43 = 38651755155147344LLU;

	t43 = (x177^(x178&(x179%x180)));

	if (t43 != 3249640206700LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = -1;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MAX;
	int32_t t44 = 1;

	t44 = (x181^(x182&(x183%x184)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x185 = -306063350271610429LL;
	int8_t x188 = INT8_MAX;
	volatile int64_t t45 = -742LL;

	t45 = (x185^(x186&(x187%x188)));

	if (t45 != 306063350271610427LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	uint16_t x190 = UINT16_MAX;
	volatile int64_t x191 = INT64_MIN;

	t46 = (x189^(x190&(x191%x192)));

	if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 4585331473495780290LLU;
	static int32_t x194 = -1;
	int8_t x195 = 5;
	int32_t x196 = INT32_MIN;

	t47 = (x193^(x194&(x195%x196)));

	if (t47 != 4585331473495780295LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = 69U;
	volatile int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	uint64_t x200 = 1402LLU;
	uint64_t t48 = 25LLU;

	t48 = (x197^(x198&(x199%x200)));

	if (t48 != 69LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MIN;
	uint32_t x203 = UINT32_MAX;

	t49 = (x201^(x202&(x203%x204)));

	if (t49 != 4294967168U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x210 = 1801713373892LLU;
	uint32_t x211 = 84835821U;
	static volatile uint32_t x212 = 3U;
	volatile uint64_t t50 = 0LLU;

	t50 = (x209^(x210&(x211%x212)));

	if (t50 != 7856LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x214 = 2857862U;
	int64_t x215 = -4006602LL;
	int16_t x216 = INT16_MIN;

	t51 = (x213^(x214&(x215%x216)));

	if (t51 != 2863665LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = UINT32_MAX;
	volatile int8_t x218 = INT8_MAX;
	volatile uint16_t x219 = 479U;
	int32_t x220 = INT32_MAX;
	volatile uint32_t t52 = 1U;

	t52 = (x217^(x218&(x219%x220)));

	if (t52 != 4294967200U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 4367U;
	int64_t x222 = -1LL;
	volatile int64_t t53 = 0LL;

	t53 = (x221^(x222&(x223%x224)));

	if (t53 != 61168LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = 139534269773890585LLU;
	static int64_t x226 = INT64_MIN;
	static int16_t x227 = 4240;

	t54 = (x225^(x226&(x227%x228)));

	if (t54 != 139534269773890585LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = INT64_MIN;
	int16_t x232 = INT16_MAX;
	int64_t t55 = 219LL;

	t55 = (x229^(x230&(x231%x232)));

	if (t55 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MAX;
	volatile int16_t x234 = INT16_MAX;
	volatile int32_t x235 = INT32_MIN;
	static int8_t x236 = INT8_MIN;
	static volatile int32_t t56 = -877075;

	t56 = (x233^(x234&(x235%x236)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = 275U;
	uint64_t x238 = UINT64_MAX;
	uint16_t x240 = 1U;
	uint64_t t57 = 74087467LLU;

	t57 = (x237^(x238&(x239%x240)));

	if (t57 != 275LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x242 = INT16_MIN;
	static int32_t x244 = INT32_MAX;
	volatile int64_t t58 = INT64_MAX;

	t58 = (x241^(x242&(x243%x244)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = 65403;
	int8_t x246 = 3;
	uint8_t x247 = 110U;
	int32_t t59 = -204;

	t59 = (x245^(x246&(x247%x248)));

	if (t59 != 65401) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = 69LL;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = 5677;
	int64_t t60 = -206163971LL;

	t60 = (x249^(x250&(x251%x252)));

	if (t60 != 65471LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x253 = -24428652983LL;
	int8_t x254 = INT8_MAX;
	volatile uint8_t x255 = 0U;
	int64_t x256 = -5686033194LL;
	volatile int64_t t61 = -1505962932814LL;

	t61 = (x253^(x254&(x255%x256)));

	if (t61 != -24428652983LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x257 = INT8_MIN;
	int8_t x258 = 2;
	static int32_t x259 = INT32_MIN;
	int32_t t62 = -239588;

	t62 = (x257^(x258&(x259%x260)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	static uint64_t x263 = UINT64_MAX;
	uint8_t x264 = 23U;
	static volatile uint64_t t63 = 10864863970LLU;

	t63 = (x261^(x262&(x263%x264)));

	if (t63 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = -1;
	uint64_t x266 = 2LLU;
	static volatile int8_t x267 = INT8_MIN;
	static volatile int16_t x268 = -215;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x265^(x266&(x267%x268)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = -1;
	static int16_t x270 = -1;
	volatile uint64_t x271 = 118418LLU;
	int16_t x272 = INT16_MIN;
	static volatile uint64_t t65 = 1595360983LLU;

	t65 = (x269^(x270&(x271%x272)));

	if (t65 != 18446744073709433197LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x274 = INT64_MIN;
	uint64_t x275 = 250363317LLU;
	int16_t x276 = INT16_MIN;
	volatile uint64_t t66 = 465508LLU;

	t66 = (x273^(x274&(x275%x276)));

	if (t66 != 32767LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	int32_t x279 = -1;
	int32_t x280 = -1;
	int32_t t67 = -114188355;

	t67 = (x277^(x278&(x279%x280)));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 566U;
	int64_t x283 = INT64_MAX;
	int8_t x284 = INT8_MIN;

	t68 = (x281^(x282&(x283%x284)));

	if (t68 != 566LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x286 = 122U;
	int64_t x287 = INT64_MIN;
	int8_t x288 = INT8_MIN;

	t69 = (x285^(x286&(x287%x288)));

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = 1093578444LLU;
	volatile int8_t x292 = INT8_MIN;
	volatile uint64_t t70 = 1LLU;

	t70 = (x289^(x290&(x291%x292)));

	if (t70 != 1093578476LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x293 = INT16_MIN;
	static int16_t x294 = -1;
	int8_t x295 = INT8_MAX;
	int32_t x296 = 4126863;
	volatile int32_t t71 = -66878618;

	t71 = (x293^(x294&(x295%x296)));

	if (t71 != -32641) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x297 = -937366;
	uint8_t x298 = 4U;
	uint64_t x299 = 114723515080948LLU;
	int8_t x300 = INT8_MIN;
	volatile uint64_t t72 = 49255405832157441LLU;

	t72 = (x297^(x298&(x299%x300)));

	if (t72 != 18446744073708614254LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x302 = 10411368;
	int8_t x303 = -1;
	static int32_t t73 = -161207;

	t73 = (x301^(x302&(x303%x304)));

	if (t73 != 10411372) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = -1;
	int64_t x306 = INT64_MAX;
	int8_t x307 = 49;
	uint32_t x308 = UINT32_MAX;
	volatile int64_t t74 = 206650145586748397LL;

	t74 = (x305^(x306&(x307%x308)));

	if (t74 != -50LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x309 = -1;
	int16_t x310 = INT16_MAX;
	int32_t x311 = -4626404;
	int8_t x312 = -60;
	volatile int32_t t75 = -524;

	t75 = (x309^(x310&(x311%x312)));

	if (t75 != -32725) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = 1;
	volatile uint8_t x315 = 0U;
	uint16_t x316 = 6U;
	int64_t t76 = INT64_MIN;

	t76 = (x313^(x314&(x315%x316)));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -27806528274325975LL;
	volatile int8_t x318 = -1;
	int16_t x319 = -1;
	uint32_t x320 = 5471737U;
	static volatile int64_t t77 = -287017LL;

	t77 = (x317^(x318&(x319%x320)));

	if (t77 != -27806528278123706LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MAX;
	volatile int64_t x322 = -223723026313LL;
	int8_t x323 = INT8_MAX;
	int64_t t78 = -302304951694291780LL;

	t78 = (x321^(x322&(x323%x324)));

	if (t78 != 32765LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = -13043272LL;
	volatile int16_t x326 = INT16_MIN;
	int32_t x327 = -13;
	int64_t t79 = 3702803120LL;

	t79 = (x325^(x326&(x327%x328)));

	if (t79 != 13072824LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int64_t x330 = 1707708LL;
	int64_t x331 = -1LL;
	int64_t x332 = INT64_MIN;
	static uint64_t t80 = 62813LLU;

	t80 = (x329^(x330&(x331%x332)));

	if (t80 != 18446744073707843907LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x334 = 1490220975543192LLU;
	int64_t x335 = -1LL;
	int8_t x336 = 1;
	uint64_t t81 = 3456245439940LLU;

	t81 = (x333^(x334&(x335%x336)));

	if (t81 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x337 = INT16_MIN;
	int32_t x338 = 33;
	int32_t x339 = INT32_MAX;
	volatile uint8_t x340 = 75U;
	int32_t t82 = -1;

	t82 = (x337^(x338&(x339%x340)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 659U;
	int32_t x343 = -1;
	int64_t x344 = INT64_MIN;
	volatile int64_t t83 = 1098773969184LL;

	t83 = (x341^(x342&(x343%x344)));

	if (t83 != 18352LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x346 = UINT64_MAX;
	volatile int64_t x348 = INT64_MAX;

	t84 = (x345^(x346&(x347%x348)));

	if (t84 != 128LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MIN;
	static uint32_t x350 = 54376U;
	volatile int64_t t85 = -3974118264038971124LL;

	t85 = (x349^(x350&(x351%x352)));

	if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MIN;
	uint32_t x355 = 1965921363U;
	uint8_t x356 = 10U;
	uint32_t t86 = 5900U;

	t86 = (x353^(x354&(x355%x356)));

	if (t86 != 4294934531U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x357 = 5;
	int16_t x358 = INT16_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	static int8_t x360 = INT8_MIN;
	static uint64_t t87 = 3154LLU;

	t87 = (x357^(x358&(x359%x360)));

	if (t87 != 122LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x361 = 446878703928LLU;
	static volatile int8_t x362 = -33;
	int8_t x363 = -1;
	uint16_t x364 = UINT16_MAX;
	volatile uint64_t t88 = 204058LLU;

	t88 = (x361^(x362&(x363%x364)));

	if (t88 != 18446743626830847719LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = -1;
	int32_t x366 = INT32_MIN;
	int32_t x367 = 5967055;
	static volatile int32_t t89 = 1;

	t89 = (x365^(x366&(x367%x368)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x371 = 19U;
	static uint64_t x372 = UINT64_MAX;
	static uint64_t t90 = 63043325344328LLU;

	t90 = (x369^(x370&(x371%x372)));

	if (t90 != 18446744071562067987LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x375 = 123U;
	volatile uint32_t t91 = 398937877U;

	t91 = (x373^(x374&(x375%x376)));

	if (t91 != 4294967211U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x377 = INT16_MIN;
	int8_t x380 = INT8_MAX;
	volatile int32_t t92 = -1581;

	t92 = (x377^(x378&(x379%x380)));

	if (t92 != -32548) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = -50;
	static int16_t x382 = INT16_MIN;
	static volatile int8_t x383 = -1;
	int32_t t93 = -150;

	t93 = (x381^(x382&(x383%x384)));

	if (t93 != -50) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x386 = INT32_MIN;
	volatile uint64_t x388 = UINT64_MAX;
	uint64_t t94 = 149967LLU;

	t94 = (x385^(x386&(x387%x388)));

	if (t94 != 7LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = -1;
	int32_t x392 = INT32_MIN;
	static volatile int64_t t95 = 3419314891LL;

	t95 = (x389^(x390&(x391%x392)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x393 = -12610;
	int8_t x394 = -1;
	static volatile int64_t x395 = INT64_MIN;
	static int32_t x396 = 62060;
	int64_t t96 = 56LL;

	t96 = (x393^(x394&(x395%x396)));

	if (t96 != 47406LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x397 = UINT32_MAX;
	volatile uint8_t x398 = 5U;
	static volatile int64_t x399 = INT64_MIN;
	volatile uint64_t x400 = 860764442747LLU;
	static volatile uint64_t t97 = 935LLU;

	t97 = (x397^(x398&(x399%x400)));

	if (t97 != 4294967291LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x401 = INT64_MAX;
	uint64_t x402 = 2786LLU;
	int32_t x403 = INT32_MIN;
	uint64_t x404 = UINT64_MAX;
	uint64_t t98 = 19032LLU;

	t98 = (x401^(x402&(x403%x404)));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x405 = INT16_MIN;
	uint64_t x406 = UINT64_MAX;
	int32_t x408 = INT32_MIN;
	static volatile uint64_t t99 = 10LLU;

	t99 = (x405^(x406&(x407%x408)));

	if (t99 != 32640LLU) { NG(); } else { ; }
	
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

