#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -32048LL;
uint32_t x11 = 11346U;
uint64_t x13 = UINT64_MAX;
uint64_t x16 = 1594237734682365LLU;
int32_t x21 = INT32_MAX;
volatile uint32_t x24 = UINT32_MAX;
volatile uint32_t t4 = 38920U;
int16_t x26 = INT16_MIN;
volatile uint32_t x27 = 11460U;
volatile int64_t x29 = -1LL;
static int32_t x31 = -52;
volatile int16_t x32 = INT16_MAX;
uint32_t x34 = 163767U;
volatile uint32_t x41 = 8110U;
volatile uint64_t t10 = 3226002228LLU;
int8_t x54 = INT8_MIN;
volatile int8_t x66 = INT8_MIN;
int64_t x71 = 1048066226LL;
uint16_t x78 = 1U;
int64_t t17 = -176392729784LL;
int64_t t18 = -3455007729LL;
volatile int16_t x89 = INT16_MIN;
volatile int32_t t20 = 4122604;
static volatile int32_t x93 = INT32_MIN;
static volatile int32_t t21 = 10724519;
static volatile int32_t x102 = -67956;
static volatile uint64_t t25 = 25810079029LLU;
uint32_t x120 = UINT32_MAX;
volatile uint64_t t27 = 10240021874LLU;
volatile int8_t x126 = -6;
volatile int8_t x138 = 47;
static int32_t x139 = -9;
int32_t x141 = INT32_MIN;
volatile int64_t x145 = -1LL;
int16_t x147 = INT16_MIN;
volatile uint64_t t34 = 3804191979LLU;
volatile uint8_t x156 = UINT8_MAX;
int16_t x161 = -1;
uint16_t x164 = 26U;
int64_t x166 = -1LL;
static uint32_t x167 = 9190U;
static volatile int16_t x169 = INT16_MAX;
static int32_t t39 = -511433;
uint16_t x175 = UINT16_MAX;
volatile uint64_t t41 = 222861072214901LLU;
int32_t x184 = 87026467;
int64_t t42 = -257173740935306239LL;
int32_t x200 = 16794117;
static uint32_t t44 = UINT32_MAX;
int16_t x221 = INT16_MIN;
int16_t x226 = -1;
int64_t x237 = -1LL;
int8_t x247 = 1;
static int8_t x259 = INT8_MIN;
int64_t x260 = -26113666178LL;
int8_t x266 = INT8_MIN;
uint16_t x274 = 51U;
volatile int64_t t62 = 3LL;
static volatile int8_t x285 = INT8_MIN;
static int8_t x286 = INT8_MIN;
uint16_t x298 = 13919U;
static uint16_t x300 = 7462U;
static int32_t t70 = -68963;
volatile uint32_t x316 = 22U;
uint16_t x317 = 1U;
static uint64_t t72 = 9281386LLU;
int32_t x334 = 10;
int32_t x335 = -1;
int32_t t75 = 216;
volatile int32_t t77 = 13629;
int64_t t79 = INT64_MIN;
int64_t x357 = INT64_MIN;
uint64_t x361 = UINT64_MAX;
static int16_t x362 = INT16_MIN;
int32_t x367 = INT32_MIN;
int32_t x372 = INT32_MAX;
uint16_t x378 = UINT16_MAX;
static uint64_t x398 = UINT64_MAX;
volatile uint32_t t89 = 5864U;
static uint64_t x423 = UINT64_MAX;
int8_t x424 = -4;
static volatile uint64_t t91 = 2662640019384LLU;
static uint32_t x448 = 3576662U;
static volatile uint64_t x457 = UINT64_MAX;


