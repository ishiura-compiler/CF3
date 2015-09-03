#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1509;
int64_t t0 = 778LL;
int64_t x7 = INT64_MIN;
static uint8_t x9 = 0U;
uint32_t x18 = 1U;
uint32_t x20 = 1U;
uint8_t x22 = UINT8_MAX;
static int64_t x24 = INT64_MIN;
uint16_t x34 = 101U;
int16_t x35 = 60;
int64_t t9 = 3145993852303566LL;
static volatile uint64_t x54 = 0LLU;
uint64_t x56 = 15728196469LLU;
volatile int64_t t14 = -79772301696394LL;
int32_t x66 = 54;
static volatile uint64_t t16 = 1LLU;
volatile uint32_t t17 = 75586733U;
uint16_t x89 = UINT16_MAX;
uint64_t x90 = UINT64_MAX;
int8_t x93 = INT8_MIN;
int8_t x95 = INT8_MIN;
int16_t x107 = -12;
uint16_t x109 = UINT16_MAX;
uint32_t x111 = UINT32_MAX;
uint16_t x112 = 319U;
volatile uint32_t t27 = 57573987U;
int8_t x117 = -1;
int8_t x118 = -1;
uint32_t x119 = 218U;
uint32_t x125 = 13U;
uint32_t x132 = 1757U;
int32_t x133 = 1;
volatile uint64_t t34 = 101159372280LLU;
int16_t x143 = INT16_MIN;
int32_t t38 = 14;
int32_t x162 = -1;
uint32_t x163 = 1434498066U;
static int64_t t41 = -7LL;
static int32_t x169 = INT32_MIN;
volatile int64_t x173 = -1728654541LL;
uint32_t x176 = UINT32_MAX;
int64_t t43 = -190516166803341LL;
static int8_t x179 = -5;
uint64_t x180 = 20423LLU;
volatile uint64_t t44 = 2272LLU;
static int32_t x188 = -1;
int32_t x192 = -1;
uint8_t x194 = 0U;
volatile int8_t x195 = 20;
volatile uint64_t t49 = 5128309569037104LLU;
static int16_t x202 = -1;
volatile int32_t t50 = INT32_MIN;
uint64_t t51 = 495LLU;
int16_t x209 = -578;
int8_t x213 = INT8_MIN;
int32_t x217 = INT32_MAX;
static int64_t t54 = 2415363304149808LL;
int8_t x222 = -1;
static volatile int32_t x223 = INT32_MIN;
static int16_t x226 = INT16_MIN;
int32_t x232 = -120203905;
volatile int32_t x234 = INT32_MIN;
int64_t x244 = -1LL;
volatile uint64_t x245 = 12732890096LLU;
int8_t x248 = INT8_MAX;
volatile uint8_t x249 = 7U;
uint64_t t62 = 1555708LLU;
volatile int32_t x256 = -1;
static int64_t t63 = 16627890042LL;
int16_t x262 = INT16_MIN;
static volatile int8_t x263 = INT8_MAX;
uint32_t t65 = 424281U;
uint16_t x267 = 65U;
static uint64_t t67 = 1234169216LLU;
int16_t x292 = INT16_MIN;
static uint8_t x295 = 13U;
int64_t x299 = -1LL;
static uint32_t x301 = 197696U;
int64_t x302 = -31LL;
int64_t t75 = -34802217951475LL;
static uint16_t x306 = UINT16_MAX;
int32_t x307 = INT32_MAX;
int32_t x310 = INT32_MIN;
int32_t x312 = 1307;
static volatile int32_t x320 = INT32_MIN;
volatile int64_t t81 = -128817149631045566LL;
volatile uint8_t x334 = UINT8_MAX;
volatile int32_t t83 = 1;
int32_t x338 = -58;
volatile int64_t x343 = INT64_MIN;
int64_t t85 = -66149883LL;
int8_t x359 = -1;
int64_t t90 = -15429791827LL;
static uint16_t x365 = 225U;
int32_t x381 = -28862;
static volatile int32_t x384 = INT32_MIN;
uint16_t x392 = UINT16_MAX;
int32_t x396 = -1;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int64_t x2 = INT64_MAX;
	uint8_t x4 = 11U;

	t0 = (x1^(x2&(x3&x4)));

	if (t0 != -12LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1573016U;
	static volatile int64_t x6 = INT64_MAX;
	volatile uint32_t x8 = 267U;
	static int64_t t1 = -15LL;

	t1 = (x5^(x6&(x7&x8)));

	if (t1 != 1573016LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = -24;
	volatile uint32_t x11 = UINT32_MAX;
	uint16_t x12 = UINT16_MAX;
	volatile uint32_t t2 = 27166U;

	t2 = (x9^(x10&(x11&x12)));

	if (t2 != 65512U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 5589U;
	int64_t x14 = INT64_MIN;
	int16_t x15 = -1;
	volatile int64_t x16 = INT64_MAX;
	volatile int64_t t3 = -26544101695658243LL;

	t3 = (x13^(x14&(x15&x16)));

	if (t3 != 5589LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 0U;
	static volatile int16_t x19 = INT16_MIN;
	volatile uint32_t t4 = 1U;

	t4 = (x17^(x18&(x19&x20)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	volatile int64_t t5 = 0LL;

	t5 = (x21^(x22&(x23&x24)));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	static int16_t x26 = INT16_MAX;
	uint32_t x27 = 33U;
	static uint8_t x28 = 23U;
	static volatile uint32_t t6 = 3989U;

	t6 = (x25^(x26&(x27&x28)));

	if (t6 != 65534U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -484474728842740LL;
	static int8_t x30 = -1;
	int8_t x31 = INT8_MAX;
	uint32_t x32 = 15U;
	int64_t t7 = -195472395845319LL;

	t7 = (x29^(x30&(x31&x32)));

	if (t7 != -484474728842749LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint16_t x36 = 14U;
	volatile int32_t t8 = 6664089;

	t8 = (x33^(x34&(x35&x36)));

	if (t8 != 2147483643) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -175984963;
	volatile int32_t x38 = 780743;
	static uint16_t x39 = 5U;
	int64_t x40 = -1LL;

	t9 = (x37^(x38&(x39&x40)));

	if (t9 != -175984968LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int32_t x42 = -49659986;
	uint16_t x43 = UINT16_MAX;
	static volatile uint64_t x44 = 5084922066953128847LLU;
	uint64_t t10 = 3250LLU;

	t10 = (x41^(x42&(x43&x44)));

	if (t10 != 62577LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	static int16_t x46 = 11;
	int32_t x47 = -1;
	uint16_t x48 = UINT16_MAX;
	volatile int64_t t11 = -4436421130031292077LL;

	t11 = (x45^(x46&(x47&x48)));

	if (t11 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint64_t x50 = 108433707LLU;
	static uint64_t x51 = 2112268218008373164LLU;
	int8_t x52 = INT8_MAX;
	static uint64_t t12 = 1LLU;

	t12 = (x49^(x50&(x51&x52)));

	if (t12 != 18446744071562068008LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static uint64_t x55 = 240851355058LLU;
	static uint64_t t13 = 658493740894580LLU;

	t13 = (x53^(x54&(x55&x56)));

	if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = -18393914LL;
	volatile int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MAX;
	int8_t x60 = -4;

	t14 = (x57^(x58&(x59&x60)));

	if (t14 != -18393914LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	static int32_t x62 = 78697;
	int32_t x63 = -1;
	volatile uint64_t x64 = 5034LLU;
	uint64_t t15 = 9827175176248LLU;

	t15 = (x61^(x62&(x63&x64)));

	if (t15 != 18446744073709523752LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	static uint64_t x67 = 1739LLU;
	volatile uint64_t x68 = UINT64_MAX;

	t16 = (x65^(x66&(x67&x68)));

	if (t16 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 19038632;
	volatile uint32_t x70 = UINT32_MAX;
	int16_t x71 = 23;
	static uint16_t x72 = 28U;

	t17 = (x69^(x70&(x71&x72)));

	if (t17 != 19038652U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -29;
	int32_t x74 = -1;
	int16_t x75 = INT16_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = 13893028;

	t18 = (x73^(x74&(x75&x76)));

	if (t18 != -228) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 1;
	int8_t x78 = -1;
	int32_t x79 = 116657517;
	volatile int64_t x80 = INT64_MIN;
	static volatile int64_t t19 = 6771LL;

	t19 = (x77^(x78&(x79&x80)));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 4;
	uint64_t x82 = 63014103LLU;
	int64_t x83 = INT64_MIN;
	volatile uint64_t x84 = 5LLU;
	volatile uint64_t t20 = 883480LLU;

	t20 = (x81^(x82&(x83&x84)));

	if (t20 != 4LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = 24;
	volatile int16_t x86 = -204;
	uint8_t x87 = 58U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 172869695;

	t21 = (x85^(x86&(x87&x88)));

	if (t21 != 24) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x91 = 3547U;
	int32_t x92 = -2;
	static volatile uint64_t t22 = 525789400391LLU;

	t22 = (x89^(x90&(x91&x92)));

	if (t22 != 61989LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x94 = INT32_MIN;
	uint32_t x96 = UINT32_MAX;
	uint32_t t23 = 2028925681U;

	t23 = (x93^(x94&(x95&x96)));

	if (t23 != 2147483520U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x97 = 5U;
	int8_t x98 = 1;
	volatile int16_t x99 = 6672;
	int64_t x100 = INT64_MIN;
	volatile int64_t t24 = 2405LL;

	t24 = (x97^(x98&(x99&x100)));

	if (t24 != 5LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int32_t x102 = INT32_MIN;
	uint64_t x103 = 7032978729964067821LLU;
	uint32_t x104 = 39075526U;
	volatile uint64_t t25 = 75422902461820936LLU;

	t25 = (x101^(x102&(x103&x104)));

	if (t25 != 2147483647LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = 1412U;
	int8_t x108 = -5;
	volatile int32_t t26 = -173764;

	t26 = (x105^(x106&(x107&x108)));

	if (t26 != -1536) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x110 = 16014791U;

	t27 = (x109^(x110&(x111&x112)));

	if (t27 != 65272U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	int16_t x114 = -7887;
	static volatile int8_t x115 = INT8_MIN;
	int64_t x116 = INT64_MIN;
	int64_t t28 = -258LL;

	t28 = (x113^(x114&(x115&x116)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x120 = INT16_MAX;
	uint32_t t29 = 452U;

	t29 = (x117^(x118&(x119&x120)));

	if (t29 != 4294967077U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 1U;
	uint16_t x122 = 22121U;
	volatile int8_t x123 = 0;
	volatile int64_t x124 = INT64_MIN;
	int64_t t30 = -456179663911765LL;

	t30 = (x121^(x122&(x123&x124)));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MAX;
	static int16_t x128 = INT16_MIN;
	uint32_t t31 = 6194U;

	t31 = (x125^(x126&(x127&x128)));

	if (t31 != 13U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int8_t x130 = 45;
	static uint32_t x131 = 10889U;
	uint32_t t32 = 2161388U;

	t32 = (x129^(x130&(x131&x132)));

	if (t32 != 2147483638U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x134 = -1;
	volatile uint32_t x135 = UINT32_MAX;
	int16_t x136 = INT16_MAX;
	volatile uint32_t t33 = 183461U;

	t33 = (x133^(x134&(x135&x136)));

	if (t33 != 32766U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 233812373865337466LLU;
	int64_t x138 = -1LL;
	uint16_t x139 = UINT16_MAX;
	uint32_t x140 = 302U;

	t34 = (x137^(x138&(x139&x140)));

	if (t34 != 233812373865337684LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	static int64_t x144 = INT64_MIN;
	static volatile int64_t t35 = -219435588929160381LL;

	t35 = (x141^(x142&(x143&x144)));

	if (t35 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1525675LL;
	static uint32_t x146 = UINT32_MAX;
	uint32_t x147 = UINT32_MAX;
	uint8_t x148 = 127U;
	int64_t t36 = 48LL;

	t36 = (x145^(x146&(x147&x148)));

	if (t36 != -1525718LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	uint16_t x150 = 6993U;
	int64_t x151 = 3250432063019881LL;
	uint32_t x152 = 2849U;
	int64_t t37 = 57LL;

	t37 = (x149^(x150&(x151&x152)));

	if (t37 != 62718LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MIN;
	int32_t x154 = 3;
	int8_t x155 = INT8_MIN;
	static int16_t x156 = -1;

	t38 = (x153^(x154&(x155&x156)));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x157 = UINT64_MAX;
	int64_t x158 = INT64_MIN;
	int16_t x159 = -1;
	static volatile int32_t x160 = -1;
	static uint64_t t39 = 3789547LLU;

	t39 = (x157^(x158&(x159&x160)));

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 1;
	uint32_t x164 = 20386752U;
	uint32_t t40 = 1380U;

	t40 = (x161^(x162&(x163&x164)));

	if (t40 != 16781313U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 0U;
	int64_t x166 = -1LL;
	uint8_t x167 = UINT8_MAX;
	uint32_t x168 = UINT32_MAX;

	t41 = (x165^(x166&(x167&x168)));

	if (t41 != 255LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MAX;
	int32_t x171 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;
	int32_t t42 = INT32_MIN;

	t42 = (x169^(x170&(x171&x172)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -1LL;
	int32_t x175 = 3;

	t43 = (x173^(x174&(x175&x176)));

	if (t43 != -1728654544LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MAX;
	int64_t x178 = INT64_MIN;

	t44 = (x177^(x178&(x179&x180)));

	if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = UINT32_MAX;
	int32_t x182 = -83450628;
	volatile uint8_t x183 = UINT8_MAX;
	volatile uint8_t x184 = 1U;
	static uint32_t t45 = UINT32_MAX;

	t45 = (x181^(x182&(x183&x184)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = UINT64_MAX;
	static volatile int8_t x186 = INT8_MAX;
	static uint8_t x187 = 13U;
	uint64_t t46 = 407160674271202LLU;

	t46 = (x185^(x186&(x187&x188)));

	if (t46 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	static volatile int8_t x190 = -4;
	static int8_t x191 = 45;
	volatile int64_t t47 = 735LL;

	t47 = (x189^(x190&(x191&x192)));

	if (t47 != 9223372036854775763LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MIN;
	static volatile int8_t x196 = -1;
	volatile int64_t t48 = INT64_MIN;

	t48 = (x193^(x194&(x195&x196)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 2897U;
	volatile int8_t x198 = INT8_MIN;
	uint64_t x199 = 397422105500089LLU;
	static int8_t x200 = INT8_MIN;

	t49 = (x197^(x198&(x199&x200)));

	if (t49 != 397422105498321LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	int16_t x203 = 1;
	volatile int8_t x204 = INT8_MIN;

	t50 = (x201^(x202&(x203&x204)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int16_t x206 = 62;
	volatile int32_t x207 = -1;
	int32_t x208 = -1;

	t51 = (x205^(x206&(x207&x208)));

	if (t51 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x210 = UINT8_MAX;
	uint32_t x211 = UINT32_MAX;
	volatile uint64_t x212 = UINT64_MAX;
	static uint64_t t52 = 635LLU;

	t52 = (x209^(x210&(x211&x212)));

	if (t52 != 18446744073709550913LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MIN;
	int8_t x215 = -1;
	volatile uint32_t x216 = UINT32_MAX;
	uint32_t t53 = 1907988U;

	t53 = (x213^(x214&(x215&x216)));

	if (t53 != 2147483520U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x218 = INT64_MIN;
	int64_t x219 = -1LL;
	int8_t x220 = INT8_MAX;

	t54 = (x217^(x218&(x219&x220)));

	if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int32_t x224 = INT32_MAX;
	static volatile int32_t t55 = 470;

	t55 = (x221^(x222&(x223&x224)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	static volatile uint64_t x227 = 1LLU;
	int32_t x228 = -58079642;
	uint64_t t56 = 1426299853691840420LLU;

	t56 = (x225^(x226&(x227&x228)));

	if (t56 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int8_t x230 = -1;
	uint8_t x231 = 4U;
	volatile int32_t t57 = -1;

	t57 = (x229^(x230&(x231&x232)));

	if (t57 != 123) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	int16_t x235 = INT16_MAX;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 7801;

	t58 = (x233^(x234&(x235&x236)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MIN;
	int8_t x239 = INT8_MAX;
	int32_t x240 = -1;
	volatile int64_t t59 = 44499822LL;

	t59 = (x237^(x238&(x239&x240)));

	if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 1071714488U;
	volatile uint8_t x242 = 1U;
	volatile int16_t x243 = -1;
	volatile int64_t t60 = 1700548LL;

	t60 = (x241^(x242&(x243&x244)));

	if (t60 != 1071714489LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x246 = 11U;
	static volatile uint32_t x247 = UINT32_MAX;
	volatile uint64_t t61 = 3638389474200568122LLU;

	t61 = (x245^(x246&(x247&x248)));

	if (t61 != 12732890107LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x250 = INT8_MIN;
	static uint64_t x251 = UINT64_MAX;
	static int16_t x252 = -1;

	t62 = (x249^(x250&(x251&x252)));

	if (t62 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -493122918652995LL;
	int32_t x254 = -1;
	int64_t x255 = 60091478LL;

	t63 = (x253^(x254&(x255&x256)));

	if (t63 != -493122978148373LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = -1LL;
	uint8_t x258 = UINT8_MAX;
	int32_t x259 = -1;
	int16_t x260 = INT16_MIN;
	int64_t t64 = 2103531775745LL;

	t64 = (x257^(x258&(x259&x260)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 6941364;
	volatile uint32_t x264 = 71U;

	t65 = (x261^(x262&(x263&x264)));

	if (t65 != 6941364U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	static int8_t x266 = INT8_MAX;
	int64_t x268 = INT64_MAX;
	int64_t t66 = -4060340961562983LL;

	t66 = (x265^(x266&(x267&x268)));

	if (t66 != -32703LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	volatile uint64_t x270 = 7868659LLU;
	int32_t x271 = -1;
	int8_t x272 = 1;

	t67 = (x269^(x270&(x271&x272)));

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 1;
	int16_t x274 = INT16_MAX;
	int64_t x275 = -1523441463557610129LL;
	static int8_t x276 = INT8_MIN;
	int64_t t68 = -1279109516305387LL;

	t68 = (x273^(x274&(x275&x276)));

	if (t68 != 9473LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint16_t x278 = 2484U;
	int32_t x279 = 4111000;
	int16_t x280 = INT16_MAX;
	static int32_t t69 = -150121571;

	t69 = (x277^(x278&(x279&x280)));

	if (t69 != -30576) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = UINT32_MAX;
	int32_t x282 = -5985;
	static int8_t x283 = INT8_MAX;
	volatile uint32_t x284 = UINT32_MAX;
	uint32_t t70 = 387U;

	t70 = (x281^(x282&(x283&x284)));

	if (t70 != 4294967264U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = 22;
	uint32_t x287 = UINT32_MAX;
	static int16_t x288 = 3504;
	uint32_t t71 = 16405U;

	t71 = (x285^(x286&(x287&x288)));

	if (t71 != 4294967184U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MIN;
	volatile int8_t x291 = -1;
	static int64_t t72 = -271725488024001LL;

	t72 = (x289^(x290&(x291&x292)));

	if (t72 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 59U;
	int64_t x294 = INT64_MIN;
	volatile int64_t x296 = INT64_MIN;
	int64_t t73 = 109686186369LL;

	t73 = (x293^(x294&(x295&x296)));

	if (t73 != 59LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 181;
	volatile int8_t x298 = 3;
	int8_t x300 = INT8_MAX;
	int64_t t74 = 42LL;

	t74 = (x297^(x298&(x299&x300)));

	if (t74 != 182LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x303 = -1;
	uint8_t x304 = UINT8_MAX;

	t75 = (x301^(x302&(x303&x304)));

	if (t75 != 197793LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MAX;
	volatile int64_t x308 = 5LL;
	int64_t t76 = 1077451103LL;

	t76 = (x305^(x306&(x307&x308)));

	if (t76 != 32762LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 181U;
	volatile int32_t x311 = -9638387;
	int32_t t77 = -3632;

	t77 = (x309^(x310&(x311&x312)));

	if (t77 != 181) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 0U;
	int64_t x314 = 13LL;
	int32_t x315 = INT32_MAX;
	int32_t x316 = INT32_MIN;
	int64_t t78 = -8046113901276LL;

	t78 = (x313^(x314&(x315&x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = -1;
	static int32_t x319 = 58;
	int32_t t79 = 118974308;

	t79 = (x317^(x318&(x319&x320)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MAX;
	uint8_t x322 = 35U;
	uint16_t x323 = 9U;
	static int8_t x324 = INT8_MAX;
	int32_t t80 = 1841;

	t80 = (x321^(x322&(x323&x324)));

	if (t80 != 2147483646) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x325 = 122U;
	int32_t x326 = INT32_MIN;
	uint8_t x327 = 1U;
	volatile int64_t x328 = INT64_MIN;

	t81 = (x325^(x326&(x327&x328)));

	if (t81 != 122LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	uint16_t x330 = 234U;
	int64_t x331 = -1LL;
	uint8_t x332 = UINT8_MAX;
	volatile int64_t t82 = -541901506808602362LL;

	t82 = (x329^(x330&(x331&x332)));

	if (t82 != -235LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 103;
	volatile uint8_t x335 = 0U;
	volatile int16_t x336 = INT16_MIN;

	t83 = (x333^(x334&(x335&x336)));

	if (t83 != 103) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = -1;
	volatile int32_t x339 = INT32_MAX;
	int16_t x340 = INT16_MAX;
	int32_t t84 = -374689906;

	t84 = (x337^(x338&(x339&x340)));

	if (t84 != -32711) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 5U;
	int8_t x342 = INT8_MAX;
	static uint8_t x344 = 116U;

	t85 = (x341^(x342&(x343&x344)));

	if (t85 != 5LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int8_t x346 = INT8_MAX;
	volatile uint8_t x347 = 0U;
	uint32_t x348 = 338741U;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x345^(x346&(x347&x348)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 2852469572314LLU;
	static uint32_t x350 = 3U;
	volatile uint64_t x351 = 7311483856LLU;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t87 = 201LLU;

	t87 = (x349^(x350&(x351&x352)));

	if (t87 != 2852469572314LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 1U;
	static int32_t x354 = INT32_MAX;
	int32_t x355 = -1;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = -20;

	t88 = (x353^(x354&(x355&x356)));

	if (t88 != 2147450881) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	uint32_t x358 = UINT32_MAX;
	uint8_t x360 = 12U;
	volatile uint32_t t89 = 62027098U;

	t89 = (x357^(x358&(x359&x360)));

	if (t89 != 65523U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	uint8_t x362 = UINT8_MAX;
	volatile int64_t x363 = INT64_MAX;
	volatile int32_t x364 = -5044299;

	t90 = (x361^(x362&(x363&x364)));

	if (t90 != 9223372036854775626LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x366 = -199154989495404018LL;
	volatile uint16_t x367 = UINT16_MAX;
	volatile uint64_t x368 = 222521563077275609LLU;
	volatile uint64_t t91 = 42627974520206937LLU;

	t91 = (x365^(x366&(x367&x368)));

	if (t91 != 10985LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = -1;
	uint32_t x371 = 721U;
	volatile uint64_t x372 = 1506948606386459LLU;
	volatile uint64_t t92 = 439313299048547LLU;

	t92 = (x369^(x370&(x371&x372)));

	if (t92 != 18446744071562067985LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = -1;
	static uint16_t x375 = 31U;
	static int16_t x376 = INT16_MIN;
	int32_t t93 = 1;

	t93 = (x373^(x374&(x375&x376)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 3U;
	uint32_t x378 = UINT32_MAX;
	int32_t x379 = INT32_MIN;
	static int32_t x380 = INT32_MIN;
	volatile uint32_t t94 = 6660656U;

	t94 = (x377^(x378&(x379&x380)));

	if (t94 != 2147483651U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	volatile uint32_t t95 = 879769686U;

	t95 = (x381^(x382&(x383&x384)));

	if (t95 != 2147454786U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	volatile int8_t x386 = INT8_MIN;
	int16_t x387 = 1;
	volatile uint16_t x388 = 51U;
	int32_t t96 = 384564;

	t96 = (x385^(x386&(x387&x388)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	static volatile uint64_t x390 = UINT64_MAX;
	static uint64_t x391 = 673723359187LLU;
	uint64_t t97 = 69270LLU;

	t97 = (x389^(x390&(x391&x392)));

	if (t97 != 18446744073709510739LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MAX;
	int64_t x394 = 2128779539LL;
	uint16_t x395 = UINT16_MAX;
	int64_t t98 = -25270868LL;

	t98 = (x393^(x394&(x395&x396)));

	if (t98 != 39276LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MAX;
	int64_t x399 = -27435060820LL;
	int16_t x400 = INT16_MIN;
	int64_t t99 = 9266745190518951LL;

	t99 = (x397^(x398&(x399&x400)));

	if (t99 != -9223372009419702400LL) { NG(); } else { ; }
	
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