void f0(void) {
	static volatile uint16_t x1 = 14596U;
	static int64_t x2 = INT64_MIN;
	volatile int16_t x3 = 86;
	int16_t x4 = INT16_MAX;

	t0 = (x1|(x2&(x3+x4)));

	if (t0 != 14596LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	int32_t x10 = 51;
	uint64_t x12 = 3LLU;
	static volatile uint64_t t1 = 27207922472583LLU;

	t1 = (x9|(x10&(x11+x12)));

	if (t1 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MIN;
	uint64_t t2 = UINT64_MAX;

	t2 = (x13|(x14&(x15+x16)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 1U;
	static uint32_t x18 = 197U;
	int64_t x19 = 59766986267LL;
	int8_t x20 = 1;
	static int64_t t3 = -15LL;

	t3 = (x17|(x18&(x19+x20)));

	if (t3 != 5LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = -1;
	int16_t x23 = INT16_MAX;

	t4 = (x21|(x22&(x23+x24)));

	if (t4 != 2147483647U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = 18403832609LLU;
	uint8_t x28 = 11U;
	uint64_t t5 = 1LLU;

	t5 = (x25|(x26&(x27+x28)));

	if (t5 != 18403832609LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = -1LL;
	int64_t t6 = 189358219365921LL;

	t6 = (x29|(x30&(x31+x32)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MIN;
	uint32_t x35 = 3430U;
	int8_t x36 = INT8_MIN;
	volatile uint32_t t7 = 6746774U;

	t7 = (x33|(x34&(x35+x36)));

	if (t7 != 4294937766U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x37 = -1;
	uint32_t x38 = 1278399316U;
	volatile int16_t x39 = 8;
	static uint64_t x40 = UINT64_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = (x37|(x38&(x39+x40)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x42 = -1;
	int16_t x43 = 1177;
	uint32_t x44 = 241U;
	uint32_t t9 = 296U;

	t9 = (x41|(x42&(x43+x44)));

	if (t9 != 8110U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	uint8_t x46 = 12U;
	uint8_t x47 = 29U;
	volatile uint64_t x48 = UINT64_MAX;

	t10 = (x45|(x46&(x47+x48)));

	if (t10 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = UINT8_MAX;
	uint16_t x50 = 2U;
	volatile uint64_t x51 = UINT64_MAX;
	int8_t x52 = INT8_MIN;
	volatile uint64_t t11 = 564552LLU;

	t11 = (x49|(x50&(x51+x52)));

	if (t11 != 255LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MIN;
	volatile int64_t t12 = -1LL;

	t12 = (x53|(x54&(x55+x56)));

	if (t12 != -32896LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = 2;
	volatile uint32_t x62 = UINT32_MAX;
	uint64_t x63 = 25LLU;
	volatile uint64_t x64 = UINT64_MAX;
	static volatile uint64_t t13 = 290763LLU;

	t13 = (x61|(x62&(x63+x64)));

	if (t13 != 26LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = INT64_MIN;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;
	volatile int64_t t14 = -4LL;

	t14 = (x65|(x66&(x67+x68)));

	if (t14 != -256LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x69 = 25223U;
	int32_t x70 = -6685;
	int8_t x72 = -1;
	int64_t t15 = 26390939227827LL;

	t15 = (x69|(x70&(x71+x72)));

	if (t15 != 1048076967LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = INT64_MAX;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	static uint16_t x76 = 154U;
	static volatile int64_t t16 = -15236LL;

	t16 = (x73|(x74&(x75+x76)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = INT8_MIN;
	static int64_t x79 = -1LL;
	int64_t x80 = INT64_MAX;

	t17 = (x77|(x78&(x79+x80)));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x81 = -1;
	static int64_t x82 = INT64_MAX;
	volatile uint8_t x83 = 5U;
	volatile int64_t x84 = -274824626862LL;

	t18 = (x81|(x82&(x83+x84)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MAX;
	int8_t x86 = INT8_MIN;
	int16_t x87 = -1;
	volatile uint16_t x88 = 12U;
	int32_t t19 = INT32_MAX;

	t19 = (x85|(x86&(x87+x88)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x90 = UINT16_MAX;
	volatile int32_t x91 = -4007;
	static int16_t x92 = INT16_MIN;

	t20 = (x89|(x90&(x91+x92)));

	if (t20 != -4007) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = INT32_MAX;
	uint16_t x95 = 2U;
	uint8_t x96 = 61U;

	t21 = (x93|(x94&(x95+x96)));

	if (t21 != -2147483585) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = INT8_MIN;
	uint32_t x98 = UINT32_MAX;
	int16_t x99 = -6717;
	volatile int8_t x100 = INT8_MIN;
	volatile uint32_t t22 = 771012U;

	t22 = (x97|(x98&(x99+x100)));

	if (t22 != 4294967235U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	static volatile uint16_t x104 = 1182U;
	static volatile int32_t t23 = -10;

	t23 = (x101|(x102&(x103+x104)));

	if (t23 != -116) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = UINT32_MAX;
	static volatile int64_t x106 = -1LL;
	uint64_t x107 = UINT64_MAX;
	static volatile int32_t x108 = INT32_MAX;
	volatile uint64_t t24 = 990381323883578LLU;

	t24 = (x105|(x106&(x107+x108)));

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = 10;
	uint64_t x110 = 1730207680579LLU;
	volatile int8_t x111 = -1;
	int8_t x112 = INT8_MAX;

	t25 = (x109|(x110&(x111+x112)));

	if (t25 != 74LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = INT16_MIN;
	uint8_t x115 = 0U;
	int8_t x116 = INT8_MIN;
	int32_t t26 = 0;

	t26 = (x113|(x114&(x115+x116)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 482462U;
	uint64_t x118 = 10166262393533694LLU;
	int32_t x119 = 25960;

	t27 = (x117|(x118&(x119+x120)));

	if (t27 != 490750LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -17;
	int32_t x122 = INT32_MIN;
	volatile int16_t x123 = -15;
	static volatile int8_t x124 = INT8_MIN;
	int32_t t28 = 94927;

	t28 = (x121|(x122&(x123+x124)));

	if (t28 != -17) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = -4766;
	int32_t x127 = -1;
	int16_t x128 = INT16_MIN;
	int32_t t29 = 744;

	t29 = (x125|(x126&(x127+x128)));

	if (t29 != -6) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x129 = -43918058591797285LL;
	int64_t x130 = -31173584LL;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MAX;
	int64_t t30 = -17289LL;

	t30 = (x129|(x130&(x131+x132)));

	if (t30 != -26378245LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 44580LLU;
	uint16_t x140 = UINT16_MAX;
	uint64_t t31 = 290697044964LLU;

	t31 = (x137|(x138&(x139+x140)));

	if (t31 != 44582LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MIN;
	int8_t x144 = 1;
	static volatile uint64_t t32 = 6060LLU;

	t32 = (x141|(x142&(x143+x144)));

	if (t32 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x146 = -1;
	uint8_t x148 = 5U;
	volatile int64_t t33 = -4055LL;

	t33 = (x145|(x146&(x147+x148)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 1160946888717516898LLU;
	volatile int8_t x150 = INT8_MIN;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = -196LL;

	t34 = (x149|(x150&(x151+x152)));

	if (t34 != 18446744073709551330LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MAX;
	uint32_t x154 = 4U;
	int32_t x155 = INT32_MIN;
	int64_t t35 = INT64_MAX;

	t35 = (x153|(x154&(x155+x156)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 500191U;
	uint16_t x158 = UINT16_MAX;
	uint16_t x159 = 3U;
	int64_t x160 = INT64_MIN;
	volatile int64_t t36 = 302677072155LL;

	t36 = (x157|(x158&(x159+x160)));

	if (t36 != 500191LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x162 = 13;
	uint16_t x163 = 23U;
	static int32_t t37 = 83174664;

	t37 = (x161|(x162&(x163+x164)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x165 = INT8_MAX;
	uint8_t x168 = 5U;
	int64_t t38 = -11558LL;

	t38 = (x165|(x166&(x167+x168)));

	if (t38 != 9215LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x170 = INT8_MIN;
	static int32_t x171 = INT32_MIN;
	int32_t x172 = 279;

	t39 = (x169|(x170&(x171+x172)));

	if (t39 != -2147450881) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = 3934U;
	volatile int16_t x176 = 177;
	static volatile int64_t t40 = 1695648965842317LL;

	t40 = (x173|(x174&(x175+x176)));

	if (t40 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 83569255167108548LLU;
	static uint64_t x178 = 182LLU;
	int16_t x179 = -1;
	uint32_t x180 = 25U;

	t41 = (x177|(x178&(x179+x180)));

	if (t41 != 83569255167108564LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = INT32_MIN;
	int64_t x182 = -1LL;
	volatile int8_t x183 = INT8_MAX;

	t42 = (x181|(x182&(x183+x184)));

	if (t42 != -2060457054LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = INT8_MAX;
	static int32_t x194 = INT32_MIN;
	uint32_t x195 = 4647U;
	int16_t x196 = -1;
	uint32_t t43 = 1U;

	t43 = (x193|(x194&(x195+x196)));

	if (t43 != 127U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x197 = -1;
	volatile uint16_t x198 = UINT16_MAX;
	uint32_t x199 = 1762087236U;

	t44 = (x197|(x198&(x199+x200)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x201 = INT64_MIN;
	int8_t x202 = 4;
	static volatile int16_t x203 = 3429;
	int8_t x204 = -12;
	int64_t t45 = INT64_MIN;

	t45 = (x201|(x202&(x203+x204)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x205 = 15882;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = 69373131868776LL;
	static volatile int32_t x208 = 1030511128;
	uint64_t t46 = 36676401683LLU;

	t46 = (x205|(x206&(x207+x208)));

	if (t46 != 69374162386570LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x209 = 6U;
	int8_t x210 = 0;
	volatile uint64_t x211 = 5LLU;
	int8_t x212 = -1;
	static uint64_t t47 = 440703LLU;

	t47 = (x209|(x210&(x211+x212)));

	if (t47 != 6LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = 427;
	static int16_t x218 = -12;
	uint64_t x219 = UINT64_MAX;
	int16_t x220 = -1;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x217|(x218&(x219+x220)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	volatile int64_t x224 = -1LL;
	volatile int64_t t49 = -3269625571LL;

	t49 = (x221|(x222&(x223+x224)));

	if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x225 = -1;
	volatile int64_t x227 = -4LL;
	int8_t x228 = 0;
	int64_t t50 = 8374159LL;

	t50 = (x225|(x226&(x227+x228)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 1282381168498LLU;
	int8_t x230 = -1;
	static volatile int64_t x231 = 278580LL;
	uint32_t x232 = 59625079U;
	uint64_t t51 = 428569LLU;

	t51 = (x229|(x230&(x231+x232)));

	if (t51 != 1282381168635LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int8_t x234 = -1;
	int8_t x235 = INT8_MIN;
	volatile uint8_t x236 = UINT8_MAX;
	volatile int32_t t52 = -32;

	t52 = (x233|(x234&(x235+x236)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x238 = 4U;
	uint64_t x239 = 52566227475948LLU;
	int8_t x240 = -1;
	uint64_t t53 = UINT64_MAX;

	t53 = (x237|(x238&(x239+x240)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = 8625;
	volatile int16_t x242 = INT16_MIN;
	uint64_t x243 = UINT64_MAX;
	uint64_t x244 = 69028504180771LLU;
	static volatile uint64_t t54 = 1056123736457LLU;

	t54 = (x241|(x242&(x243+x244)));

	if (t54 != 69028504183217LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 11046069U;
	static uint8_t x246 = 17U;
	uint16_t x248 = 2U;
	volatile uint32_t t55 = 83913U;

	t55 = (x245|(x246&(x247+x248)));

	if (t55 != 11046069U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x253 = INT64_MIN;
	int16_t x254 = -1570;
	uint8_t x255 = 1U;
	uint32_t x256 = UINT32_MAX;
	volatile int64_t t56 = INT64_MIN;

	t56 = (x253|(x254&(x255+x256)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -2;
	volatile int64_t x258 = 242117601731756092LL;
	int64_t t57 = 23543130359236LL;

	t57 = (x257|(x258&(x259+x260)));

	if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x261 = INT32_MIN;
	static uint64_t x262 = 108884LLU;
	uint32_t x263 = 142U;
	int16_t x264 = INT16_MAX;
	volatile uint64_t t58 = 7038LLU;

	t58 = (x261|(x262&(x263+x264)));

	if (t58 != 18446744071562100740LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = 6U;
	int16_t x267 = 2535;
	int64_t x268 = -1LL;
	int64_t t59 = -423357558LL;

	t59 = (x265|(x266&(x267+x268)));

	if (t59 != 2438LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = 1;
	int16_t x271 = -1;
	uint8_t x272 = 127U;
	int32_t t60 = INT32_MIN;

	t60 = (x269|(x270&(x271+x272)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x273 = INT16_MAX;
	int8_t x275 = -17;
	static int16_t x276 = INT16_MAX;
	volatile int32_t t61 = -30;

	t61 = (x273|(x274&(x275+x276)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x277 = INT32_MIN;
	volatile int16_t x278 = -1;
	int64_t x279 = INT64_MAX;
	int32_t x280 = INT32_MIN;

	t62 = (x277|(x278&(x279+x280)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MAX;
	volatile int16_t x282 = -1224;
	uint16_t x283 = 10U;
	uint32_t x284 = 1834011088U;
	uint32_t t63 = 514571962U;

	t63 = (x281|(x282&(x283+x284)));

	if (t63 != 1834011007U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x287 = 496818020752LLU;
	volatile uint32_t x288 = 368U;
	static volatile uint64_t t64 = 357LLU;

	t64 = (x285|(x286&(x287+x288)));

	if (t64 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x289 = INT8_MIN;
	int8_t x290 = -1;
	static int16_t x291 = 4014;
	int16_t x292 = -1;
	volatile int32_t t65 = -421;

	t65 = (x289|(x290&(x291+x292)));

	if (t65 != -83) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x293 = -37538;
	static uint32_t x294 = 1584U;
	int64_t x295 = -1LL;
	static int32_t x296 = -1;
	volatile int64_t t66 = -610LL;

	t66 = (x293|(x294&(x295+x296)));

	if (t66 != -36994LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x297 = INT64_MIN;
	volatile uint16_t x299 = 70U;
	int64_t t67 = 29834693LL;

	t67 = (x297|(x298&(x299+x300)));

	if (t67 != -9223372036854770612LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = -1;
	volatile uint8_t x302 = 25U;
	int32_t x303 = -1;
	uint64_t x304 = 1113800276783962LLU;
	uint64_t t68 = UINT64_MAX;

	t68 = (x301|(x302&(x303+x304)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x305 = INT32_MIN;
	uint32_t x306 = 75908U;
	uint64_t x307 = 21004705161504LLU;
	uint16_t x308 = UINT16_MAX;
	uint64_t t69 = 3LLU;

	t69 = (x305|(x306&(x307+x308)));

	if (t69 != 18446744071562076164LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = INT16_MAX;
	volatile uint16_t x310 = 5U;
	uint16_t x311 = 432U;
	uint16_t x312 = UINT16_MAX;

	t70 = (x309|(x310&(x311+x312)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x313 = INT32_MIN;
	int16_t x314 = -1;
	int8_t x315 = -1;
	volatile uint32_t t71 = 23688336U;

	t71 = (x313|(x314&(x315+x316)));

	if (t71 != 2147483669U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x318 = -1;
	int64_t x319 = INT64_MIN;
	uint64_t x320 = UINT64_MAX;

	t72 = (x317|(x318&(x319+x320)));

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x325 = INT8_MAX;
	uint32_t x326 = UINT32_MAX;
	volatile uint32_t x327 = 15622538U;
	int8_t x328 = -6;
	uint32_t t73 = 429U;

	t73 = (x325|(x326&(x327+x328)));

	if (t73 != 15622655U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = 0;
	uint16_t x330 = 29444U;
	int64_t x331 = -7045636765878LL;
	static uint8_t x332 = 27U;
	volatile int64_t t74 = 112108402442LL;

	t74 = (x329|(x330&(x331+x332)));

	if (t74 != 17156LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	int8_t x336 = 17;

	t75 = (x333|(x334&(x335+x336)));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x337 = 677U;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -306;
	static volatile int8_t x340 = INT8_MAX;
	volatile int32_t t76 = 2011;

	t76 = (x337|(x338&(x339+x340)));

	if (t76 != -32091) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x341 = 501U;
	int8_t x342 = INT8_MAX;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MAX;

	t77 = (x341|(x342&(x343+x344)));

	if (t77 != 511) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x349 = 7586U;
	volatile uint64_t x350 = 257606926930955LLU;
	static int16_t x351 = INT16_MIN;
	static uint16_t x352 = UINT16_MAX;
	volatile uint64_t t78 = 85237268725507002LLU;

	t78 = (x349|(x350&(x351+x352)));

	if (t78 != 7595LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = 23447;
	int16_t x355 = INT16_MIN;
	static int16_t x356 = INT16_MIN;

	t79 = (x353|(x354&(x355+x356)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x358 = INT32_MIN;
	static uint64_t x359 = 6719063182LLU;
	int16_t x360 = INT16_MIN;
	static volatile uint64_t t80 = 7298640834LLU;

	t80 = (x357|(x358&(x359+x360)));

	if (t80 != 9223372043297226752LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x363 = INT16_MIN;
	volatile int16_t x364 = INT16_MIN;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x361|(x362&(x363+x364)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = 9U;
	static int8_t x366 = 1;
	int32_t x368 = 14601;
	static int32_t t82 = -10650444;

	t82 = (x365|(x366&(x367+x368)));

	if (t82 != 9) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x369 = 7187U;
	uint16_t x370 = 1U;
	int8_t x371 = -1;
	volatile int32_t t83 = 115597;

	t83 = (x369|(x370&(x371+x372)));

	if (t83 != 7187) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = UINT32_MAX;
	static int32_t x374 = -180674453;
	int16_t x375 = -1;
	volatile int8_t x376 = INT8_MAX;
	uint32_t t84 = UINT32_MAX;

	t84 = (x373|(x374&(x375+x376)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = -1;
	volatile int16_t x379 = -2;
	static volatile uint8_t x380 = 44U;
	int32_t t85 = 6;

	t85 = (x377|(x378&(x379+x380)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = INT8_MIN;
	volatile uint16_t x382 = 3U;
	int32_t x383 = INT32_MIN;
	int16_t x384 = 2646;
	int32_t t86 = -118;

	t86 = (x381|(x382&(x383+x384)));

	if (t86 != -126) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x397 = 0U;
	volatile int32_t x399 = -1;
	uint8_t x400 = 0U;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = (x397|(x398&(x399+x400)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = -1;
	volatile uint64_t x402 = UINT64_MAX;
	int8_t x403 = INT8_MIN;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x401|(x402&(x403+x404)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = INT32_MIN;
	uint16_t x418 = 84U;
	volatile uint8_t x419 = 34U;
	static uint32_t x420 = UINT32_MAX;

	t89 = (x417|(x418&(x419+x420)));

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = INT8_MIN;
	static volatile int16_t x422 = INT16_MAX;
	volatile uint64_t t90 = 3867758053525685860LLU;

	t90 = (x421|(x422&(x423+x424)));

	if (t90 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x425 = -3;
	uint64_t x426 = 126900602373929501LLU;
	int8_t x427 = 5;
	int8_t x428 = INT8_MAX;

	t91 = (x425|(x426&(x427+x428)));

	if (t91 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x429 = -1;
	int8_t x430 = INT8_MIN;
	static int32_t x431 = 474;
	int32_t x432 = INT32_MIN;
	volatile int32_t t92 = 57580152;

	t92 = (x429|(x430&(x431+x432)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x433 = INT32_MAX;
	static volatile int64_t x434 = -508038382LL;
	int8_t x435 = -1;
	uint16_t x436 = UINT16_MAX;
	volatile int64_t t93 = -1384632844LL;

	t93 = (x433|(x434&(x435+x436)));

	if (t93 != 2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = 156;
	int16_t x438 = -1;
	int32_t x439 = 64581223;
	int16_t x440 = -1;
	int32_t t94 = -11609;

	t94 = (x437|(x438&(x439+x440)));

	if (t94 != 64581374) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x441 = INT32_MIN;
	volatile uint16_t x442 = 1U;
	volatile int16_t x443 = 0;
	uint8_t x444 = UINT8_MAX;
	int32_t t95 = -163;

	t95 = (x441|(x442&(x443+x444)));

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x445 = UINT16_MAX;
	uint32_t x446 = UINT32_MAX;
	uint32_t x447 = 3108U;
	volatile uint32_t t96 = 0U;

	t96 = (x445|(x446&(x447+x448)));

	if (t96 != 3604479U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x449 = INT8_MIN;
	int64_t x450 = 24838565949941LL;
	uint8_t x451 = UINT8_MAX;
	volatile int8_t x452 = -39;
	int64_t t97 = 2537341LL;

	t97 = (x449|(x450&(x451+x452)));

	if (t97 != -48LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MAX;
	int32_t x454 = -1;
	uint16_t x455 = UINT16_MAX;
	int32_t x456 = -1;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x453|(x454&(x455+x456)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x458 = UINT16_MAX;
	volatile int16_t x459 = INT16_MIN;
	uint8_t x460 = UINT8_MAX;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x457|(x458&(x459+x460)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

